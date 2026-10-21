#include <metal_stdlib>
using namespace metal;

struct Params {
    float matrix[144];
    uint dimension, width, height, unused;
    float cx, sx, cy, sy;
    float camera, scale, damp, lineRadius;
    float dotRadius, phase, nearPlane, farPlane;
};
struct Vertex {
    float4 position [[position]];
    float2 local [[center_no_perspective]];
    float4 color;
    float valid [[flat]];
};

// One invocation per original binary vertex ID. Topology never depends on floats.
kernel void hc_project(constant Params& p [[buffer(0)]],
                       device float4* points [[buffer(1)]],
                       uint id [[thread_position_in_grid]]) {
    if (id >= (1u << p.dimension)) return;
    float v[12];
    for (uint r = 0; r < 12; ++r) v[r] = 0.0f;
    for (uint r = 0; r < p.dimension; ++r) {
        float value = 0.0f;
        for (uint c = 0; c < p.dimension; ++c)
            value += p.matrix[r * p.dimension + c] * ((id & (1u << c)) ? 1.0f : -1.0f);
        v[r] = value;
    }
    float scale = 1.0f;
    for (uint d = 3; d < p.dimension; ++d)
        scale *= 3.5f / max(0.05f, 3.5f - v[d] * p.damp);
    float3 q = float3(v[0], v[1], v[2]) * scale;
    float x = q.x * p.cy + q.z * p.sy;
    float z = -q.x * p.sy + q.z * p.cy;
    points[id] = float4(x, q.y * p.cx - z * p.sx,
                       q.y * p.sx + z * p.cx + p.camera, 1.0f);
}
float4 clip_position(float3 q, constant Params& p) {
    float a = p.farPlane / (p.farPlane - p.nearPlane);
    return float4(q.x * 2.0f * p.scale,
                  q.y * 2.0f * p.scale * float(p.width) / float(p.height),
                  a * (q.z - p.nearPlane), q.z);
}
constant float2 corners[6] = {
    float2(0,-1), float2(1,-1), float2(1,1),
    float2(0,-1), float2(1,1), float2(0,1)
};
vertex Vertex hc_edge(uint vid [[vertex_id]], uint edge [[instance_id]],
                       constant Params& p [[buffer(0)]],
                       const device float4* points [[buffer(1)]]) {
    Vertex o;
    o.valid = 0.0f; o.position = float4(2,2,2,1);
    o.local = float2(0); o.color = float4(0);
    uint d = edge % p.dimension;
    uint base = edge / p.dimension;
    uint low = (1u << d) - 1u;
    uint u = (base & low) | ((base >> d) << (d + 1u));
    uint v = u | (1u << d);
    float3 a = points[u].xyz, b = points[v].xyz;
    float nearZ = p.nearPlane + 0.00001f;
    if (a.z < nearZ && b.z < nearZ) return o;
    if (a.z < nearZ) a = mix(a,b,(nearZ-a.z)/(b.z-a.z));
    if (b.z < nearZ) b = mix(b,a,(nearZ-b.z)/(a.z-b.z));
    float4 ac = clip_position(a,p), bc = clip_position(b,p);
    float2 pixelScale = float2(p.width,p.height) * 0.5f;
    float2 direction = (bc.xy/bc.w - ac.xy/ac.w) * pixelScale;
    float length2 = dot(direction,direction);
    if (length2 < 0.000001f) return o;
    float2 normal = float2(-direction.y,direction.x) * rsqrt(length2);
    float2 corner = corners[vid];
    o.position = mix(ac,bc,corner.x);
    o.position.xy += normal * corner.y * (p.lineRadius + 0.75f) / pixelScale * o.position.w;
    float depth = mix(a.z,b.z,corner.x);
    float shade = clamp(1.6f - depth * 0.16f, 0.30f, 1.0f);
    o.local = float2(corner.x,corner.y);
    o.color = float4(float3(0.07f,0.48f,1.0f) * shade,1.0f);
    o.valid = 1.0f;
    return o;
}
fragment float4 hc_edge_fragment(Vertex in [[stage_in]]) {
    if (in.valid < 0.5f) discard_fragment();
    float aa = max(fwidth(in.local.y),0.001f);
    float alpha = 1.0f - smoothstep(1.0f-aa,1.0f,abs(in.local.y));
    if (alpha < 0.02f) discard_fragment();
    return float4(in.color.rgb * alpha,alpha);
}
vertex Vertex hc_dot(uint vid [[vertex_id]], uint id [[instance_id]],
                      constant Params& p [[buffer(0)]],
                      const device float4* points [[buffer(1)]]) {
    Vertex o;
    o.valid=0.0f; o.position=float4(2,2,2,1); o.local=float2(0); o.color=float4(0);
    float3 point = points[id].xyz;
    if (point.z <= p.nearPlane) return o;
    float2 corner = float2(corners[vid].x*2.0f-1.0f,corners[vid].y);
    o.position = clip_position(point,p);
    float radius = p.dotRadius * clamp(p.camera / point.z,0.75f,1.5f);
    o.position.xy += corner * radius * 2.0f / float2(p.width,p.height) * o.position.w;
    o.position.z -= 0.00001f * o.position.w;
    o.local = corner;
    o.color = float4(1.0f,0.08f,0.64f,1.0f);
    o.valid=1.0f;
    return o;
}
fragment float4 hc_dot_fragment(Vertex in [[stage_in]]) {
    if (in.valid < 0.5f) discard_fragment();
    float radius=length(in.local);
    if (radius >= 1.0f) discard_fragment();
    float alpha=1.0f-smoothstep(1.0f-max(fwidth(radius),0.01f),1.0f,radius);
    float core=pow(max(0.0f,1.0f-radius),3.0f);
    float3 color=mix(in.color.rgb,float3(1.0f,0.74f,0.91f),core);
    return float4(color*alpha,alpha);
}
