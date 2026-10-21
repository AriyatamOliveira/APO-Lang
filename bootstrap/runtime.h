#ifndef APO_BOOTSTRAP_RUNTIME_H
#define APO_BOOTSTRAP_RUNTIME_H
/* Host support for the source bootstrap. Generated programs do not link this file. */
#ifndef _POSIX_C_SOURCE
#define _POSIX_C_SOURCE 200809L
#endif
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <math.h>
#include <limits.h>
#include <float.h>

extern char **environ;
static int ap_argc;
static char **ap_argv;
typedef struct { const unsigned char *data; int64_t size; } ApString;
typedef struct { uint64_t slot, generation; } ApBuffer;
typedef struct { unsigned char *data; int64_t size; uint64_t generation; } ApAllocation;
static ApAllocation ap_allocations[1024];
#define AP_STR(s) ((ApString){(const unsigned char *)(s), (int64_t)(sizeof(s)-1)})

_Noreturn static void ap_error(const char *message) {
    fprintf(stderr, "apo bootstrap: %s\n", message);
    exit(70);
}
static void ap_host_check(void) {
    uint32_t x = 1;
    if (sizeof(void *) != 8 || sizeof(double) != 8 || FLT_RADIX != 2 || DBL_MANT_DIG != 53 ||
        DBL_MAX_EXP != 1024 || *(unsigned char *)&x != 1)
        ap_error("requires a little-endian, 64-bit host with binary64 double");
    setvbuf(stdout, NULL, _IONBF, 0);
}
static int64_t ap_add(int64_t a, int64_t b) {
    int64_t r; if (__builtin_add_overflow(a,b,&r)) ap_error("integer overflow"); return r;
}
static int64_t ap_sub(int64_t a, int64_t b) {
    int64_t r; if (__builtin_sub_overflow(a,b,&r)) ap_error("integer overflow"); return r;
}
static int64_t ap_mul(int64_t a, int64_t b) {
    int64_t r; if (__builtin_mul_overflow(a,b,&r)) ap_error("integer overflow"); return r;
}
static int64_t ap_neg(int64_t a) { if(a==INT64_MIN) ap_error("integer overflow"); return -a; }
static int64_t ap_div(int64_t a, int64_t b) {
    if(!b) ap_error("division by zero");
    if(a==INT64_MIN && b==-1) ap_error("integer overflow");
    return a/b;
}
static int64_t ap_rem(int64_t a, int64_t b) {
    if(!b) ap_error("division by zero");
    return a==INT64_MIN && b==-1 ? 0 : a%b;
}
static int64_t ap_scale(int64_t a) { return ap_mul(a, INT64_C(1000000)); }
static int64_t ap_unscale(int64_t a) {
    if(a%1000000) ap_error("expected an integral value"); return a/1000000;
}
static int64_t ap_shl(int64_t a,int64_t b) {
    if(b<0 || b>63) ap_error("shift count outside 0..63"); return (int64_t)((uint64_t)a<<b);
}
static int64_t ap_shr(int64_t a,int64_t b) {
    if(b<0 || b>63) ap_error("shift count outside 0..63"); return (int64_t)((uint64_t)a>>b);
}
static int64_t ap_float_bits(double a) { int64_t r; memcpy(&r,&a,8); return r; }
static void ap_assert(bool a) { if(!a) ap_error("assertion failed"); }
static ApAllocation *ap_allocation(ApBuffer b) {
    if(b.slot>=1024) ap_error("invalid buffer handle");
    ApAllocation *a=&ap_allocations[b.slot];
    if(!a->data || a->generation!=b.generation) ap_error("stale buffer handle");
    return a;
}
static void ap_range(int64_t size,int64_t off,int64_t n) {
    if(off<0 || n<0 || n>size || off>size-n) ap_error("buffer range out of bounds");
}
static ApBuffer ap_alloc(int64_t n) {
    if(n<1 || n>INT64_C(1073741824)) ap_error("allocation outside 1 byte..1 GiB");
    for(uint64_t i=0;i<1024;i++) if(!ap_allocations[i].data) {
        ApAllocation *a=&ap_allocations[i];
        if(a->generation==UINT64_MAX) continue;
        a->data=calloc(1,(size_t)n); if(!a->data) ap_error("out of host memory");
        a->size=n; ++a->generation; return (ApBuffer){i,a->generation};
    }
    ap_error("more than 1024 live allocations");
}
static void ap_free(ApBuffer b) { ApAllocation *a=ap_allocation(b); free(a->data); a->data=NULL; }
static int64_t ap_length_string(ApString s) { return s.size; }
static int64_t ap_length_buffer(ApBuffer b) { return ap_allocation(b)->size; }
static uintptr_t ap_address_string(ApString s) { return (uintptr_t)s.data; }
static uintptr_t ap_address_buffer(ApBuffer b) { return (uintptr_t)ap_allocation(b)->data; }
static ApString ap_string_at(uintptr_t p,int64_t n) {
    if(n<0 || (!p && n)) ap_error("invalid borrowed string"); return (ApString){(const unsigned char *)p,n};
}
static ApString ap_slice(ApString s,int64_t off,int64_t n) {
    ap_range(s.size,off,n); return (ApString){s.data+off,n};
}
static ApString ap_view(ApBuffer b,int64_t off,int64_t n) {
    ApAllocation *a=ap_allocation(b); ap_range(a->size,off,n); return (ApString){a->data+off,n};
}
static int64_t ap_byte(ApString s,int64_t i) { ap_range(s.size,i,1); return s.data[i]; }
static bool ap_equal(ApString a,ApString b) { return a.size==b.size && (!a.size || !memcmp(a.data,b.data,(size_t)a.size)); }
static int64_t ap_peek(uintptr_t p,int w) {
    if(!p) ap_error("null pointer read"); uint64_t r=0; memcpy(&r,(const void*)p,(size_t)w); return (int64_t)r;
}
static void ap_poke(uintptr_t p,int w,int64_t x) {
    if(!p) ap_error("null pointer write");
    if(w<8 && (x<0 || (uint64_t)x >= (UINT64_C(1)<<(w*8)))) ap_error("narrow store overflow");
    memcpy((void*)p,&x,(size_t)w);
}
static int64_t ap_load(ApBuffer b,int64_t off,int w) {
    ApAllocation *a=ap_allocation(b);ap_range(a->size,off,w);return ap_peek((uintptr_t)a->data+(uintptr_t)off,w);
}
static void ap_store(ApBuffer b,int64_t off,int w,int64_t x) {
    ApAllocation *a=ap_allocation(b);ap_range(a->size,off,w);ap_poke((uintptr_t)a->data+(uintptr_t)off,w,x);
}
static void ap_copy_string(ApBuffer b,int64_t off,ApString s,int64_t so,int64_t n) {
    ApAllocation *a=ap_allocation(b);ap_range(a->size,off,n);ap_range(s.size,so,n);
    if(n) memmove(a->data+off,s.data+so,(size_t)n);
}
static void ap_copy_buffer(ApBuffer b,int64_t off,ApBuffer src,int64_t so,int64_t n) {
    ApAllocation *a=ap_allocation(src);ap_copy_string(b,off,(ApString){a->data,a->size},so,n);
}
static ApString ap_arg(int64_t i) {
    if(i<0 || i>=ap_argc) ap_error("argument index out of range");
    return (ApString){(const unsigned char*)ap_argv[i],(int64_t)strlen(ap_argv[i])};
}
static void ap_print_string(ApString s) {
    if(s.size && fwrite(s.data,1,(size_t)s.size,stdout)!=(size_t)s.size) ap_error("stdout write failed");
}
static void ap_print_int(int64_t x) { if(printf("%" PRId64,x)<0) ap_error("stdout write failed"); }
static void ap_print_pointer(uintptr_t x) { if(printf("0x%016" PRIxPTR,x)<0) ap_error("stdout write failed"); }
/* Translate the small Darwin/POSIX syscall subset used by compiler.apo.
   On Darwin these call libc, not raw Linux-numbered syscalls. */
static int64_t ap_syscall(uintptr_t nr,uintptr_t a,uintptr_t b,uintptr_t c,uintptr_t d,uintptr_t e,uintptr_t f) {
    (void)d;(void)e;(void)f;
    int64_t r=-1;
    switch(nr) {
    case 3:r=read((int)a,(void*)b,(size_t)c);break;
    case 4:r=write((int)a,(const void*)b,(size_t)c);break;
    case 5: {
        int flags=(int)(b&3);
        if(b&0x200) flags|=O_CREAT;
        if(b&0x400) flags|=O_TRUNC;
        if(b&0x800) flags|=O_EXCL;
        if(b&8) flags|=O_APPEND;
        r=open((const char*)a,flags,(mode_t)c);break;
    }
    case 6:r=close((int)a);break;
    case 10:r=unlink((const char*)a);break;
    case 20:return getpid();
    case 59:r=execve((const char*)a,(char *const*)b,(char *const*)c);break;
    case 124:r=fchmod((int)a,(mode_t)b);break;
    case 128:r=rename((const char*)a,(const char*)b);break;
    case 136:r=mkdir((const char*)a,(mode_t)b);break;
    default:ap_error("unsupported bootstrap host syscall");
    }
    return r<0 ? -(int64_t)errno : r;
}
#endif
