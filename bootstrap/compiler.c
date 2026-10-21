/* C source bootstrap. Generated from compiler.apo; not a runtime dependency. */
#include "runtime.h"
static uintptr_t f_nil(void);
static uintptr_t f_at(uintptr_t,int64_t);
static int64_t f_get(uintptr_t,int64_t);
static void f_put(uintptr_t,int64_t,int64_t);
static uintptr_t f_getp(uintptr_t,int64_t);
static void f_putp(uintptr_t,int64_t,uintptr_t);
static uintptr_t f_raw(int64_t);
static int64_t f_getb(uintptr_t,int64_t);
static void f_setb(uintptr_t,int64_t,int64_t);
static ApString f_gets(uintptr_t,int64_t);
static void f_puts(uintptr_t,int64_t,ApString);
static ApString f_rawtext(uintptr_t,int64_t);
static void f_write_fd(int64_t,ApString);
static ApString f_strint(int64_t);
static void f_die(ApString,int64_t);
static void f_need(bool,ApString);
static ApString f_concat(ApString,ApString);
static ApBuffer f_cstring(ApString);
static ApString f_read_source(ApString);
static bool f_starts(ApString,ApString);
static bool f_ends(ApString,ApString);
static bool f_apo_suffix(ApString);
static void f_parent_dirs(ApString);
static void f_save_file(ApString,uintptr_t,int64_t,bool);
static uintptr_t f_arena(uintptr_t,int64_t);
static uintptr_t f_new_arena(int64_t,int64_t);
static void f_fail(uintptr_t,uintptr_t,ApString);
static uintptr_t f_list_add(uintptr_t,uintptr_t,uintptr_t);
static uintptr_t f_list_get(uintptr_t,int64_t);
static int64_t f_minint(int64_t,int64_t);
static int64_t f_maxint(int64_t,int64_t);
static bool f_isdigit(int64_t);
static bool f_isletter(int64_t);
static bool f_isident(int64_t);
static int64_t f_hexval(int64_t);
static int64_t f_source_byte(ApString,int64_t);
static int64_t f_keyword(ApString);
static uintptr_t f_token_add(uintptr_t,int64_t,ApString,int64_t,int64_t,int64_t,int64_t);
static void f_lex_error(uintptr_t,int64_t,int64_t,ApString);
static ApString f_decode_string(uintptr_t,ApString,int64_t,int64_t);
static void f_lex(uintptr_t,ApString);
static uintptr_t f_peek(uintptr_t);
static int64_t f_kind(uintptr_t);
static uintptr_t f_take(uintptr_t);
static bool f_accept(uintptr_t,int64_t);
static uintptr_t f_expect(uintptr_t,int64_t,ApString);
static void f_skip_lines(uintptr_t);
static void f_finish_line(uintptr_t);
static ApString f_builtin_spec(ApString);
static int64_t f_typecode(ApString,bool);
static int64_t f_read_type(uintptr_t,bool);
static bool f_numeric(int64_t);
static void f_push_scope(uintptr_t);
static void f_pop_scope(uintptr_t);
static uintptr_t f_binding(uintptr_t,ApString);
static void f_bind_name(uintptr_t,ApString,int64_t,int64_t);
static int64_t f_slots(uintptr_t,int64_t,uintptr_t);
static int64_t f_name_bucket(ApString);
static uintptr_t f_function_named(uintptr_t,ApString);
static uintptr_t f_leaf(uintptr_t,int64_t,int64_t,uintptr_t);
static uintptr_t f_remember(uintptr_t,uintptr_t);
static void f_require_type(uintptr_t,uintptr_t,int64_t);
static uintptr_t f_literal(uintptr_t,uintptr_t,bool);
static bool f_class_matches(int64_t,int64_t);
static int64_t f_signature_result(int64_t);
static bool f_task_builtin_allowed(ApString);
static uintptr_t f_call_node(uintptr_t,uintptr_t,ApString,uintptr_t,int64_t);
static uintptr_t f_unary_node(uintptr_t,uintptr_t,uintptr_t);
static uintptr_t f_binary_node(uintptr_t,uintptr_t,uintptr_t,uintptr_t);
static int64_t f_precedence(int64_t);
static uintptr_t f_expression(uintptr_t,int64_t);
static uintptr_t f_call_arguments(uintptr_t,uintptr_t);
static bool f_returns(uintptr_t);
static uintptr_t f_block(uintptr_t,int64_t);
static void f_function_definition(uintptr_t);
static uintptr_t f_parse(ApString,ApString);
static void f_emit(uintptr_t,int64_t);
static void f_mark(uintptr_t,int64_t,int64_t);
static int64_t f_fresh(uintptr_t);
static void f_label_here(uintptr_t,int64_t);
static void f_fixup(uintptr_t,int64_t,int64_t,int64_t);
static void f_constant(uintptr_t,int64_t,ApString);
static int64_t f_text_label(uintptr_t,ApString);
static void f_a_value(uintptr_t,int64_t,int64_t);
static void f_a_mov(uintptr_t,int64_t,int64_t);
static void f_a_add(uintptr_t,int64_t,int64_t,int64_t);
static void f_a_addshift(uintptr_t,int64_t,int64_t,int64_t,int64_t);
static void f_a_sub(uintptr_t,int64_t,int64_t,int64_t);
static void f_a_immediate(uintptr_t,int64_t,int64_t,int64_t,bool,bool);
static void f_a_addi(uintptr_t,int64_t,int64_t,int64_t);
static void f_a_subi(uintptr_t,int64_t,int64_t,int64_t);
static void f_a_stack(uintptr_t,int64_t,bool);
static void f_a_load(uintptr_t,int64_t,int64_t,int64_t);
static void f_a_store(uintptr_t,int64_t,int64_t,int64_t);
static void f_a_width(uintptr_t,int64_t,int64_t,int64_t,bool);
static void f_a_cmp(uintptr_t,int64_t,int64_t);
static void f_a_cmpi(uintptr_t,int64_t,int64_t);
static void f_a_cset(uintptr_t,int64_t,int64_t);
static void f_a_branch(uintptr_t,int64_t,bool);
static void f_a_condition(uintptr_t,int64_t,int64_t);
static void f_a_zero(uintptr_t,int64_t,int64_t,bool);
static void f_a_address(uintptr_t,int64_t,int64_t);
static void f_a_op3(uintptr_t,int64_t,int64_t,int64_t,int64_t);
static void f_a_neg(uintptr_t,int64_t,int64_t,bool);
static void f_a_msub(uintptr_t,int64_t,int64_t,int64_t,int64_t);
static void f_a_right(uintptr_t,int64_t,int64_t,int64_t,bool);
static void f_a_fmov(uintptr_t,int64_t,int64_t,bool);
static void f_a_fconstant(uintptr_t,int64_t,int64_t);
static void f_a_fcmp(uintptr_t,int64_t,int64_t);
static void f_a_fbinary(uintptr_t,int64_t,int64_t,int64_t,ApString);
static void f_store_slot(uintptr_t,int64_t);
static void f_load_slot(uintptr_t,int64_t);
static void f_push_value(uintptr_t);
static void f_pop_left(uintptr_t);
static void f_raw_copy(uintptr_t,uintptr_t,int64_t);
static ApString f_path_normal(ApString);
static ApString f_source_parent(ApString);
static ApString f_environment(ApString);
static bool f_file_exists(ApString);
static ApString f_executable_name(void);
static ApString f_library_root(void);
static void f_source_append(uintptr_t,ApString);
static void f_source_marker(uintptr_t,ApString,int64_t);
static void f_expand_file(uintptr_t,ApString,int64_t);
static ApString f_load_program(ApString,ApString);
static void f_finish_code(uintptr_t);
static int64_t f_runtime_id(ApString);
static void f_emit_runtime(uintptr_t);
static void f_rtcall(uintptr_t,ApString);
static void f_rtcond(uintptr_t,int64_t,ApString);
static void f_rtzero(uintptr_t,int64_t,ApString,bool);
static void f_finite_value(uintptr_t);
static int64_t f_argument_type(uintptr_t,int64_t);
static void f_unscale(uintptr_t,int64_t,int64_t);
static void f_to_number(uintptr_t,int64_t);
static void f_unsigned_width(uintptr_t,int64_t,int64_t);
static void f_finish_intrinsic(uintptr_t,uintptr_t);
static void f_write_value(uintptr_t);
static void f_emit_raster_line(uintptr_t,uintptr_t);
static void f_intrinsic(uintptr_t,uintptr_t);
static int64_t f_compare_condition(ApString,bool);
static void f_generate_expr(uintptr_t,uintptr_t);
static void f_exit_code(uintptr_t,int64_t);
static void f_generate_print(uintptr_t,uintptr_t);
static void f_loop_push(uintptr_t,int64_t,int64_t);
static void f_loop_pop(uintptr_t);
static void f_generate_block(uintptr_t,uintptr_t);
static void f_generate_function(uintptr_t,uintptr_t);
static void f_emit_time_init(uintptr_t);
static void f_generate_task_adapter(uintptr_t,uintptr_t);
static uintptr_t f_generate(uintptr_t);
static int64_t f_ror32(int64_t,int64_t);
static int64_t f_read_be32(uintptr_t,int64_t);
static void f_write_be32(uintptr_t,int64_t,int64_t);
static uintptr_t f_sha_workspace(void);
static void f_sha_block(uintptr_t,uintptr_t);
static void f_sha256(uintptr_t,uintptr_t,int64_t,uintptr_t);
static int64_t f_aligned(int64_t,int64_t);
static uintptr_t f_writer(uintptr_t,int64_t,int64_t);
static uintptr_t f_wreserve(uintptr_t,int64_t);
static void f_w32(uintptr_t,int64_t);
static void f_w64(uintptr_t,int64_t);
static void f_wb32(uintptr_t,int64_t);
static void f_wb64(uintptr_t,int64_t);
static void f_wtext(uintptr_t,ApString);
static void f_wname(uintptr_t,ApString);
static void f_segment(uintptr_t,ApString,int64_t,int64_t,int64_t,int64_t,int64_t,int64_t);
static void f_section(uintptr_t,ApString,int64_t,int64_t,int64_t,int64_t);
static void f_path_command(uintptr_t,int64_t,ApString,bool);
static uintptr_t f_macho(uintptr_t);
static void f_usage(void);
static ApString f_default_output(ApString);
static void f_dump_code(uintptr_t);
static void f_launch(ApString,int64_t);
static void f_driver(void);
static uintptr_t f_nil() {
  {
    int64_t t1 = ((int64_t)UINT64_C(0));
    uintptr_t t2 = ((uintptr_t)t1);
    return t2;
  }
}
static uintptr_t f_at(uintptr_t v0,int64_t v1) {
  {
    uintptr_t t3 = v0;
    int64_t t4 = v1;
    uintptr_t t5 = (t3 + (uintptr_t)t4);
    return t5;
  }
}
static int64_t f_get(uintptr_t v0,int64_t v1) {
  {
    uintptr_t t6 = v0;
    int64_t t7 = v1;
    int64_t t8 = ((int64_t)UINT64_C(8));
    int64_t t9 = ap_mul(t7,t8);
    uintptr_t t10 = (t6 + (uintptr_t)t9);
    int64_t t11 = ap_peek(t10,8);
    return t11;
  }
}
static void f_put(uintptr_t v0,int64_t v1,int64_t v2) {
  {
    uintptr_t t12 = v0;
    int64_t t13 = v1;
    int64_t t14 = ((int64_t)UINT64_C(8));
    int64_t t15 = ap_mul(t13,t14);
    uintptr_t t16 = (t12 + (uintptr_t)t15);
    int64_t t17 = v2;
    ap_poke(t16,8,t17);
  }
}
static uintptr_t f_getp(uintptr_t v0,int64_t v1) {
  {
    uintptr_t t18 = v0;
    int64_t t19 = v1;
    int64_t t20 = f_get(t18,t19);
    uintptr_t t21 = ((uintptr_t)t20);
    return t21;
  }
}
static void f_putp(uintptr_t v0,int64_t v1,uintptr_t v2) {
  {
    uintptr_t t22 = v0;
    int64_t t23 = v1;
    uintptr_t t24 = v2;
    int64_t t25 = ((int64_t)t24);
    f_put(t22,t23,t25);
  }
}
static uintptr_t f_raw(int64_t v0) {
  ApBuffer v1;
  int64_t t26 = v0;
  ApBuffer t27 = ap_alloc(t26);
  v1 = t27;
  {
    ApBuffer t28 = v1;
    uintptr_t t29 = ap_address_buffer(t28);
    return t29;
  }
}
static int64_t f_getb(uintptr_t v0,int64_t v1) {
  {
    uintptr_t t30 = v0;
    int64_t t31 = v1;
    uintptr_t t32 = (t30 + (uintptr_t)t31);
    int64_t t33 = ap_scale(ap_peek(t32,1));
    int64_t t34 = ap_unscale(t33);
    return t34;
  }
}
static void f_setb(uintptr_t v0,int64_t v1,int64_t v2) {
  {
    uintptr_t t35 = v0;
    int64_t t36 = v1;
    uintptr_t t37 = (t35 + (uintptr_t)t36);
    int64_t t38 = v2;
    ap_poke(t37,1,t38);
  }
}
static ApString f_gets(uintptr_t v0,int64_t v1) {
  {
    uintptr_t t39 = v0;
    int64_t t40 = v1;
    uintptr_t t41 = f_getp(t39,t40);
    uintptr_t t42 = v0;
    int64_t t43 = v1;
    int64_t t44 = ((int64_t)UINT64_C(1));
    int64_t t45 = ap_add(t43,t44);
    int64_t t46 = f_get(t42,t45);
    ApString t47 = ap_string_at(t41,t46);
    return t47;
  }
}
static void f_puts(uintptr_t v0,int64_t v1,ApString v2) {
  {
    uintptr_t t48 = v0;
    int64_t t49 = v1;
    ApString t50 = v2;
    uintptr_t t51 = ap_address_string(t50);
    f_putp(t48,t49,t51);
  }
  uintptr_t t52 = v0;
  int64_t t53 = v1;
  int64_t t54 = ((int64_t)UINT64_C(1));
  int64_t t55 = ap_add(t53,t54);
  ApString t56 = v2;
  int64_t t57 = ap_scale(ap_length_string(t56));
  int64_t t58 = ap_unscale(t57);
  f_put(t52,t55,t58);
}
static ApString f_rawtext(uintptr_t v0,int64_t v1) {
  {
    uintptr_t t59 = v0;
    int64_t t60 = v1;
    ApString t61 = ap_string_at(t59,t60);
    return t61;
  }
}
static void f_write_fd(int64_t v0,ApString v1) {
  int64_t v2;
  int64_t v3;
  uintptr_t v4;
  int64_t v5;
  int64_t t62 = ((int64_t)UINT64_C(0));
  v2 = t62;
  ApString t63 = v1;
  int64_t t64 = ap_scale(ap_length_string(t63));
  int64_t t65 = ap_unscale(t64);
  v3 = t65;
  {
    ApString t66 = v1;
    uintptr_t t67 = ap_address_string(t66);
    v4 = t67;
    while (true) {
      int64_t t68 = v2;
      int64_t t69 = v3;
      bool t70 = (t68 < t69);
      if (!t70) break;
      int64_t t71 = ((int64_t)UINT64_C(4));
      int64_t t72 = v0;
      uintptr_t t73 = v4;
      int64_t t74 = v2;
      uintptr_t t75 = (t73 + (uintptr_t)t74);
      int64_t t76 = v3;
      int64_t t77 = v2;
      int64_t t78 = ap_sub(t76,t77);
      int64_t t79 = ((int64_t)UINT64_C(0));
      int64_t t80 = ((int64_t)UINT64_C(0));
      int64_t t81 = ((int64_t)UINT64_C(0));
      int64_t t82 = ap_syscall((uintptr_t)t71,(uintptr_t)t72,(uintptr_t)t75,(uintptr_t)t78,(uintptr_t)t79,(uintptr_t)t80,(uintptr_t)t81);
      v5 = t82;
      int64_t t83 = v5;
      int64_t t84 = ((int64_t)UINT64_C(18446744073709551612));
      bool t85 = (t83 == t84);
      if (t85) {
        continue;
      } else {
      }
      int64_t t86 = v5;
      int64_t t87 = ((int64_t)UINT64_C(0));
      bool t88 = (t86 <= t87);
      if (t88) {
        int64_t t89 = ((int64_t)UINT64_C(74));
        exit((int)t89);
      } else {
      }
      int64_t t90 = v2;
      int64_t t91 = v5;
      int64_t t92 = ap_add(t90,t91);
      v2 = t92;
    }
  }
}
static ApString f_strint(int64_t v0) {
  ApBuffer v1;
  int64_t v2;
  bool v3;
  int64_t v4;
  int64_t v5;
  int64_t t93 = ((int64_t)UINT64_C(32));
  ApBuffer t94 = ap_alloc(t93);
  v1 = t94;
  int64_t t95 = ((int64_t)UINT64_C(31));
  v2 = t95;
  int64_t t96 = v0;
  int64_t t97 = ((int64_t)UINT64_C(0));
  bool t98 = (t96 < t97);
  v3 = t98;
  int64_t t99 = v0;
  v4 = t99;
  int64_t t100 = v4;
  int64_t t101 = ((int64_t)UINT64_C(0));
  bool t102 = (t100 > t101);
  if (t102) {
    int64_t t103 = v4;
    int64_t t104 = ap_neg(t103);
    v4 = t104;
  } else {
  }
  while (true) {
    bool t105 = true;
    if (!t105) break;
    int64_t t106 = v4;
    int64_t t107 = ((int64_t)UINT64_C(10));
    int64_t t108 = ap_rem(t106,t107);
    int64_t t109 = ap_neg(t108);
    v5 = t109;
    ApBuffer t110 = v1;
    int64_t t111 = v2;
    int64_t t112 = ((int64_t)UINT64_C(48));
    int64_t t113 = v5;
    int64_t t114 = ap_add(t112,t113);
    ap_store(t110,t111,1,t114);
    int64_t t115 = v2;
    int64_t t116 = ((int64_t)UINT64_C(1));
    int64_t t117 = ap_sub(t115,t116);
    v2 = t117;
    int64_t t118 = v4;
    int64_t t119 = ((int64_t)UINT64_C(10));
    int64_t t120 = ap_div(t118,t119);
    v4 = t120;
    int64_t t121 = v4;
    int64_t t122 = ((int64_t)UINT64_C(0));
    bool t123 = (t121 == t122);
    if (t123) {
      break;
    } else {
    }
  }
  bool t124 = v3;
  if (t124) {
    ApBuffer t125 = v1;
    int64_t t126 = v2;
    int64_t t127 = ((int64_t)UINT64_C(45));
    ap_store(t125,t126,1,t127);
    int64_t t128 = v2;
    int64_t t129 = ((int64_t)UINT64_C(1));
    int64_t t130 = ap_sub(t128,t129);
    v2 = t130;
  } else {
  }
  {
    ApBuffer t131 = v1;
    int64_t t132 = v2;
    int64_t t133 = ((int64_t)UINT64_C(1));
    int64_t t134 = ap_add(t132,t133);
    int64_t t135 = ((int64_t)UINT64_C(31));
    int64_t t136 = v2;
    int64_t t137 = ap_sub(t135,t136);
    ApString t138 = ap_view(t131,t134,t137);
    return t138;
  }
}
static void f_die(ApString v0,int64_t v1) {
  int64_t t139 = ((int64_t)UINT64_C(2));
  ApString t140 = AP_STR("apo: ");
  f_write_fd(t139,t140);
  int64_t t141 = ((int64_t)UINT64_C(2));
  ApString t142 = v0;
  f_write_fd(t141,t142);
  int64_t t143 = ((int64_t)UINT64_C(2));
  ApString t144 = AP_STR("\012");
  f_write_fd(t143,t144);
  int64_t t145 = v1;
  exit((int)t145);
}
static void f_need(bool v0,ApString v1) {
  bool t146 = v0;
  bool t147 = !t146;
  if (t147) {
    ApString t148 = v1;
    int64_t t149 = ((int64_t)UINT64_C(70));
    f_die(t148,t149);
  } else {
  }
}
static ApString f_concat(ApString v0,ApString v1) {
  int64_t v2;
  int64_t v3;
  ApBuffer v4;
  ApString t150 = v0;
  int64_t t151 = ap_scale(ap_length_string(t150));
  int64_t t152 = ap_unscale(t151);
  v2 = t152;
  ApString t153 = v1;
  int64_t t154 = ap_scale(ap_length_string(t153));
  int64_t t155 = ap_unscale(t154);
  v3 = t155;
  int64_t t156 = v2;
  int64_t t157 = v3;
  int64_t t158 = ap_add(t156,t157);
  int64_t t159 = ((int64_t)UINT64_C(16777216));
  bool t160 = (t158 > t159);
  if (t160) {
    ApString t161 = AP_STR("combined text exceeds 16 MiB");
    int64_t t162 = ((int64_t)UINT64_C(65));
    f_die(t161,t162);
  } else {
  }
  int64_t t163 = v2;
  int64_t t164 = v3;
  int64_t t165 = ap_add(t163,t164);
  int64_t t166 = ((int64_t)UINT64_C(1));
  int64_t t167 = ap_add(t165,t166);
  ApBuffer t168 = ap_alloc(t167);
  v4 = t168;
  ApBuffer t169 = v4;
  int64_t t170 = ((int64_t)UINT64_C(0));
  ApString t171 = v0;
  int64_t t172 = ((int64_t)UINT64_C(0));
  int64_t t173 = v2;
  ap_copy_string(t169,t170,t171,t172,t173);
  ApBuffer t174 = v4;
  int64_t t175 = v2;
  ApString t176 = v1;
  int64_t t177 = ((int64_t)UINT64_C(0));
  int64_t t178 = v3;
  ap_copy_string(t174,t175,t176,t177,t178);
  {
    ApBuffer t179 = v4;
    int64_t t180 = ((int64_t)UINT64_C(0));
    int64_t t181 = v2;
    int64_t t182 = v3;
    int64_t t183 = ap_add(t181,t182);
    ApString t184 = ap_view(t179,t180,t183);
    return t184;
  }
}
static ApBuffer f_cstring(ApString v0) {
  int64_t v1;
  int64_t v2;
  ApBuffer v3;
  ApString t185 = v0;
  int64_t t186 = ap_scale(ap_length_string(t185));
  int64_t t187 = ap_unscale(t186);
  v1 = t187;
  int64_t t188 = v1;
  int64_t t189 = ((int64_t)UINT64_C(4095));
  bool t190 = (t188 > t189);
  if (t190) {
    ApString t191 = AP_STR("path exceeds 4095 bytes");
    int64_t t192 = ((int64_t)UINT64_C(74));
    f_die(t191,t192);
  } else {
  }
  int64_t t193 = ((int64_t)UINT64_C(0));
  v2 = t193;
  while (true) {
    int64_t t194 = v2;
    int64_t t195 = v1;
    bool t196 = (t194 < t195);
    if (!t196) break;
    ApString t197 = v0;
    int64_t t198 = v2;
    int64_t t199 = ap_byte(t197,t198);
    int64_t t200 = ((int64_t)UINT64_C(0));
    bool t201 = (t199 == t200);
    if (t201) {
      ApString t202 = AP_STR("NUL bytes are not permitted in paths");
      int64_t t203 = ((int64_t)UINT64_C(74));
      f_die(t202,t203);
    } else {
    }
    int64_t t204 = v2;
    int64_t t205 = ((int64_t)UINT64_C(1));
    int64_t t206 = ap_add(t204,t205);
    v2 = t206;
  }
  int64_t t207 = v1;
  int64_t t208 = ((int64_t)UINT64_C(1));
  int64_t t209 = ap_add(t207,t208);
  ApBuffer t210 = ap_alloc(t209);
  v3 = t210;
  ApBuffer t211 = v3;
  int64_t t212 = ((int64_t)UINT64_C(0));
  ApString t213 = v0;
  int64_t t214 = ((int64_t)UINT64_C(0));
  int64_t t215 = v1;
  ap_copy_string(t211,t212,t213,t214,t215);
  ApBuffer t216 = v3;
  return t216;
}
static ApString f_read_source(ApString v0) {
  ApBuffer v1;
  int64_t v2;
  ApBuffer v3;
  int64_t v4;
  int64_t v5;
  int64_t v6;
  ApBuffer v7;
  ApString t217 = v0;
  ApBuffer t218 = f_cstring(t217);
  v1 = t218;
  {
    int64_t t219 = ((int64_t)UINT64_C(5));
    ApBuffer t220 = v1;
    uintptr_t t221 = ap_address_buffer(t220);
    int64_t t222 = ((int64_t)UINT64_C(0));
    int64_t t223 = ((int64_t)UINT64_C(0));
    int64_t t224 = ((int64_t)UINT64_C(0));
    int64_t t225 = ((int64_t)UINT64_C(0));
    int64_t t226 = ((int64_t)UINT64_C(0));
    int64_t t227 = ap_syscall((uintptr_t)t219,(uintptr_t)t221,(uintptr_t)t222,(uintptr_t)t223,(uintptr_t)t224,(uintptr_t)t225,(uintptr_t)t226);
    v2 = t227;
    ApBuffer t228 = v1;
    ap_free(t228);
    int64_t t229 = v2;
    int64_t t230 = ((int64_t)UINT64_C(0));
    bool t231 = (t229 < t230);
    if (t231) {
      int64_t t232 = ((int64_t)UINT64_C(2));
      ApString t233 = v0;
      ApString t234 = AP_STR(": ");
      ApString t235 = f_concat(t233,t234);
      f_write_fd(t232,t235);
      ApString t236 = AP_STR("cannot open source");
      int64_t t237 = ((int64_t)UINT64_C(66));
      f_die(t236,t237);
    } else {
    }
    int64_t t238 = ((int64_t)UINT64_C(8388609));
    ApBuffer t239 = ap_alloc(t238);
    v3 = t239;
    int64_t t240 = ((int64_t)UINT64_C(0));
    v4 = t240;
    while (true) {
      int64_t t241 = v4;
      int64_t t242 = ((int64_t)UINT64_C(8388609));
      bool t243 = (t241 < t242);
      if (!t243) break;
      int64_t t244 = ((int64_t)UINT64_C(3));
      int64_t t245 = v2;
      ApBuffer t246 = v3;
      uintptr_t t247 = ap_address_buffer(t246);
      int64_t t248 = v4;
      uintptr_t t249 = (t247 + (uintptr_t)t248);
      int64_t t250 = ((int64_t)UINT64_C(8388609));
      int64_t t251 = v4;
      int64_t t252 = ap_sub(t250,t251);
      int64_t t253 = ((int64_t)UINT64_C(0));
      int64_t t254 = ((int64_t)UINT64_C(0));
      int64_t t255 = ((int64_t)UINT64_C(0));
      int64_t t256 = ap_syscall((uintptr_t)t244,(uintptr_t)t245,(uintptr_t)t249,(uintptr_t)t252,(uintptr_t)t253,(uintptr_t)t254,(uintptr_t)t255);
      v5 = t256;
      int64_t t257 = v5;
      int64_t t258 = ((int64_t)UINT64_C(18446744073709551612));
      bool t259 = (t257 == t258);
      if (t259) {
        continue;
      } else {
      }
      int64_t t260 = v5;
      int64_t t261 = ((int64_t)UINT64_C(0));
      bool t262 = (t260 < t261);
      if (t262) {
        int64_t t263 = ((int64_t)UINT64_C(6));
        int64_t t264 = v2;
        int64_t t265 = ((int64_t)UINT64_C(0));
        int64_t t266 = ((int64_t)UINT64_C(0));
        int64_t t267 = ((int64_t)UINT64_C(0));
        int64_t t268 = ((int64_t)UINT64_C(0));
        int64_t t269 = ((int64_t)UINT64_C(0));
        int64_t t270 = ap_syscall((uintptr_t)t263,(uintptr_t)t264,(uintptr_t)t265,(uintptr_t)t266,(uintptr_t)t267,(uintptr_t)t268,(uintptr_t)t269);
        ApString t271 = AP_STR("cannot read source");
        int64_t t272 = ((int64_t)UINT64_C(74));
        f_die(t271,t272);
      } else {
      }
      int64_t t273 = v5;
      int64_t t274 = ((int64_t)UINT64_C(0));
      bool t275 = (t273 == t274);
      if (t275) {
        break;
      } else {
      }
      int64_t t276 = v4;
      int64_t t277 = v5;
      int64_t t278 = ap_add(t276,t277);
      v4 = t278;
    }
    int64_t t279 = ((int64_t)UINT64_C(6));
    int64_t t280 = v2;
    int64_t t281 = ((int64_t)UINT64_C(0));
    int64_t t282 = ((int64_t)UINT64_C(0));
    int64_t t283 = ((int64_t)UINT64_C(0));
    int64_t t284 = ((int64_t)UINT64_C(0));
    int64_t t285 = ((int64_t)UINT64_C(0));
    int64_t t286 = ap_syscall((uintptr_t)t279,(uintptr_t)t280,(uintptr_t)t281,(uintptr_t)t282,(uintptr_t)t283,(uintptr_t)t284,(uintptr_t)t285);
    int64_t t287 = v4;
    int64_t t288 = ((int64_t)UINT64_C(8388608));
    bool t289 = (t287 > t288);
    if (t289) {
      ApString t290 = AP_STR("source limit is 8 MiB");
      int64_t t291 = ((int64_t)UINT64_C(65));
      f_die(t290,t291);
    } else {
    }
    int64_t t292 = ((int64_t)UINT64_C(0));
    v6 = t292;
    int64_t t293 = v4;
    int64_t t294 = ((int64_t)UINT64_C(3));
    bool t295 = (t293 >= t294);
    bool t296 = t295;
    if (t296) {
      ApBuffer t297 = v3;
      int64_t t298 = ((int64_t)UINT64_C(0));
      int64_t t299 = ap_scale(ap_load(t297,t298,1));
      int64_t t300 = ap_unscale(t299);
      int64_t t301 = ((int64_t)UINT64_C(239));
      bool t302 = (t300 == t301);
      t296 = t302;
    }
    bool t303 = t296;
    if (t303) {
      ApBuffer t304 = v3;
      int64_t t305 = ((int64_t)UINT64_C(1));
      int64_t t306 = ap_scale(ap_load(t304,t305,1));
      int64_t t307 = ap_unscale(t306);
      int64_t t308 = ((int64_t)UINT64_C(187));
      bool t309 = (t307 == t308);
      t303 = t309;
    }
    bool t310 = t303;
    if (t310) {
      ApBuffer t311 = v3;
      int64_t t312 = ((int64_t)UINT64_C(2));
      int64_t t313 = ap_scale(ap_load(t311,t312,1));
      int64_t t314 = ap_unscale(t313);
      int64_t t315 = ((int64_t)UINT64_C(191));
      bool t316 = (t314 == t315);
      t310 = t316;
    }
    if (t310) {
      int64_t t317 = ((int64_t)UINT64_C(3));
      v6 = t317;
    } else {
    }
    int64_t t318 = v4;
    int64_t t319 = v6;
    int64_t t320 = ap_sub(t318,t319);
    int64_t t321 = ((int64_t)UINT64_C(1));
    int64_t t322 = ap_add(t320,t321);
    ApBuffer t323 = ap_alloc(t322);
    v7 = t323;
    ApBuffer t324 = v7;
    int64_t t325 = ((int64_t)UINT64_C(0));
    ApBuffer t326 = v3;
    int64_t t327 = v6;
    int64_t t328 = v4;
    int64_t t329 = v6;
    int64_t t330 = ap_sub(t328,t329);
    ap_copy_buffer(t324,t325,t326,t327,t330);
    ApBuffer t331 = v3;
    ap_free(t331);
    ApBuffer t332 = v7;
    int64_t t333 = ((int64_t)UINT64_C(0));
    int64_t t334 = v4;
    int64_t t335 = v6;
    int64_t t336 = ap_sub(t334,t335);
    ApString t337 = ap_view(t332,t333,t336);
    return t337;
  }
}
static bool f_starts(ApString v0,ApString v1) {
  int64_t v2;
  ApString t338 = v1;
  int64_t t339 = ap_scale(ap_length_string(t338));
  int64_t t340 = ap_unscale(t339);
  v2 = t340;
  ApString t341 = v0;
  int64_t t342 = ap_scale(ap_length_string(t341));
  int64_t t343 = ap_unscale(t342);
  int64_t t344 = v2;
  bool t345 = (t343 < t344);
  if (t345) {
    bool t346 = false;
    return t346;
  } else {
  }
  ApString t347 = v0;
  int64_t t348 = ((int64_t)UINT64_C(0));
  int64_t t349 = v2;
  ApString t350 = ap_slice(t347,t348,t349);
  ApString t351 = v1;
  bool t352 = ap_equal(t350,t351);
  return t352;
}
static bool f_ends(ApString v0,ApString v1) {
  int64_t v2;
  int64_t v3;
  ApString t353 = v1;
  int64_t t354 = ap_scale(ap_length_string(t353));
  int64_t t355 = ap_unscale(t354);
  v2 = t355;
  ApString t356 = v0;
  int64_t t357 = ap_scale(ap_length_string(t356));
  int64_t t358 = ap_unscale(t357);
  v3 = t358;
  int64_t t359 = v3;
  int64_t t360 = v2;
  bool t361 = (t359 < t360);
  if (t361) {
    bool t362 = false;
    return t362;
  } else {
  }
  ApString t363 = v0;
  int64_t t364 = v3;
  int64_t t365 = v2;
  int64_t t366 = ap_sub(t364,t365);
  int64_t t367 = v2;
  ApString t368 = ap_slice(t363,t366,t367);
  ApString t369 = v1;
  bool t370 = ap_equal(t368,t369);
  return t370;
}
static bool f_apo_suffix(ApString v0) {
  int64_t v1;
  ApString t371 = v0;
  int64_t t372 = ap_scale(ap_length_string(t371));
  int64_t t373 = ap_unscale(t372);
  v1 = t373;
  int64_t t374 = v1;
  int64_t t375 = ((int64_t)UINT64_C(4));
  bool t376 = (t374 < t375);
  if (t376) {
    bool t377 = false;
    return t377;
  } else {
  }
  ApString t378 = v0;
  int64_t t379 = v1;
  int64_t t380 = ((int64_t)UINT64_C(4));
  int64_t t381 = ap_sub(t379,t380);
  int64_t t382 = ap_byte(t378,t381);
  int64_t t383 = ((int64_t)UINT64_C(46));
  bool t384 = (t382 == t383);
  bool t385 = t384;
  if (t385) {
    ApString t386 = v0;
    int64_t t387 = v1;
    int64_t t388 = ((int64_t)UINT64_C(3));
    int64_t t389 = ap_sub(t387,t388);
    int64_t t390 = ap_byte(t386,t389);
    int64_t t391 = ((int64_t)UINT64_C(32));
    int64_t t392 = (t390 | t391);
    int64_t t393 = ((int64_t)UINT64_C(97));
    bool t394 = (t392 == t393);
    t385 = t394;
  }
  bool t395 = t385;
  if (t395) {
    ApString t396 = v0;
    int64_t t397 = v1;
    int64_t t398 = ((int64_t)UINT64_C(2));
    int64_t t399 = ap_sub(t397,t398);
    int64_t t400 = ap_byte(t396,t399);
    int64_t t401 = ((int64_t)UINT64_C(32));
    int64_t t402 = (t400 | t401);
    int64_t t403 = ((int64_t)UINT64_C(112));
    bool t404 = (t402 == t403);
    t395 = t404;
  }
  bool t405 = t395;
  if (t405) {
    ApString t406 = v0;
    int64_t t407 = v1;
    int64_t t408 = ((int64_t)UINT64_C(1));
    int64_t t409 = ap_sub(t407,t408);
    int64_t t410 = ap_byte(t406,t409);
    int64_t t411 = ((int64_t)UINT64_C(32));
    int64_t t412 = (t410 | t411);
    int64_t t413 = ((int64_t)UINT64_C(111));
    bool t414 = (t412 == t413);
    t405 = t414;
  }
  return t405;
}
static void f_parent_dirs(ApString v0) {
  int64_t v1;
  int64_t v2;
  ApBuffer v3;
  int64_t v4;
  ApString t415 = v0;
  int64_t t416 = ap_scale(ap_length_string(t415));
  int64_t t417 = ap_unscale(t416);
  v1 = t417;
  int64_t t418 = ((int64_t)UINT64_C(1));
  v2 = t418;
  while (true) {
    int64_t t419 = v2;
    int64_t t420 = v1;
    bool t421 = (t419 < t420);
    if (!t421) break;
    ApString t422 = v0;
    int64_t t423 = v2;
    int64_t t424 = ap_byte(t422,t423);
    int64_t t425 = ((int64_t)UINT64_C(47));
    bool t426 = (t424 == t425);
    if (t426) {
      ApString t427 = v0;
      int64_t t428 = ((int64_t)UINT64_C(0));
      int64_t t429 = v2;
      ApString t430 = ap_slice(t427,t428,t429);
      ApBuffer t431 = f_cstring(t430);
      v3 = t431;
      {
        int64_t t432 = ((int64_t)UINT64_C(136));
        ApBuffer t433 = v3;
        uintptr_t t434 = ap_address_buffer(t433);
        int64_t t435 = ((int64_t)UINT64_C(493));
        int64_t t436 = ((int64_t)UINT64_C(0));
        int64_t t437 = ((int64_t)UINT64_C(0));
        int64_t t438 = ((int64_t)UINT64_C(0));
        int64_t t439 = ((int64_t)UINT64_C(0));
        int64_t t440 = ap_syscall((uintptr_t)t432,(uintptr_t)t434,(uintptr_t)t435,(uintptr_t)t436,(uintptr_t)t437,(uintptr_t)t438,(uintptr_t)t439);
        v4 = t440;
        int64_t t441 = v4;
        int64_t t442 = ((int64_t)UINT64_C(0));
        bool t443 = (t441 < t442);
        bool t444 = t443;
        if (t444) {
          int64_t t445 = v4;
          int64_t t446 = ((int64_t)UINT64_C(18446744073709551599));
          bool t447 = (t445 != t446);
          t444 = t447;
        }
        if (t444) {
          ApString t448 = AP_STR("cannot create output directory");
          int64_t t449 = ((int64_t)UINT64_C(74));
          f_die(t448,t449);
        } else {
        }
      }
      ApBuffer t450 = v3;
      ap_free(t450);
    } else {
    }
    int64_t t451 = v2;
    int64_t t452 = ((int64_t)UINT64_C(1));
    int64_t t453 = ap_add(t451,t452);
    v2 = t453;
  }
}
static void f_save_file(ApString v0,uintptr_t v1,int64_t v2,bool v3) {
  int64_t v4;
  ApString v5;
  ApBuffer v6;
  ApBuffer v7;
  int64_t v8;
  int64_t v9;
  int64_t v10;
  int64_t v11;
  int64_t v12;
  int64_t v13;
  ApString t454 = v0;
  f_parent_dirs(t454);
  {
    int64_t t455 = ((int64_t)UINT64_C(20));
    int64_t t456 = ((int64_t)UINT64_C(0));
    int64_t t457 = ((int64_t)UINT64_C(0));
    int64_t t458 = ((int64_t)UINT64_C(0));
    int64_t t459 = ((int64_t)UINT64_C(0));
    int64_t t460 = ((int64_t)UINT64_C(0));
    int64_t t461 = ((int64_t)UINT64_C(0));
    int64_t t462 = ap_syscall((uintptr_t)t455,(uintptr_t)t456,(uintptr_t)t457,(uintptr_t)t458,(uintptr_t)t459,(uintptr_t)t460,(uintptr_t)t461);
    v4 = t462;
    ApString t463 = v0;
    ApString t464 = AP_STR(".apo-tmp-");
    int64_t t465 = v4;
    ApString t466 = f_strint(t465);
    ApString t467 = f_concat(t464,t466);
    ApString t468 = f_concat(t463,t467);
    v5 = t468;
    ApString t469 = v5;
    ApBuffer t470 = f_cstring(t469);
    v6 = t470;
    ApString t471 = v0;
    ApBuffer t472 = f_cstring(t471);
    v7 = t472;
    int64_t t473 = ((int64_t)UINT64_C(5));
    ApBuffer t474 = v6;
    uintptr_t t475 = ap_address_buffer(t474);
    int64_t t476 = ((int64_t)UINT64_C(2561));
    int64_t t477 = ((int64_t)UINT64_C(384));
    int64_t t478 = ((int64_t)UINT64_C(0));
    int64_t t479 = ((int64_t)UINT64_C(0));
    int64_t t480 = ((int64_t)UINT64_C(0));
    int64_t t481 = ap_syscall((uintptr_t)t473,(uintptr_t)t475,(uintptr_t)t476,(uintptr_t)t477,(uintptr_t)t478,(uintptr_t)t479,(uintptr_t)t480);
    v8 = t481;
    int64_t t482 = v8;
    int64_t t483 = ((int64_t)UINT64_C(0));
    bool t484 = (t482 < t483);
    if (t484) {
      ApString t485 = AP_STR("cannot create temporary output (check permissions or stale .apo-tmp file)");
      int64_t t486 = ((int64_t)UINT64_C(74));
      f_die(t485,t486);
    } else {
    }
    int64_t t487 = ((int64_t)UINT64_C(0));
    v9 = t487;
    while (true) {
      int64_t t488 = v9;
      int64_t t489 = v2;
      bool t490 = (t488 < t489);
      if (!t490) break;
      int64_t t491 = ((int64_t)UINT64_C(4));
      int64_t t492 = v8;
      uintptr_t t493 = v1;
      int64_t t494 = v9;
      uintptr_t t495 = (t493 + (uintptr_t)t494);
      int64_t t496 = v2;
      int64_t t497 = v9;
      int64_t t498 = ap_sub(t496,t497);
      int64_t t499 = ((int64_t)UINT64_C(0));
      int64_t t500 = ((int64_t)UINT64_C(0));
      int64_t t501 = ((int64_t)UINT64_C(0));
      int64_t t502 = ap_syscall((uintptr_t)t491,(uintptr_t)t492,(uintptr_t)t495,(uintptr_t)t498,(uintptr_t)t499,(uintptr_t)t500,(uintptr_t)t501);
      v10 = t502;
      int64_t t503 = v10;
      int64_t t504 = ((int64_t)UINT64_C(18446744073709551612));
      bool t505 = (t503 == t504);
      if (t505) {
        continue;
      } else {
      }
      int64_t t506 = v10;
      int64_t t507 = ((int64_t)UINT64_C(0));
      bool t508 = (t506 <= t507);
      if (t508) {
        int64_t t509 = ((int64_t)UINT64_C(6));
        int64_t t510 = v8;
        int64_t t511 = ((int64_t)UINT64_C(0));
        int64_t t512 = ((int64_t)UINT64_C(0));
        int64_t t513 = ((int64_t)UINT64_C(0));
        int64_t t514 = ((int64_t)UINT64_C(0));
        int64_t t515 = ((int64_t)UINT64_C(0));
        int64_t t516 = ap_syscall((uintptr_t)t509,(uintptr_t)t510,(uintptr_t)t511,(uintptr_t)t512,(uintptr_t)t513,(uintptr_t)t514,(uintptr_t)t515);
        int64_t t517 = ((int64_t)UINT64_C(10));
        ApBuffer t518 = v6;
        uintptr_t t519 = ap_address_buffer(t518);
        int64_t t520 = ((int64_t)UINT64_C(0));
        int64_t t521 = ((int64_t)UINT64_C(0));
        int64_t t522 = ((int64_t)UINT64_C(0));
        int64_t t523 = ((int64_t)UINT64_C(0));
        int64_t t524 = ((int64_t)UINT64_C(0));
        int64_t t525 = ap_syscall((uintptr_t)t517,(uintptr_t)t519,(uintptr_t)t520,(uintptr_t)t521,(uintptr_t)t522,(uintptr_t)t523,(uintptr_t)t524);
        ApString t526 = AP_STR("writing output failed");
        int64_t t527 = ((int64_t)UINT64_C(74));
        f_die(t526,t527);
      } else {
      }
      int64_t t528 = v9;
      int64_t t529 = v10;
      int64_t t530 = ap_add(t528,t529);
      v9 = t530;
    }
    int64_t t531 = ((int64_t)UINT64_C(420));
    v11 = t531;
    bool t532 = v3;
    if (t532) {
      int64_t t533 = ((int64_t)UINT64_C(493));
      v11 = t533;
    } else {
    }
    int64_t t534 = ((int64_t)UINT64_C(124));
    int64_t t535 = v8;
    int64_t t536 = v11;
    int64_t t537 = ((int64_t)UINT64_C(0));
    int64_t t538 = ((int64_t)UINT64_C(0));
    int64_t t539 = ((int64_t)UINT64_C(0));
    int64_t t540 = ((int64_t)UINT64_C(0));
    int64_t t541 = ap_syscall((uintptr_t)t534,(uintptr_t)t535,(uintptr_t)t536,(uintptr_t)t537,(uintptr_t)t538,(uintptr_t)t539,(uintptr_t)t540);
    v12 = t541;
    int64_t t542 = ((int64_t)UINT64_C(6));
    int64_t t543 = v8;
    int64_t t544 = ((int64_t)UINT64_C(0));
    int64_t t545 = ((int64_t)UINT64_C(0));
    int64_t t546 = ((int64_t)UINT64_C(0));
    int64_t t547 = ((int64_t)UINT64_C(0));
    int64_t t548 = ((int64_t)UINT64_C(0));
    int64_t t549 = ap_syscall((uintptr_t)t542,(uintptr_t)t543,(uintptr_t)t544,(uintptr_t)t545,(uintptr_t)t546,(uintptr_t)t547,(uintptr_t)t548);
    v13 = t549;
    int64_t t550 = v12;
    int64_t t551 = ((int64_t)UINT64_C(0));
    bool t552 = (t550 < t551);
    bool t553 = t552;
    if (!t553) {
      int64_t t554 = v13;
      int64_t t555 = ((int64_t)UINT64_C(0));
      bool t556 = (t554 < t555);
      t553 = t556;
    }
    if (t553) {
      int64_t t557 = ((int64_t)UINT64_C(10));
      ApBuffer t558 = v6;
      uintptr_t t559 = ap_address_buffer(t558);
      int64_t t560 = ((int64_t)UINT64_C(0));
      int64_t t561 = ((int64_t)UINT64_C(0));
      int64_t t562 = ((int64_t)UINT64_C(0));
      int64_t t563 = ((int64_t)UINT64_C(0));
      int64_t t564 = ((int64_t)UINT64_C(0));
      int64_t t565 = ap_syscall((uintptr_t)t557,(uintptr_t)t559,(uintptr_t)t560,(uintptr_t)t561,(uintptr_t)t562,(uintptr_t)t563,(uintptr_t)t564);
      ApString t566 = AP_STR("closing output failed");
      int64_t t567 = ((int64_t)UINT64_C(74));
      f_die(t566,t567);
    } else {
    }
    int64_t t568 = ((int64_t)UINT64_C(128));
    ApBuffer t569 = v6;
    uintptr_t t570 = ap_address_buffer(t569);
    ApBuffer t571 = v7;
    uintptr_t t572 = ap_address_buffer(t571);
    int64_t t573 = ((int64_t)UINT64_C(0));
    int64_t t574 = ((int64_t)UINT64_C(0));
    int64_t t575 = ((int64_t)UINT64_C(0));
    int64_t t576 = ((int64_t)UINT64_C(0));
    int64_t t577 = ap_syscall((uintptr_t)t568,(uintptr_t)t570,(uintptr_t)t572,(uintptr_t)t573,(uintptr_t)t574,(uintptr_t)t575,(uintptr_t)t576);
    int64_t t578 = ((int64_t)UINT64_C(0));
    bool t579 = (t577 < t578);
    if (t579) {
      int64_t t580 = ((int64_t)UINT64_C(10));
      ApBuffer t581 = v6;
      uintptr_t t582 = ap_address_buffer(t581);
      int64_t t583 = ((int64_t)UINT64_C(0));
      int64_t t584 = ((int64_t)UINT64_C(0));
      int64_t t585 = ((int64_t)UINT64_C(0));
      int64_t t586 = ((int64_t)UINT64_C(0));
      int64_t t587 = ((int64_t)UINT64_C(0));
      int64_t t588 = ap_syscall((uintptr_t)t580,(uintptr_t)t582,(uintptr_t)t583,(uintptr_t)t584,(uintptr_t)t585,(uintptr_t)t586,(uintptr_t)t587);
      ApString t589 = AP_STR("cannot replace output");
      int64_t t590 = ((int64_t)UINT64_C(74));
      f_die(t589,t590);
    } else {
    }
    ApBuffer t591 = v6;
    ap_free(t591);
    ApBuffer t592 = v7;
    ap_free(t592);
  }
}
static uintptr_t f_arena(uintptr_t v0,int64_t v1) {
  int64_t v2;
  int64_t v3;
  int64_t t593 = v1;
  int64_t t594 = ((int64_t)UINT64_C(15));
  int64_t t595 = ap_add(t593,t594);
  int64_t t596 = ((int64_t)UINT64_C(18446744073709551600));
  int64_t t597 = (t595 & t596);
  v2 = t597;
  uintptr_t t598 = v0;
  int64_t t599 = ((int64_t)UINT64_C(2));
  int64_t t600 = f_get(t598,t599);
  v3 = t600;
  int64_t t601 = v2;
  int64_t t602 = ((int64_t)UINT64_C(0));
  bool t603 = (t601 < t602);
  bool t604 = t603;
  if (!t604) {
    int64_t t605 = v3;
    uintptr_t t606 = v0;
    int64_t t607 = ((int64_t)UINT64_C(1));
    int64_t t608 = f_get(t606,t607);
    int64_t t609 = v2;
    int64_t t610 = ap_sub(t608,t609);
    bool t611 = (t605 > t610);
    t604 = t611;
  }
  if (t604) {
    ApString t612 = AP_STR("compiler arena exhausted (source is too complex)");
    int64_t t613 = ((int64_t)UINT64_C(65));
    f_die(t612,t613);
  } else {
  }
  uintptr_t t614 = v0;
  int64_t t615 = ((int64_t)UINT64_C(2));
  int64_t t616 = v3;
  int64_t t617 = v2;
  int64_t t618 = ap_add(t616,t617);
  f_put(t614,t615,t618);
  uintptr_t t619 = v0;
  int64_t t620 = ((int64_t)UINT64_C(0));
  uintptr_t t621 = f_getp(t619,t620);
  int64_t t622 = v3;
  uintptr_t t623 = f_at(t621,t622);
  return t623;
}
static uintptr_t f_new_arena(int64_t v0,int64_t v1) {
  uintptr_t v2;
  int64_t t624 = v1;
  uintptr_t t625 = f_raw(t624);
  v2 = t625;
  uintptr_t t626 = v2;
  int64_t t627 = ((int64_t)UINT64_C(0));
  int64_t t628 = v0;
  uintptr_t t629 = f_raw(t628);
  f_putp(t626,t627,t629);
  uintptr_t t630 = v2;
  int64_t t631 = ((int64_t)UINT64_C(1));
  int64_t t632 = v0;
  f_put(t630,t631,t632);
  uintptr_t t633 = v2;
  return t633;
}
static void f_fail(uintptr_t v0,uintptr_t v1,ApString v2) {
  ApString v3;
  uintptr_t t634 = v0;
  int64_t t635 = ((int64_t)UINT64_C(19));
  ApString t636 = f_gets(t634,t635);
  v3 = t636;
  uintptr_t t637 = v1;
  int64_t t638 = ((int64_t)UINT64_C(7));
  uintptr_t t639 = f_getp(t637,t638);
  uintptr_t t640 = f_nil();
  bool t641 = (t639 != t640);
  if (t641) {
    uintptr_t t642 = v1;
    int64_t t643 = ((int64_t)UINT64_C(7));
    uintptr_t t644 = f_getp(t642,t643);
    int64_t t645 = ((int64_t)UINT64_C(0));
    ApString t646 = f_gets(t644,t645);
    v3 = t646;
  } else {
  }
  int64_t t647 = ((int64_t)UINT64_C(2));
  ApString t648 = v3;
  f_write_fd(t647,t648);
  int64_t t649 = ((int64_t)UINT64_C(2));
  ApString t650 = AP_STR(":");
  f_write_fd(t649,t650);
  int64_t t651 = ((int64_t)UINT64_C(2));
  uintptr_t t652 = v1;
  int64_t t653 = ((int64_t)UINT64_C(3));
  int64_t t654 = f_get(t652,t653);
  ApString t655 = f_strint(t654);
  f_write_fd(t651,t655);
  int64_t t656 = ((int64_t)UINT64_C(2));
  ApString t657 = AP_STR(":");
  f_write_fd(t656,t657);
  int64_t t658 = ((int64_t)UINT64_C(2));
  uintptr_t t659 = v1;
  int64_t t660 = ((int64_t)UINT64_C(4));
  int64_t t661 = f_get(t659,t660);
  ApString t662 = f_strint(t661);
  f_write_fd(t658,t662);
  int64_t t663 = ((int64_t)UINT64_C(2));
  ApString t664 = AP_STR(": ");
  f_write_fd(t663,t664);
  int64_t t665 = ((int64_t)UINT64_C(2));
  ApString t666 = v2;
  f_write_fd(t665,t666);
  int64_t t667 = ((int64_t)UINT64_C(2));
  ApString t668 = AP_STR("\012");
  f_write_fd(t667,t668);
  int64_t t669 = ((int64_t)UINT64_C(65));
  exit((int)t669);
}
static uintptr_t f_list_add(uintptr_t v0,uintptr_t v1,uintptr_t v2) {
  uintptr_t v3;
  uintptr_t v4;
  uintptr_t t670 = v1;
  v3 = t670;
  uintptr_t t671 = v3;
  uintptr_t t672 = f_nil();
  bool t673 = (t671 == t672);
  if (t673) {
    uintptr_t t674 = v0;
    int64_t t675 = ((int64_t)UINT64_C(32));
    uintptr_t t676 = f_arena(t674,t675);
    v3 = t676;
  } else {
  }
  uintptr_t t677 = v0;
  int64_t t678 = ((int64_t)UINT64_C(16));
  uintptr_t t679 = f_arena(t677,t678);
  v4 = t679;
  uintptr_t t680 = v4;
  int64_t t681 = ((int64_t)UINT64_C(0));
  uintptr_t t682 = v2;
  f_putp(t680,t681,t682);
  uintptr_t t683 = v3;
  int64_t t684 = ((int64_t)UINT64_C(0));
  uintptr_t t685 = f_getp(t683,t684);
  uintptr_t t686 = f_nil();
  bool t687 = (t685 == t686);
  if (t687) {
    uintptr_t t688 = v3;
    int64_t t689 = ((int64_t)UINT64_C(0));
    uintptr_t t690 = v4;
    f_putp(t688,t689,t690);
  } else {
    uintptr_t t691 = v3;
    int64_t t692 = ((int64_t)UINT64_C(1));
    uintptr_t t693 = f_getp(t691,t692);
    int64_t t694 = ((int64_t)UINT64_C(1));
    uintptr_t t695 = v4;
    f_putp(t693,t694,t695);
  }
  uintptr_t t696 = v3;
  int64_t t697 = ((int64_t)UINT64_C(1));
  uintptr_t t698 = v4;
  f_putp(t696,t697,t698);
  uintptr_t t699 = v3;
  int64_t t700 = ((int64_t)UINT64_C(2));
  uintptr_t t701 = v3;
  int64_t t702 = ((int64_t)UINT64_C(2));
  int64_t t703 = f_get(t701,t702);
  int64_t t704 = ((int64_t)UINT64_C(1));
  int64_t t705 = ap_add(t703,t704);
  f_put(t699,t700,t705);
  uintptr_t t706 = v3;
  return t706;
}
static uintptr_t f_list_get(uintptr_t v0,int64_t v1) {
  uintptr_t v2;
  int64_t v3;
  uintptr_t t707 = v0;
  uintptr_t t708 = f_nil();
  bool t709 = (t707 != t708);
  ApString t710 = AP_STR("internal list index");
  f_need(t709,t710);
  int64_t t711 = v1;
  int64_t t712 = ((int64_t)UINT64_C(0));
  bool t713 = (t711 >= t712);
  bool t714 = t713;
  if (t714) {
    int64_t t715 = v1;
    uintptr_t t716 = v0;
    int64_t t717 = ((int64_t)UINT64_C(2));
    int64_t t718 = f_get(t716,t717);
    bool t719 = (t715 < t718);
    t714 = t719;
  }
  ApString t720 = AP_STR("internal list index");
  f_need(t714,t720);
  uintptr_t t721 = v0;
  int64_t t722 = ((int64_t)UINT64_C(0));
  uintptr_t t723 = f_getp(t721,t722);
  v2 = t723;
  int64_t t724 = ((int64_t)UINT64_C(0));
  v3 = t724;
  while (true) {
    int64_t t725 = v3;
    int64_t t726 = v1;
    bool t727 = (t725 < t726);
    if (!t727) break;
    uintptr_t t728 = v2;
    int64_t t729 = ((int64_t)UINT64_C(1));
    uintptr_t t730 = f_getp(t728,t729);
    v2 = t730;
    int64_t t731 = v3;
    int64_t t732 = ((int64_t)UINT64_C(1));
    int64_t t733 = ap_add(t731,t732);
    v3 = t733;
  }
  uintptr_t t734 = v2;
  int64_t t735 = ((int64_t)UINT64_C(0));
  uintptr_t t736 = f_getp(t734,t735);
  return t736;
}
static int64_t f_minint(int64_t v0,int64_t v1) {
  int64_t t737 = v0;
  int64_t t738 = v1;
  bool t739 = (t737 < t738);
  if (t739) {
    int64_t t740 = v0;
    return t740;
  } else {
  }
  int64_t t741 = v1;
  return t741;
}
static int64_t f_maxint(int64_t v0,int64_t v1) {
  int64_t t742 = v0;
  int64_t t743 = v1;
  bool t744 = (t742 > t743);
  if (t744) {
    int64_t t745 = v0;
    return t745;
  } else {
  }
  int64_t t746 = v1;
  return t746;
}
static bool f_isdigit(int64_t v0) {
  int64_t t747 = v0;
  int64_t t748 = ((int64_t)UINT64_C(48));
  bool t749 = (t747 >= t748);
  bool t750 = t749;
  if (t750) {
    int64_t t751 = v0;
    int64_t t752 = ((int64_t)UINT64_C(57));
    bool t753 = (t751 <= t752);
    t750 = t753;
  }
  return t750;
}
static bool f_isletter(int64_t v0) {
  int64_t t754 = v0;
  int64_t t755 = ((int64_t)UINT64_C(65));
  bool t756 = (t754 >= t755);
  bool t757 = t756;
  if (t757) {
    int64_t t758 = v0;
    int64_t t759 = ((int64_t)UINT64_C(90));
    bool t760 = (t758 <= t759);
    t757 = t760;
  }
  bool t761 = t757;
  if (!t761) {
    int64_t t762 = v0;
    int64_t t763 = ((int64_t)UINT64_C(97));
    bool t764 = (t762 >= t763);
    bool t765 = t764;
    if (t765) {
      int64_t t766 = v0;
      int64_t t767 = ((int64_t)UINT64_C(122));
      bool t768 = (t766 <= t767);
      t765 = t768;
    }
    t761 = t765;
  }
  bool t769 = t761;
  if (!t769) {
    int64_t t770 = v0;
    int64_t t771 = ((int64_t)UINT64_C(95));
    bool t772 = (t770 == t771);
    t769 = t772;
  }
  return t769;
}
static bool f_isident(int64_t v0) {
  int64_t t773 = v0;
  bool t774 = f_isletter(t773);
  bool t775 = t774;
  if (!t775) {
    int64_t t776 = v0;
    bool t777 = f_isdigit(t776);
    t775 = t777;
  }
  return t775;
}
static int64_t f_hexval(int64_t v0) {
  int64_t t778 = v0;
  bool t779 = f_isdigit(t778);
  if (t779) {
    int64_t t780 = v0;
    int64_t t781 = ((int64_t)UINT64_C(48));
    int64_t t782 = ap_sub(t780,t781);
    return t782;
  } else {
  }
  int64_t t783 = v0;
  int64_t t784 = ((int64_t)UINT64_C(65));
  bool t785 = (t783 >= t784);
  bool t786 = t785;
  if (t786) {
    int64_t t787 = v0;
    int64_t t788 = ((int64_t)UINT64_C(70));
    bool t789 = (t787 <= t788);
    t786 = t789;
  }
  if (t786) {
    int64_t t790 = v0;
    int64_t t791 = ((int64_t)UINT64_C(55));
    int64_t t792 = ap_sub(t790,t791);
    return t792;
  } else {
  }
  int64_t t793 = v0;
  int64_t t794 = ((int64_t)UINT64_C(97));
  bool t795 = (t793 >= t794);
  bool t796 = t795;
  if (t796) {
    int64_t t797 = v0;
    int64_t t798 = ((int64_t)UINT64_C(102));
    bool t799 = (t797 <= t798);
    t796 = t799;
  }
  if (t796) {
    int64_t t800 = v0;
    int64_t t801 = ((int64_t)UINT64_C(87));
    int64_t t802 = ap_sub(t800,t801);
    return t802;
  } else {
  }
  int64_t t803 = ((int64_t)UINT64_C(18446744073709551615));
  return t803;
}
static int64_t f_source_byte(ApString v0,int64_t v1) {
  int64_t t804 = v1;
  int64_t t805 = ((int64_t)UINT64_C(0));
  bool t806 = (t804 < t805);
  bool t807 = t806;
  if (!t807) {
    int64_t t808 = v1;
    ApString t809 = v0;
    int64_t t810 = ap_scale(ap_length_string(t809));
    int64_t t811 = ap_unscale(t810);
    bool t812 = (t808 >= t811);
    t807 = t812;
  }
  if (t807) {
    int64_t t813 = ((int64_t)UINT64_C(18446744073709551615));
    return t813;
  } else {
  }
  ApString t814 = v0;
  int64_t t815 = v1;
  int64_t t816 = ap_byte(t814,t815);
  return t816;
}
static int64_t f_keyword(ApString v0) {
  ApString t817 = v0;
  ApString t818 = AP_STR("task");
  bool t819 = ap_equal(t817,t818);
  if (t819) {
    int64_t t820 = ((int64_t)UINT64_C(57));
    return t820;
  } else {
  }
  ApString t821 = v0;
  ApString t822 = AP_STR("elif");
  bool t823 = ap_equal(t821,t822);
  if (t823) {
    int64_t t824 = ((int64_t)UINT64_C(54));
    return t824;
  } else {
  }
  ApString t825 = v0;
  ApString t826 = AP_STR("println");
  bool t827 = ap_equal(t825,t826);
  if (t827) {
    int64_t t828 = ((int64_t)UINT64_C(55));
    return t828;
  } else {
  }
  ApString t829 = v0;
  ApString t830 = AP_STR("set");
  bool t831 = ap_equal(t829,t830);
  if (t831) {
    int64_t t832 = ((int64_t)UINT64_C(56));
    return t832;
  } else {
  }
  ApString t833 = v0;
  ApString t834 = AP_STR("let");
  bool t835 = ap_equal(t833,t834);
  if (t835) {
    int64_t t836 = ((int64_t)UINT64_C(44));
    return t836;
  } else {
  }
  ApString t837 = v0;
  ApString t838 = AP_STR("const");
  bool t839 = ap_equal(t837,t838);
  if (t839) {
    int64_t t840 = ((int64_t)UINT64_C(45));
    return t840;
  } else {
  }
  ApString t841 = v0;
  ApString t842 = AP_STR("print");
  bool t843 = ap_equal(t841,t842);
  if (t843) {
    int64_t t844 = ((int64_t)UINT64_C(24));
    return t844;
  } else {
  }
  ApString t845 = v0;
  ApString t846 = AP_STR("if");
  bool t847 = ap_equal(t845,t846);
  if (t847) {
    int64_t t848 = ((int64_t)UINT64_C(25));
    return t848;
  } else {
  }
  ApString t849 = v0;
  ApString t850 = AP_STR("then");
  bool t851 = ap_equal(t849,t850);
  if (t851) {
    int64_t t852 = ((int64_t)UINT64_C(26));
    return t852;
  } else {
  }
  ApString t853 = v0;
  ApString t854 = AP_STR("else");
  bool t855 = ap_equal(t853,t854);
  if (t855) {
    int64_t t856 = ((int64_t)UINT64_C(27));
    return t856;
  } else {
  }
  ApString t857 = v0;
  ApString t858 = AP_STR("end");
  bool t859 = ap_equal(t857,t858);
  if (t859) {
    int64_t t860 = ((int64_t)UINT64_C(28));
    return t860;
  } else {
  }
  ApString t861 = v0;
  ApString t862 = AP_STR("for");
  bool t863 = ap_equal(t861,t862);
  if (t863) {
    int64_t t864 = ((int64_t)UINT64_C(29));
    return t864;
  } else {
  }
  ApString t865 = v0;
  ApString t866 = AP_STR("in");
  bool t867 = ap_equal(t865,t866);
  if (t867) {
    int64_t t868 = ((int64_t)UINT64_C(30));
    return t868;
  } else {
  }
  ApString t869 = v0;
  ApString t870 = AP_STR("while");
  bool t871 = ap_equal(t869,t870);
  if (t871) {
    int64_t t872 = ((int64_t)UINT64_C(31));
    return t872;
  } else {
  }
  ApString t873 = v0;
  ApString t874 = AP_STR("do");
  bool t875 = ap_equal(t873,t874);
  if (t875) {
    int64_t t876 = ((int64_t)UINT64_C(32));
    return t876;
  } else {
  }
  ApString t877 = v0;
  ApString t878 = AP_STR("exit");
  bool t879 = ap_equal(t877,t878);
  if (t879) {
    int64_t t880 = ((int64_t)UINT64_C(33));
    return t880;
  } else {
  }
  ApString t881 = v0;
  ApString t882 = AP_STR("true");
  bool t883 = ap_equal(t881,t882);
  if (t883) {
    int64_t t884 = ((int64_t)UINT64_C(34));
    return t884;
  } else {
  }
  ApString t885 = v0;
  ApString t886 = AP_STR("false");
  bool t887 = ap_equal(t885,t886);
  if (t887) {
    int64_t t888 = ((int64_t)UINT64_C(35));
    return t888;
  } else {
  }
  ApString t889 = v0;
  ApString t890 = AP_STR("and");
  bool t891 = ap_equal(t889,t890);
  if (t891) {
    int64_t t892 = ((int64_t)UINT64_C(36));
    return t892;
  } else {
  }
  ApString t893 = v0;
  ApString t894 = AP_STR("or");
  bool t895 = ap_equal(t893,t894);
  if (t895) {
    int64_t t896 = ((int64_t)UINT64_C(37));
    return t896;
  } else {
  }
  ApString t897 = v0;
  ApString t898 = AP_STR("not");
  bool t899 = ap_equal(t897,t898);
  if (t899) {
    int64_t t900 = ((int64_t)UINT64_C(38));
    return t900;
  } else {
  }
  ApString t901 = v0;
  ApString t902 = AP_STR("fn");
  bool t903 = ap_equal(t901,t902);
  if (t903) {
    int64_t t904 = ((int64_t)UINT64_C(39));
    return t904;
  } else {
  }
  ApString t905 = v0;
  ApString t906 = AP_STR("return");
  bool t907 = ap_equal(t905,t906);
  if (t907) {
    int64_t t908 = ((int64_t)UINT64_C(40));
    return t908;
  } else {
  }
  ApString t909 = v0;
  ApString t910 = AP_STR("unsafe");
  bool t911 = ap_equal(t909,t910);
  if (t911) {
    int64_t t912 = ((int64_t)UINT64_C(41));
    return t912;
  } else {
  }
  ApString t913 = v0;
  ApString t914 = AP_STR("break");
  bool t915 = ap_equal(t913,t914);
  if (t915) {
    int64_t t916 = ((int64_t)UINT64_C(42));
    return t916;
  } else {
  }
  ApString t917 = v0;
  ApString t918 = AP_STR("continue");
  bool t919 = ap_equal(t917,t918);
  if (t919) {
    int64_t t920 = ((int64_t)UINT64_C(43));
    return t920;
  } else {
  }
  int64_t t921 = ((int64_t)UINT64_C(2));
  return t921;
}
static uintptr_t f_token_add(uintptr_t v0,int64_t v1,ApString v2,int64_t v3,int64_t v4,int64_t v5,int64_t v6) {
  int64_t v7;
  uintptr_t v8;
  uintptr_t t922 = v0;
  int64_t t923 = ((int64_t)UINT64_C(4));
  int64_t t924 = f_get(t922,t923);
  v7 = t924;
  int64_t t925 = v7;
  int64_t t926 = ((int64_t)UINT64_C(262144));
  bool t927 = (t925 >= t926);
  if (t927) {
    ApString t928 = AP_STR("source exceeds 262144-token limit");
    int64_t t929 = ((int64_t)UINT64_C(65));
    f_die(t928,t929);
  } else {
  }
  uintptr_t t930 = v0;
  int64_t t931 = ((int64_t)UINT64_C(3));
  uintptr_t t932 = f_getp(t930,t931);
  int64_t t933 = v7;
  int64_t t934 = ((int64_t)UINT64_C(64));
  int64_t t935 = ap_mul(t933,t934);
  uintptr_t t936 = f_at(t932,t935);
  v8 = t936;
  uintptr_t t937 = v8;
  int64_t t938 = ((int64_t)UINT64_C(0));
  int64_t t939 = v1;
  f_put(t937,t938,t939);
  uintptr_t t940 = v8;
  int64_t t941 = ((int64_t)UINT64_C(1));
  ApString t942 = v2;
  f_puts(t940,t941,t942);
  uintptr_t t943 = v8;
  int64_t t944 = ((int64_t)UINT64_C(3));
  int64_t t945 = v3;
  f_put(t943,t944,t945);
  uintptr_t t946 = v8;
  int64_t t947 = ((int64_t)UINT64_C(4));
  int64_t t948 = v4;
  f_put(t946,t947,t948);
  uintptr_t t949 = v8;
  int64_t t950 = ((int64_t)UINT64_C(5));
  int64_t t951 = v5;
  f_put(t949,t950,t951);
  uintptr_t t952 = v8;
  int64_t t953 = ((int64_t)UINT64_C(6));
  int64_t t954 = v6;
  f_put(t952,t953,t954);
  uintptr_t t955 = v8;
  int64_t t956 = ((int64_t)UINT64_C(7));
  uintptr_t t957 = v0;
  int64_t t958 = ((int64_t)UINT64_C(25));
  uintptr_t t959 = f_getp(t957,t958);
  f_putp(t955,t956,t959);
  uintptr_t t960 = v0;
  int64_t t961 = ((int64_t)UINT64_C(4));
  int64_t t962 = v7;
  int64_t t963 = ((int64_t)UINT64_C(1));
  int64_t t964 = ap_add(t962,t963);
  f_put(t960,t961,t964);
  uintptr_t t965 = v8;
  return t965;
}
static void f_lex_error(uintptr_t v0,int64_t v1,int64_t v2,ApString v3) {
  uintptr_t v4;
  uintptr_t t966 = v0;
  int64_t t967 = ((int64_t)UINT64_C(64));
  uintptr_t t968 = f_arena(t966,t967);
  v4 = t968;
  uintptr_t t969 = v4;
  int64_t t970 = ((int64_t)UINT64_C(7));
  uintptr_t t971 = v0;
  int64_t t972 = ((int64_t)UINT64_C(25));
  uintptr_t t973 = f_getp(t971,t972);
  f_putp(t969,t970,t973);
  uintptr_t t974 = v4;
  int64_t t975 = ((int64_t)UINT64_C(3));
  int64_t t976 = v1;
  f_put(t974,t975,t976);
  uintptr_t t977 = v4;
  int64_t t978 = ((int64_t)UINT64_C(4));
  int64_t t979 = v2;
  f_put(t977,t978,t979);
  uintptr_t t980 = v0;
  uintptr_t t981 = v4;
  ApString t982 = v3;
  f_fail(t980,t981,t982);
}
static ApString f_decode_string(uintptr_t v0,ApString v1,int64_t v2,int64_t v3) {
  int64_t v4;
  uintptr_t v5;
  int64_t v6;
  int64_t v7;
  int64_t v8;
  int64_t v9;
  ApString t983 = v1;
  int64_t t984 = ap_scale(ap_length_string(t983));
  int64_t t985 = ap_unscale(t984);
  v4 = t985;
  uintptr_t t986 = v0;
  int64_t t987 = v4;
  int64_t t988 = ((int64_t)UINT64_C(1));
  int64_t t989 = ap_add(t987,t988);
  uintptr_t t990 = f_arena(t986,t989);
  v5 = t990;
  int64_t t991 = ((int64_t)UINT64_C(0));
  v6 = t991;
  int64_t t992 = ((int64_t)UINT64_C(0));
  v7 = t992;
  while (true) {
    int64_t t993 = v6;
    int64_t t994 = v4;
    bool t995 = (t993 < t994);
    if (!t995) break;
    ApString t996 = v1;
    int64_t t997 = v6;
    int64_t t998 = ap_byte(t996,t997);
    v8 = t998;
    int64_t t999 = v6;
    int64_t t1000 = ((int64_t)UINT64_C(1));
    int64_t t1001 = ap_add(t999,t1000);
    v6 = t1001;
    int64_t t1002 = v8;
    int64_t t1003 = ((int64_t)UINT64_C(92));
    bool t1004 = (t1002 == t1003);
    if (t1004) {
      int64_t t1005 = v6;
      int64_t t1006 = v4;
      bool t1007 = (t1005 >= t1006);
      if (t1007) {
        uintptr_t t1008 = v0;
        int64_t t1009 = v2;
        int64_t t1010 = v3;
        ApString t1011 = AP_STR("incomplete escape");
        f_lex_error(t1008,t1009,t1010,t1011);
      } else {
      }
      ApString t1012 = v1;
      int64_t t1013 = v6;
      int64_t t1014 = ap_byte(t1012,t1013);
      v9 = t1014;
      int64_t t1015 = v6;
      int64_t t1016 = ((int64_t)UINT64_C(1));
      int64_t t1017 = ap_add(t1015,t1016);
      v6 = t1017;
      int64_t t1018 = v9;
      int64_t t1019 = ((int64_t)UINT64_C(110));
      bool t1020 = (t1018 == t1019);
      if (t1020) {
        int64_t t1021 = ((int64_t)UINT64_C(10));
        v8 = t1021;
      } else {
        int64_t t1022 = v9;
        int64_t t1023 = ((int64_t)UINT64_C(114));
        bool t1024 = (t1022 == t1023);
        if (t1024) {
          int64_t t1025 = ((int64_t)UINT64_C(13));
          v8 = t1025;
        } else {
          int64_t t1026 = v9;
          int64_t t1027 = ((int64_t)UINT64_C(116));
          bool t1028 = (t1026 == t1027);
          if (t1028) {
            int64_t t1029 = ((int64_t)UINT64_C(9));
            v8 = t1029;
          } else {
            int64_t t1030 = v9;
            int64_t t1031 = ((int64_t)UINT64_C(101));
            bool t1032 = (t1030 == t1031);
            if (t1032) {
              int64_t t1033 = ((int64_t)UINT64_C(27));
              v8 = t1033;
            } else {
              int64_t t1034 = v9;
              int64_t t1035 = ((int64_t)UINT64_C(48));
              bool t1036 = (t1034 == t1035);
              if (t1036) {
                int64_t t1037 = ((int64_t)UINT64_C(0));
                v8 = t1037;
              } else {
                int64_t t1038 = v9;
                int64_t t1039 = ((int64_t)UINT64_C(34));
                bool t1040 = (t1038 == t1039);
                bool t1041 = t1040;
                if (!t1041) {
                  int64_t t1042 = v9;
                  int64_t t1043 = ((int64_t)UINT64_C(92));
                  bool t1044 = (t1042 == t1043);
                  t1041 = t1044;
                }
                if (t1041) {
                  int64_t t1045 = v9;
                  v8 = t1045;
                } else {
                  uintptr_t t1046 = v0;
                  int64_t t1047 = v2;
                  int64_t t1048 = v3;
                  ApString t1049 = AP_STR("unknown string escape");
                  f_lex_error(t1046,t1047,t1048,t1049);
                }
              }
            }
          }
        }
      }
    } else {
    }
    uintptr_t t1050 = v5;
    int64_t t1051 = v7;
    int64_t t1052 = v8;
    f_setb(t1050,t1051,t1052);
    int64_t t1053 = v7;
    int64_t t1054 = ((int64_t)UINT64_C(1));
    int64_t t1055 = ap_add(t1053,t1054);
    v7 = t1055;
  }
  uintptr_t t1056 = v5;
  int64_t t1057 = v7;
  ApString t1058 = f_rawtext(t1056,t1057);
  return t1058;
}
static void f_lex(uintptr_t v0,ApString v1) {
  int64_t v2;
  int64_t v3;
  int64_t v4;
  int64_t v5;
  ApBuffer v6;
  int64_t v7;
  int64_t v8;
  int64_t v9;
  int64_t v10;
  int64_t v11;
  uintptr_t v12;
  int64_t v13;
  int64_t v14;
  ApString v15;
  int64_t v16;
  int64_t v17;
  bool v18;
  int64_t v19;
  bool v20;
  int64_t v21;
  ApString v22;
  int64_t v23;
  uintptr_t t1059 = v0;
  int64_t t1060 = ((int64_t)UINT64_C(3));
  int64_t t1061 = ((int64_t)UINT64_C(16777216));
  uintptr_t t1062 = f_raw(t1061);
  f_putp(t1059,t1060,t1062);
  ApString t1063 = v1;
  int64_t t1064 = ap_scale(ap_length_string(t1063));
  int64_t t1065 = ap_unscale(t1064);
  v2 = t1065;
  int64_t t1066 = ((int64_t)UINT64_C(0));
  v3 = t1066;
  int64_t t1067 = ((int64_t)UINT64_C(1));
  v4 = t1067;
  int64_t t1068 = ((int64_t)UINT64_C(1));
  v5 = t1068;
  int64_t t1069 = ((int64_t)UINT64_C(256));
  ApBuffer t1070 = ap_alloc(t1069);
  v6 = t1070;
  int64_t t1071 = ((int64_t)UINT64_C(0));
  v7 = t1071;
  while (true) {
    int64_t t1072 = v3;
    int64_t t1073 = v2;
    bool t1074 = (t1072 < t1073);
    if (!t1074) break;
    ApString t1075 = v1;
    int64_t t1076 = v3;
    int64_t t1077 = ap_byte(t1075,t1076);
    v8 = t1077;
    int64_t t1078 = v8;
    int64_t t1079 = ((int64_t)UINT64_C(32));
    bool t1080 = (t1078 == t1079);
    bool t1081 = t1080;
    if (!t1081) {
      int64_t t1082 = v8;
      int64_t t1083 = ((int64_t)UINT64_C(9));
      bool t1084 = (t1082 == t1083);
      t1081 = t1084;
    }
    bool t1085 = t1081;
    if (!t1085) {
      int64_t t1086 = v8;
      int64_t t1087 = ((int64_t)UINT64_C(11));
      bool t1088 = (t1086 == t1087);
      t1085 = t1088;
    }
    bool t1089 = t1085;
    if (!t1089) {
      int64_t t1090 = v8;
      int64_t t1091 = ((int64_t)UINT64_C(12));
      bool t1092 = (t1090 == t1091);
      t1089 = t1092;
    }
    if (t1089) {
      int64_t t1093 = v3;
      int64_t t1094 = ((int64_t)UINT64_C(1));
      int64_t t1095 = ap_add(t1093,t1094);
      v3 = t1095;
      int64_t t1096 = v5;
      int64_t t1097 = ((int64_t)UINT64_C(1));
      int64_t t1098 = ap_add(t1096,t1097);
      v5 = t1098;
      continue;
    } else {
    }
    int64_t t1099 = v8;
    int64_t t1100 = ((int64_t)UINT64_C(35));
    bool t1101 = (t1099 == t1100);
    bool t1102 = t1101;
    if (t1102) {
      int64_t t1103 = v5;
      int64_t t1104 = ((int64_t)UINT64_C(1));
      bool t1105 = (t1103 == t1104);
      t1102 = t1105;
    }
    bool t1106 = t1102;
    if (t1106) {
      int64_t t1107 = v3;
      int64_t t1108 = ((int64_t)UINT64_C(11));
      int64_t t1109 = ap_add(t1107,t1108);
      int64_t t1110 = v2;
      bool t1111 = (t1109 <= t1110);
      t1106 = t1111;
    }
    bool t1112 = t1106;
    if (t1112) {
      ApString t1113 = v1;
      int64_t t1114 = v3;
      int64_t t1115 = ((int64_t)UINT64_C(11));
      ApString t1116 = ap_slice(t1113,t1114,t1115);
      ApString t1117 = AP_STR("#@apo-file:");
      bool t1118 = ap_equal(t1116,t1117);
      t1112 = t1118;
    }
    if (t1112) {
      int64_t t1119 = v3;
      int64_t t1120 = ((int64_t)UINT64_C(11));
      int64_t t1121 = ap_add(t1119,t1120);
      v9 = t1121;
      int64_t t1122 = ((int64_t)UINT64_C(0));
      v10 = t1122;
      while (true) {
        ApString t1123 = v1;
        int64_t t1124 = v9;
        int64_t t1125 = f_source_byte(t1123,t1124);
        bool t1126 = f_isdigit(t1125);
        if (!t1126) break;
        int64_t t1127 = v10;
        int64_t t1128 = ((int64_t)UINT64_C(10000000));
        bool t1129 = (t1127 > t1128);
        if (t1129) {
          uintptr_t t1130 = v0;
          int64_t t1131 = v4;
          int64_t t1132 = v5;
          ApString t1133 = AP_STR("source map line is too large");
          f_lex_error(t1130,t1131,t1132,t1133);
        } else {
        }
        int64_t t1134 = v10;
        int64_t t1135 = ((int64_t)UINT64_C(10));
        int64_t t1136 = ap_mul(t1134,t1135);
        ApString t1137 = v1;
        int64_t t1138 = v9;
        int64_t t1139 = f_source_byte(t1137,t1138);
        int64_t t1140 = ap_add(t1136,t1139);
        int64_t t1141 = ((int64_t)UINT64_C(48));
        int64_t t1142 = ap_sub(t1140,t1141);
        v10 = t1142;
        int64_t t1143 = v9;
        int64_t t1144 = ((int64_t)UINT64_C(1));
        int64_t t1145 = ap_add(t1143,t1144);
        v9 = t1145;
      }
      ApString t1146 = v1;
      int64_t t1147 = v9;
      int64_t t1148 = f_source_byte(t1146,t1147);
      int64_t t1149 = ((int64_t)UINT64_C(58));
      bool t1150 = (t1148 != t1149);
      bool t1151 = t1150;
      if (!t1151) {
        int64_t t1152 = v10;
        int64_t t1153 = ((int64_t)UINT64_C(1));
        bool t1154 = (t1152 < t1153);
        t1151 = t1154;
      }
      if (t1151) {
        uintptr_t t1155 = v0;
        int64_t t1156 = v4;
        int64_t t1157 = v5;
        ApString t1158 = AP_STR("invalid source marker");
        f_lex_error(t1155,t1156,t1157,t1158);
      } else {
      }
      int64_t t1159 = v9;
      int64_t t1160 = ((int64_t)UINT64_C(1));
      int64_t t1161 = ap_add(t1159,t1160);
      v9 = t1161;
      int64_t t1162 = v9;
      v11 = t1162;
      while (true) {
        int64_t t1163 = v9;
        int64_t t1164 = v2;
        bool t1165 = (t1163 < t1164);
        bool t1166 = t1165;
        if (t1166) {
          ApString t1167 = v1;
          int64_t t1168 = v9;
          int64_t t1169 = f_source_byte(t1167,t1168);
          int64_t t1170 = ((int64_t)UINT64_C(10));
          bool t1171 = (t1169 != t1170);
          t1166 = t1171;
        }
        bool t1172 = t1166;
        if (t1172) {
          ApString t1173 = v1;
          int64_t t1174 = v9;
          int64_t t1175 = f_source_byte(t1173,t1174);
          int64_t t1176 = ((int64_t)UINT64_C(13));
          bool t1177 = (t1175 != t1176);
          t1172 = t1177;
        }
        if (!t1172) break;
        int64_t t1178 = v9;
        int64_t t1179 = ((int64_t)UINT64_C(1));
        int64_t t1180 = ap_add(t1178,t1179);
        v9 = t1180;
      }
      uintptr_t t1181 = v0;
      int64_t t1182 = ((int64_t)UINT64_C(16));
      uintptr_t t1183 = f_arena(t1181,t1182);
      v12 = t1183;
      uintptr_t t1184 = v12;
      int64_t t1185 = ((int64_t)UINT64_C(0));
      ApString t1186 = v1;
      int64_t t1187 = v11;
      int64_t t1188 = v9;
      int64_t t1189 = v11;
      int64_t t1190 = ap_sub(t1188,t1189);
      ApString t1191 = ap_slice(t1186,t1187,t1190);
      f_puts(t1184,t1185,t1191);
      uintptr_t t1192 = v0;
      int64_t t1193 = ((int64_t)UINT64_C(25));
      uintptr_t t1194 = v12;
      f_putp(t1192,t1193,t1194);
      int64_t t1195 = v10;
      int64_t t1196 = ((int64_t)UINT64_C(1));
      int64_t t1197 = ap_sub(t1195,t1196);
      v4 = t1197;
    } else {
    }
    int64_t t1198 = v8;
    int64_t t1199 = ((int64_t)UINT64_C(35));
    bool t1200 = (t1198 == t1199);
    bool t1201 = t1200;
    if (!t1201) {
      int64_t t1202 = v8;
      int64_t t1203 = ((int64_t)UINT64_C(47));
      bool t1204 = (t1202 == t1203);
      bool t1205 = t1204;
      if (t1205) {
        ApString t1206 = v1;
        int64_t t1207 = v3;
        int64_t t1208 = ((int64_t)UINT64_C(1));
        int64_t t1209 = ap_add(t1207,t1208);
        int64_t t1210 = f_source_byte(t1206,t1209);
        int64_t t1211 = ((int64_t)UINT64_C(47));
        bool t1212 = (t1210 == t1211);
        t1205 = t1212;
      }
      t1201 = t1205;
    }
    if (t1201) {
      while (true) {
        int64_t t1213 = v3;
        int64_t t1214 = v2;
        bool t1215 = (t1213 < t1214);
        bool t1216 = t1215;
        if (t1216) {
          ApString t1217 = v1;
          int64_t t1218 = v3;
          int64_t t1219 = f_source_byte(t1217,t1218);
          int64_t t1220 = ((int64_t)UINT64_C(10));
          bool t1221 = (t1219 != t1220);
          t1216 = t1221;
        }
        bool t1222 = t1216;
        if (t1222) {
          ApString t1223 = v1;
          int64_t t1224 = v3;
          int64_t t1225 = f_source_byte(t1223,t1224);
          int64_t t1226 = ((int64_t)UINT64_C(13));
          bool t1227 = (t1225 != t1226);
          t1222 = t1227;
        }
        if (!t1222) break;
        int64_t t1228 = v3;
        int64_t t1229 = ((int64_t)UINT64_C(1));
        int64_t t1230 = ap_add(t1228,t1229);
        v3 = t1230;
        int64_t t1231 = v5;
        int64_t t1232 = ((int64_t)UINT64_C(1));
        int64_t t1233 = ap_add(t1231,t1232);
        v5 = t1233;
      }
      continue;
    } else {
    }
    int64_t t1234 = v3;
    v13 = t1234;
    int64_t t1235 = v5;
    v14 = t1235;
    int64_t t1236 = v8;
    int64_t t1237 = ((int64_t)UINT64_C(10));
    bool t1238 = (t1236 == t1237);
    bool t1239 = t1238;
    if (!t1239) {
      int64_t t1240 = v8;
      int64_t t1241 = ((int64_t)UINT64_C(13));
      bool t1242 = (t1240 == t1241);
      t1239 = t1242;
    }
    if (t1239) {
      int64_t t1243 = v3;
      int64_t t1244 = ((int64_t)UINT64_C(1));
      int64_t t1245 = ap_add(t1243,t1244);
      v3 = t1245;
      int64_t t1246 = v8;
      int64_t t1247 = ((int64_t)UINT64_C(13));
      bool t1248 = (t1246 == t1247);
      bool t1249 = t1248;
      if (t1249) {
        ApString t1250 = v1;
        int64_t t1251 = v3;
        int64_t t1252 = f_source_byte(t1250,t1251);
        int64_t t1253 = ((int64_t)UINT64_C(10));
        bool t1254 = (t1252 == t1253);
        t1249 = t1254;
      }
      if (t1249) {
        int64_t t1255 = v3;
        int64_t t1256 = ((int64_t)UINT64_C(1));
        int64_t t1257 = ap_add(t1255,t1256);
        v3 = t1257;
      } else {
      }
      int64_t t1258 = v7;
      int64_t t1259 = ((int64_t)UINT64_C(0));
      bool t1260 = (t1258 == t1259);
      if (t1260) {
        uintptr_t t1261 = v0;
        int64_t t1262 = ((int64_t)UINT64_C(1));
        ApString t1263 = AP_STR("newline");
        int64_t t1264 = v4;
        int64_t t1265 = v14;
        int64_t t1266 = v13;
        int64_t t1267 = v3;
        uintptr_t t1268 = f_token_add(t1261,t1262,t1263,t1264,t1265,t1266,t1267);
      } else {
      }
      int64_t t1269 = v4;
      int64_t t1270 = ((int64_t)UINT64_C(1));
      int64_t t1271 = ap_add(t1269,t1270);
      v4 = t1271;
      int64_t t1272 = ((int64_t)UINT64_C(1));
      v5 = t1272;
      continue;
    } else {
    }
    int64_t t1273 = v8;
    bool t1274 = f_isletter(t1273);
    if (t1274) {
      int64_t t1275 = v3;
      int64_t t1276 = ((int64_t)UINT64_C(1));
      int64_t t1277 = ap_add(t1275,t1276);
      v3 = t1277;
      while (true) {
        ApString t1278 = v1;
        int64_t t1279 = v3;
        int64_t t1280 = f_source_byte(t1278,t1279);
        bool t1281 = f_isident(t1280);
        if (!t1281) break;
        int64_t t1282 = v3;
        int64_t t1283 = ((int64_t)UINT64_C(1));
        int64_t t1284 = ap_add(t1282,t1283);
        v3 = t1284;
      }
      ApString t1285 = v1;
      int64_t t1286 = v13;
      int64_t t1287 = v3;
      int64_t t1288 = v13;
      int64_t t1289 = ap_sub(t1287,t1288);
      ApString t1290 = ap_slice(t1285,t1286,t1289);
      v15 = t1290;
      uintptr_t t1291 = v0;
      ApString t1292 = v15;
      int64_t t1293 = f_keyword(t1292);
      ApString t1294 = v15;
      int64_t t1295 = v4;
      int64_t t1296 = v14;
      int64_t t1297 = v13;
      int64_t t1298 = v3;
      uintptr_t t1299 = f_token_add(t1291,t1293,t1294,t1295,t1296,t1297,t1298);
      int64_t t1300 = v5;
      int64_t t1301 = v3;
      int64_t t1302 = ap_add(t1300,t1301);
      int64_t t1303 = v13;
      int64_t t1304 = ap_sub(t1302,t1303);
      v5 = t1304;
      continue;
    } else {
    }
    int64_t t1305 = v8;
    bool t1306 = f_isdigit(t1305);
    if (t1306) {
      int64_t t1307 = ((int64_t)UINT64_C(3));
      v16 = t1307;
      int64_t t1308 = v8;
      int64_t t1309 = ((int64_t)UINT64_C(48));
      bool t1310 = (t1308 == t1309);
      bool t1311 = t1310;
      if (t1311) {
        ApString t1312 = v1;
        int64_t t1313 = v3;
        int64_t t1314 = ((int64_t)UINT64_C(1));
        int64_t t1315 = ap_add(t1313,t1314);
        int64_t t1316 = f_source_byte(t1312,t1315);
        int64_t t1317 = ((int64_t)UINT64_C(120));
        bool t1318 = (t1316 == t1317);
        bool t1319 = t1318;
        if (!t1319) {
          ApString t1320 = v1;
          int64_t t1321 = v3;
          int64_t t1322 = ((int64_t)UINT64_C(1));
          int64_t t1323 = ap_add(t1321,t1322);
          int64_t t1324 = f_source_byte(t1320,t1323);
          int64_t t1325 = ((int64_t)UINT64_C(88));
          bool t1326 = (t1324 == t1325);
          t1319 = t1326;
        }
        t1311 = t1319;
      }
      if (t1311) {
        int64_t t1327 = ((int64_t)UINT64_C(17));
        v16 = t1327;
        int64_t t1328 = v3;
        int64_t t1329 = ((int64_t)UINT64_C(2));
        int64_t t1330 = ap_add(t1328,t1329);
        v3 = t1330;
        int64_t t1331 = v3;
        v17 = t1331;
        while (true) {
          ApString t1332 = v1;
          int64_t t1333 = v3;
          int64_t t1334 = f_source_byte(t1332,t1333);
          int64_t t1335 = f_hexval(t1334);
          int64_t t1336 = ((int64_t)UINT64_C(0));
          bool t1337 = (t1335 >= t1336);
          if (!t1337) break;
          int64_t t1338 = v3;
          int64_t t1339 = ((int64_t)UINT64_C(1));
          int64_t t1340 = ap_add(t1338,t1339);
          v3 = t1340;
        }
        int64_t t1341 = v3;
        int64_t t1342 = v17;
        bool t1343 = (t1341 == t1342);
        if (t1343) {
          uintptr_t t1344 = v0;
          int64_t t1345 = v4;
          int64_t t1346 = v14;
          ApString t1347 = AP_STR("hex literal requires digits");
          f_lex_error(t1344,t1345,t1346,t1347);
        } else {
        }
      } else {
        while (true) {
          ApString t1348 = v1;
          int64_t t1349 = v3;
          int64_t t1350 = f_source_byte(t1348,t1349);
          bool t1351 = f_isdigit(t1350);
          if (!t1351) break;
          int64_t t1352 = v3;
          int64_t t1353 = ((int64_t)UINT64_C(1));
          int64_t t1354 = ap_add(t1352,t1353);
          v3 = t1354;
        }
        bool t1355 = false;
        v18 = t1355;
        ApString t1356 = v1;
        int64_t t1357 = v3;
        int64_t t1358 = f_source_byte(t1356,t1357);
        int64_t t1359 = ((int64_t)UINT64_C(46));
        bool t1360 = (t1358 == t1359);
        if (t1360) {
          bool t1361 = true;
          v18 = t1361;
          int64_t t1362 = v3;
          int64_t t1363 = ((int64_t)UINT64_C(1));
          int64_t t1364 = ap_add(t1362,t1363);
          v3 = t1364;
          ApString t1365 = v1;
          int64_t t1366 = v3;
          int64_t t1367 = f_source_byte(t1365,t1366);
          bool t1368 = f_isdigit(t1367);
          bool t1369 = !t1368;
          if (t1369) {
            uintptr_t t1370 = v0;
            int64_t t1371 = v4;
            int64_t t1372 = v14;
            ApString t1373 = AP_STR("decimal point must be followed by digits");
            f_lex_error(t1370,t1371,t1372,t1373);
          } else {
          }
          while (true) {
            ApString t1374 = v1;
            int64_t t1375 = v3;
            int64_t t1376 = f_source_byte(t1374,t1375);
            bool t1377 = f_isdigit(t1376);
            if (!t1377) break;
            int64_t t1378 = v3;
            int64_t t1379 = ((int64_t)UINT64_C(1));
            int64_t t1380 = ap_add(t1378,t1379);
            v3 = t1380;
          }
        } else {
        }
        ApString t1381 = v1;
        int64_t t1382 = v3;
        int64_t t1383 = f_source_byte(t1381,t1382);
        int64_t t1384 = ((int64_t)UINT64_C(102));
        bool t1385 = (t1383 == t1384);
        if (t1385) {
          int64_t t1386 = ((int64_t)UINT64_C(46));
          v16 = t1386;
          int64_t t1387 = v3;
          int64_t t1388 = ((int64_t)UINT64_C(1));
          int64_t t1389 = ap_add(t1387,t1388);
          v3 = t1389;
        } else {
        }
        int64_t t1390 = v16;
        int64_t t1391 = ((int64_t)UINT64_C(46));
        bool t1392 = (t1390 != t1391);
        bool t1393 = t1392;
        if (t1393) {
          bool t1394 = v18;
          bool t1395 = !t1394;
          t1393 = t1395;
        }
        bool t1396 = t1393;
        if (t1396) {
          ApString t1397 = v1;
          int64_t t1398 = v3;
          int64_t t1399 = f_source_byte(t1397,t1398);
          int64_t t1400 = ((int64_t)UINT64_C(105));
          bool t1401 = (t1399 == t1400);
          t1396 = t1401;
        }
        if (t1396) {
          int64_t t1402 = ((int64_t)UINT64_C(17));
          v16 = t1402;
          int64_t t1403 = v3;
          int64_t t1404 = ((int64_t)UINT64_C(1));
          int64_t t1405 = ap_add(t1403,t1404);
          v3 = t1405;
        } else {
        }
      }
      ApString t1406 = v1;
      int64_t t1407 = v3;
      int64_t t1408 = f_source_byte(t1406,t1407);
      bool t1409 = f_isident(t1408);
      if (t1409) {
        uintptr_t t1410 = v0;
        int64_t t1411 = v4;
        int64_t t1412 = v14;
        ApString t1413 = AP_STR("invalid numeric suffix; exponent notation is not supported");
        f_lex_error(t1410,t1411,t1412,t1413);
      } else {
      }
      uintptr_t t1414 = v0;
      int64_t t1415 = v16;
      ApString t1416 = v1;
      int64_t t1417 = v13;
      int64_t t1418 = v3;
      int64_t t1419 = v13;
      int64_t t1420 = ap_sub(t1418,t1419);
      ApString t1421 = ap_slice(t1416,t1417,t1420);
      int64_t t1422 = v4;
      int64_t t1423 = v14;
      int64_t t1424 = v13;
      int64_t t1425 = v3;
      uintptr_t t1426 = f_token_add(t1414,t1415,t1421,t1422,t1423,t1424,t1425);
      int64_t t1427 = v5;
      int64_t t1428 = v3;
      int64_t t1429 = ap_add(t1427,t1428);
      int64_t t1430 = v13;
      int64_t t1431 = ap_sub(t1429,t1430);
      v5 = t1431;
      continue;
    } else {
    }
    int64_t t1432 = v8;
    int64_t t1433 = ((int64_t)UINT64_C(34));
    bool t1434 = (t1432 == t1433);
    if (t1434) {
      int64_t t1435 = v3;
      int64_t t1436 = ((int64_t)UINT64_C(1));
      int64_t t1437 = ap_add(t1435,t1436);
      v3 = t1437;
      int64_t t1438 = v3;
      v19 = t1438;
      bool t1439 = false;
      v20 = t1439;
      while (true) {
        int64_t t1440 = v3;
        int64_t t1441 = v2;
        bool t1442 = (t1440 < t1441);
        if (!t1442) break;
        ApString t1443 = v1;
        int64_t t1444 = v3;
        int64_t t1445 = ap_byte(t1443,t1444);
        v21 = t1445;
        int64_t t1446 = v21;
        int64_t t1447 = ((int64_t)UINT64_C(10));
        bool t1448 = (t1446 == t1447);
        bool t1449 = t1448;
        if (!t1449) {
          int64_t t1450 = v21;
          int64_t t1451 = ((int64_t)UINT64_C(13));
          bool t1452 = (t1450 == t1451);
          t1449 = t1452;
        }
        if (t1449) {
          uintptr_t t1453 = v0;
          int64_t t1454 = v4;
          int64_t t1455 = v14;
          ApString t1456 = AP_STR("use \\n instead of a raw newline inside a string");
          f_lex_error(t1453,t1454,t1455,t1456);
        } else {
        }
        int64_t t1457 = v21;
        int64_t t1458 = ((int64_t)UINT64_C(34));
        bool t1459 = (t1457 == t1458);
        if (t1459) {
          bool t1460 = true;
          v20 = t1460;
          break;
        } else {
        }
        int64_t t1461 = v21;
        int64_t t1462 = ((int64_t)UINT64_C(92));
        bool t1463 = (t1461 == t1462);
        if (t1463) {
          int64_t t1464 = v3;
          int64_t t1465 = ((int64_t)UINT64_C(1));
          int64_t t1466 = ap_add(t1464,t1465);
          v3 = t1466;
          int64_t t1467 = v3;
          int64_t t1468 = v2;
          bool t1469 = (t1467 >= t1468);
          bool t1470 = t1469;
          if (!t1470) {
            ApString t1471 = v1;
            int64_t t1472 = v3;
            int64_t t1473 = f_source_byte(t1471,t1472);
            int64_t t1474 = ((int64_t)UINT64_C(10));
            bool t1475 = (t1473 == t1474);
            t1470 = t1475;
          }
          bool t1476 = t1470;
          if (!t1476) {
            ApString t1477 = v1;
            int64_t t1478 = v3;
            int64_t t1479 = f_source_byte(t1477,t1478);
            int64_t t1480 = ((int64_t)UINT64_C(13));
            bool t1481 = (t1479 == t1480);
            t1476 = t1481;
          }
          if (t1476) {
            uintptr_t t1482 = v0;
            int64_t t1483 = v4;
            int64_t t1484 = v14;
            ApString t1485 = AP_STR("incomplete string escape");
            f_lex_error(t1482,t1483,t1484,t1485);
          } else {
          }
        } else {
        }
        int64_t t1486 = v3;
        int64_t t1487 = ((int64_t)UINT64_C(1));
        int64_t t1488 = ap_add(t1486,t1487);
        v3 = t1488;
      }
      bool t1489 = v20;
      bool t1490 = !t1489;
      if (t1490) {
        uintptr_t t1491 = v0;
        int64_t t1492 = v4;
        int64_t t1493 = v14;
        ApString t1494 = AP_STR("unterminated string");
        f_lex_error(t1491,t1492,t1493,t1494);
      } else {
      }
      uintptr_t t1495 = v0;
      ApString t1496 = v1;
      int64_t t1497 = v19;
      int64_t t1498 = v3;
      int64_t t1499 = v19;
      int64_t t1500 = ap_sub(t1498,t1499);
      ApString t1501 = ap_slice(t1496,t1497,t1500);
      int64_t t1502 = v4;
      int64_t t1503 = v14;
      ApString t1504 = f_decode_string(t1495,t1501,t1502,t1503);
      v22 = t1504;
      int64_t t1505 = v3;
      int64_t t1506 = ((int64_t)UINT64_C(1));
      int64_t t1507 = ap_add(t1505,t1506);
      v3 = t1507;
      uintptr_t t1508 = v0;
      int64_t t1509 = ((int64_t)UINT64_C(4));
      ApString t1510 = v22;
      int64_t t1511 = v4;
      int64_t t1512 = v14;
      int64_t t1513 = v13;
      int64_t t1514 = v3;
      uintptr_t t1515 = f_token_add(t1508,t1509,t1510,t1511,t1512,t1513,t1514);
      int64_t t1516 = v5;
      int64_t t1517 = v3;
      int64_t t1518 = ap_add(t1516,t1517);
      int64_t t1519 = v13;
      int64_t t1520 = ap_sub(t1518,t1519);
      v5 = t1520;
      continue;
    } else {
    }
    int64_t t1521 = v8;
    int64_t t1522 = ((int64_t)UINT64_C(92));
    bool t1523 = (t1521 == t1522);
    if (t1523) {
      ApString t1524 = v1;
      int64_t t1525 = v3;
      int64_t t1526 = ((int64_t)UINT64_C(1));
      int64_t t1527 = ap_add(t1525,t1526);
      int64_t t1528 = f_source_byte(t1524,t1527);
      int64_t t1529 = ((int64_t)UINT64_C(110));
      bool t1530 = (t1528 != t1529);
      bool t1531 = t1530;
      if (!t1531) {
        ApString t1532 = v1;
        int64_t t1533 = v3;
        int64_t t1534 = ((int64_t)UINT64_C(2));
        int64_t t1535 = ap_add(t1533,t1534);
        int64_t t1536 = f_source_byte(t1532,t1535);
        int64_t t1537 = ((int64_t)UINT64_C(108));
        bool t1538 = (t1536 != t1537);
        t1531 = t1538;
      }
      bool t1539 = t1531;
      if (!t1539) {
        ApString t1540 = v1;
        int64_t t1541 = v3;
        int64_t t1542 = ((int64_t)UINT64_C(3));
        int64_t t1543 = ap_add(t1541,t1542);
        int64_t t1544 = f_source_byte(t1540,t1543);
        bool t1545 = f_isident(t1544);
        t1539 = t1545;
      }
      if (t1539) {
        uintptr_t t1546 = v0;
        int64_t t1547 = v4;
        int64_t t1548 = v14;
        ApString t1549 = AP_STR("outside strings only \\nl is supported");
        f_lex_error(t1546,t1547,t1548,t1549);
      } else {
      }
      int64_t t1550 = v3;
      int64_t t1551 = ((int64_t)UINT64_C(3));
      int64_t t1552 = ap_add(t1550,t1551);
      v3 = t1552;
      uintptr_t t1553 = v0;
      int64_t t1554 = ((int64_t)UINT64_C(5));
      ApString t1555 = AP_STR("\012");
      int64_t t1556 = v4;
      int64_t t1557 = v14;
      int64_t t1558 = v13;
      int64_t t1559 = v3;
      uintptr_t t1560 = f_token_add(t1553,t1554,t1555,t1556,t1557,t1558,t1559);
      int64_t t1561 = v5;
      int64_t t1562 = ((int64_t)UINT64_C(3));
      int64_t t1563 = ap_add(t1561,t1562);
      v5 = t1563;
      continue;
    } else {
    }
    int64_t t1564 = v3;
    int64_t t1565 = ((int64_t)UINT64_C(1));
    int64_t t1566 = ap_add(t1564,t1565);
    v3 = t1566;
    int64_t t1567 = ((int64_t)UINT64_C(18446744073709551615));
    v23 = t1567;
    int64_t t1568 = v8;
    int64_t t1569 = ((int64_t)UINT64_C(40));
    bool t1570 = (t1568 == t1569);
    if (t1570) {
      int64_t t1571 = ((int64_t)UINT64_C(6));
      v23 = t1571;
    } else {
    }
    int64_t t1572 = v8;
    int64_t t1573 = ((int64_t)UINT64_C(41));
    bool t1574 = (t1572 == t1573);
    if (t1574) {
      int64_t t1575 = ((int64_t)UINT64_C(7));
      v23 = t1575;
    } else {
    }
    int64_t t1576 = v8;
    int64_t t1577 = ((int64_t)UINT64_C(91));
    bool t1578 = (t1576 == t1577);
    if (t1578) {
      int64_t t1579 = ((int64_t)UINT64_C(8));
      v23 = t1579;
    } else {
    }
    int64_t t1580 = v8;
    int64_t t1581 = ((int64_t)UINT64_C(93));
    bool t1582 = (t1580 == t1581);
    if (t1582) {
      int64_t t1583 = ((int64_t)UINT64_C(9));
      v23 = t1583;
    } else {
    }
    int64_t t1584 = v8;
    int64_t t1585 = ((int64_t)UINT64_C(44));
    bool t1586 = (t1584 == t1585);
    if (t1586) {
      int64_t t1587 = ((int64_t)UINT64_C(10));
      v23 = t1587;
    } else {
    }
    int64_t t1588 = v8;
    int64_t t1589 = ((int64_t)UINT64_C(58));
    bool t1590 = (t1588 == t1589);
    if (t1590) {
      int64_t t1591 = ((int64_t)UINT64_C(11));
      v23 = t1591;
    } else {
    }
    int64_t t1592 = v8;
    int64_t t1593 = ((int64_t)UINT64_C(43));
    bool t1594 = (t1592 == t1593);
    if (t1594) {
      int64_t t1595 = ((int64_t)UINT64_C(12));
      v23 = t1595;
    } else {
    }
    int64_t t1596 = v8;
    int64_t t1597 = ((int64_t)UINT64_C(45));
    bool t1598 = (t1596 == t1597);
    if (t1598) {
      int64_t t1599 = ((int64_t)UINT64_C(13));
      v23 = t1599;
    } else {
    }
    int64_t t1600 = v8;
    int64_t t1601 = ((int64_t)UINT64_C(42));
    bool t1602 = (t1600 == t1601);
    if (t1602) {
      int64_t t1603 = ((int64_t)UINT64_C(14));
      v23 = t1603;
    } else {
    }
    int64_t t1604 = v8;
    int64_t t1605 = ((int64_t)UINT64_C(47));
    bool t1606 = (t1604 == t1605);
    if (t1606) {
      int64_t t1607 = ((int64_t)UINT64_C(15));
      v23 = t1607;
    } else {
    }
    int64_t t1608 = v8;
    int64_t t1609 = ((int64_t)UINT64_C(37));
    bool t1610 = (t1608 == t1609);
    if (t1610) {
      int64_t t1611 = ((int64_t)UINT64_C(16));
      v23 = t1611;
    } else {
    }
    int64_t t1612 = v8;
    int64_t t1613 = ((int64_t)UINT64_C(61));
    bool t1614 = (t1612 == t1613);
    if (t1614) {
      int64_t t1615 = ((int64_t)UINT64_C(18));
      v23 = t1615;
      ApString t1616 = v1;
      int64_t t1617 = v3;
      int64_t t1618 = f_source_byte(t1616,t1617);
      int64_t t1619 = ((int64_t)UINT64_C(61));
      bool t1620 = (t1618 == t1619);
      if (t1620) {
        int64_t t1621 = ((int64_t)UINT64_C(53));
        v23 = t1621;
        int64_t t1622 = v3;
        int64_t t1623 = ((int64_t)UINT64_C(1));
        int64_t t1624 = ap_add(t1622,t1623);
        v3 = t1624;
      } else {
      }
    } else {
    }
    int64_t t1625 = v8;
    int64_t t1626 = ((int64_t)UINT64_C(33));
    bool t1627 = (t1625 == t1626);
    bool t1628 = t1627;
    if (t1628) {
      ApString t1629 = v1;
      int64_t t1630 = v3;
      int64_t t1631 = f_source_byte(t1629,t1630);
      int64_t t1632 = ((int64_t)UINT64_C(61));
      bool t1633 = (t1631 == t1632);
      t1628 = t1633;
    }
    if (t1628) {
      int64_t t1634 = ((int64_t)UINT64_C(19));
      v23 = t1634;
      int64_t t1635 = v3;
      int64_t t1636 = ((int64_t)UINT64_C(1));
      int64_t t1637 = ap_add(t1635,t1636);
      v3 = t1637;
    } else {
    }
    int64_t t1638 = v8;
    int64_t t1639 = ((int64_t)UINT64_C(60));
    bool t1640 = (t1638 == t1639);
    if (t1640) {
      int64_t t1641 = ((int64_t)UINT64_C(20));
      v23 = t1641;
      ApString t1642 = v1;
      int64_t t1643 = v3;
      int64_t t1644 = f_source_byte(t1642,t1643);
      int64_t t1645 = ((int64_t)UINT64_C(61));
      bool t1646 = (t1644 == t1645);
      if (t1646) {
        int64_t t1647 = ((int64_t)UINT64_C(21));
        v23 = t1647;
        int64_t t1648 = v3;
        int64_t t1649 = ((int64_t)UINT64_C(1));
        int64_t t1650 = ap_add(t1648,t1649);
        v3 = t1650;
      } else {
      }
    } else {
    }
    int64_t t1651 = v8;
    int64_t t1652 = ((int64_t)UINT64_C(62));
    bool t1653 = (t1651 == t1652);
    if (t1653) {
      int64_t t1654 = ((int64_t)UINT64_C(22));
      v23 = t1654;
      ApString t1655 = v1;
      int64_t t1656 = v3;
      int64_t t1657 = f_source_byte(t1655,t1656);
      int64_t t1658 = ((int64_t)UINT64_C(61));
      bool t1659 = (t1657 == t1658);
      if (t1659) {
        int64_t t1660 = ((int64_t)UINT64_C(23));
        v23 = t1660;
        int64_t t1661 = v3;
        int64_t t1662 = ((int64_t)UINT64_C(1));
        int64_t t1663 = ap_add(t1661,t1662);
        v3 = t1663;
      } else {
      }
    } else {
    }
    int64_t t1664 = v23;
    int64_t t1665 = ((int64_t)UINT64_C(12));
    bool t1666 = (t1664 >= t1665);
    bool t1667 = t1666;
    if (t1667) {
      int64_t t1668 = v23;
      int64_t t1669 = ((int64_t)UINT64_C(16));
      bool t1670 = (t1668 <= t1669);
      t1667 = t1670;
    }
    bool t1671 = t1667;
    if (t1671) {
      ApString t1672 = v1;
      int64_t t1673 = v3;
      int64_t t1674 = f_source_byte(t1672,t1673);
      int64_t t1675 = ((int64_t)UINT64_C(61));
      bool t1676 = (t1674 == t1675);
      t1671 = t1676;
    }
    if (t1671) {
      int64_t t1677 = v23;
      int64_t t1678 = ((int64_t)UINT64_C(35));
      int64_t t1679 = ap_add(t1677,t1678);
      v23 = t1679;
      int64_t t1680 = v3;
      int64_t t1681 = ((int64_t)UINT64_C(1));
      int64_t t1682 = ap_add(t1680,t1681);
      v3 = t1682;
    } else {
    }
    int64_t t1683 = v23;
    int64_t t1684 = ((int64_t)UINT64_C(0));
    bool t1685 = (t1683 < t1684);
    if (t1685) {
      uintptr_t t1686 = v0;
      int64_t t1687 = v4;
      int64_t t1688 = v14;
      ApString t1689 = AP_STR("unexpected source character");
      f_lex_error(t1686,t1687,t1688,t1689);
    } else {
    }
    int64_t t1690 = v23;
    int64_t t1691 = ((int64_t)UINT64_C(6));
    bool t1692 = (t1690 == t1691);
    bool t1693 = t1692;
    if (!t1693) {
      int64_t t1694 = v23;
      int64_t t1695 = ((int64_t)UINT64_C(8));
      bool t1696 = (t1694 == t1695);
      t1693 = t1696;
    }
    if (t1693) {
      int64_t t1697 = v7;
      int64_t t1698 = ((int64_t)UINT64_C(256));
      bool t1699 = (t1697 >= t1698);
      if (t1699) {
        uintptr_t t1700 = v0;
        int64_t t1701 = v4;
        int64_t t1702 = v14;
        ApString t1703 = AP_STR("delimiter nesting exceeds 256");
        f_lex_error(t1700,t1701,t1702,t1703);
      } else {
      }
      ApBuffer t1704 = v6;
      int64_t t1705 = v7;
      int64_t t1706 = v23;
      ap_store(t1704,t1705,1,t1706);
      int64_t t1707 = v7;
      int64_t t1708 = ((int64_t)UINT64_C(1));
      int64_t t1709 = ap_add(t1707,t1708);
      v7 = t1709;
    } else {
    }
    int64_t t1710 = v23;
    int64_t t1711 = ((int64_t)UINT64_C(7));
    bool t1712 = (t1710 == t1711);
    bool t1713 = t1712;
    if (!t1713) {
      int64_t t1714 = v23;
      int64_t t1715 = ((int64_t)UINT64_C(9));
      bool t1716 = (t1714 == t1715);
      t1713 = t1716;
    }
    if (t1713) {
      int64_t t1717 = v7;
      int64_t t1718 = ((int64_t)UINT64_C(0));
      bool t1719 = (t1717 == t1718);
      bool t1720 = t1719;
      if (!t1720) {
        ApBuffer t1721 = v6;
        int64_t t1722 = v7;
        int64_t t1723 = ((int64_t)UINT64_C(1));
        int64_t t1724 = ap_sub(t1722,t1723);
        int64_t t1725 = ap_scale(ap_load(t1721,t1724,1));
        int64_t t1726 = ap_unscale(t1725);
        int64_t t1727 = ((int64_t)UINT64_C(1));
        int64_t t1728 = ap_add(t1726,t1727);
        int64_t t1729 = v23;
        bool t1730 = (t1728 != t1729);
        t1720 = t1730;
      }
      if (t1720) {
        uintptr_t t1731 = v0;
        int64_t t1732 = v4;
        int64_t t1733 = v14;
        ApString t1734 = AP_STR("mismatched closing delimiter");
        f_lex_error(t1731,t1732,t1733,t1734);
      } else {
      }
      int64_t t1735 = v7;
      int64_t t1736 = ((int64_t)UINT64_C(1));
      int64_t t1737 = ap_sub(t1735,t1736);
      v7 = t1737;
    } else {
    }
    uintptr_t t1738 = v0;
    int64_t t1739 = v23;
    ApString t1740 = v1;
    int64_t t1741 = v13;
    int64_t t1742 = v3;
    int64_t t1743 = v13;
    int64_t t1744 = ap_sub(t1742,t1743);
    ApString t1745 = ap_slice(t1740,t1741,t1744);
    int64_t t1746 = v4;
    int64_t t1747 = v14;
    int64_t t1748 = v13;
    int64_t t1749 = v3;
    uintptr_t t1750 = f_token_add(t1738,t1739,t1745,t1746,t1747,t1748,t1749);
    int64_t t1751 = v5;
    int64_t t1752 = v3;
    int64_t t1753 = ap_add(t1751,t1752);
    int64_t t1754 = v13;
    int64_t t1755 = ap_sub(t1753,t1754);
    v5 = t1755;
  }
  int64_t t1756 = v7;
  int64_t t1757 = ((int64_t)UINT64_C(0));
  bool t1758 = (t1756 != t1757);
  if (t1758) {
    uintptr_t t1759 = v0;
    int64_t t1760 = v4;
    int64_t t1761 = v5;
    ApString t1762 = AP_STR("unclosed parenthesis or bracket");
    f_lex_error(t1759,t1760,t1761,t1762);
  } else {
  }
  ApBuffer t1763 = v6;
  ap_free(t1763);
  uintptr_t t1764 = v0;
  int64_t t1765 = ((int64_t)UINT64_C(0));
  ApString t1766 = AP_STR("end of file");
  int64_t t1767 = v4;
  int64_t t1768 = v5;
  int64_t t1769 = v2;
  int64_t t1770 = v2;
  uintptr_t t1771 = f_token_add(t1764,t1765,t1766,t1767,t1768,t1769,t1770);
}
static uintptr_t f_peek(uintptr_t v0) {
  int64_t v1;
  uintptr_t t1772 = v0;
  int64_t t1773 = ((int64_t)UINT64_C(5));
  int64_t t1774 = f_get(t1772,t1773);
  v1 = t1774;
  int64_t t1775 = v1;
  int64_t t1776 = ((int64_t)UINT64_C(0));
  bool t1777 = (t1775 >= t1776);
  bool t1778 = t1777;
  if (t1778) {
    int64_t t1779 = v1;
    uintptr_t t1780 = v0;
    int64_t t1781 = ((int64_t)UINT64_C(4));
    int64_t t1782 = f_get(t1780,t1781);
    bool t1783 = (t1779 < t1782);
    t1778 = t1783;
  }
  ApString t1784 = AP_STR("internal token index");
  f_need(t1778,t1784);
  uintptr_t t1785 = v0;
  int64_t t1786 = ((int64_t)UINT64_C(3));
  uintptr_t t1787 = f_getp(t1785,t1786);
  int64_t t1788 = v1;
  int64_t t1789 = ((int64_t)UINT64_C(64));
  int64_t t1790 = ap_mul(t1788,t1789);
  uintptr_t t1791 = f_at(t1787,t1790);
  return t1791;
}
static int64_t f_kind(uintptr_t v0) {
  uintptr_t t1792 = v0;
  uintptr_t t1793 = f_peek(t1792);
  int64_t t1794 = ((int64_t)UINT64_C(0));
  int64_t t1795 = f_get(t1793,t1794);
  return t1795;
}
static uintptr_t f_take(uintptr_t v0) {
  uintptr_t v1;
  uintptr_t t1796 = v0;
  uintptr_t t1797 = f_peek(t1796);
  v1 = t1797;
  uintptr_t t1798 = v1;
  int64_t t1799 = ((int64_t)UINT64_C(0));
  int64_t t1800 = f_get(t1798,t1799);
  int64_t t1801 = ((int64_t)UINT64_C(0));
  bool t1802 = (t1800 != t1801);
  if (t1802) {
    uintptr_t t1803 = v0;
    int64_t t1804 = ((int64_t)UINT64_C(5));
    uintptr_t t1805 = v0;
    int64_t t1806 = ((int64_t)UINT64_C(5));
    int64_t t1807 = f_get(t1805,t1806);
    int64_t t1808 = ((int64_t)UINT64_C(1));
    int64_t t1809 = ap_add(t1807,t1808);
    f_put(t1803,t1804,t1809);
  } else {
  }
  uintptr_t t1810 = v1;
  return t1810;
}
static bool f_accept(uintptr_t v0,int64_t v1) {
  uintptr_t t1811 = v0;
  int64_t t1812 = f_kind(t1811);
  int64_t t1813 = v1;
  bool t1814 = (t1812 != t1813);
  if (t1814) {
    bool t1815 = false;
    return t1815;
  } else {
  }
  uintptr_t t1816 = v0;
  uintptr_t t1817 = f_take(t1816);
  bool t1818 = true;
  return t1818;
}
static uintptr_t f_expect(uintptr_t v0,int64_t v1,ApString v2) {
  uintptr_t t1819 = v0;
  int64_t t1820 = f_kind(t1819);
  int64_t t1821 = v1;
  bool t1822 = (t1820 != t1821);
  if (t1822) {
    uintptr_t t1823 = v0;
    uintptr_t t1824 = v0;
    uintptr_t t1825 = f_peek(t1824);
    ApString t1826 = v2;
    f_fail(t1823,t1825,t1826);
  } else {
  }
  uintptr_t t1827 = v0;
  uintptr_t t1828 = f_take(t1827);
  return t1828;
}
static void f_skip_lines(uintptr_t v0) {
  while (true) {
    uintptr_t t1829 = v0;
    int64_t t1830 = ((int64_t)UINT64_C(1));
    bool t1831 = f_accept(t1829,t1830);
    if (!t1831) break;
  }
}
static void f_finish_line(uintptr_t v0) {
  uintptr_t t1832 = v0;
  int64_t t1833 = ((int64_t)UINT64_C(1));
  bool t1834 = f_accept(t1832,t1833);
  bool t1835 = !t1834;
  bool t1836 = t1835;
  if (t1836) {
    uintptr_t t1837 = v0;
    int64_t t1838 = f_kind(t1837);
    int64_t t1839 = ((int64_t)UINT64_C(0));
    bool t1840 = (t1838 != t1839);
    t1836 = t1840;
  }
  if (t1836) {
    uintptr_t t1841 = v0;
    uintptr_t t1842 = v0;
    uintptr_t t1843 = f_peek(t1842);
    ApString t1844 = AP_STR("expected a newline after the statement");
    f_fail(t1841,t1843,t1844);
  } else {
  }
}
static ApString f_builtin_spec(ApString v0) {
  ApString t1845 = v0;
  ApString t1846 = AP_STR("float32_bits");
  bool t1847 = ap_equal(t1845,t1846);
  if (t1847) {
    ApString t1848 = AP_STR("I-F");
    return t1848;
  } else {
  }
  ApString t1849 = v0;
  ApString t1850 = AP_STR("float32_from_bits");
  bool t1851 = ap_equal(t1849,t1850);
  if (t1851) {
    ApString t1852 = AP_STR("F-I");
    return t1852;
  } else {
  }
  ApString t1853 = v0;
  ApString t1854 = AP_STR("atomic_load");
  bool t1855 = ap_equal(t1853,t1854);
  if (t1855) {
    ApString t1856 = AP_STR("I-BI");
    return t1856;
  } else {
  }
  ApString t1857 = v0;
  ApString t1858 = AP_STR("atomic_store");
  bool t1859 = ap_equal(t1857,t1858);
  if (t1859) {
    ApString t1860 = AP_STR("V-BII");
    return t1860;
  } else {
  }
  ApString t1861 = v0;
  ApString t1862 = AP_STR("atomic_add");
  bool t1863 = ap_equal(t1861,t1862);
  if (t1863) {
    ApString t1864 = AP_STR("I-BII");
    return t1864;
  } else {
  }
  ApString t1865 = v0;
  ApString t1866 = AP_STR("_parallel");
  bool t1867 = ap_equal(t1865,t1866);
  if (t1867) {
    ApString t1868 = AP_STR("V!PBIIPP");
    return t1868;
  } else {
  }
  ApString t1869 = v0;
  ApString t1870 = AP_STR("dlopen");
  bool t1871 = ap_equal(t1869,t1870);
  if (t1871) {
    ApString t1872 = AP_STR("P!PI");
    return t1872;
  } else {
  }
  ApString t1873 = v0;
  ApString t1874 = AP_STR("dlsym");
  bool t1875 = ap_equal(t1873,t1874);
  if (t1875) {
    ApString t1876 = AP_STR("P!PP");
    return t1876;
  } else {
  }
  ApString t1877 = v0;
  ApString t1878 = AP_STR("ccall");
  bool t1879 = ap_equal(t1877,t1878);
  if (t1879) {
    ApString t1880 = AP_STR("I!*");
    return t1880;
  } else {
  }
  ApString t1881 = v0;
  ApString t1882 = AP_STR("ccallp");
  bool t1883 = ap_equal(t1881,t1882);
  if (t1883) {
    ApString t1884 = AP_STR("P!*");
    return t1884;
  } else {
  }
  ApString t1885 = v0;
  ApString t1886 = AP_STR("ccallf");
  bool t1887 = ap_equal(t1885,t1886);
  bool t1888 = t1887;
  if (!t1888) {
    ApString t1889 = v0;
    ApString t1890 = AP_STR("ccallf1");
    bool t1891 = ap_equal(t1889,t1890);
    t1888 = t1891;
  }
  bool t1892 = t1888;
  if (!t1892) {
    ApString t1893 = v0;
    ApString t1894 = AP_STR("ccallf2");
    bool t1895 = ap_equal(t1893,t1894);
    t1892 = t1895;
  }
  bool t1896 = t1892;
  if (!t1896) {
    ApString t1897 = v0;
    ApString t1898 = AP_STR("ccallf3");
    bool t1899 = ap_equal(t1897,t1898);
    t1896 = t1899;
  }
  if (t1896) {
    ApString t1900 = AP_STR("F!*");
    return t1900;
  } else {
  }
  ApString t1901 = v0;
  ApString t1902 = AP_STR("ccallv");
  bool t1903 = ap_equal(t1901,t1902);
  if (t1903) {
    ApString t1904 = AP_STR("V!*");
    return t1904;
  } else {
  }
  ApString t1905 = v0;
  ApString t1906 = AP_STR("argc");
  bool t1907 = ap_equal(t1905,t1906);
  if (t1907) {
    ApString t1908 = AP_STR("I-");
    return t1908;
  } else {
  }
  ApString t1909 = v0;
  ApString t1910 = AP_STR("arg");
  bool t1911 = ap_equal(t1909,t1910);
  if (t1911) {
    ApString t1912 = AP_STR("S-I");
    return t1912;
  } else {
  }
  ApString t1913 = v0;
  ApString t1914 = AP_STR("envp");
  bool t1915 = ap_equal(t1913,t1914);
  if (t1915) {
    ApString t1916 = AP_STR("P!");
    return t1916;
  } else {
  }
  ApString t1917 = v0;
  ApString t1918 = AP_STR("clock");
  bool t1919 = ap_equal(t1917,t1918);
  if (t1919) {
    ApString t1920 = AP_STR("Nt");
    return t1920;
  } else {
  }
  ApString t1921 = v0;
  ApString t1922 = AP_STR("sleep");
  bool t1923 = ap_equal(t1921,t1922);
  if (t1923) {
    ApString t1924 = AP_STR("VtN");
    return t1924;
  } else {
  }
  ApString t1925 = v0;
  ApString t1926 = AP_STR("sleep_until");
  bool t1927 = ap_equal(t1925,t1926);
  if (t1927) {
    ApString t1928 = AP_STR("VtN");
    return t1928;
  } else {
  }
  ApString t1929 = v0;
  ApString t1930 = AP_STR("int");
  bool t1931 = ap_equal(t1929,t1930);
  if (t1931) {
    ApString t1932 = AP_STR("I-C");
    return t1932;
  } else {
  }
  ApString t1933 = v0;
  ApString t1934 = AP_STR("number");
  bool t1935 = ap_equal(t1933,t1934);
  if (t1935) {
    ApString t1936 = AP_STR("N-R");
    return t1936;
  } else {
  }
  ApString t1937 = v0;
  ApString t1938 = AP_STR("float");
  bool t1939 = ap_equal(t1937,t1938);
  if (t1939) {
    ApString t1940 = AP_STR("F-C");
    return t1940;
  } else {
  }
  ApString t1941 = v0;
  ApString t1942 = AP_STR("float_bits");
  bool t1943 = ap_equal(t1941,t1942);
  if (t1943) {
    ApString t1944 = AP_STR("I-F");
    return t1944;
  } else {
  }
  ApString t1945 = v0;
  ApString t1946 = AP_STR("float_from_bits");
  bool t1947 = ap_equal(t1945,t1946);
  if (t1947) {
    ApString t1948 = AP_STR("F!I");
    return t1948;
  } else {
  }
  ApString t1949 = v0;
  ApString t1950 = AP_STR("sqrt");
  bool t1951 = ap_equal(t1949,t1950);
  if (t1951) {
    ApString t1952 = AP_STR("F-F");
    return t1952;
  } else {
  }
  ApString t1953 = v0;
  ApString t1954 = AP_STR("trunc");
  bool t1955 = ap_equal(t1953,t1954);
  if (t1955) {
    ApString t1956 = AP_STR("I-F");
    return t1956;
  } else {
  }
  ApString t1957 = v0;
  ApString t1958 = AP_STR("floor");
  bool t1959 = ap_equal(t1957,t1958);
  if (t1959) {
    ApString t1960 = AP_STR("X-D");
    return t1960;
  } else {
  }
  ApString t1961 = v0;
  ApString t1962 = AP_STR("ceil");
  bool t1963 = ap_equal(t1961,t1962);
  if (t1963) {
    ApString t1964 = AP_STR("X-D");
    return t1964;
  } else {
  }
  ApString t1965 = v0;
  ApString t1966 = AP_STR("abs");
  bool t1967 = ap_equal(t1965,t1966);
  if (t1967) {
    ApString t1968 = AP_STR("X-C");
    return t1968;
  } else {
  }
  ApString t1969 = v0;
  ApString t1970 = AP_STR("alloc");
  bool t1971 = ap_equal(t1969,t1970);
  if (t1971) {
    ApString t1972 = AP_STR("B-R");
    return t1972;
  } else {
  }
  ApString t1973 = v0;
  ApString t1974 = AP_STR("free");
  bool t1975 = ap_equal(t1973,t1974);
  if (t1975) {
    ApString t1976 = AP_STR("V-B");
    return t1976;
  } else {
  }
  ApString t1977 = v0;
  ApString t1978 = AP_STR("len");
  bool t1979 = ap_equal(t1977,t1978);
  if (t1979) {
    ApString t1980 = AP_STR("N-T");
    return t1980;
  } else {
  }
  ApString t1981 = v0;
  ApString t1982 = AP_STR("fill_range");
  bool t1983 = ap_equal(t1981,t1982);
  bool t1984 = t1983;
  if (!t1984) {
    ApString t1985 = v0;
    ApString t1986 = AP_STR("fill32_range");
    bool t1987 = ap_equal(t1985,t1986);
    t1984 = t1987;
  }
  if (t1984) {
    ApString t1988 = AP_STR("V-BRRR");
    return t1988;
  } else {
  }
  ApString t1989 = v0;
  ApString t1990 = AP_STR("fill64_range");
  bool t1991 = ap_equal(t1989,t1990);
  if (t1991) {
    ApString t1992 = AP_STR("V-BRRI");
    return t1992;
  } else {
  }
  ApString t1993 = v0;
  ApString t1994 = AP_STR("fill32");
  bool t1995 = ap_equal(t1993,t1994);
  if (t1995) {
    ApString t1996 = AP_STR("V-BR");
    return t1996;
  } else {
  }
  ApString t1997 = v0;
  ApString t1998 = AP_STR("fill64");
  bool t1999 = ap_equal(t1997,t1998);
  if (t1999) {
    ApString t2000 = AP_STR("V-BI");
    return t2000;
  } else {
  }
  ApString t2001 = v0;
  ApString t2002 = AP_STR("fill");
  bool t2003 = ap_equal(t2001,t2002);
  if (t2003) {
    ApString t2004 = AP_STR("V-BR");
    return t2004;
  } else {
  }
  ApString t2005 = v0;
  ApString t2006 = AP_STR("write_bytes");
  bool t2007 = ap_equal(t2005,t2006);
  if (t2007) {
    ApString t2008 = AP_STR("V-BRR");
    return t2008;
  } else {
  }
  ApString t2009 = v0;
  ApString t2010 = AP_STR("char_at");
  bool t2011 = ap_equal(t2009,t2010);
  if (t2011) {
    ApString t2012 = AP_STR("S-SR");
    return t2012;
  } else {
  }
  ApString t2013 = v0;
  ApString t2014 = AP_STR("byte_at");
  bool t2015 = ap_equal(t2013,t2014);
  if (t2015) {
    ApString t2016 = AP_STR("I-SR");
    return t2016;
  } else {
  }
  ApString t2017 = v0;
  ApString t2018 = AP_STR("slice");
  bool t2019 = ap_equal(t2017,t2018);
  if (t2019) {
    ApString t2020 = AP_STR("S-SRR");
    return t2020;
  } else {
  }
  ApString t2021 = v0;
  ApString t2022 = AP_STR("view");
  bool t2023 = ap_equal(t2021,t2022);
  if (t2023) {
    ApString t2024 = AP_STR("S!BRR");
    return t2024;
  } else {
  }
  ApString t2025 = v0;
  ApString t2026 = AP_STR("string_at");
  bool t2027 = ap_equal(t2025,t2026);
  if (t2027) {
    ApString t2028 = AP_STR("S!PR");
    return t2028;
  } else {
  }
  ApString t2029 = v0;
  ApString t2030 = AP_STR("copy");
  bool t2031 = ap_equal(t2029,t2030);
  if (t2031) {
    ApString t2032 = AP_STR("V-BRTRR");
    return t2032;
  } else {
  }
  ApString t2033 = v0;
  ApString t2034 = AP_STR("address");
  bool t2035 = ap_equal(t2033,t2034);
  if (t2035) {
    ApString t2036 = AP_STR("P!T");
    return t2036;
  } else {
  }
  ApString t2037 = v0;
  ApString t2038 = AP_STR("pointer");
  bool t2039 = ap_equal(t2037,t2038);
  if (t2039) {
    ApString t2040 = AP_STR("P!I");
    return t2040;
  } else {
  }
  ApString t2041 = v0;
  ApString t2042 = AP_STR("address_int");
  bool t2043 = ap_equal(t2041,t2042);
  if (t2043) {
    ApString t2044 = AP_STR("I!P");
    return t2044;
  } else {
  }
  ApString t2045 = v0;
  ApString t2046 = AP_STR("offset");
  bool t2047 = ap_equal(t2045,t2046);
  if (t2047) {
    ApString t2048 = AP_STR("P!PR");
    return t2048;
  } else {
  }
  ApString t2049 = v0;
  ApString t2050 = AP_STR("band");
  bool t2051 = ap_equal(t2049,t2050);
  if (t2051) {
    ApString t2052 = AP_STR("I-II");
    return t2052;
  } else {
  }
  ApString t2053 = v0;
  ApString t2054 = AP_STR("bor");
  bool t2055 = ap_equal(t2053,t2054);
  if (t2055) {
    ApString t2056 = AP_STR("I-II");
    return t2056;
  } else {
  }
  ApString t2057 = v0;
  ApString t2058 = AP_STR("bxor");
  bool t2059 = ap_equal(t2057,t2058);
  if (t2059) {
    ApString t2060 = AP_STR("I-II");
    return t2060;
  } else {
  }
  ApString t2061 = v0;
  ApString t2062 = AP_STR("bnot");
  bool t2063 = ap_equal(t2061,t2062);
  if (t2063) {
    ApString t2064 = AP_STR("I-I");
    return t2064;
  } else {
  }
  ApString t2065 = v0;
  ApString t2066 = AP_STR("shl");
  bool t2067 = ap_equal(t2065,t2066);
  if (t2067) {
    ApString t2068 = AP_STR("I-II");
    return t2068;
  } else {
  }
  ApString t2069 = v0;
  ApString t2070 = AP_STR("shr");
  bool t2071 = ap_equal(t2069,t2070);
  if (t2071) {
    ApString t2072 = AP_STR("I-II");
    return t2072;
  } else {
  }
  ApString t2073 = v0;
  ApString t2074 = AP_STR("sar");
  bool t2075 = ap_equal(t2073,t2074);
  if (t2075) {
    ApString t2076 = AP_STR("I-II");
    return t2076;
  } else {
  }
  ApString t2077 = v0;
  ApString t2078 = AP_STR("assert");
  bool t2079 = ap_equal(t2077,t2078);
  if (t2079) {
    ApString t2080 = AP_STR("V-O");
    return t2080;
  } else {
  }
  ApString t2081 = v0;
  ApString t2082 = AP_STR("syscall");
  bool t2083 = ap_equal(t2081,t2082);
  if (t2083) {
    ApString t2084 = AP_STR("I!IQQQQQQ");
    return t2084;
  } else {
  }
  ApString t2085 = v0;
  ApString t2086 = AP_STR("asm32");
  bool t2087 = ap_equal(t2085,t2086);
  if (t2087) {
    ApString t2088 = AP_STR("I!*");
    return t2088;
  } else {
  }
  ApString t2089 = v0;
  ApString t2090 = AP_STR("_raster_line");
  bool t2091 = ap_equal(t2089,t2090);
  if (t2091) {
    ApString t2092 = AP_STR("V-BFFFFFFII");
    return t2092;
  } else {
  }
  ApString t2093 = v0;
  ApString t2094 = AP_STR("load8");
  bool t2095 = ap_equal(t2093,t2094);
  if (t2095) {
    ApString t2096 = AP_STR("N-BR");
    return t2096;
  } else {
  }
  ApString t2097 = v0;
  ApString t2098 = AP_STR("store8");
  bool t2099 = ap_equal(t2097,t2098);
  if (t2099) {
    ApString t2100 = AP_STR("V-BRR");
    return t2100;
  } else {
  }
  ApString t2101 = v0;
  ApString t2102 = AP_STR("peek8");
  bool t2103 = ap_equal(t2101,t2102);
  if (t2103) {
    ApString t2104 = AP_STR("N!P");
    return t2104;
  } else {
  }
  ApString t2105 = v0;
  ApString t2106 = AP_STR("poke8");
  bool t2107 = ap_equal(t2105,t2106);
  if (t2107) {
    ApString t2108 = AP_STR("V!PR");
    return t2108;
  } else {
  }
  ApString t2109 = v0;
  ApString t2110 = AP_STR("load16");
  bool t2111 = ap_equal(t2109,t2110);
  if (t2111) {
    ApString t2112 = AP_STR("N-BR");
    return t2112;
  } else {
  }
  ApString t2113 = v0;
  ApString t2114 = AP_STR("store16");
  bool t2115 = ap_equal(t2113,t2114);
  if (t2115) {
    ApString t2116 = AP_STR("V-BRR");
    return t2116;
  } else {
  }
  ApString t2117 = v0;
  ApString t2118 = AP_STR("peek16");
  bool t2119 = ap_equal(t2117,t2118);
  if (t2119) {
    ApString t2120 = AP_STR("N!P");
    return t2120;
  } else {
  }
  ApString t2121 = v0;
  ApString t2122 = AP_STR("poke16");
  bool t2123 = ap_equal(t2121,t2122);
  if (t2123) {
    ApString t2124 = AP_STR("V!PR");
    return t2124;
  } else {
  }
  ApString t2125 = v0;
  ApString t2126 = AP_STR("load32");
  bool t2127 = ap_equal(t2125,t2126);
  if (t2127) {
    ApString t2128 = AP_STR("N-BR");
    return t2128;
  } else {
  }
  ApString t2129 = v0;
  ApString t2130 = AP_STR("store32");
  bool t2131 = ap_equal(t2129,t2130);
  if (t2131) {
    ApString t2132 = AP_STR("V-BRR");
    return t2132;
  } else {
  }
  ApString t2133 = v0;
  ApString t2134 = AP_STR("peek32");
  bool t2135 = ap_equal(t2133,t2134);
  if (t2135) {
    ApString t2136 = AP_STR("N!P");
    return t2136;
  } else {
  }
  ApString t2137 = v0;
  ApString t2138 = AP_STR("poke32");
  bool t2139 = ap_equal(t2137,t2138);
  if (t2139) {
    ApString t2140 = AP_STR("V!PR");
    return t2140;
  } else {
  }
  ApString t2141 = v0;
  ApString t2142 = AP_STR("load64");
  bool t2143 = ap_equal(t2141,t2142);
  if (t2143) {
    ApString t2144 = AP_STR("I-BR");
    return t2144;
  } else {
  }
  ApString t2145 = v0;
  ApString t2146 = AP_STR("store64");
  bool t2147 = ap_equal(t2145,t2146);
  if (t2147) {
    ApString t2148 = AP_STR("V-BRI");
    return t2148;
  } else {
  }
  ApString t2149 = v0;
  ApString t2150 = AP_STR("peek64");
  bool t2151 = ap_equal(t2149,t2150);
  if (t2151) {
    ApString t2152 = AP_STR("I!P");
    return t2152;
  } else {
  }
  ApString t2153 = v0;
  ApString t2154 = AP_STR("poke64");
  bool t2155 = ap_equal(t2153,t2154);
  if (t2155) {
    ApString t2156 = AP_STR("V!PI");
    return t2156;
  } else {
  }
  ApString t2157 = v0;
  ApString t2158 = AP_STR("loadnum");
  bool t2159 = ap_equal(t2157,t2158);
  if (t2159) {
    ApString t2160 = AP_STR("N-BR");
    return t2160;
  } else {
  }
  ApString t2161 = v0;
  ApString t2162 = AP_STR("storenum");
  bool t2163 = ap_equal(t2161,t2162);
  if (t2163) {
    ApString t2164 = AP_STR("V-BRN");
    return t2164;
  } else {
  }
  ApString t2165 = v0;
  ApString t2166 = AP_STR("peeknum");
  bool t2167 = ap_equal(t2165,t2166);
  if (t2167) {
    ApString t2168 = AP_STR("N!P");
    return t2168;
  } else {
  }
  ApString t2169 = v0;
  ApString t2170 = AP_STR("pokenum");
  bool t2171 = ap_equal(t2169,t2170);
  if (t2171) {
    ApString t2172 = AP_STR("V!PN");
    return t2172;
  } else {
  }
  ApString t2173 = v0;
  ApString t2174 = AP_STR("loadfloat");
  bool t2175 = ap_equal(t2173,t2174);
  if (t2175) {
    ApString t2176 = AP_STR("F-BR");
    return t2176;
  } else {
  }
  ApString t2177 = v0;
  ApString t2178 = AP_STR("storefloat");
  bool t2179 = ap_equal(t2177,t2178);
  if (t2179) {
    ApString t2180 = AP_STR("V-BRF");
    return t2180;
  } else {
  }
  ApString t2181 = v0;
  ApString t2182 = AP_STR("peekfloat");
  bool t2183 = ap_equal(t2181,t2182);
  if (t2183) {
    ApString t2184 = AP_STR("F!P");
    return t2184;
  } else {
  }
  ApString t2185 = v0;
  ApString t2186 = AP_STR("pokefloat");
  bool t2187 = ap_equal(t2185,t2186);
  if (t2187) {
    ApString t2188 = AP_STR("V!PF");
    return t2188;
  } else {
  }
  ApString t2189 = AP_STR("");
  return t2189;
}
static int64_t f_typecode(ApString v0,bool v1) {
  ApString t2190 = v0;
  ApString t2191 = AP_STR("number");
  bool t2192 = ap_equal(t2190,t2191);
  bool t2193 = t2192;
  if (!t2193) {
    ApString t2194 = v0;
    ApString t2195 = AP_STR("num");
    bool t2196 = ap_equal(t2194,t2195);
    t2193 = t2196;
  }
  if (t2193) {
    int64_t t2197 = ((int64_t)UINT64_C(0));
    return t2197;
  } else {
  }
  ApString t2198 = v0;
  ApString t2199 = AP_STR("string");
  bool t2200 = ap_equal(t2198,t2199);
  if (t2200) {
    int64_t t2201 = ((int64_t)UINT64_C(1));
    return t2201;
  } else {
  }
  ApString t2202 = v0;
  ApString t2203 = AP_STR("bool");
  bool t2204 = ap_equal(t2202,t2203);
  if (t2204) {
    int64_t t2205 = ((int64_t)UINT64_C(2));
    return t2205;
  } else {
  }
  ApString t2206 = v0;
  ApString t2207 = AP_STR("int");
  bool t2208 = ap_equal(t2206,t2207);
  if (t2208) {
    int64_t t2209 = ((int64_t)UINT64_C(3));
    return t2209;
  } else {
  }
  ApString t2210 = v0;
  ApString t2211 = AP_STR("buffer");
  bool t2212 = ap_equal(t2210,t2211);
  if (t2212) {
    int64_t t2213 = ((int64_t)UINT64_C(4));
    return t2213;
  } else {
  }
  ApString t2214 = v0;
  ApString t2215 = AP_STR("pointer");
  bool t2216 = ap_equal(t2214,t2215);
  bool t2217 = t2216;
  if (!t2217) {
    ApString t2218 = v0;
    ApString t2219 = AP_STR("ptr");
    bool t2220 = ap_equal(t2218,t2219);
    t2217 = t2220;
  }
  if (t2217) {
    int64_t t2221 = ((int64_t)UINT64_C(5));
    return t2221;
  } else {
  }
  ApString t2222 = v0;
  ApString t2223 = AP_STR("void");
  bool t2224 = ap_equal(t2222,t2223);
  bool t2225 = t2224;
  if (t2225) {
    bool t2226 = v1;
    t2225 = t2226;
  }
  if (t2225) {
    int64_t t2227 = ((int64_t)UINT64_C(6));
    return t2227;
  } else {
  }
  ApString t2228 = v0;
  ApString t2229 = AP_STR("float");
  bool t2230 = ap_equal(t2228,t2229);
  bool t2231 = t2230;
  if (!t2231) {
    ApString t2232 = v0;
    ApString t2233 = AP_STR("f64");
    bool t2234 = ap_equal(t2232,t2233);
    t2231 = t2234;
  }
  if (t2231) {
    int64_t t2235 = ((int64_t)UINT64_C(7));
    return t2235;
  } else {
  }
  int64_t t2236 = ((int64_t)UINT64_C(18446744073709551615));
  return t2236;
}
static int64_t f_read_type(uintptr_t v0,bool v1) {
  uintptr_t v2;
  int64_t v3;
  uintptr_t t2237 = v0;
  int64_t t2238 = ((int64_t)UINT64_C(2));
  ApString t2239 = AP_STR("expected a type name");
  uintptr_t t2240 = f_expect(t2237,t2238,t2239);
  v2 = t2240;
  uintptr_t t2241 = v2;
  int64_t t2242 = ((int64_t)UINT64_C(1));
  ApString t2243 = f_gets(t2241,t2242);
  bool t2244 = v1;
  int64_t t2245 = f_typecode(t2243,t2244);
  v3 = t2245;
  int64_t t2246 = v3;
  int64_t t2247 = ((int64_t)UINT64_C(0));
  bool t2248 = (t2246 < t2247);
  if (t2248) {
    uintptr_t t2249 = v0;
    uintptr_t t2250 = v2;
    ApString t2251 = AP_STR("unknown or disallowed type");
    f_fail(t2249,t2250,t2251);
  } else {
  }
  int64_t t2252 = v3;
  return t2252;
}
static bool f_numeric(int64_t v0) {
  int64_t t2253 = v0;
  int64_t t2254 = ((int64_t)UINT64_C(0));
  bool t2255 = (t2253 == t2254);
  bool t2256 = t2255;
  if (!t2256) {
    int64_t t2257 = v0;
    int64_t t2258 = ((int64_t)UINT64_C(3));
    bool t2259 = (t2257 == t2258);
    t2256 = t2259;
  }
  bool t2260 = t2256;
  if (!t2260) {
    int64_t t2261 = v0;
    int64_t t2262 = ((int64_t)UINT64_C(7));
    bool t2263 = (t2261 == t2262);
    t2260 = t2263;
  }
  return t2260;
}
static void f_push_scope(uintptr_t v0) {
  uintptr_t v1;
  uintptr_t t2264 = v0;
  int64_t t2265 = ((int64_t)UINT64_C(32));
  uintptr_t t2266 = f_arena(t2264,t2265);
  v1 = t2266;
  uintptr_t t2267 = v1;
  int64_t t2268 = ((int64_t)UINT64_C(1));
  uintptr_t t2269 = v0;
  int64_t t2270 = ((int64_t)UINT64_C(6));
  uintptr_t t2271 = f_getp(t2269,t2270);
  f_putp(t2267,t2268,t2271);
  uintptr_t t2272 = v0;
  int64_t t2273 = ((int64_t)UINT64_C(6));
  uintptr_t t2274 = v1;
  f_putp(t2272,t2273,t2274);
}
static void f_pop_scope(uintptr_t v0) {
  uintptr_t t2275 = v0;
  int64_t t2276 = ((int64_t)UINT64_C(6));
  uintptr_t t2277 = v0;
  int64_t t2278 = ((int64_t)UINT64_C(6));
  uintptr_t t2279 = f_getp(t2277,t2278);
  int64_t t2280 = ((int64_t)UINT64_C(1));
  uintptr_t t2281 = f_getp(t2279,t2280);
  f_putp(t2275,t2276,t2281);
}
static uintptr_t f_binding(uintptr_t v0,ApString v1) {
  uintptr_t v2;
  uintptr_t v3;
  uintptr_t t2282 = v0;
  int64_t t2283 = ((int64_t)UINT64_C(6));
  uintptr_t t2284 = f_getp(t2282,t2283);
  v2 = t2284;
  while (true) {
    uintptr_t t2285 = v2;
    uintptr_t t2286 = f_nil();
    bool t2287 = (t2285 != t2286);
    if (!t2287) break;
    uintptr_t t2288 = v2;
    int64_t t2289 = ((int64_t)UINT64_C(0));
    uintptr_t t2290 = f_getp(t2288,t2289);
    v3 = t2290;
    while (true) {
      uintptr_t t2291 = v3;
      uintptr_t t2292 = f_nil();
      bool t2293 = (t2291 != t2292);
      if (!t2293) break;
      uintptr_t t2294 = v3;
      int64_t t2295 = ((int64_t)UINT64_C(0));
      ApString t2296 = f_gets(t2294,t2295);
      ApString t2297 = v1;
      bool t2298 = ap_equal(t2296,t2297);
      if (t2298) {
        uintptr_t t2299 = v3;
        return t2299;
      } else {
      }
      uintptr_t t2300 = v3;
      int64_t t2301 = ((int64_t)UINT64_C(4));
      uintptr_t t2302 = f_getp(t2300,t2301);
      v3 = t2302;
    }
    uintptr_t t2303 = v2;
    int64_t t2304 = ((int64_t)UINT64_C(1));
    uintptr_t t2305 = f_getp(t2303,t2304);
    v2 = t2305;
  }
  uintptr_t t2306 = f_nil();
  return t2306;
}
static void f_bind_name(uintptr_t v0,ApString v1,int64_t v2,int64_t v3) {
  uintptr_t v4;
  uintptr_t v5;
  uintptr_t t2307 = v0;
  int64_t t2308 = ((int64_t)UINT64_C(6));
  uintptr_t t2309 = f_getp(t2307,t2308);
  v4 = t2309;
  uintptr_t t2310 = v0;
  int64_t t2311 = ((int64_t)UINT64_C(64));
  uintptr_t t2312 = f_arena(t2310,t2311);
  v5 = t2312;
  uintptr_t t2313 = v5;
  int64_t t2314 = ((int64_t)UINT64_C(0));
  ApString t2315 = v1;
  f_puts(t2313,t2314,t2315);
  uintptr_t t2316 = v5;
  int64_t t2317 = ((int64_t)UINT64_C(2));
  int64_t t2318 = v2;
  f_put(t2316,t2317,t2318);
  uintptr_t t2319 = v5;
  int64_t t2320 = ((int64_t)UINT64_C(3));
  int64_t t2321 = v3;
  f_put(t2319,t2320,t2321);
  uintptr_t t2322 = v5;
  int64_t t2323 = ((int64_t)UINT64_C(4));
  uintptr_t t2324 = v4;
  int64_t t2325 = ((int64_t)UINT64_C(0));
  uintptr_t t2326 = f_getp(t2324,t2325);
  f_putp(t2322,t2323,t2326);
  uintptr_t t2327 = v4;
  int64_t t2328 = ((int64_t)UINT64_C(0));
  uintptr_t t2329 = v5;
  f_putp(t2327,t2328,t2329);
}
static int64_t f_slots(uintptr_t v0,int64_t v1,uintptr_t v2) {
  int64_t v3;
  uintptr_t t2330 = v0;
  int64_t t2331 = ((int64_t)UINT64_C(7));
  int64_t t2332 = f_get(t2330,t2331);
  v3 = t2332;
  int64_t t2333 = v1;
  int64_t t2334 = ((int64_t)UINT64_C(0));
  bool t2335 = (t2333 < t2334);
  bool t2336 = t2335;
  if (!t2336) {
    int64_t t2337 = v1;
    int64_t t2338 = ((int64_t)UINT64_C(2048));
    int64_t t2339 = v3;
    int64_t t2340 = ap_sub(t2338,t2339);
    bool t2341 = (t2337 > t2340);
    t2336 = t2341;
  }
  if (t2336) {
    uintptr_t t2342 = v0;
    uintptr_t t2343 = v2;
    ApString t2344 = AP_STR("stack frame exceeds 2048 local slots");
    f_fail(t2342,t2343,t2344);
  } else {
  }
  uintptr_t t2345 = v0;
  int64_t t2346 = ((int64_t)UINT64_C(7));
  int64_t t2347 = v3;
  int64_t t2348 = v1;
  int64_t t2349 = ap_add(t2347,t2348);
  f_put(t2345,t2346,t2349);
  int64_t t2350 = v3;
  return t2350;
}
static int64_t f_name_bucket(ApString v0) {
  int64_t v1;
  int64_t v2;
  int64_t t2351 = ((int64_t)UINT64_C(0));
  v1 = t2351;
  int64_t t2352 = ((int64_t)UINT64_C(0));
  v2 = t2352;
  while (true) {
    int64_t t2353 = v2;
    ApString t2354 = v0;
    int64_t t2355 = ap_scale(ap_length_string(t2354));
    int64_t t2356 = ap_unscale(t2355);
    bool t2357 = (t2353 < t2356);
    if (!t2357) break;
    int64_t t2358 = v1;
    int64_t t2359 = ((int64_t)UINT64_C(33));
    int64_t t2360 = ap_mul(t2358,t2359);
    ApString t2361 = v0;
    int64_t t2362 = v2;
    int64_t t2363 = ap_byte(t2361,t2362);
    int64_t t2364 = ap_add(t2360,t2363);
    int64_t t2365 = ((int64_t)UINT64_C(1023));
    int64_t t2366 = (t2364 & t2365);
    v1 = t2366;
    int64_t t2367 = v2;
    int64_t t2368 = ((int64_t)UINT64_C(1));
    int64_t t2369 = ap_add(t2367,t2368);
    v2 = t2369;
  }
  int64_t t2370 = v1;
  return t2370;
}
static uintptr_t f_function_named(uintptr_t v0,ApString v1) {
  uintptr_t v2;
  uintptr_t t2371 = v0;
  int64_t t2372 = ((int64_t)UINT64_C(26));
  uintptr_t t2373 = f_getp(t2371,t2372);
  ApString t2374 = v1;
  int64_t t2375 = f_name_bucket(t2374);
  uintptr_t t2376 = f_getp(t2373,t2375);
  v2 = t2376;
  while (true) {
    uintptr_t t2377 = v2;
    uintptr_t t2378 = f_nil();
    bool t2379 = (t2377 != t2378);
    if (!t2379) break;
    uintptr_t t2380 = v2;
    int64_t t2381 = ((int64_t)UINT64_C(0));
    ApString t2382 = f_gets(t2380,t2381);
    ApString t2383 = v1;
    bool t2384 = ap_equal(t2382,t2383);
    if (t2384) {
      uintptr_t t2385 = v2;
      return t2385;
    } else {
    }
    uintptr_t t2386 = v2;
    int64_t t2387 = ((int64_t)UINT64_C(10));
    uintptr_t t2388 = f_getp(t2386,t2387);
    v2 = t2388;
  }
  uintptr_t t2389 = f_nil();
  return t2389;
}
static uintptr_t f_leaf(uintptr_t v0,int64_t v1,int64_t v2,uintptr_t v3) {
  uintptr_t v4;
  uintptr_t t2390 = v0;
  int64_t t2391 = ((int64_t)UINT64_C(128));
  uintptr_t t2392 = f_arena(t2390,t2391);
  v4 = t2392;
  uintptr_t t2393 = v4;
  int64_t t2394 = ((int64_t)UINT64_C(0));
  int64_t t2395 = v1;
  f_put(t2393,t2394,t2395);
  uintptr_t t2396 = v4;
  int64_t t2397 = ((int64_t)UINT64_C(1));
  int64_t t2398 = v2;
  f_put(t2396,t2397,t2398);
  uintptr_t t2399 = v4;
  int64_t t2400 = ((int64_t)UINT64_C(2));
  uintptr_t t2401 = v3;
  f_putp(t2399,t2400,t2401);
  uintptr_t t2402 = v4;
  int64_t t2403 = ((int64_t)UINT64_C(4));
  uintptr_t t2404 = v3;
  int64_t t2405 = ((int64_t)UINT64_C(1));
  ApString t2406 = f_gets(t2404,t2405);
  f_puts(t2402,t2403,t2406);
  uintptr_t t2407 = v4;
  int64_t t2408 = ((int64_t)UINT64_C(11));
  int64_t t2409 = ((int64_t)UINT64_C(1));
  f_put(t2407,t2408,t2409);
  uintptr_t t2410 = v4;
  return t2410;
}
static uintptr_t f_remember(uintptr_t v0,uintptr_t v1) {
  int64_t v2;
  uintptr_t v3;
  uintptr_t v4;
  int64_t t2411 = ((int64_t)UINT64_C(1));
  v2 = t2411;
  uintptr_t t2412 = v1;
  int64_t t2413 = ((int64_t)UINT64_C(7));
  uintptr_t t2414 = f_getp(t2412,t2413);
  uintptr_t t2415 = f_nil();
  bool t2416 = (t2414 != t2415);
  if (t2416) {
    int64_t t2417 = v2;
    uintptr_t t2418 = v1;
    int64_t t2419 = ((int64_t)UINT64_C(7));
    uintptr_t t2420 = f_getp(t2418,t2419);
    int64_t t2421 = ((int64_t)UINT64_C(11));
    int64_t t2422 = f_get(t2420,t2421);
    int64_t t2423 = ((int64_t)UINT64_C(1));
    int64_t t2424 = ap_add(t2422,t2423);
    int64_t t2425 = f_maxint(t2417,t2424);
    v2 = t2425;
  } else {
  }
  uintptr_t t2426 = v1;
  int64_t t2427 = ((int64_t)UINT64_C(8));
  uintptr_t t2428 = f_getp(t2426,t2427);
  uintptr_t t2429 = f_nil();
  bool t2430 = (t2428 != t2429);
  if (t2430) {
    int64_t t2431 = v2;
    uintptr_t t2432 = v1;
    int64_t t2433 = ((int64_t)UINT64_C(8));
    uintptr_t t2434 = f_getp(t2432,t2433);
    int64_t t2435 = ((int64_t)UINT64_C(11));
    int64_t t2436 = f_get(t2434,t2435);
    int64_t t2437 = ((int64_t)UINT64_C(1));
    int64_t t2438 = ap_add(t2436,t2437);
    int64_t t2439 = f_maxint(t2431,t2438);
    v2 = t2439;
  } else {
  }
  uintptr_t t2440 = v1;
  int64_t t2441 = ((int64_t)UINT64_C(9));
  uintptr_t t2442 = f_getp(t2440,t2441);
  v3 = t2442;
  uintptr_t t2443 = v3;
  uintptr_t t2444 = f_nil();
  bool t2445 = (t2443 != t2444);
  if (t2445) {
    uintptr_t t2446 = v3;
    int64_t t2447 = ((int64_t)UINT64_C(0));
    uintptr_t t2448 = f_getp(t2446,t2447);
    v4 = t2448;
    while (true) {
      uintptr_t t2449 = v4;
      uintptr_t t2450 = f_nil();
      bool t2451 = (t2449 != t2450);
      if (!t2451) break;
      int64_t t2452 = v2;
      uintptr_t t2453 = v4;
      int64_t t2454 = ((int64_t)UINT64_C(0));
      uintptr_t t2455 = f_getp(t2453,t2454);
      int64_t t2456 = ((int64_t)UINT64_C(11));
      int64_t t2457 = f_get(t2455,t2456);
      int64_t t2458 = ((int64_t)UINT64_C(1));
      int64_t t2459 = ap_add(t2457,t2458);
      int64_t t2460 = f_maxint(t2452,t2459);
      v2 = t2460;
      uintptr_t t2461 = v4;
      int64_t t2462 = ((int64_t)UINT64_C(1));
      uintptr_t t2463 = f_getp(t2461,t2462);
      v4 = t2463;
    }
  } else {
  }
  int64_t t2464 = v2;
  int64_t t2465 = ((int64_t)UINT64_C(128));
  bool t2466 = (t2464 > t2465);
  if (t2466) {
    uintptr_t t2467 = v0;
    uintptr_t t2468 = v1;
    int64_t t2469 = ((int64_t)UINT64_C(2));
    uintptr_t t2470 = f_getp(t2468,t2469);
    ApString t2471 = AP_STR("expression tree exceeds depth 128");
    f_fail(t2467,t2470,t2471);
  } else {
  }
  uintptr_t t2472 = v1;
  int64_t t2473 = ((int64_t)UINT64_C(11));
  int64_t t2474 = v2;
  f_put(t2472,t2473,t2474);
  uintptr_t t2475 = v1;
  return t2475;
}
static void f_require_type(uintptr_t v0,uintptr_t v1,int64_t v2) {
  uintptr_t t2476 = v1;
  int64_t t2477 = ((int64_t)UINT64_C(1));
  int64_t t2478 = f_get(t2476,t2477);
  int64_t t2479 = v2;
  bool t2480 = (t2478 != t2479);
  if (t2480) {
    uintptr_t t2481 = v0;
    uintptr_t t2482 = v1;
    int64_t t2483 = ((int64_t)UINT64_C(2));
    uintptr_t t2484 = f_getp(t2482,t2483);
    ApString t2485 = AP_STR("type mismatch (conversions must be explicit)");
    f_fail(t2481,t2484,t2485);
  } else {
  }
}
static uintptr_t f_literal(uintptr_t v0,uintptr_t v1,bool v2) {
  ApString v3;
  int64_t v4;
  double v5;
  double v6;
  bool v7;
  int64_t v8;
  int64_t v9;
  int64_t v10;
  uintptr_t v11;
  bool v12;
  int64_t v13;
  uintptr_t v14;
  int64_t v15;
  int64_t v16;
  int64_t v17;
  int64_t v18;
  int64_t v19;
  int64_t v20;
  int64_t v21;
  int64_t v22;
  int64_t v23;
  int64_t v24;
  int64_t v25;
  uintptr_t t2486 = v1;
  int64_t t2487 = ((int64_t)UINT64_C(1));
  ApString t2488 = f_gets(t2486,t2487);
  v3 = t2488;
  ApString t2489 = v3;
  int64_t t2490 = ap_scale(ap_length_string(t2489));
  int64_t t2491 = ap_unscale(t2490);
  v4 = t2491;
  uintptr_t t2492 = v1;
  int64_t t2493 = ((int64_t)UINT64_C(0));
  int64_t t2494 = f_get(t2492,t2493);
  int64_t t2495 = ((int64_t)UINT64_C(46));
  bool t2496 = (t2494 == t2495);
  if (t2496) {
    int64_t t2497 = ((int64_t)UINT64_C(0));
    double t2498 = ((double)t2497/1000000.0);
    v5 = t2498;
    int64_t t2499 = ((int64_t)UINT64_C(1000000));
    double t2500 = ((double)t2499/1000000.0);
    v6 = t2500;
    bool t2501 = false;
    v7 = t2501;
    int64_t t2502 = ((int64_t)UINT64_C(0));
    v8 = t2502;
    int64_t t2503 = ((int64_t)UINT64_C(0));
    v9 = t2503;
    while (true) {
      int64_t t2504 = v8;
      int64_t t2505 = v4;
      int64_t t2506 = ((int64_t)UINT64_C(1));
      int64_t t2507 = ap_sub(t2505,t2506);
      bool t2508 = (t2504 < t2507);
      if (!t2508) break;
      ApString t2509 = v3;
      int64_t t2510 = v8;
      int64_t t2511 = ap_byte(t2509,t2510);
      v10 = t2511;
      int64_t t2512 = v10;
      int64_t t2513 = ((int64_t)UINT64_C(46));
      bool t2514 = (t2512 == t2513);
      if (t2514) {
        bool t2515 = true;
        v7 = t2515;
      } else {
        int64_t t2516 = v9;
        int64_t t2517 = ((int64_t)UINT64_C(1));
        int64_t t2518 = ap_add(t2516,t2517);
        v9 = t2518;
        int64_t t2519 = v9;
        int64_t t2520 = ((int64_t)UINT64_C(17));
        bool t2521 = (t2519 > t2520);
        if (t2521) {
          uintptr_t t2522 = v0;
          uintptr_t t2523 = v1;
          ApString t2524 = AP_STR("float literal exceeds 17 digits; use explicit arithmetic");
          f_fail(t2522,t2523,t2524);
        } else {
        }
        double t2525 = v5;
        int64_t t2526 = ((int64_t)UINT64_C(10000000));
        double t2527 = ((double)t2526/1000000.0);
        double t2528 = (t2525 * t2527);
        int64_t t2529 = v10;
        int64_t t2530 = ((int64_t)UINT64_C(48));
        int64_t t2531 = ap_sub(t2529,t2530);
        double t2532 = ((double)t2531);
        double t2533 = (t2528 + t2532);
        v5 = t2533;
        bool t2534 = v7;
        if (t2534) {
          double t2535 = v6;
          int64_t t2536 = ((int64_t)UINT64_C(10000000));
          double t2537 = ((double)t2536/1000000.0);
          double t2538 = (t2535 * t2537);
          v6 = t2538;
        } else {
        }
      }
      int64_t t2539 = v8;
      int64_t t2540 = ((int64_t)UINT64_C(1));
      int64_t t2541 = ap_add(t2539,t2540);
      v8 = t2541;
    }
    double t2542 = v5;
    double t2543 = v6;
    double t2544 = (t2542 / t2543);
    v5 = t2544;
    bool t2545 = v2;
    if (t2545) {
      double t2546 = v5;
      double t2547 = -t2546;
      v5 = t2547;
    } else {
    }
    uintptr_t t2548 = v0;
    int64_t t2549 = ((int64_t)UINT64_C(0));
    int64_t t2550 = ((int64_t)UINT64_C(7));
    uintptr_t t2551 = v1;
    uintptr_t t2552 = f_leaf(t2548,t2549,t2550,t2551);
    v11 = t2552;
    uintptr_t t2553 = v11;
    int64_t t2554 = ((int64_t)UINT64_C(3));
    double t2555 = v5;
    int64_t t2556 = ap_float_bits(t2555);
    f_put(t2553,t2554,t2556);
    uintptr_t t2557 = v11;
    return t2557;
  } else {
  }
  uintptr_t t2558 = v1;
  int64_t t2559 = ((int64_t)UINT64_C(0));
  int64_t t2560 = f_get(t2558,t2559);
  int64_t t2561 = ((int64_t)UINT64_C(17));
  bool t2562 = (t2560 == t2561);
  v12 = t2562;
  int64_t t2563 = ((int64_t)UINT64_C(0));
  v13 = t2563;
  bool t2564 = v12;
  if (t2564) {
    int64_t t2565 = ((int64_t)UINT64_C(3));
    v13 = t2565;
  } else {
  }
  uintptr_t t2566 = v0;
  int64_t t2567 = ((int64_t)UINT64_C(0));
  int64_t t2568 = v13;
  uintptr_t t2569 = v1;
  uintptr_t t2570 = f_leaf(t2566,t2567,t2568,t2569);
  v14 = t2570;
  ApString t2571 = v3;
  ApString t2572 = AP_STR("0x");
  bool t2573 = f_starts(t2571,t2572);
  bool t2574 = t2573;
  if (!t2574) {
    ApString t2575 = v3;
    ApString t2576 = AP_STR("0X");
    bool t2577 = f_starts(t2575,t2576);
    t2574 = t2577;
  }
  if (t2574) {
    int64_t t2578 = ((int64_t)UINT64_C(0));
    v15 = t2578;
    int64_t t2579 = ((int64_t)UINT64_C(2));
    v16 = t2579;
    while (true) {
      int64_t t2580 = v16;
      int64_t t2581 = v4;
      bool t2582 = (t2580 < t2581);
      if (!t2582) break;
      ApString t2583 = v3;
      int64_t t2584 = v16;
      int64_t t2585 = ap_byte(t2583,t2584);
      int64_t t2586 = f_hexval(t2585);
      v17 = t2586;
      int64_t t2587 = v17;
      int64_t t2588 = ((int64_t)UINT64_C(0));
      bool t2589 = (t2587 < t2588);
      bool t2590 = t2589;
      if (!t2590) {
        int64_t t2591 = v15;
        int64_t t2592 = ((int64_t)UINT64_C(60));
        int64_t t2593 = ap_shr(t2591,t2592);
        int64_t t2594 = ((int64_t)UINT64_C(0));
        bool t2595 = (t2593 != t2594);
        t2590 = t2595;
      }
      if (t2590) {
        uintptr_t t2596 = v0;
        uintptr_t t2597 = v1;
        ApString t2598 = AP_STR("hex literal exceeds 64 bits");
        f_fail(t2596,t2597,t2598);
      } else {
      }
      int64_t t2599 = v15;
      int64_t t2600 = ((int64_t)UINT64_C(4));
      int64_t t2601 = ap_shl(t2599,t2600);
      int64_t t2602 = v17;
      int64_t t2603 = (t2601 | t2602);
      v15 = t2603;
      int64_t t2604 = v16;
      int64_t t2605 = ((int64_t)UINT64_C(1));
      int64_t t2606 = ap_add(t2604,t2605);
      v16 = t2606;
    }
    bool t2607 = v2;
    if (t2607) {
      int64_t t2608 = v15;
      int64_t t2609 = ((int64_t)UINT64_C(0));
      bool t2610 = (t2608 < t2609);
      if (t2610) {
        uintptr_t t2611 = v0;
        uintptr_t t2612 = v1;
        ApString t2613 = AP_STR("cannot negate a high-bit hex literal");
        f_fail(t2611,t2612,t2613);
      } else {
      }
      int64_t t2614 = v15;
      int64_t t2615 = ap_neg(t2614);
      v15 = t2615;
    } else {
    }
    uintptr_t t2616 = v14;
    int64_t t2617 = ((int64_t)UINT64_C(3));
    int64_t t2618 = v15;
    f_put(t2616,t2617,t2618);
    uintptr_t t2619 = v14;
    return t2619;
  } else {
  }
  bool t2620 = v12;
  if (t2620) {
    int64_t t2621 = v4;
    int64_t t2622 = ((int64_t)UINT64_C(1));
    int64_t t2623 = ap_sub(t2621,t2622);
    v4 = t2623;
  } else {
  }
  int64_t t2624 = ((int64_t)UINT64_C(9223372036854775809));
  v18 = t2624;
  bool t2625 = v2;
  if (t2625) {
    int64_t t2626 = ((int64_t)UINT64_C(9223372036854775808));
    v18 = t2626;
  } else {
  }
  int64_t t2627 = v18;
  int64_t t2628 = ((int64_t)UINT64_C(10));
  int64_t t2629 = ap_div(t2627,t2628);
  v19 = t2629;
  int64_t t2630 = v18;
  int64_t t2631 = ((int64_t)UINT64_C(10));
  int64_t t2632 = ap_rem(t2630,t2631);
  int64_t t2633 = ap_neg(t2632);
  v20 = t2633;
  int64_t t2634 = ((int64_t)UINT64_C(0));
  v21 = t2634;
  int64_t t2635 = ((int64_t)UINT64_C(18446744073709551615));
  v22 = t2635;
  int64_t t2636 = ((int64_t)UINT64_C(0));
  v23 = t2636;
  while (true) {
    int64_t t2637 = v23;
    int64_t t2638 = v4;
    bool t2639 = (t2637 < t2638);
    if (!t2639) break;
    ApString t2640 = v3;
    int64_t t2641 = v23;
    int64_t t2642 = ap_byte(t2640,t2641);
    v24 = t2642;
    int64_t t2643 = v23;
    int64_t t2644 = ((int64_t)UINT64_C(1));
    int64_t t2645 = ap_add(t2643,t2644);
    v23 = t2645;
    int64_t t2646 = v24;
    int64_t t2647 = ((int64_t)UINT64_C(46));
    bool t2648 = (t2646 == t2647);
    if (t2648) {
      int64_t t2649 = ((int64_t)UINT64_C(0));
      v22 = t2649;
      continue;
    } else {
    }
    int64_t t2650 = v24;
    int64_t t2651 = ((int64_t)UINT64_C(48));
    int64_t t2652 = ap_sub(t2650,t2651);
    v25 = t2652;
    int64_t t2653 = v25;
    int64_t t2654 = ((int64_t)UINT64_C(0));
    bool t2655 = (t2653 < t2654);
    bool t2656 = t2655;
    if (!t2656) {
      int64_t t2657 = v25;
      int64_t t2658 = ((int64_t)UINT64_C(9));
      bool t2659 = (t2657 > t2658);
      t2656 = t2659;
    }
    if (t2656) {
      uintptr_t t2660 = v0;
      uintptr_t t2661 = v1;
      ApString t2662 = AP_STR("invalid number literal");
      f_fail(t2660,t2661,t2662);
    } else {
    }
    int64_t t2663 = v21;
    int64_t t2664 = v19;
    bool t2665 = (t2663 < t2664);
    bool t2666 = t2665;
    if (!t2666) {
      int64_t t2667 = v21;
      int64_t t2668 = v19;
      bool t2669 = (t2667 == t2668);
      bool t2670 = t2669;
      if (t2670) {
        int64_t t2671 = v25;
        int64_t t2672 = v20;
        bool t2673 = (t2671 > t2672);
        t2670 = t2673;
      }
      t2666 = t2670;
    }
    if (t2666) {
      uintptr_t t2674 = v0;
      uintptr_t t2675 = v1;
      ApString t2676 = AP_STR("numeric literal out of range");
      f_fail(t2674,t2675,t2676);
    } else {
    }
    int64_t t2677 = v21;
    int64_t t2678 = ((int64_t)UINT64_C(10));
    int64_t t2679 = ap_mul(t2677,t2678);
    int64_t t2680 = v25;
    int64_t t2681 = ap_sub(t2679,t2680);
    v21 = t2681;
    int64_t t2682 = v22;
    int64_t t2683 = ((int64_t)UINT64_C(0));
    bool t2684 = (t2682 >= t2683);
    if (t2684) {
      int64_t t2685 = v22;
      int64_t t2686 = ((int64_t)UINT64_C(1));
      int64_t t2687 = ap_add(t2685,t2686);
      v22 = t2687;
      int64_t t2688 = v22;
      int64_t t2689 = ((int64_t)UINT64_C(6));
      bool t2690 = (t2688 > t2689);
      if (t2690) {
        uintptr_t t2691 = v0;
        uintptr_t t2692 = v1;
        ApString t2693 = AP_STR("number literals allow at most 6 decimal places");
        f_fail(t2691,t2692,t2693);
      } else {
      }
    } else {
    }
  }
  bool t2694 = v12;
  bool t2695 = !t2694;
  if (t2695) {
    int64_t t2696 = v22;
    int64_t t2697 = ((int64_t)UINT64_C(0));
    bool t2698 = (t2696 < t2697);
    if (t2698) {
      int64_t t2699 = ((int64_t)UINT64_C(0));
      v22 = t2699;
    } else {
    }
    while (true) {
      int64_t t2700 = v22;
      int64_t t2701 = ((int64_t)UINT64_C(6));
      bool t2702 = (t2700 < t2701);
      if (!t2702) break;
      int64_t t2703 = v21;
      int64_t t2704 = v19;
      bool t2705 = (t2703 < t2704);
      if (t2705) {
        uintptr_t t2706 = v0;
        uintptr_t t2707 = v1;
        ApString t2708 = AP_STR("numeric literal out of range");
        f_fail(t2706,t2707,t2708);
      } else {
      }
      int64_t t2709 = v21;
      int64_t t2710 = ((int64_t)UINT64_C(10));
      int64_t t2711 = ap_mul(t2709,t2710);
      v21 = t2711;
      int64_t t2712 = v22;
      int64_t t2713 = ((int64_t)UINT64_C(1));
      int64_t t2714 = ap_add(t2712,t2713);
      v22 = t2714;
    }
  } else {
  }
  bool t2715 = v2;
  bool t2716 = !t2715;
  if (t2716) {
    int64_t t2717 = v21;
    int64_t t2718 = ap_neg(t2717);
    v21 = t2718;
  } else {
  }
  uintptr_t t2719 = v14;
  int64_t t2720 = ((int64_t)UINT64_C(3));
  int64_t t2721 = v21;
  f_put(t2719,t2720,t2721);
  uintptr_t t2722 = v14;
  return t2722;
}
static bool f_class_matches(int64_t v0,int64_t v1) {
  int64_t t2723 = v0;
  int64_t t2724 = ((int64_t)UINT64_C(78));
  bool t2725 = (t2723 == t2724);
  if (t2725) {
    int64_t t2726 = v1;
    int64_t t2727 = ((int64_t)UINT64_C(0));
    bool t2728 = (t2726 == t2727);
    return t2728;
  } else {
  }
  int64_t t2729 = v0;
  int64_t t2730 = ((int64_t)UINT64_C(83));
  bool t2731 = (t2729 == t2730);
  if (t2731) {
    int64_t t2732 = v1;
    int64_t t2733 = ((int64_t)UINT64_C(1));
    bool t2734 = (t2732 == t2733);
    return t2734;
  } else {
  }
  int64_t t2735 = v0;
  int64_t t2736 = ((int64_t)UINT64_C(79));
  bool t2737 = (t2735 == t2736);
  if (t2737) {
    int64_t t2738 = v1;
    int64_t t2739 = ((int64_t)UINT64_C(2));
    bool t2740 = (t2738 == t2739);
    return t2740;
  } else {
  }
  int64_t t2741 = v0;
  int64_t t2742 = ((int64_t)UINT64_C(73));
  bool t2743 = (t2741 == t2742);
  if (t2743) {
    int64_t t2744 = v1;
    int64_t t2745 = ((int64_t)UINT64_C(3));
    bool t2746 = (t2744 == t2745);
    return t2746;
  } else {
  }
  int64_t t2747 = v0;
  int64_t t2748 = ((int64_t)UINT64_C(66));
  bool t2749 = (t2747 == t2748);
  if (t2749) {
    int64_t t2750 = v1;
    int64_t t2751 = ((int64_t)UINT64_C(4));
    bool t2752 = (t2750 == t2751);
    return t2752;
  } else {
  }
  int64_t t2753 = v0;
  int64_t t2754 = ((int64_t)UINT64_C(80));
  bool t2755 = (t2753 == t2754);
  if (t2755) {
    int64_t t2756 = v1;
    int64_t t2757 = ((int64_t)UINT64_C(5));
    bool t2758 = (t2756 == t2757);
    return t2758;
  } else {
  }
  int64_t t2759 = v0;
  int64_t t2760 = ((int64_t)UINT64_C(70));
  bool t2761 = (t2759 == t2760);
  if (t2761) {
    int64_t t2762 = v1;
    int64_t t2763 = ((int64_t)UINT64_C(7));
    bool t2764 = (t2762 == t2763);
    return t2764;
  } else {
  }
  int64_t t2765 = v0;
  int64_t t2766 = ((int64_t)UINT64_C(82));
  bool t2767 = (t2765 == t2766);
  if (t2767) {
    int64_t t2768 = v1;
    int64_t t2769 = ((int64_t)UINT64_C(0));
    bool t2770 = (t2768 == t2769);
    bool t2771 = t2770;
    if (!t2771) {
      int64_t t2772 = v1;
      int64_t t2773 = ((int64_t)UINT64_C(3));
      bool t2774 = (t2772 == t2773);
      t2771 = t2774;
    }
    return t2771;
  } else {
  }
  int64_t t2775 = v0;
  int64_t t2776 = ((int64_t)UINT64_C(84));
  bool t2777 = (t2775 == t2776);
  if (t2777) {
    int64_t t2778 = v1;
    int64_t t2779 = ((int64_t)UINT64_C(1));
    bool t2780 = (t2778 == t2779);
    bool t2781 = t2780;
    if (!t2781) {
      int64_t t2782 = v1;
      int64_t t2783 = ((int64_t)UINT64_C(4));
      bool t2784 = (t2782 == t2783);
      t2781 = t2784;
    }
    return t2781;
  } else {
  }
  int64_t t2785 = v0;
  int64_t t2786 = ((int64_t)UINT64_C(81));
  bool t2787 = (t2785 == t2786);
  if (t2787) {
    int64_t t2788 = v1;
    int64_t t2789 = ((int64_t)UINT64_C(3));
    bool t2790 = (t2788 == t2789);
    bool t2791 = t2790;
    if (!t2791) {
      int64_t t2792 = v1;
      int64_t t2793 = ((int64_t)UINT64_C(5));
      bool t2794 = (t2792 == t2793);
      t2791 = t2794;
    }
    return t2791;
  } else {
  }
  int64_t t2795 = v0;
  int64_t t2796 = ((int64_t)UINT64_C(67));
  bool t2797 = (t2795 == t2796);
  if (t2797) {
    int64_t t2798 = v1;
    bool t2799 = f_numeric(t2798);
    return t2799;
  } else {
  }
  int64_t t2800 = v0;
  int64_t t2801 = ((int64_t)UINT64_C(68));
  bool t2802 = (t2800 == t2801);
  if (t2802) {
    int64_t t2803 = v1;
    int64_t t2804 = ((int64_t)UINT64_C(0));
    bool t2805 = (t2803 == t2804);
    bool t2806 = t2805;
    if (!t2806) {
      int64_t t2807 = v1;
      int64_t t2808 = ((int64_t)UINT64_C(7));
      bool t2809 = (t2807 == t2808);
      t2806 = t2809;
    }
    return t2806;
  } else {
  }
  bool t2810 = false;
  return t2810;
}
static int64_t f_signature_result(int64_t v0) {
  int64_t t2811 = v0;
  int64_t t2812 = ((int64_t)UINT64_C(78));
  bool t2813 = (t2811 == t2812);
  if (t2813) {
    int64_t t2814 = ((int64_t)UINT64_C(0));
    return t2814;
  } else {
  }
  int64_t t2815 = v0;
  int64_t t2816 = ((int64_t)UINT64_C(83));
  bool t2817 = (t2815 == t2816);
  if (t2817) {
    int64_t t2818 = ((int64_t)UINT64_C(1));
    return t2818;
  } else {
  }
  int64_t t2819 = v0;
  int64_t t2820 = ((int64_t)UINT64_C(79));
  bool t2821 = (t2819 == t2820);
  if (t2821) {
    int64_t t2822 = ((int64_t)UINT64_C(2));
    return t2822;
  } else {
  }
  int64_t t2823 = v0;
  int64_t t2824 = ((int64_t)UINT64_C(73));
  bool t2825 = (t2823 == t2824);
  if (t2825) {
    int64_t t2826 = ((int64_t)UINT64_C(3));
    return t2826;
  } else {
  }
  int64_t t2827 = v0;
  int64_t t2828 = ((int64_t)UINT64_C(66));
  bool t2829 = (t2827 == t2828);
  if (t2829) {
    int64_t t2830 = ((int64_t)UINT64_C(4));
    return t2830;
  } else {
  }
  int64_t t2831 = v0;
  int64_t t2832 = ((int64_t)UINT64_C(80));
  bool t2833 = (t2831 == t2832);
  if (t2833) {
    int64_t t2834 = ((int64_t)UINT64_C(5));
    return t2834;
  } else {
  }
  int64_t t2835 = v0;
  int64_t t2836 = ((int64_t)UINT64_C(86));
  bool t2837 = (t2835 == t2836);
  if (t2837) {
    int64_t t2838 = ((int64_t)UINT64_C(6));
    return t2838;
  } else {
  }
  int64_t t2839 = v0;
  int64_t t2840 = ((int64_t)UINT64_C(70));
  bool t2841 = (t2839 == t2840);
  if (t2841) {
    int64_t t2842 = ((int64_t)UINT64_C(7));
    return t2842;
  } else {
  }
  int64_t t2843 = ((int64_t)UINT64_C(18446744073709551615));
  return t2843;
}
static bool f_task_builtin_allowed(ApString v0) {
  ApString v1;
  ApString t2844 = v0;
  ApString t2845 = AP_STR("load");
  bool t2846 = f_starts(t2844,t2845);
  bool t2847 = t2846;
  if (!t2847) {
    ApString t2848 = v0;
    ApString t2849 = AP_STR("store");
    bool t2850 = f_starts(t2848,t2849);
    t2847 = t2850;
  }
  bool t2851 = t2847;
  if (!t2851) {
    ApString t2852 = v0;
    ApString t2853 = AP_STR("peek");
    bool t2854 = f_starts(t2852,t2853);
    t2851 = t2854;
  }
  bool t2855 = t2851;
  if (!t2855) {
    ApString t2856 = v0;
    ApString t2857 = AP_STR("poke");
    bool t2858 = f_starts(t2856,t2857);
    t2855 = t2858;
  }
  bool t2859 = t2855;
  if (!t2859) {
    ApString t2860 = v0;
    ApString t2861 = AP_STR("atomic_");
    bool t2862 = f_starts(t2860,t2861);
    t2859 = t2862;
  }
  if (t2859) {
    bool t2863 = true;
    return t2863;
  } else {
  }
  ApString t2864 = AP_STR("int");
  ApString t2865 = AP_STR("number");
  ApString t2866 = AP_STR("float");
  ApString t2867 = AP_STR("float_bits");
  ApString t2868 = AP_STR("float_from_bits");
  ApString t2869 = AP_STR("float32_bits");
  ApString t2870 = AP_STR("float32_from_bits");
  ApString t2871 = AP_STR("sqrt");
  ApString t2872 = AP_STR("trunc");
  ApString t2873 = AP_STR("floor");
  ApString t2874 = AP_STR("ceil");
  ApString t2875 = AP_STR("abs");
  ApString t2876 = AP_STR("len");
  ApString t2877 = AP_STR("char_at");
  ApString t2878 = AP_STR("byte_at");
  ApString t2879 = AP_STR("slice");
  ApString t2880 = AP_STR("view");
  ApString t2881 = AP_STR("string_at");
  ApString t2882 = AP_STR("copy");
  ApString t2883 = AP_STR("fill");
  ApString t2884 = AP_STR("fill32");
  ApString t2885 = AP_STR("fill64");
  ApString t2886 = AP_STR("fill_range");
  ApString t2887 = AP_STR("fill32_range");
  ApString t2888 = AP_STR("fill64_range");
  ApString t2889 = AP_STR("address");
  ApString t2890 = AP_STR("pointer");
  ApString t2891 = AP_STR("address_int");
  ApString t2892 = AP_STR("offset");
  ApString t2893 = AP_STR("band");
  ApString t2894 = AP_STR("bor");
  ApString t2895 = AP_STR("bxor");
  ApString t2896 = AP_STR("bnot");
  ApString t2897 = AP_STR("shl");
  ApString t2898 = AP_STR("shr");
  ApString t2899 = AP_STR("sar");
  ApString t2900 = AP_STR("assert");
  ApString t2901 = AP_STR("asm32");
  ApString items2902[] = {t2864,t2865,t2866,t2867,t2868,t2869,t2870,t2871,t2872,t2873,t2874,t2875,t2876,t2877,t2878,t2879,t2880,t2881,t2882,t2883,t2884,t2885,t2886,t2887,t2888,t2889,t2890,t2891,t2892,t2893,t2894,t2895,t2896,t2897,t2898,t2899,t2900,t2901};
  for (int64_t i2902=0; i2902<38; ++i2902) {
    v1 = items2902[i2902];
    ApString t2903 = v0;
    ApString t2904 = v1;
    bool t2905 = ap_equal(t2903,t2904);
    if (t2905) {
      bool t2906 = true;
      return t2906;
    } else {
    }
  }
  bool t2907 = false;
  return t2907;
}
static uintptr_t f_call_node(uintptr_t v0,uintptr_t v1,ApString v2,uintptr_t v3,int64_t v4) {
  uintptr_t v5;
  ApString v6;
  int64_t v7;
  int64_t v8;
  int64_t v9;
  int64_t v10;
  uintptr_t v11;
  int64_t v12;
  int64_t v13;
  int64_t v14;
  int64_t v15;
  uintptr_t v16;
  int64_t v17;
  uintptr_t t2908 = v0;
  int64_t t2909 = ((int64_t)UINT64_C(6));
  int64_t t2910 = ((int64_t)UINT64_C(6));
  uintptr_t t2911 = v1;
  uintptr_t t2912 = f_leaf(t2908,t2909,t2910,t2911);
  v5 = t2912;
  uintptr_t t2913 = v5;
  int64_t t2914 = ((int64_t)UINT64_C(4));
  ApString t2915 = v2;
  f_puts(t2913,t2914,t2915);
  uintptr_t t2916 = v5;
  int64_t t2917 = ((int64_t)UINT64_C(9));
  uintptr_t t2918 = v3;
  f_putp(t2916,t2917,t2918);
  uintptr_t t2919 = v5;
  int64_t t2920 = ((int64_t)UINT64_C(10));
  int64_t t2921 = v4;
  f_put(t2919,t2920,t2921);
  ApString t2922 = v2;
  ApString t2923 = f_builtin_spec(t2922);
  v6 = t2923;
  ApString t2924 = v6;
  ApString t2925 = AP_STR("");
  bool t2926 = !ap_equal(t2924,t2925);
  if (t2926) {
    uintptr_t t2927 = v0;
    int64_t t2928 = ((int64_t)UINT64_C(27));
    int64_t t2929 = f_get(t2927,t2928);
    int64_t t2930 = ((int64_t)UINT64_C(0));
    bool t2931 = (t2929 != t2930);
    bool t2932 = t2931;
    if (t2932) {
      ApString t2933 = v2;
      bool t2934 = f_task_builtin_allowed(t2933);
      bool t2935 = !t2934;
      t2932 = t2935;
    }
    if (t2932) {
      uintptr_t t2936 = v0;
      uintptr_t t2937 = v1;
      ApString t2938 = AP_STR("operation is not permitted inside a task: ");
      ApString t2939 = v2;
      ApString t2940 = f_concat(t2938,t2939);
      f_fail(t2936,t2937,t2940);
    } else {
    }
    ApString t2941 = v6;
    int64_t t2942 = ((int64_t)UINT64_C(1));
    int64_t t2943 = ap_byte(t2941,t2942);
    int64_t t2944 = ((int64_t)UINT64_C(33));
    bool t2945 = (t2943 == t2944);
    bool t2946 = t2945;
    if (t2946) {
      uintptr_t t2947 = v0;
      int64_t t2948 = ((int64_t)UINT64_C(13));
      int64_t t2949 = f_get(t2947,t2948);
      int64_t t2950 = ((int64_t)UINT64_C(0));
      bool t2951 = (t2949 == t2950);
      t2946 = t2951;
    }
    if (t2946) {
      uintptr_t t2952 = v0;
      uintptr_t t2953 = v1;
      ApString t2954 = AP_STR("this operation requires unsafe ... end");
      f_fail(t2952,t2953,t2954);
    } else {
    }
    ApString t2955 = v6;
    int64_t t2956 = ((int64_t)UINT64_C(1));
    int64_t t2957 = ap_byte(t2955,t2956);
    int64_t t2958 = ((int64_t)UINT64_C(116));
    bool t2959 = (t2957 == t2958);
    if (t2959) {
      uintptr_t t2960 = v0;
      int64_t t2961 = ((int64_t)UINT64_C(12));
      int64_t t2962 = ((int64_t)UINT64_C(1));
      f_put(t2960,t2961,t2962);
    } else {
    }
    ApString t2963 = v2;
    ApString t2964 = AP_STR("ccall");
    bool t2965 = f_starts(t2963,t2964);
    if (t2965) {
      int64_t t2966 = v4;
      int64_t t2967 = ((int64_t)UINT64_C(1));
      bool t2968 = (t2966 < t2967);
      bool t2969 = t2968;
      if (!t2969) {
        int64_t t2970 = v4;
        int64_t t2971 = ((int64_t)UINT64_C(16));
        bool t2972 = (t2970 > t2971);
        t2969 = t2972;
      }
      if (t2969) {
        uintptr_t t2973 = v0;
        uintptr_t t2974 = v1;
        ApString t2975 = AP_STR("ccall requires a function pointer and up to 15 arguments");
        f_fail(t2973,t2974,t2975);
      } else {
      }
      uintptr_t t2976 = v0;
      uintptr_t t2977 = v3;
      int64_t t2978 = ((int64_t)UINT64_C(0));
      uintptr_t t2979 = f_list_get(t2977,t2978);
      int64_t t2980 = ((int64_t)UINT64_C(5));
      f_require_type(t2976,t2979,t2980);
      int64_t t2981 = ((int64_t)UINT64_C(0));
      v7 = t2981;
      int64_t t2982 = ((int64_t)UINT64_C(0));
      v8 = t2982;
      int64_t t2983 = ((int64_t)UINT64_C(1));
      v9 = t2983;
      while (true) {
        int64_t t2984 = v9;
        int64_t t2985 = v4;
        bool t2986 = (t2984 < t2985);
        if (!t2986) break;
        uintptr_t t2987 = v3;
        int64_t t2988 = v9;
        uintptr_t t2989 = f_list_get(t2987,t2988);
        int64_t t2990 = ((int64_t)UINT64_C(1));
        int64_t t2991 = f_get(t2989,t2990);
        v10 = t2991;
        int64_t t2992 = v10;
        int64_t t2993 = ((int64_t)UINT64_C(7));
        bool t2994 = (t2992 == t2993);
        if (t2994) {
          int64_t t2995 = v8;
          int64_t t2996 = ((int64_t)UINT64_C(1));
          int64_t t2997 = ap_add(t2995,t2996);
          v8 = t2997;
        } else {
          int64_t t2998 = v10;
          int64_t t2999 = ((int64_t)UINT64_C(3));
          bool t3000 = (t2998 != t2999);
          bool t3001 = t3000;
          if (t3001) {
            int64_t t3002 = v10;
            int64_t t3003 = ((int64_t)UINT64_C(5));
            bool t3004 = (t3002 != t3003);
            t3001 = t3004;
          }
          if (t3001) {
            uintptr_t t3005 = v0;
            uintptr_t t3006 = v1;
            ApString t3007 = AP_STR("C ABI arguments must be int, pointer, or float");
            f_fail(t3005,t3006,t3007);
          } else {
          }
          int64_t t3008 = v7;
          int64_t t3009 = ((int64_t)UINT64_C(1));
          int64_t t3010 = ap_add(t3008,t3009);
          v7 = t3010;
        }
        int64_t t3011 = v9;
        int64_t t3012 = ((int64_t)UINT64_C(1));
        int64_t t3013 = ap_add(t3011,t3012);
        v9 = t3013;
      }
      int64_t t3014 = v7;
      int64_t t3015 = ((int64_t)UINT64_C(8));
      bool t3016 = (t3014 > t3015);
      bool t3017 = t3016;
      if (!t3017) {
        int64_t t3018 = v8;
        int64_t t3019 = ((int64_t)UINT64_C(8));
        bool t3020 = (t3018 > t3019);
        t3017 = t3020;
      }
      if (t3017) {
        uintptr_t t3021 = v0;
        uintptr_t t3022 = v1;
        ApString t3023 = AP_STR("ccall supports at most eight integer and eight FP argument registers; no stack arguments");
        f_fail(t3021,t3022,t3023);
      } else {
      }
    } else {
      ApString t3024 = v2;
      ApString t3025 = AP_STR("asm32");
      bool t3026 = ap_equal(t3024,t3025);
      if (t3026) {
        int64_t t3027 = v4;
        int64_t t3028 = ((int64_t)UINT64_C(1));
        bool t3029 = (t3027 < t3028);
        bool t3030 = t3029;
        if (!t3030) {
          int64_t t3031 = v4;
          int64_t t3032 = ((int64_t)UINT64_C(7));
          bool t3033 = (t3031 > t3032);
          t3030 = t3033;
        }
        if (t3030) {
          uintptr_t t3034 = v0;
          uintptr_t t3035 = v1;
          ApString t3036 = AP_STR("asm32 requires an opcode and up to six registers");
          f_fail(t3034,t3035,t3036);
        } else {
        }
        uintptr_t t3037 = v3;
        int64_t t3038 = ((int64_t)UINT64_C(0));
        uintptr_t t3039 = f_list_get(t3037,t3038);
        v11 = t3039;
        uintptr_t t3040 = v11;
        int64_t t3041 = ((int64_t)UINT64_C(0));
        int64_t t3042 = f_get(t3040,t3041);
        int64_t t3043 = ((int64_t)UINT64_C(0));
        bool t3044 = (t3042 != t3043);
        bool t3045 = t3044;
        if (!t3045) {
          uintptr_t t3046 = v11;
          int64_t t3047 = ((int64_t)UINT64_C(1));
          int64_t t3048 = f_get(t3046,t3047);
          int64_t t3049 = ((int64_t)UINT64_C(3));
          bool t3050 = (t3048 != t3049);
          t3045 = t3050;
        }
        bool t3051 = t3045;
        if (!t3051) {
          uintptr_t t3052 = v11;
          int64_t t3053 = ((int64_t)UINT64_C(3));
          int64_t t3054 = f_get(t3052,t3053);
          int64_t t3055 = ((int64_t)UINT64_C(0));
          bool t3056 = (t3054 < t3055);
          t3051 = t3056;
        }
        bool t3057 = t3051;
        if (!t3057) {
          uintptr_t t3058 = v11;
          int64_t t3059 = ((int64_t)UINT64_C(3));
          int64_t t3060 = f_get(t3058,t3059);
          int64_t t3061 = ((int64_t)UINT64_C(4294967295));
          bool t3062 = (t3060 > t3061);
          t3057 = t3062;
        }
        if (t3057) {
          uintptr_t t3063 = v0;
          uintptr_t t3064 = v1;
          ApString t3065 = AP_STR("asm32 opcode must be a 32-bit integer literal");
          f_fail(t3063,t3064,t3065);
        } else {
        }
        int64_t t3066 = ((int64_t)UINT64_C(1));
        v12 = t3066;
        while (true) {
          int64_t t3067 = v12;
          int64_t t3068 = v4;
          bool t3069 = (t3067 < t3068);
          if (!t3069) break;
          uintptr_t t3070 = v3;
          int64_t t3071 = v12;
          uintptr_t t3072 = f_list_get(t3070,t3071);
          int64_t t3073 = ((int64_t)UINT64_C(1));
          int64_t t3074 = f_get(t3072,t3073);
          v13 = t3074;
          int64_t t3075 = v13;
          int64_t t3076 = ((int64_t)UINT64_C(3));
          bool t3077 = (t3075 != t3076);
          bool t3078 = t3077;
          if (t3078) {
            int64_t t3079 = v13;
            int64_t t3080 = ((int64_t)UINT64_C(5));
            bool t3081 = (t3079 != t3080);
            t3078 = t3081;
          }
          if (t3078) {
            uintptr_t t3082 = v0;
            uintptr_t t3083 = v1;
            ApString t3084 = AP_STR("asm32 register inputs must be int or pointer");
            f_fail(t3082,t3083,t3084);
          } else {
          }
          int64_t t3085 = v12;
          int64_t t3086 = ((int64_t)UINT64_C(1));
          int64_t t3087 = ap_add(t3085,t3086);
          v12 = t3087;
        }
      } else {
        int64_t t3088 = v4;
        ApString t3089 = v6;
        int64_t t3090 = ap_scale(ap_length_string(t3089));
        int64_t t3091 = ap_unscale(t3090);
        int64_t t3092 = ((int64_t)UINT64_C(2));
        int64_t t3093 = ap_sub(t3091,t3092);
        bool t3094 = (t3088 != t3093);
        if (t3094) {
          uintptr_t t3095 = v0;
          uintptr_t t3096 = v1;
          ApString t3097 = AP_STR("wrong number of built-in arguments");
          f_fail(t3095,t3096,t3097);
        } else {
        }
        int64_t t3098 = ((int64_t)UINT64_C(0));
        v14 = t3098;
        while (true) {
          int64_t t3099 = v14;
          int64_t t3100 = v4;
          bool t3101 = (t3099 < t3100);
          if (!t3101) break;
          ApString t3102 = v6;
          int64_t t3103 = v14;
          int64_t t3104 = ((int64_t)UINT64_C(2));
          int64_t t3105 = ap_add(t3103,t3104);
          int64_t t3106 = ap_byte(t3102,t3105);
          uintptr_t t3107 = v3;
          int64_t t3108 = v14;
          uintptr_t t3109 = f_list_get(t3107,t3108);
          int64_t t3110 = ((int64_t)UINT64_C(1));
          int64_t t3111 = f_get(t3109,t3110);
          bool t3112 = f_class_matches(t3106,t3111);
          bool t3113 = !t3112;
          if (t3113) {
            uintptr_t t3114 = v0;
            uintptr_t t3115 = v1;
            ApString t3116 = AP_STR("invalid built-in argument type");
            f_fail(t3114,t3115,t3116);
          } else {
          }
          int64_t t3117 = v14;
          int64_t t3118 = ((int64_t)UINT64_C(1));
          int64_t t3119 = ap_add(t3117,t3118);
          v14 = t3119;
        }
      }
    }
    ApString t3120 = v6;
    int64_t t3121 = ((int64_t)UINT64_C(0));
    int64_t t3122 = ap_byte(t3120,t3121);
    int64_t t3123 = f_signature_result(t3122);
    v15 = t3123;
    ApString t3124 = v6;
    int64_t t3125 = ((int64_t)UINT64_C(0));
    int64_t t3126 = ap_byte(t3124,t3125);
    int64_t t3127 = ((int64_t)UINT64_C(88));
    bool t3128 = (t3126 == t3127);
    if (t3128) {
      uintptr_t t3129 = v3;
      int64_t t3130 = ((int64_t)UINT64_C(0));
      uintptr_t t3131 = f_list_get(t3129,t3130);
      int64_t t3132 = ((int64_t)UINT64_C(1));
      int64_t t3133 = f_get(t3131,t3132);
      v15 = t3133;
    } else {
    }
    int64_t t3134 = v15;
    int64_t t3135 = ((int64_t)UINT64_C(0));
    bool t3136 = (t3134 >= t3135);
    ApString t3137 = AP_STR("internal builtin signature");
    f_need(t3136,t3137);
    uintptr_t t3138 = v5;
    int64_t t3139 = ((int64_t)UINT64_C(1));
    int64_t t3140 = v15;
    f_put(t3138,t3139,t3140);
  } else {
    uintptr_t t3141 = v0;
    ApString t3142 = v2;
    uintptr_t t3143 = f_function_named(t3141,t3142);
    v16 = t3143;
    uintptr_t t3144 = v16;
    uintptr_t t3145 = f_nil();
    bool t3146 = (t3144 == t3145);
    if (t3146) {
      uintptr_t t3147 = v0;
      uintptr_t t3148 = v1;
      ApString t3149 = AP_STR("unknown function; define it before use");
      f_fail(t3147,t3148,t3149);
    } else {
    }
    uintptr_t t3150 = v0;
    int64_t t3151 = ((int64_t)UINT64_C(27));
    int64_t t3152 = f_get(t3150,t3151);
    int64_t t3153 = ((int64_t)UINT64_C(0));
    bool t3154 = (t3152 != t3153);
    bool t3155 = t3154;
    if (t3155) {
      uintptr_t t3156 = v16;
      int64_t t3157 = ((int64_t)UINT64_C(11));
      int64_t t3158 = f_get(t3156,t3157);
      int64_t t3159 = ((int64_t)UINT64_C(1));
      bool t3160 = (t3158 != t3159);
      t3155 = t3160;
    }
    if (t3155) {
      uintptr_t t3161 = v0;
      uintptr_t t3162 = v1;
      ApString t3163 = AP_STR("tasks can call only task functions, not ordinary functions");
      f_fail(t3161,t3162,t3163);
    } else {
    }
    int64_t t3164 = v4;
    uintptr_t t3165 = v16;
    int64_t t3166 = ((int64_t)UINT64_C(5));
    int64_t t3167 = f_get(t3165,t3166);
    bool t3168 = (t3164 != t3167);
    if (t3168) {
      uintptr_t t3169 = v0;
      uintptr_t t3170 = v1;
      ApString t3171 = AP_STR("wrong number of function arguments");
      f_fail(t3169,t3170,t3171);
    } else {
    }
    int64_t t3172 = ((int64_t)UINT64_C(0));
    v17 = t3172;
    while (true) {
      int64_t t3173 = v17;
      int64_t t3174 = v4;
      bool t3175 = (t3173 < t3174);
      if (!t3175) break;
      uintptr_t t3176 = v0;
      uintptr_t t3177 = v3;
      int64_t t3178 = v17;
      uintptr_t t3179 = f_list_get(t3177,t3178);
      uintptr_t t3180 = v16;
      int64_t t3181 = ((int64_t)UINT64_C(4));
      uintptr_t t3182 = f_getp(t3180,t3181);
      int64_t t3183 = v17;
      uintptr_t t3184 = f_list_get(t3182,t3183);
      int64_t t3185 = ((int64_t)UINT64_C(2));
      int64_t t3186 = f_get(t3184,t3185);
      f_require_type(t3176,t3179,t3186);
      int64_t t3187 = v17;
      int64_t t3188 = ((int64_t)UINT64_C(1));
      int64_t t3189 = ap_add(t3187,t3188);
      v17 = t3189;
    }
    uintptr_t t3190 = v5;
    int64_t t3191 = ((int64_t)UINT64_C(12));
    uintptr_t t3192 = v16;
    f_putp(t3190,t3191,t3192);
    uintptr_t t3193 = v5;
    int64_t t3194 = ((int64_t)UINT64_C(1));
    uintptr_t t3195 = v16;
    int64_t t3196 = ((int64_t)UINT64_C(3));
    int64_t t3197 = f_get(t3195,t3196);
    f_put(t3193,t3194,t3197);
  }
  uintptr_t t3198 = v0;
  uintptr_t t3199 = v5;
  uintptr_t t3200 = f_remember(t3198,t3199);
  return t3200;
}
static uintptr_t f_unary_node(uintptr_t v0,uintptr_t v1,uintptr_t v2) {
  int64_t v3;
  uintptr_t v4;
  uintptr_t t3201 = v2;
  int64_t t3202 = ((int64_t)UINT64_C(1));
  int64_t t3203 = f_get(t3201,t3202);
  v3 = t3203;
  uintptr_t t3204 = v1;
  int64_t t3205 = ((int64_t)UINT64_C(0));
  int64_t t3206 = f_get(t3204,t3205);
  int64_t t3207 = ((int64_t)UINT64_C(38));
  bool t3208 = (t3206 == t3207);
  if (t3208) {
    uintptr_t t3209 = v0;
    uintptr_t t3210 = v2;
    int64_t t3211 = ((int64_t)UINT64_C(2));
    f_require_type(t3209,t3210,t3211);
    int64_t t3212 = ((int64_t)UINT64_C(2));
    v3 = t3212;
  } else {
    int64_t t3213 = v3;
    bool t3214 = f_numeric(t3213);
    bool t3215 = !t3214;
    if (t3215) {
      uintptr_t t3216 = v0;
      uintptr_t t3217 = v1;
      ApString t3218 = AP_STR("unary sign requires a numeric value");
      f_fail(t3216,t3217,t3218);
    } else {
    }
  }
  uintptr_t t3219 = v0;
  int64_t t3220 = ((int64_t)UINT64_C(4));
  int64_t t3221 = v3;
  uintptr_t t3222 = v1;
  uintptr_t t3223 = f_leaf(t3219,t3220,t3221,t3222);
  v4 = t3223;
  uintptr_t t3224 = v4;
  int64_t t3225 = ((int64_t)UINT64_C(7));
  uintptr_t t3226 = v2;
  f_putp(t3224,t3225,t3226);
  uintptr_t t3227 = v0;
  uintptr_t t3228 = v4;
  uintptr_t t3229 = f_remember(t3227,t3228);
  return t3229;
}
static uintptr_t f_binary_node(uintptr_t v0,uintptr_t v1,uintptr_t v2,uintptr_t v3) {
  int64_t v4;
  int64_t v5;
  uintptr_t v6;
  uintptr_t t3230 = v2;
  int64_t t3231 = ((int64_t)UINT64_C(1));
  int64_t t3232 = f_get(t3230,t3231);
  v4 = t3232;
  uintptr_t t3233 = v1;
  int64_t t3234 = ((int64_t)UINT64_C(0));
  int64_t t3235 = f_get(t3233,t3234);
  v5 = t3235;
  int64_t t3236 = v5;
  int64_t t3237 = ((int64_t)UINT64_C(36));
  bool t3238 = (t3236 == t3237);
  bool t3239 = t3238;
  if (!t3239) {
    int64_t t3240 = v5;
    int64_t t3241 = ((int64_t)UINT64_C(37));
    bool t3242 = (t3240 == t3241);
    t3239 = t3242;
  }
  if (t3239) {
    uintptr_t t3243 = v0;
    uintptr_t t3244 = v2;
    int64_t t3245 = ((int64_t)UINT64_C(2));
    f_require_type(t3243,t3244,t3245);
    uintptr_t t3246 = v0;
    uintptr_t t3247 = v3;
    int64_t t3248 = ((int64_t)UINT64_C(2));
    f_require_type(t3246,t3247,t3248);
    int64_t t3249 = ((int64_t)UINT64_C(2));
    v4 = t3249;
  } else {
    uintptr_t t3250 = v0;
    uintptr_t t3251 = v3;
    int64_t t3252 = v4;
    f_require_type(t3250,t3251,t3252);
    int64_t t3253 = v5;
    int64_t t3254 = ((int64_t)UINT64_C(18));
    bool t3255 = (t3253 == t3254);
    bool t3256 = t3255;
    if (!t3256) {
      int64_t t3257 = v5;
      int64_t t3258 = ((int64_t)UINT64_C(19));
      bool t3259 = (t3257 == t3258);
      t3256 = t3259;
    }
    bool t3260 = t3256;
    if (!t3260) {
      int64_t t3261 = v5;
      int64_t t3262 = ((int64_t)UINT64_C(53));
      bool t3263 = (t3261 == t3262);
      t3260 = t3263;
    }
    if (t3260) {
      int64_t t3264 = v4;
      int64_t t3265 = ((int64_t)UINT64_C(4));
      bool t3266 = (t3264 == t3265);
      bool t3267 = t3266;
      if (!t3267) {
        int64_t t3268 = v4;
        int64_t t3269 = ((int64_t)UINT64_C(6));
        bool t3270 = (t3268 == t3269);
        t3267 = t3270;
      }
      if (t3267) {
        uintptr_t t3271 = v0;
        uintptr_t t3272 = v1;
        ApString t3273 = AP_STR("buffer and void values cannot be compared");
        f_fail(t3271,t3272,t3273);
      } else {
      }
      int64_t t3274 = ((int64_t)UINT64_C(2));
      v4 = t3274;
    } else {
      int64_t t3275 = v4;
      bool t3276 = f_numeric(t3275);
      bool t3277 = !t3276;
      if (t3277) {
        uintptr_t t3278 = v0;
        uintptr_t t3279 = v1;
        ApString t3280 = AP_STR("operator requires matching numeric types");
        f_fail(t3278,t3279,t3280);
      } else {
      }
      int64_t t3281 = v5;
      int64_t t3282 = ((int64_t)UINT64_C(16));
      bool t3283 = (t3281 == t3282);
      bool t3284 = t3283;
      if (t3284) {
        int64_t t3285 = v4;
        int64_t t3286 = ((int64_t)UINT64_C(7));
        bool t3287 = (t3285 == t3286);
        t3284 = t3287;
      }
      if (t3284) {
        uintptr_t t3288 = v0;
        uintptr_t t3289 = v1;
        ApString t3290 = AP_STR("floating remainder is not supported");
        f_fail(t3288,t3289,t3290);
      } else {
      }
      int64_t t3291 = v5;
      int64_t t3292 = ((int64_t)UINT64_C(20));
      bool t3293 = (t3291 >= t3292);
      bool t3294 = t3293;
      if (t3294) {
        int64_t t3295 = v5;
        int64_t t3296 = ((int64_t)UINT64_C(23));
        bool t3297 = (t3295 <= t3296);
        t3294 = t3297;
      }
      if (t3294) {
        int64_t t3298 = ((int64_t)UINT64_C(2));
        v4 = t3298;
      } else {
      }
    }
  }
  uintptr_t t3299 = v0;
  int64_t t3300 = ((int64_t)UINT64_C(5));
  int64_t t3301 = v4;
  uintptr_t t3302 = v1;
  uintptr_t t3303 = f_leaf(t3299,t3300,t3301,t3302);
  v6 = t3303;
  int64_t t3304 = v5;
  int64_t t3305 = ((int64_t)UINT64_C(53));
  bool t3306 = (t3304 == t3305);
  if (t3306) {
    uintptr_t t3307 = v6;
    int64_t t3308 = ((int64_t)UINT64_C(4));
    ApString t3309 = AP_STR("=");
    f_puts(t3307,t3308,t3309);
  } else {
  }
  uintptr_t t3310 = v6;
  int64_t t3311 = ((int64_t)UINT64_C(7));
  uintptr_t t3312 = v2;
  f_putp(t3310,t3311,t3312);
  uintptr_t t3313 = v6;
  int64_t t3314 = ((int64_t)UINT64_C(8));
  uintptr_t t3315 = v3;
  f_putp(t3313,t3314,t3315);
  uintptr_t t3316 = v0;
  uintptr_t t3317 = v6;
  uintptr_t t3318 = f_remember(t3316,t3317);
  return t3318;
}
static int64_t f_precedence(int64_t v0) {
  int64_t t3319 = v0;
  int64_t t3320 = ((int64_t)UINT64_C(37));
  bool t3321 = (t3319 == t3320);
  if (t3321) {
    int64_t t3322 = ((int64_t)UINT64_C(10));
    return t3322;
  } else {
  }
  int64_t t3323 = v0;
  int64_t t3324 = ((int64_t)UINT64_C(36));
  bool t3325 = (t3323 == t3324);
  if (t3325) {
    int64_t t3326 = ((int64_t)UINT64_C(20));
    return t3326;
  } else {
  }
  int64_t t3327 = v0;
  int64_t t3328 = ((int64_t)UINT64_C(18));
  bool t3329 = (t3327 == t3328);
  bool t3330 = t3329;
  if (!t3330) {
    int64_t t3331 = v0;
    int64_t t3332 = ((int64_t)UINT64_C(19));
    bool t3333 = (t3331 == t3332);
    t3330 = t3333;
  }
  bool t3334 = t3330;
  if (!t3334) {
    int64_t t3335 = v0;
    int64_t t3336 = ((int64_t)UINT64_C(53));
    bool t3337 = (t3335 == t3336);
    t3334 = t3337;
  }
  if (t3334) {
    int64_t t3338 = ((int64_t)UINT64_C(40));
    return t3338;
  } else {
  }
  int64_t t3339 = v0;
  int64_t t3340 = ((int64_t)UINT64_C(20));
  bool t3341 = (t3339 >= t3340);
  bool t3342 = t3341;
  if (t3342) {
    int64_t t3343 = v0;
    int64_t t3344 = ((int64_t)UINT64_C(23));
    bool t3345 = (t3343 <= t3344);
    t3342 = t3345;
  }
  if (t3342) {
    int64_t t3346 = ((int64_t)UINT64_C(50));
    return t3346;
  } else {
  }
  int64_t t3347 = v0;
  int64_t t3348 = ((int64_t)UINT64_C(12));
  bool t3349 = (t3347 == t3348);
  bool t3350 = t3349;
  if (!t3350) {
    int64_t t3351 = v0;
    int64_t t3352 = ((int64_t)UINT64_C(13));
    bool t3353 = (t3351 == t3352);
    t3350 = t3353;
  }
  if (t3350) {
    int64_t t3354 = ((int64_t)UINT64_C(60));
    return t3354;
  } else {
  }
  int64_t t3355 = v0;
  int64_t t3356 = ((int64_t)UINT64_C(14));
  bool t3357 = (t3355 == t3356);
  bool t3358 = t3357;
  if (!t3358) {
    int64_t t3359 = v0;
    int64_t t3360 = ((int64_t)UINT64_C(15));
    bool t3361 = (t3359 == t3360);
    t3358 = t3361;
  }
  bool t3362 = t3358;
  if (!t3362) {
    int64_t t3363 = v0;
    int64_t t3364 = ((int64_t)UINT64_C(16));
    bool t3365 = (t3363 == t3364);
    t3362 = t3365;
  }
  if (t3362) {
    int64_t t3366 = ((int64_t)UINT64_C(70));
    return t3366;
  } else {
  }
  int64_t t3367 = ((int64_t)UINT64_C(18446744073709551615));
  return t3367;
}
static uintptr_t f_expression(uintptr_t v0,int64_t v1) {
  int64_t v2;
  uintptr_t v3;
  int64_t v4;
  uintptr_t v5;
  uintptr_t v6;
  int64_t v7;
  uintptr_t v8;
  uintptr_t v9;
  uintptr_t v10;
  int64_t v11;
  int64_t v12;
  uintptr_t v13;
  ApString v14;
  int64_t v15;
  uintptr_t v16;
  uintptr_t v17;
  uintptr_t t3368 = v0;
  int64_t t3369 = ((int64_t)UINT64_C(16));
  int64_t t3370 = f_get(t3368,t3369);
  int64_t t3371 = ((int64_t)UINT64_C(1));
  int64_t t3372 = ap_add(t3370,t3371);
  v2 = t3372;
  int64_t t3373 = v2;
  int64_t t3374 = ((int64_t)UINT64_C(128));
  bool t3375 = (t3373 > t3374);
  if (t3375) {
    uintptr_t t3376 = v0;
    uintptr_t t3377 = v0;
    uintptr_t t3378 = f_peek(t3377);
    ApString t3379 = AP_STR("expression nesting exceeds 128");
    f_fail(t3376,t3378,t3379);
  } else {
  }
  uintptr_t t3380 = v0;
  int64_t t3381 = ((int64_t)UINT64_C(16));
  int64_t t3382 = v2;
  f_put(t3380,t3381,t3382);
  uintptr_t t3383 = v0;
  uintptr_t t3384 = f_take(t3383);
  v3 = t3384;
  uintptr_t t3385 = v3;
  int64_t t3386 = ((int64_t)UINT64_C(0));
  int64_t t3387 = f_get(t3385,t3386);
  v4 = t3387;
  uintptr_t t3388 = f_nil();
  v5 = t3388;
  int64_t t3389 = v4;
  int64_t t3390 = ((int64_t)UINT64_C(3));
  bool t3391 = (t3389 == t3390);
  bool t3392 = t3391;
  if (!t3392) {
    int64_t t3393 = v4;
    int64_t t3394 = ((int64_t)UINT64_C(17));
    bool t3395 = (t3393 == t3394);
    t3392 = t3395;
  }
  bool t3396 = t3392;
  if (!t3396) {
    int64_t t3397 = v4;
    int64_t t3398 = ((int64_t)UINT64_C(46));
    bool t3399 = (t3397 == t3398);
    t3396 = t3399;
  }
  if (t3396) {
    uintptr_t t3400 = v0;
    uintptr_t t3401 = v3;
    bool t3402 = false;
    uintptr_t t3403 = f_literal(t3400,t3401,t3402);
    v5 = t3403;
  } else {
    int64_t t3404 = v4;
    int64_t t3405 = ((int64_t)UINT64_C(4));
    bool t3406 = (t3404 == t3405);
    if (t3406) {
      uintptr_t t3407 = v0;
      int64_t t3408 = ((int64_t)UINT64_C(1));
      int64_t t3409 = ((int64_t)UINT64_C(1));
      uintptr_t t3410 = v3;
      uintptr_t t3411 = f_leaf(t3407,t3408,t3409,t3410);
      v5 = t3411;
    } else {
      int64_t t3412 = v4;
      int64_t t3413 = ((int64_t)UINT64_C(34));
      bool t3414 = (t3412 == t3413);
      bool t3415 = t3414;
      if (!t3415) {
        int64_t t3416 = v4;
        int64_t t3417 = ((int64_t)UINT64_C(35));
        bool t3418 = (t3416 == t3417);
        t3415 = t3418;
      }
      if (t3415) {
        uintptr_t t3419 = v0;
        int64_t t3420 = ((int64_t)UINT64_C(2));
        int64_t t3421 = ((int64_t)UINT64_C(2));
        uintptr_t t3422 = v3;
        uintptr_t t3423 = f_leaf(t3419,t3420,t3421,t3422);
        v5 = t3423;
        int64_t t3424 = v4;
        int64_t t3425 = ((int64_t)UINT64_C(34));
        bool t3426 = (t3424 == t3425);
        if (t3426) {
          uintptr_t t3427 = v5;
          int64_t t3428 = ((int64_t)UINT64_C(3));
          int64_t t3429 = ((int64_t)UINT64_C(1));
          f_put(t3427,t3428,t3429);
        } else {
        }
      } else {
        int64_t t3430 = v4;
        int64_t t3431 = ((int64_t)UINT64_C(2));
        bool t3432 = (t3430 == t3431);
        if (t3432) {
          uintptr_t t3433 = v0;
          int64_t t3434 = ((int64_t)UINT64_C(6));
          bool t3435 = f_accept(t3433,t3434);
          if (t3435) {
            uintptr_t t3436 = f_nil();
            v6 = t3436;
            int64_t t3437 = ((int64_t)UINT64_C(0));
            v7 = t3437;
            uintptr_t t3438 = v0;
            int64_t t3439 = f_kind(t3438);
            int64_t t3440 = ((int64_t)UINT64_C(7));
            bool t3441 = (t3439 != t3440);
            if (t3441) {
              while (true) {
                bool t3442 = true;
                if (!t3442) break;
                int64_t t3443 = v7;
                int64_t t3444 = ((int64_t)UINT64_C(16));
                bool t3445 = (t3443 >= t3444);
                if (t3445) {
                  uintptr_t t3446 = v0;
                  uintptr_t t3447 = v3;
                  ApString t3448 = AP_STR("at most 16 call arguments are supported");
                  f_fail(t3446,t3447,t3448);
                } else {
                }
                uintptr_t t3449 = v0;
                int64_t t3450 = ((int64_t)UINT64_C(0));
                uintptr_t t3451 = f_expression(t3449,t3450);
                v8 = t3451;
                uintptr_t t3452 = v0;
                uintptr_t t3453 = v6;
                uintptr_t t3454 = v8;
                uintptr_t t3455 = f_list_add(t3452,t3453,t3454);
                v6 = t3455;
                int64_t t3456 = v7;
                int64_t t3457 = ((int64_t)UINT64_C(1));
                int64_t t3458 = ap_add(t3456,t3457);
                v7 = t3458;
                uintptr_t t3459 = v0;
                int64_t t3460 = ((int64_t)UINT64_C(10));
                bool t3461 = f_accept(t3459,t3460);
                bool t3462 = !t3461;
                bool t3463 = t3462;
                if (!t3463) {
                  uintptr_t t3464 = v0;
                  int64_t t3465 = f_kind(t3464);
                  int64_t t3466 = ((int64_t)UINT64_C(7));
                  bool t3467 = (t3465 == t3466);
                  t3463 = t3467;
                }
                if (t3463) {
                  break;
                } else {
                }
              }
            } else {
            }
            uintptr_t t3468 = v0;
            int64_t t3469 = ((int64_t)UINT64_C(7));
            ApString t3470 = AP_STR("expected ) after arguments");
            uintptr_t t3471 = f_expect(t3468,t3469,t3470);
            uintptr_t t3472 = v0;
            uintptr_t t3473 = v3;
            uintptr_t t3474 = v3;
            int64_t t3475 = ((int64_t)UINT64_C(1));
            ApString t3476 = f_gets(t3474,t3475);
            uintptr_t t3477 = v6;
            int64_t t3478 = v7;
            uintptr_t t3479 = f_call_node(t3472,t3473,t3476,t3477,t3478);
            v5 = t3479;
          } else {
            uintptr_t t3480 = v0;
            uintptr_t t3481 = v3;
            int64_t t3482 = ((int64_t)UINT64_C(1));
            ApString t3483 = f_gets(t3481,t3482);
            uintptr_t t3484 = f_binding(t3480,t3483);
            v9 = t3484;
            uintptr_t t3485 = v9;
            uintptr_t t3486 = f_nil();
            bool t3487 = (t3485 == t3486);
            if (t3487) {
              uintptr_t t3488 = v0;
              uintptr_t t3489 = v3;
              int64_t t3490 = ((int64_t)UINT64_C(1));
              ApString t3491 = f_gets(t3489,t3490);
              uintptr_t t3492 = f_function_named(t3488,t3491);
              v10 = t3492;
              uintptr_t t3493 = v10;
              uintptr_t t3494 = f_nil();
              bool t3495 = (t3493 == t3494);
              bool t3496 = t3495;
              if (!t3496) {
                uintptr_t t3497 = v10;
                int64_t t3498 = ((int64_t)UINT64_C(11));
                int64_t t3499 = f_get(t3497,t3498);
                int64_t t3500 = ((int64_t)UINT64_C(1));
                bool t3501 = (t3499 != t3500);
                t3496 = t3501;
              }
              if (t3496) {
                uintptr_t t3502 = v0;
                uintptr_t t3503 = v3;
                ApString t3504 = AP_STR("undefined variable: ");
                uintptr_t t3505 = v3;
                int64_t t3506 = ((int64_t)UINT64_C(1));
                ApString t3507 = f_gets(t3505,t3506);
                ApString t3508 = f_concat(t3504,t3507);
                f_fail(t3502,t3503,t3508);
              } else {
              }
              uintptr_t t3509 = v0;
              int64_t t3510 = ((int64_t)UINT64_C(7));
              int64_t t3511 = ((int64_t)UINT64_C(5));
              uintptr_t t3512 = v3;
              uintptr_t t3513 = f_leaf(t3509,t3510,t3511,t3512);
              v5 = t3513;
              uintptr_t t3514 = v5;
              int64_t t3515 = ((int64_t)UINT64_C(12));
              uintptr_t t3516 = v10;
              f_putp(t3514,t3515,t3516);
            } else {
              uintptr_t t3517 = v0;
              int64_t t3518 = ((int64_t)UINT64_C(3));
              uintptr_t t3519 = v9;
              int64_t t3520 = ((int64_t)UINT64_C(2));
              int64_t t3521 = f_get(t3519,t3520);
              uintptr_t t3522 = v3;
              uintptr_t t3523 = f_leaf(t3517,t3518,t3521,t3522);
              v5 = t3523;
              uintptr_t t3524 = v5;
              int64_t t3525 = ((int64_t)UINT64_C(6));
              uintptr_t t3526 = v9;
              int64_t t3527 = ((int64_t)UINT64_C(3));
              int64_t t3528 = f_get(t3526,t3527);
              f_put(t3524,t3525,t3528);
            }
          }
        } else {
          int64_t t3529 = v4;
          int64_t t3530 = ((int64_t)UINT64_C(6));
          bool t3531 = (t3529 == t3530);
          if (t3531) {
            uintptr_t t3532 = v0;
            int64_t t3533 = ((int64_t)UINT64_C(0));
            uintptr_t t3534 = f_expression(t3532,t3533);
            v5 = t3534;
            uintptr_t t3535 = v0;
            int64_t t3536 = ((int64_t)UINT64_C(7));
            ApString t3537 = AP_STR("expected closing )");
            uintptr_t t3538 = f_expect(t3535,t3536,t3537);
          } else {
            int64_t t3539 = v4;
            int64_t t3540 = ((int64_t)UINT64_C(12));
            bool t3541 = (t3539 == t3540);
            bool t3542 = t3541;
            if (!t3542) {
              int64_t t3543 = v4;
              int64_t t3544 = ((int64_t)UINT64_C(13));
              bool t3545 = (t3543 == t3544);
              t3542 = t3545;
            }
            bool t3546 = t3542;
            if (!t3546) {
              int64_t t3547 = v4;
              int64_t t3548 = ((int64_t)UINT64_C(38));
              bool t3549 = (t3547 == t3548);
              t3546 = t3549;
            }
            if (t3546) {
              int64_t t3550 = v1;
              int64_t t3551 = ((int64_t)UINT64_C(90));
              bool t3552 = (t3550 >= t3551);
              bool t3553 = t3552;
              if (t3553) {
                int64_t t3554 = v4;
                int64_t t3555 = ((int64_t)UINT64_C(38));
                bool t3556 = (t3554 != t3555);
                t3553 = t3556;
              }
              bool t3557 = t3553;
              if (t3557) {
                uintptr_t t3558 = v3;
                int64_t t3559 = ((int64_t)UINT64_C(6));
                int64_t t3560 = f_get(t3558,t3559);
                uintptr_t t3561 = v0;
                uintptr_t t3562 = f_peek(t3561);
                int64_t t3563 = ((int64_t)UINT64_C(5));
                int64_t t3564 = f_get(t3562,t3563);
                bool t3565 = (t3560 != t3564);
                t3557 = t3565;
              }
              if (t3557) {
                uintptr_t t3566 = v0;
                uintptr_t t3567 = v3;
                ApString t3568 = AP_STR("attach a for-list sign to its item; parenthesize expressions");
                f_fail(t3566,t3567,t3568);
              } else {
              }
              int64_t t3569 = v4;
              int64_t t3570 = ((int64_t)UINT64_C(13));
              bool t3571 = (t3569 == t3570);
              bool t3572 = t3571;
              if (t3572) {
                uintptr_t t3573 = v0;
                int64_t t3574 = f_kind(t3573);
                int64_t t3575 = ((int64_t)UINT64_C(3));
                bool t3576 = (t3574 == t3575);
                bool t3577 = t3576;
                if (!t3577) {
                  uintptr_t t3578 = v0;
                  int64_t t3579 = f_kind(t3578);
                  int64_t t3580 = ((int64_t)UINT64_C(17));
                  bool t3581 = (t3579 == t3580);
                  t3577 = t3581;
                }
                bool t3582 = t3577;
                if (!t3582) {
                  uintptr_t t3583 = v0;
                  int64_t t3584 = f_kind(t3583);
                  int64_t t3585 = ((int64_t)UINT64_C(46));
                  bool t3586 = (t3584 == t3585);
                  t3582 = t3586;
                }
                t3572 = t3582;
              }
              if (t3572) {
                uintptr_t t3587 = v0;
                uintptr_t t3588 = v0;
                uintptr_t t3589 = f_take(t3588);
                bool t3590 = true;
                uintptr_t t3591 = f_literal(t3587,t3589,t3590);
                v5 = t3591;
              } else {
                int64_t t3592 = ((int64_t)UINT64_C(80));
                v11 = t3592;
                int64_t t3593 = v4;
                int64_t t3594 = ((int64_t)UINT64_C(38));
                bool t3595 = (t3593 == t3594);
                bool t3596 = t3595;
                if (t3596) {
                  int64_t t3597 = v1;
                  int64_t t3598 = ((int64_t)UINT64_C(90));
                  bool t3599 = (t3597 < t3598);
                  t3596 = t3599;
                }
                if (t3596) {
                  int64_t t3600 = ((int64_t)UINT64_C(30));
                  v11 = t3600;
                } else {
                }
                int64_t t3601 = v1;
                int64_t t3602 = ((int64_t)UINT64_C(90));
                bool t3603 = (t3601 >= t3602);
                if (t3603) {
                  int64_t t3604 = ((int64_t)UINT64_C(90));
                  v11 = t3604;
                } else {
                }
                uintptr_t t3605 = v0;
                uintptr_t t3606 = v3;
                uintptr_t t3607 = v0;
                int64_t t3608 = v11;
                uintptr_t t3609 = f_expression(t3607,t3608);
                uintptr_t t3610 = f_unary_node(t3605,t3606,t3609);
                v5 = t3610;
              }
            } else {
              uintptr_t t3611 = v0;
              uintptr_t t3612 = v3;
              ApString t3613 = AP_STR("expected an expression");
              f_fail(t3611,t3612,t3613);
            }
          }
        }
      }
    }
  }
  while (true) {
    bool t3614 = true;
    if (!t3614) break;
    uintptr_t t3615 = v0;
    int64_t t3616 = ((int64_t)UINT64_C(8));
    bool t3617 = f_accept(t3615,t3616);
    if (t3617) {
      uintptr_t t3618 = v5;
      int64_t t3619 = ((int64_t)UINT64_C(1));
      int64_t t3620 = f_get(t3618,t3619);
      v12 = t3620;
      int64_t t3621 = v12;
      int64_t t3622 = ((int64_t)UINT64_C(1));
      bool t3623 = (t3621 != t3622);
      bool t3624 = t3623;
      if (t3624) {
        int64_t t3625 = v12;
        int64_t t3626 = ((int64_t)UINT64_C(4));
        bool t3627 = (t3625 != t3626);
        t3624 = t3627;
      }
      if (t3624) {
        uintptr_t t3628 = v0;
        uintptr_t t3629 = v3;
        ApString t3630 = AP_STR("only buffers and strings support indexing");
        f_fail(t3628,t3629,t3630);
      } else {
      }
      uintptr_t t3631 = v0;
      uintptr_t t3632 = f_nil();
      uintptr_t t3633 = v5;
      uintptr_t t3634 = f_list_add(t3631,t3632,t3633);
      v13 = t3634;
      uintptr_t t3635 = v0;
      uintptr_t t3636 = v13;
      uintptr_t t3637 = v0;
      int64_t t3638 = ((int64_t)UINT64_C(0));
      uintptr_t t3639 = f_expression(t3637,t3638);
      uintptr_t t3640 = f_list_add(t3635,t3636,t3639);
      v13 = t3640;
      uintptr_t t3641 = v0;
      int64_t t3642 = ((int64_t)UINT64_C(9));
      ApString t3643 = AP_STR("expected closing ]");
      uintptr_t t3644 = f_expect(t3641,t3642,t3643);
      ApString t3645 = AP_STR("char_at");
      v14 = t3645;
      int64_t t3646 = v12;
      int64_t t3647 = ((int64_t)UINT64_C(4));
      bool t3648 = (t3646 == t3647);
      if (t3648) {
        ApString t3649 = AP_STR("load8");
        v14 = t3649;
      } else {
      }
      uintptr_t t3650 = v0;
      uintptr_t t3651 = v3;
      ApString t3652 = v14;
      uintptr_t t3653 = v13;
      int64_t t3654 = ((int64_t)UINT64_C(2));
      uintptr_t t3655 = f_call_node(t3650,t3651,t3652,t3653,t3654);
      v5 = t3655;
      continue;
    } else {
    }
    uintptr_t t3656 = v0;
    int64_t t3657 = f_kind(t3656);
    int64_t t3658 = f_precedence(t3657);
    v15 = t3658;
    int64_t t3659 = v15;
    int64_t t3660 = v1;
    bool t3661 = (t3659 < t3660);
    bool t3662 = t3661;
    if (!t3662) {
      int64_t t3663 = v15;
      int64_t t3664 = ((int64_t)UINT64_C(0));
      bool t3665 = (t3663 < t3664);
      t3662 = t3665;
    }
    if (t3662) {
      break;
    } else {
    }
    uintptr_t t3666 = v0;
    uintptr_t t3667 = f_take(t3666);
    v16 = t3667;
    uintptr_t t3668 = v0;
    int64_t t3669 = v15;
    int64_t t3670 = ((int64_t)UINT64_C(1));
    int64_t t3671 = ap_add(t3669,t3670);
    uintptr_t t3672 = f_expression(t3668,t3671);
    v17 = t3672;
    uintptr_t t3673 = v0;
    uintptr_t t3674 = v16;
    uintptr_t t3675 = v5;
    uintptr_t t3676 = v17;
    uintptr_t t3677 = f_binary_node(t3673,t3674,t3675,t3676);
    v5 = t3677;
  }
  uintptr_t t3678 = v0;
  int64_t t3679 = ((int64_t)UINT64_C(16));
  int64_t t3680 = v2;
  int64_t t3681 = ((int64_t)UINT64_C(1));
  int64_t t3682 = ap_sub(t3680,t3681);
  f_put(t3678,t3679,t3682);
  uintptr_t t3683 = v5;
  return t3683;
}
static uintptr_t f_call_arguments(uintptr_t v0,uintptr_t v1) {
  uintptr_t v2;
  int64_t v3;
  uintptr_t t3684 = f_nil();
  v2 = t3684;
  int64_t t3685 = ((int64_t)UINT64_C(0));
  v3 = t3685;
  uintptr_t t3686 = v0;
  int64_t t3687 = f_kind(t3686);
  int64_t t3688 = ((int64_t)UINT64_C(7));
  bool t3689 = (t3687 != t3688);
  if (t3689) {
    while (true) {
      bool t3690 = true;
      if (!t3690) break;
      int64_t t3691 = v3;
      int64_t t3692 = ((int64_t)UINT64_C(16));
      bool t3693 = (t3691 >= t3692);
      if (t3693) {
        uintptr_t t3694 = v0;
        uintptr_t t3695 = v1;
        ApString t3696 = AP_STR("at most 16 call arguments are supported");
        f_fail(t3694,t3695,t3696);
      } else {
      }
      uintptr_t t3697 = v0;
      uintptr_t t3698 = v2;
      uintptr_t t3699 = v0;
      int64_t t3700 = ((int64_t)UINT64_C(0));
      uintptr_t t3701 = f_expression(t3699,t3700);
      uintptr_t t3702 = f_list_add(t3697,t3698,t3701);
      v2 = t3702;
      int64_t t3703 = v3;
      int64_t t3704 = ((int64_t)UINT64_C(1));
      int64_t t3705 = ap_add(t3703,t3704);
      v3 = t3705;
      uintptr_t t3706 = v0;
      int64_t t3707 = ((int64_t)UINT64_C(10));
      bool t3708 = f_accept(t3706,t3707);
      bool t3709 = !t3708;
      bool t3710 = t3709;
      if (!t3710) {
        uintptr_t t3711 = v0;
        int64_t t3712 = f_kind(t3711);
        int64_t t3713 = ((int64_t)UINT64_C(7));
        bool t3714 = (t3712 == t3713);
        t3710 = t3714;
      }
      if (t3710) {
        break;
      } else {
      }
    }
  } else {
  }
  uintptr_t t3715 = v0;
  int64_t t3716 = ((int64_t)UINT64_C(7));
  ApString t3717 = AP_STR("expected ) after arguments");
  uintptr_t t3718 = f_expect(t3715,t3716,t3717);
  uintptr_t t3719 = v0;
  uintptr_t t3720 = v1;
  uintptr_t t3721 = v1;
  int64_t t3722 = ((int64_t)UINT64_C(1));
  ApString t3723 = f_gets(t3721,t3722);
  uintptr_t t3724 = v2;
  int64_t t3725 = v3;
  uintptr_t t3726 = f_call_node(t3719,t3720,t3723,t3724,t3725);
  return t3726;
}
static bool f_returns(uintptr_t v0) {
  uintptr_t v1;
  uintptr_t t3727 = v0;
  v1 = t3727;
  while (true) {
    uintptr_t t3728 = v1;
    uintptr_t t3729 = f_nil();
    bool t3730 = (t3728 != t3729);
    if (!t3730) break;
    uintptr_t t3731 = v1;
    int64_t t3732 = ((int64_t)UINT64_C(12));
    int64_t t3733 = f_get(t3731,t3732);
    int64_t t3734 = ((int64_t)UINT64_C(0));
    bool t3735 = (t3733 != t3734);
    if (t3735) {
      bool t3736 = true;
      return t3736;
    } else {
    }
    uintptr_t t3737 = v1;
    int64_t t3738 = ((int64_t)UINT64_C(11));
    uintptr_t t3739 = f_getp(t3737,t3738);
    v1 = t3739;
  }
  bool t3740 = false;
  return t3740;
}
static uintptr_t f_block(uintptr_t v0,int64_t v1) {
  int64_t v2;
  uintptr_t v3;
  uintptr_t v4;
  uintptr_t v5;
  int64_t v6;
  int64_t v7;
  uintptr_t v8;
  uintptr_t v9;
  uintptr_t v10;
  uintptr_t v11;
  uintptr_t v12;
  bool v13;
  int64_t v14;
  uintptr_t v15;
  uintptr_t v16;
  uintptr_t v17;
  uintptr_t v18;
  int64_t v19;
  ApString v20;
  uintptr_t v21;
  uintptr_t v22;
  int64_t v23;
  uintptr_t v24;
  int64_t v25;
  uintptr_t v26;
  uintptr_t v27;
  uintptr_t v28;
  uintptr_t v29;
  uintptr_t v30;
  uintptr_t v31;
  int64_t v32;
  uintptr_t v33;
  uintptr_t v34;
  uintptr_t v35;
  uintptr_t v36;
  uintptr_t v37;
  uintptr_t v38;
  uintptr_t v39;
  int64_t v40;
  int64_t v41;
  uintptr_t v42;
  int64_t v43;
  uintptr_t v44;
  uintptr_t t3741 = v0;
  int64_t t3742 = ((int64_t)UINT64_C(17));
  int64_t t3743 = f_get(t3741,t3742);
  v2 = t3743;
  int64_t t3744 = v1;
  int64_t t3745 = ((int64_t)UINT64_C(0));
  bool t3746 = (t3744 == t3745);
  if (t3746) {
    int64_t t3747 = v2;
    int64_t t3748 = ((int64_t)UINT64_C(64));
    bool t3749 = (t3747 >= t3748);
    if (t3749) {
      uintptr_t t3750 = v0;
      uintptr_t t3751 = v0;
      uintptr_t t3752 = f_peek(t3751);
      ApString t3753 = AP_STR("block nesting exceeds 64");
      f_fail(t3750,t3752,t3753);
    } else {
    }
    uintptr_t t3754 = v0;
    int64_t t3755 = ((int64_t)UINT64_C(17));
    int64_t t3756 = v2;
    int64_t t3757 = ((int64_t)UINT64_C(1));
    int64_t t3758 = ap_add(t3756,t3757);
    f_put(t3754,t3755,t3758);
    uintptr_t t3759 = v0;
    f_push_scope(t3759);
  } else {
  }
  uintptr_t t3760 = f_nil();
  v3 = t3760;
  uintptr_t t3761 = f_nil();
  v4 = t3761;
  uintptr_t t3762 = v0;
  f_skip_lines(t3762);
  while (true) {
    uintptr_t t3763 = v0;
    int64_t t3764 = f_kind(t3763);
    int64_t t3765 = ((int64_t)UINT64_C(28));
    bool t3766 = (t3764 != t3765);
    bool t3767 = t3766;
    if (t3767) {
      uintptr_t t3768 = v0;
      int64_t t3769 = f_kind(t3768);
      int64_t t3770 = ((int64_t)UINT64_C(27));
      bool t3771 = (t3769 != t3770);
      t3767 = t3771;
    }
    bool t3772 = t3767;
    if (t3772) {
      uintptr_t t3773 = v0;
      int64_t t3774 = f_kind(t3773);
      int64_t t3775 = ((int64_t)UINT64_C(54));
      bool t3776 = (t3774 != t3775);
      t3772 = t3776;
    }
    bool t3777 = t3772;
    if (t3777) {
      uintptr_t t3778 = v0;
      int64_t t3779 = f_kind(t3778);
      int64_t t3780 = ((int64_t)UINT64_C(0));
      bool t3781 = (t3779 != t3780);
      t3777 = t3781;
    }
    if (!t3777) break;
    uintptr_t t3782 = v0;
    uintptr_t t3783 = f_take(t3782);
    v5 = t3783;
    uintptr_t t3784 = v5;
    int64_t t3785 = ((int64_t)UINT64_C(0));
    int64_t t3786 = f_get(t3784,t3785);
    v6 = t3786;
    int64_t t3787 = ((int64_t)UINT64_C(0));
    v7 = t3787;
    uintptr_t t3788 = v0;
    int64_t t3789 = ((int64_t)UINT64_C(27));
    int64_t t3790 = f_get(t3788,t3789);
    int64_t t3791 = ((int64_t)UINT64_C(0));
    bool t3792 = (t3790 != t3791);
    bool t3793 = t3792;
    if (t3793) {
      int64_t t3794 = v6;
      int64_t t3795 = ((int64_t)UINT64_C(24));
      bool t3796 = (t3794 == t3795);
      bool t3797 = t3796;
      if (!t3797) {
        int64_t t3798 = v6;
        int64_t t3799 = ((int64_t)UINT64_C(55));
        bool t3800 = (t3798 == t3799);
        t3797 = t3800;
      }
      bool t3801 = t3797;
      if (!t3801) {
        int64_t t3802 = v6;
        int64_t t3803 = ((int64_t)UINT64_C(33));
        bool t3804 = (t3802 == t3803);
        t3801 = t3804;
      }
      t3793 = t3801;
    }
    if (t3793) {
      uintptr_t t3805 = v0;
      uintptr_t t3806 = v5;
      ApString t3807 = AP_STR("printing and process exit are not allowed inside tasks");
      f_fail(t3805,t3806,t3807);
    } else {
    }
    int64_t t3808 = v6;
    int64_t t3809 = ((int64_t)UINT64_C(56));
    bool t3810 = (t3808 == t3809);
    if (t3810) {
      uintptr_t t3811 = v0;
      int64_t t3812 = ((int64_t)UINT64_C(2));
      ApString t3813 = AP_STR("expected an existing variable after set");
      uintptr_t t3814 = f_expect(t3811,t3812,t3813);
      v5 = t3814;
      int64_t t3815 = ((int64_t)UINT64_C(2));
      v6 = t3815;
      uintptr_t t3816 = v0;
      uintptr_t t3817 = v5;
      int64_t t3818 = ((int64_t)UINT64_C(1));
      ApString t3819 = f_gets(t3817,t3818);
      uintptr_t t3820 = f_binding(t3816,t3819);
      uintptr_t t3821 = f_nil();
      bool t3822 = (t3820 == t3821);
      if (t3822) {
        uintptr_t t3823 = v0;
        uintptr_t t3824 = v5;
        ApString t3825 = AP_STR("set requires an existing variable; use let to declare one");
        f_fail(t3823,t3824,t3825);
      } else {
      }
      uintptr_t t3826 = v0;
      int64_t t3827 = f_kind(t3826);
      int64_t t3828 = ((int64_t)UINT64_C(18));
      bool t3829 = (t3827 != t3828);
      bool t3830 = t3829;
      if (t3830) {
        uintptr_t t3831 = v0;
        int64_t t3832 = f_kind(t3831);
        int64_t t3833 = ((int64_t)UINT64_C(8));
        bool t3834 = (t3832 != t3833);
        t3830 = t3834;
      }
      bool t3835 = t3830;
      if (t3835) {
        uintptr_t t3836 = v0;
        int64_t t3837 = f_kind(t3836);
        int64_t t3838 = ((int64_t)UINT64_C(47));
        bool t3839 = (t3837 >= t3838);
        bool t3840 = t3839;
        if (t3840) {
          uintptr_t t3841 = v0;
          int64_t t3842 = f_kind(t3841);
          int64_t t3843 = ((int64_t)UINT64_C(51));
          bool t3844 = (t3842 <= t3843);
          t3840 = t3844;
        }
        bool t3845 = !t3840;
        t3835 = t3845;
      }
      if (t3835) {
        uintptr_t t3846 = v0;
        uintptr_t t3847 = v5;
        ApString t3848 = AP_STR("set requires an assignment, without a type annotation");
        f_fail(t3846,t3847,t3848);
      } else {
      }
    } else {
    }
    int64_t t3849 = v6;
    int64_t t3850 = ((int64_t)UINT64_C(44));
    bool t3851 = (t3849 == t3850);
    bool t3852 = t3851;
    if (!t3852) {
      int64_t t3853 = v6;
      int64_t t3854 = ((int64_t)UINT64_C(45));
      bool t3855 = (t3853 == t3854);
      t3852 = t3855;
    }
    if (t3852) {
      int64_t t3856 = v6;
      v7 = t3856;
      uintptr_t t3857 = v0;
      int64_t t3858 = ((int64_t)UINT64_C(2));
      ApString t3859 = AP_STR("expected variable name after let/const");
      uintptr_t t3860 = f_expect(t3857,t3858,t3859);
      v5 = t3860;
      int64_t t3861 = ((int64_t)UINT64_C(2));
      v6 = t3861;
      uintptr_t t3862 = v0;
      int64_t t3863 = ((int64_t)UINT64_C(6));
      uintptr_t t3864 = f_getp(t3862,t3863);
      int64_t t3865 = ((int64_t)UINT64_C(0));
      uintptr_t t3866 = f_getp(t3864,t3865);
      v8 = t3866;
      while (true) {
        uintptr_t t3867 = v8;
        uintptr_t t3868 = f_nil();
        bool t3869 = (t3867 != t3868);
        if (!t3869) break;
        uintptr_t t3870 = v8;
        int64_t t3871 = ((int64_t)UINT64_C(0));
        ApString t3872 = f_gets(t3870,t3871);
        uintptr_t t3873 = v5;
        int64_t t3874 = ((int64_t)UINT64_C(1));
        ApString t3875 = f_gets(t3873,t3874);
        bool t3876 = ap_equal(t3872,t3875);
        if (t3876) {
          uintptr_t t3877 = v0;
          uintptr_t t3878 = v5;
          ApString t3879 = AP_STR("let/const cannot redeclare a name in the same scope");
          f_fail(t3877,t3878,t3879);
        } else {
        }
        uintptr_t t3880 = v8;
        int64_t t3881 = ((int64_t)UINT64_C(4));
        uintptr_t t3882 = f_getp(t3880,t3881);
        v8 = t3882;
      }
      uintptr_t t3883 = v0;
      int64_t t3884 = f_kind(t3883);
      int64_t t3885 = ((int64_t)UINT64_C(11));
      bool t3886 = (t3884 != t3885);
      bool t3887 = t3886;
      if (t3887) {
        uintptr_t t3888 = v0;
        int64_t t3889 = f_kind(t3888);
        int64_t t3890 = ((int64_t)UINT64_C(18));
        bool t3891 = (t3889 != t3890);
        t3887 = t3891;
      }
      if (t3887) {
        uintptr_t t3892 = v0;
        uintptr_t t3893 = v5;
        ApString t3894 = AP_STR("let/const requires an initializer");
        f_fail(t3892,t3893,t3894);
      } else {
      }
    } else {
    }
    uintptr_t t3895 = v0;
    int64_t t3896 = ((int64_t)UINT64_C(128));
    uintptr_t t3897 = f_arena(t3895,t3896);
    v9 = t3897;
    uintptr_t t3898 = v9;
    int64_t t3899 = ((int64_t)UINT64_C(1));
    uintptr_t t3900 = v5;
    f_putp(t3898,t3899,t3900);
    int64_t t3901 = v6;
    int64_t t3902 = ((int64_t)UINT64_C(2));
    bool t3903 = (t3901 == t3902);
    if (t3903) {
      uintptr_t t3904 = v0;
      int64_t t3905 = ((int64_t)UINT64_C(6));
      bool t3906 = f_accept(t3904,t3905);
      if (t3906) {
        uintptr_t t3907 = v9;
        int64_t t3908 = ((int64_t)UINT64_C(0));
        int64_t t3909 = ((int64_t)UINT64_C(6));
        f_put(t3907,t3908,t3909);
        uintptr_t t3910 = v9;
        int64_t t3911 = ((int64_t)UINT64_C(4));
        uintptr_t t3912 = v0;
        uintptr_t t3913 = v5;
        uintptr_t t3914 = f_call_arguments(t3912,t3913);
        f_putp(t3910,t3911,t3914);
      } else {
        uintptr_t t3915 = v0;
        int64_t t3916 = ((int64_t)UINT64_C(8));
        bool t3917 = f_accept(t3915,t3916);
        if (t3917) {
          uintptr_t t3918 = v0;
          uintptr_t t3919 = v5;
          int64_t t3920 = ((int64_t)UINT64_C(1));
          ApString t3921 = f_gets(t3919,t3920);
          uintptr_t t3922 = f_binding(t3918,t3921);
          v10 = t3922;
          uintptr_t t3923 = v10;
          uintptr_t t3924 = f_nil();
          bool t3925 = (t3923 == t3924);
          if (t3925) {
            uintptr_t t3926 = v0;
            uintptr_t t3927 = v5;
            ApString t3928 = AP_STR("undefined buffer variable");
            f_fail(t3926,t3927,t3928);
          } else {
          }
          uintptr_t t3929 = v10;
          int64_t t3930 = ((int64_t)UINT64_C(2));
          int64_t t3931 = f_get(t3929,t3930);
          int64_t t3932 = ((int64_t)UINT64_C(4));
          bool t3933 = (t3931 != t3932);
          if (t3933) {
            uintptr_t t3934 = v0;
            uintptr_t t3935 = v5;
            ApString t3936 = AP_STR("indexed assignment requires a buffer");
            f_fail(t3934,t3935,t3936);
          } else {
          }
          uintptr_t t3937 = v0;
          int64_t t3938 = ((int64_t)UINT64_C(3));
          int64_t t3939 = ((int64_t)UINT64_C(4));
          uintptr_t t3940 = v5;
          uintptr_t t3941 = f_leaf(t3937,t3938,t3939,t3940);
          v11 = t3941;
          uintptr_t t3942 = v11;
          int64_t t3943 = ((int64_t)UINT64_C(6));
          uintptr_t t3944 = v10;
          int64_t t3945 = ((int64_t)UINT64_C(3));
          int64_t t3946 = f_get(t3944,t3945);
          f_put(t3942,t3943,t3946);
          uintptr_t t3947 = v0;
          uintptr_t t3948 = f_nil();
          uintptr_t t3949 = v11;
          uintptr_t t3950 = f_list_add(t3947,t3948,t3949);
          v12 = t3950;
          uintptr_t t3951 = v0;
          uintptr_t t3952 = v12;
          uintptr_t t3953 = v0;
          int64_t t3954 = ((int64_t)UINT64_C(0));
          uintptr_t t3955 = f_expression(t3953,t3954);
          uintptr_t t3956 = f_list_add(t3951,t3952,t3955);
          v12 = t3956;
          uintptr_t t3957 = v0;
          int64_t t3958 = ((int64_t)UINT64_C(9));
          ApString t3959 = AP_STR("expected ]");
          uintptr_t t3960 = f_expect(t3957,t3958,t3959);
          uintptr_t t3961 = v0;
          int64_t t3962 = ((int64_t)UINT64_C(18));
          ApString t3963 = AP_STR("expected = after buffer index");
          uintptr_t t3964 = f_expect(t3961,t3962,t3963);
          uintptr_t t3965 = v0;
          uintptr_t t3966 = v12;
          uintptr_t t3967 = v0;
          int64_t t3968 = ((int64_t)UINT64_C(0));
          uintptr_t t3969 = f_expression(t3967,t3968);
          uintptr_t t3970 = f_list_add(t3965,t3966,t3969);
          v12 = t3970;
          uintptr_t t3971 = v9;
          int64_t t3972 = ((int64_t)UINT64_C(0));
          int64_t t3973 = ((int64_t)UINT64_C(6));
          f_put(t3971,t3972,t3973);
          uintptr_t t3974 = v9;
          int64_t t3975 = ((int64_t)UINT64_C(4));
          uintptr_t t3976 = v0;
          uintptr_t t3977 = v5;
          ApString t3978 = AP_STR("store8");
          uintptr_t t3979 = v12;
          int64_t t3980 = ((int64_t)UINT64_C(3));
          uintptr_t t3981 = f_call_node(t3976,t3977,t3978,t3979,t3980);
          f_putp(t3974,t3975,t3981);
        } else {
          uintptr_t t3982 = v0;
          int64_t t3983 = ((int64_t)UINT64_C(11));
          bool t3984 = f_accept(t3982,t3983);
          v13 = t3984;
          int64_t t3985 = ((int64_t)UINT64_C(18446744073709551615));
          v14 = t3985;
          bool t3986 = v13;
          if (t3986) {
            uintptr_t t3987 = v0;
            bool t3988 = false;
            int64_t t3989 = f_read_type(t3987,t3988);
            v14 = t3989;
          } else {
          }
          uintptr_t t3990 = f_nil();
          v15 = t3990;
          uintptr_t t3991 = v0;
          int64_t t3992 = f_kind(t3991);
          int64_t t3993 = ((int64_t)UINT64_C(47));
          bool t3994 = (t3992 >= t3993);
          bool t3995 = t3994;
          if (t3995) {
            uintptr_t t3996 = v0;
            int64_t t3997 = f_kind(t3996);
            int64_t t3998 = ((int64_t)UINT64_C(51));
            bool t3999 = (t3997 <= t3998);
            t3995 = t3999;
          }
          if (t3995) {
            int64_t t4000 = v7;
            int64_t t4001 = ((int64_t)UINT64_C(0));
            bool t4002 = (t4000 != t4001);
            bool t4003 = t4002;
            if (!t4003) {
              bool t4004 = v13;
              t4003 = t4004;
            }
            if (t4003) {
              uintptr_t t4005 = v0;
              uintptr_t t4006 = v5;
              ApString t4007 = AP_STR("compound assignment updates an existing, unannotated variable");
              f_fail(t4005,t4006,t4007);
            } else {
            }
            uintptr_t t4008 = v0;
            uintptr_t t4009 = f_take(t4008);
            v15 = t4009;
          } else {
            uintptr_t t4010 = v0;
            int64_t t4011 = ((int64_t)UINT64_C(18));
            ApString t4012 = AP_STR("expected = (assignment), not == (comparison)");
            uintptr_t t4013 = f_expect(t4010,t4011,t4012);
          }
          uintptr_t t4014 = v0;
          int64_t t4015 = ((int64_t)UINT64_C(0));
          uintptr_t t4016 = f_expression(t4014,t4015);
          v16 = t4016;
          uintptr_t t4017 = v15;
          uintptr_t t4018 = f_nil();
          bool t4019 = (t4017 != t4018);
          if (t4019) {
            uintptr_t t4020 = v0;
            uintptr_t t4021 = v5;
            int64_t t4022 = ((int64_t)UINT64_C(1));
            ApString t4023 = f_gets(t4021,t4022);
            uintptr_t t4024 = f_binding(t4020,t4023);
            v17 = t4024;
            uintptr_t t4025 = v17;
            uintptr_t t4026 = f_nil();
            bool t4027 = (t4025 == t4026);
            if (t4027) {
              uintptr_t t4028 = v0;
              uintptr_t t4029 = v5;
              ApString t4030 = AP_STR("compound assignment requires an existing variable");
              f_fail(t4028,t4029,t4030);
            } else {
            }
            uintptr_t t4031 = v0;
            int64_t t4032 = ((int64_t)UINT64_C(3));
            uintptr_t t4033 = v17;
            int64_t t4034 = ((int64_t)UINT64_C(2));
            int64_t t4035 = f_get(t4033,t4034);
            uintptr_t t4036 = v5;
            uintptr_t t4037 = f_leaf(t4031,t4032,t4035,t4036);
            v18 = t4037;
            uintptr_t t4038 = v18;
            int64_t t4039 = ((int64_t)UINT64_C(6));
            uintptr_t t4040 = v17;
            int64_t t4041 = ((int64_t)UINT64_C(3));
            int64_t t4042 = f_get(t4040,t4041);
            f_put(t4038,t4039,t4042);
            uintptr_t t4043 = v15;
            int64_t t4044 = ((int64_t)UINT64_C(0));
            uintptr_t t4045 = v15;
            int64_t t4046 = ((int64_t)UINT64_C(0));
            int64_t t4047 = f_get(t4045,t4046);
            int64_t t4048 = ((int64_t)UINT64_C(35));
            int64_t t4049 = ap_sub(t4047,t4048);
            f_put(t4043,t4044,t4049);
            uintptr_t t4050 = v15;
            int64_t t4051 = ((int64_t)UINT64_C(1));
            uintptr_t t4052 = v15;
            int64_t t4053 = ((int64_t)UINT64_C(1));
            ApString t4054 = f_gets(t4052,t4053);
            int64_t t4055 = ((int64_t)UINT64_C(0));
            int64_t t4056 = ((int64_t)UINT64_C(1));
            ApString t4057 = ap_slice(t4054,t4055,t4056);
            f_puts(t4050,t4051,t4057);
            uintptr_t t4058 = v0;
            uintptr_t t4059 = v15;
            uintptr_t t4060 = v18;
            uintptr_t t4061 = v16;
            uintptr_t t4062 = f_binary_node(t4058,t4059,t4060,t4061);
            v16 = t4062;
          } else {
          }
          uintptr_t t4063 = v16;
          int64_t t4064 = ((int64_t)UINT64_C(1));
          int64_t t4065 = f_get(t4063,t4064);
          v19 = t4065;
          int64_t t4066 = v19;
          int64_t t4067 = ((int64_t)UINT64_C(6));
          bool t4068 = (t4066 == t4067);
          if (t4068) {
            uintptr_t t4069 = v0;
            uintptr_t t4070 = v5;
            ApString t4071 = AP_STR("cannot assign a void result");
            f_fail(t4069,t4070,t4071);
          } else {
          }
          bool t4072 = v13;
          bool t4073 = t4072;
          if (t4073) {
            int64_t t4074 = v14;
            int64_t t4075 = v19;
            bool t4076 = (t4074 != t4075);
            t4073 = t4076;
          }
          if (t4073) {
            ApString t4077 = AP_STR("");
            v20 = t4077;
            int64_t t4078 = v14;
            int64_t t4079 = ((int64_t)UINT64_C(3));
            bool t4080 = (t4078 == t4079);
            bool t4081 = t4080;
            if (t4081) {
              int64_t t4082 = v19;
              int64_t t4083 = ((int64_t)UINT64_C(0));
              bool t4084 = (t4082 == t4083);
              t4081 = t4084;
            }
            if (t4081) {
              ApString t4085 = AP_STR("int");
              v20 = t4085;
            } else {
            }
            int64_t t4086 = v14;
            int64_t t4087 = ((int64_t)UINT64_C(0));
            bool t4088 = (t4086 == t4087);
            bool t4089 = t4088;
            if (t4089) {
              int64_t t4090 = v19;
              int64_t t4091 = ((int64_t)UINT64_C(3));
              bool t4092 = (t4090 == t4091);
              t4089 = t4092;
            }
            if (t4089) {
              ApString t4093 = AP_STR("number");
              v20 = t4093;
            } else {
            }
            int64_t t4094 = v14;
            int64_t t4095 = ((int64_t)UINT64_C(7));
            bool t4096 = (t4094 == t4095);
            bool t4097 = t4096;
            if (t4097) {
              int64_t t4098 = v19;
              int64_t t4099 = ((int64_t)UINT64_C(0));
              bool t4100 = (t4098 == t4099);
              bool t4101 = t4100;
              if (!t4101) {
                int64_t t4102 = v19;
                int64_t t4103 = ((int64_t)UINT64_C(3));
                bool t4104 = (t4102 == t4103);
                t4101 = t4104;
              }
              t4097 = t4101;
            }
            if (t4097) {
              ApString t4105 = AP_STR("float");
              v20 = t4105;
            } else {
            }
            ApString t4106 = v20;
            ApString t4107 = AP_STR("");
            bool t4108 = ap_equal(t4106,t4107);
            if (t4108) {
              uintptr_t t4109 = v0;
              uintptr_t t4110 = v5;
              ApString t4111 = AP_STR("initializer does not match its annotation");
              f_fail(t4109,t4110,t4111);
            } else {
            }
            uintptr_t t4112 = v0;
            uintptr_t t4113 = f_nil();
            uintptr_t t4114 = v16;
            uintptr_t t4115 = f_list_add(t4112,t4113,t4114);
            v21 = t4115;
            uintptr_t t4116 = v0;
            uintptr_t t4117 = v5;
            ApString t4118 = v20;
            uintptr_t t4119 = v21;
            int64_t t4120 = ((int64_t)UINT64_C(1));
            uintptr_t t4121 = f_call_node(t4116,t4117,t4118,t4119,t4120);
            v16 = t4121;
            uintptr_t t4122 = v16;
            int64_t t4123 = ((int64_t)UINT64_C(1));
            int64_t t4124 = f_get(t4122,t4123);
            v19 = t4124;
          } else {
          }
          uintptr_t t4125 = v0;
          uintptr_t t4126 = v5;
          int64_t t4127 = ((int64_t)UINT64_C(1));
          ApString t4128 = f_gets(t4126,t4127);
          uintptr_t t4129 = f_binding(t4125,t4128);
          v22 = t4129;
          int64_t t4130 = v7;
          int64_t t4131 = ((int64_t)UINT64_C(0));
          bool t4132 = (t4130 != t4131);
          if (t4132) {
            uintptr_t t4133 = f_nil();
            v22 = t4133;
          } else {
          }
          int64_t t4134 = ((int64_t)UINT64_C(0));
          v23 = t4134;
          uintptr_t t4135 = v22;
          uintptr_t t4136 = f_nil();
          bool t4137 = (t4135 == t4136);
          if (t4137) {
            uintptr_t t4138 = v0;
            int64_t t4139 = ((int64_t)UINT64_C(1));
            uintptr_t t4140 = v5;
            int64_t t4141 = f_slots(t4138,t4139,t4140);
            v23 = t4141;
            uintptr_t t4142 = v0;
            uintptr_t t4143 = v5;
            int64_t t4144 = ((int64_t)UINT64_C(1));
            ApString t4145 = f_gets(t4143,t4144);
            int64_t t4146 = v19;
            int64_t t4147 = v23;
            f_bind_name(t4142,t4145,t4146,t4147);
            int64_t t4148 = v7;
            int64_t t4149 = ((int64_t)UINT64_C(45));
            bool t4150 = (t4148 == t4149);
            if (t4150) {
              uintptr_t t4151 = v0;
              uintptr_t t4152 = v5;
              int64_t t4153 = ((int64_t)UINT64_C(1));
              ApString t4154 = f_gets(t4152,t4153);
              uintptr_t t4155 = f_binding(t4151,t4154);
              int64_t t4156 = ((int64_t)UINT64_C(5));
              int64_t t4157 = ((int64_t)UINT64_C(1));
              f_put(t4155,t4156,t4157);
            } else {
            }
          } else {
            uintptr_t t4158 = v22;
            int64_t t4159 = ((int64_t)UINT64_C(5));
            int64_t t4160 = f_get(t4158,t4159);
            int64_t t4161 = ((int64_t)UINT64_C(1));
            bool t4162 = (t4160 == t4161);
            if (t4162) {
              uintptr_t t4163 = v0;
              uintptr_t t4164 = v5;
              ApString t4165 = AP_STR("cannot reassign a const binding");
              f_fail(t4163,t4164,t4165);
            } else {
            }
            uintptr_t t4166 = v22;
            int64_t t4167 = ((int64_t)UINT64_C(2));
            int64_t t4168 = f_get(t4166,t4167);
            int64_t t4169 = v19;
            bool t4170 = (t4168 != t4169);
            if (t4170) {
              uintptr_t t4171 = v0;
              uintptr_t t4172 = v5;
              ApString t4173 = AP_STR("a variable cannot change type");
              f_fail(t4171,t4172,t4173);
            } else {
            }
            uintptr_t t4174 = v22;
            int64_t t4175 = ((int64_t)UINT64_C(3));
            int64_t t4176 = f_get(t4174,t4175);
            v23 = t4176;
          }
          uintptr_t t4177 = v9;
          int64_t t4178 = ((int64_t)UINT64_C(0));
          int64_t t4179 = ((int64_t)UINT64_C(0));
          f_put(t4177,t4178,t4179);
          uintptr_t t4180 = v9;
          int64_t t4181 = ((int64_t)UINT64_C(2));
          int64_t t4182 = v23;
          f_put(t4180,t4181,t4182);
          uintptr_t t4183 = v9;
          int64_t t4184 = ((int64_t)UINT64_C(3));
          int64_t t4185 = v19;
          f_put(t4183,t4184,t4185);
          uintptr_t t4186 = v9;
          int64_t t4187 = ((int64_t)UINT64_C(4));
          uintptr_t t4188 = v16;
          f_putp(t4186,t4187,t4188);
        }
      }
    } else {
      int64_t t4189 = v6;
      int64_t t4190 = ((int64_t)UINT64_C(24));
      bool t4191 = (t4189 == t4190);
      bool t4192 = t4191;
      if (!t4192) {
        int64_t t4193 = v6;
        int64_t t4194 = ((int64_t)UINT64_C(55));
        bool t4195 = (t4193 == t4194);
        t4192 = t4195;
      }
      if (t4192) {
        uintptr_t t4196 = v9;
        int64_t t4197 = ((int64_t)UINT64_C(0));
        int64_t t4198 = ((int64_t)UINT64_C(1));
        f_put(t4196,t4197,t4198);
        uintptr_t t4199 = v0;
        int64_t t4200 = ((int64_t)UINT64_C(11));
        bool t4201 = f_accept(t4199,t4200);
        uintptr_t t4202 = f_nil();
        v24 = t4202;
        int64_t t4203 = ((int64_t)UINT64_C(0));
        v25 = t4203;
        while (true) {
          bool t4204 = true;
          if (!t4204) break;
          int64_t t4205 = v6;
          int64_t t4206 = ((int64_t)UINT64_C(55));
          bool t4207 = (t4205 == t4206);
          bool t4208 = t4207;
          if (t4208) {
            int64_t t4209 = v25;
            int64_t t4210 = ((int64_t)UINT64_C(0));
            bool t4211 = (t4209 == t4210);
            t4208 = t4211;
          }
          bool t4212 = t4208;
          if (t4212) {
            uintptr_t t4213 = v0;
            int64_t t4214 = f_kind(t4213);
            int64_t t4215 = ((int64_t)UINT64_C(1));
            bool t4216 = (t4214 == t4215);
            bool t4217 = t4216;
            if (!t4217) {
              uintptr_t t4218 = v0;
              int64_t t4219 = f_kind(t4218);
              int64_t t4220 = ((int64_t)UINT64_C(0));
              bool t4221 = (t4219 == t4220);
              t4217 = t4221;
            }
            t4212 = t4217;
          }
          if (t4212) {
            break;
          } else {
          }
          uintptr_t t4222 = f_nil();
          v26 = t4222;
          uintptr_t t4223 = v0;
          int64_t t4224 = f_kind(t4223);
          int64_t t4225 = ((int64_t)UINT64_C(5));
          bool t4226 = (t4224 == t4225);
          if (t4226) {
            uintptr_t t4227 = v0;
            int64_t t4228 = ((int64_t)UINT64_C(1));
            int64_t t4229 = ((int64_t)UINT64_C(1));
            uintptr_t t4230 = v0;
            uintptr_t t4231 = f_take(t4230);
            uintptr_t t4232 = f_leaf(t4227,t4228,t4229,t4231);
            v26 = t4232;
          } else {
            uintptr_t t4233 = v0;
            int64_t t4234 = ((int64_t)UINT64_C(0));
            uintptr_t t4235 = f_expression(t4233,t4234);
            v26 = t4235;
          }
          uintptr_t t4236 = v26;
          int64_t t4237 = ((int64_t)UINT64_C(1));
          int64_t t4238 = f_get(t4236,t4237);
          int64_t t4239 = ((int64_t)UINT64_C(4));
          bool t4240 = (t4238 == t4239);
          bool t4241 = t4240;
          if (!t4241) {
            uintptr_t t4242 = v26;
            int64_t t4243 = ((int64_t)UINT64_C(1));
            int64_t t4244 = f_get(t4242,t4243);
            int64_t t4245 = ((int64_t)UINT64_C(6));
            bool t4246 = (t4244 == t4245);
            t4241 = t4246;
          }
          if (t4241) {
            uintptr_t t4247 = v0;
            uintptr_t t4248 = v5;
            ApString t4249 = AP_STR("cannot print buffers or void values");
            f_fail(t4247,t4248,t4249);
          } else {
          }
          uintptr_t t4250 = v0;
          uintptr_t t4251 = v24;
          uintptr_t t4252 = v26;
          uintptr_t t4253 = f_list_add(t4250,t4251,t4252);
          v24 = t4253;
          int64_t t4254 = v25;
          int64_t t4255 = ((int64_t)UINT64_C(1));
          int64_t t4256 = ap_add(t4254,t4255);
          v25 = t4256;
          uintptr_t t4257 = v0;
          int64_t t4258 = ((int64_t)UINT64_C(10));
          bool t4259 = f_accept(t4257,t4258);
          bool t4260 = !t4259;
          if (t4260) {
            break;
          } else {
          }
        }
        int64_t t4261 = v6;
        int64_t t4262 = ((int64_t)UINT64_C(55));
        bool t4263 = (t4261 == t4262);
        if (t4263) {
          uintptr_t t4264 = v0;
          int64_t t4265 = ((int64_t)UINT64_C(1));
          int64_t t4266 = ((int64_t)UINT64_C(1));
          uintptr_t t4267 = v5;
          uintptr_t t4268 = f_leaf(t4264,t4265,t4266,t4267);
          v27 = t4268;
          uintptr_t t4269 = v27;
          int64_t t4270 = ((int64_t)UINT64_C(4));
          ApString t4271 = AP_STR("\012");
          f_puts(t4269,t4270,t4271);
          uintptr_t t4272 = v0;
          uintptr_t t4273 = v24;
          uintptr_t t4274 = v27;
          uintptr_t t4275 = f_list_add(t4272,t4273,t4274);
          v24 = t4275;
          int64_t t4276 = v25;
          int64_t t4277 = ((int64_t)UINT64_C(1));
          int64_t t4278 = ap_add(t4276,t4277);
          v25 = t4278;
        } else {
        }
        uintptr_t t4279 = v9;
        int64_t t4280 = ((int64_t)UINT64_C(5));
        uintptr_t t4281 = v24;
        f_putp(t4279,t4280,t4281);
        uintptr_t t4282 = v9;
        int64_t t4283 = ((int64_t)UINT64_C(6));
        int64_t t4284 = v25;
        f_put(t4282,t4283,t4284);
      } else {
        int64_t t4285 = v6;
        int64_t t4286 = ((int64_t)UINT64_C(33));
        bool t4287 = (t4285 == t4286);
        if (t4287) {
          uintptr_t t4288 = v9;
          int64_t t4289 = ((int64_t)UINT64_C(0));
          int64_t t4290 = ((int64_t)UINT64_C(5));
          f_put(t4288,t4289,t4290);
          uintptr_t t4291 = v0;
          int64_t t4292 = ((int64_t)UINT64_C(11));
          bool t4293 = f_accept(t4291,t4292);
          uintptr_t t4294 = v0;
          int64_t t4295 = ((int64_t)UINT64_C(0));
          uintptr_t t4296 = f_expression(t4294,t4295);
          v28 = t4296;
          uintptr_t t4297 = v28;
          int64_t t4298 = ((int64_t)UINT64_C(1));
          int64_t t4299 = f_get(t4297,t4298);
          int64_t t4300 = ((int64_t)UINT64_C(0));
          bool t4301 = (t4299 != t4300);
          bool t4302 = t4301;
          if (t4302) {
            uintptr_t t4303 = v28;
            int64_t t4304 = ((int64_t)UINT64_C(1));
            int64_t t4305 = f_get(t4303,t4304);
            int64_t t4306 = ((int64_t)UINT64_C(3));
            bool t4307 = (t4305 != t4306);
            t4302 = t4307;
          }
          if (t4302) {
            uintptr_t t4308 = v0;
            uintptr_t t4309 = v5;
            ApString t4310 = AP_STR("exit needs a number or int");
            f_fail(t4308,t4309,t4310);
          } else {
          }
          uintptr_t t4311 = v9;
          int64_t t4312 = ((int64_t)UINT64_C(4));
          uintptr_t t4313 = v28;
          f_putp(t4311,t4312,t4313);
          uintptr_t t4314 = v9;
          int64_t t4315 = ((int64_t)UINT64_C(12));
          int64_t t4316 = ((int64_t)UINT64_C(1));
          f_put(t4314,t4315,t4316);
        } else {
          int64_t t4317 = v6;
          int64_t t4318 = ((int64_t)UINT64_C(25));
          bool t4319 = (t4317 == t4318);
          if (t4319) {
            uintptr_t t4320 = v9;
            int64_t t4321 = ((int64_t)UINT64_C(0));
            int64_t t4322 = ((int64_t)UINT64_C(2));
            f_put(t4320,t4321,t4322);
            uintptr_t t4323 = v0;
            int64_t t4324 = ((int64_t)UINT64_C(0));
            uintptr_t t4325 = f_expression(t4323,t4324);
            v29 = t4325;
            uintptr_t t4326 = v0;
            uintptr_t t4327 = v29;
            int64_t t4328 = ((int64_t)UINT64_C(2));
            f_require_type(t4326,t4327,t4328);
            uintptr_t t4329 = v9;
            int64_t t4330 = ((int64_t)UINT64_C(4));
            uintptr_t t4331 = v29;
            f_putp(t4329,t4330,t4331);
            uintptr_t t4332 = v0;
            int64_t t4333 = ((int64_t)UINT64_C(26));
            ApString t4334 = AP_STR("expected then");
            uintptr_t t4335 = f_expect(t4332,t4333,t4334);
            uintptr_t t4336 = v0;
            int64_t t4337 = ((int64_t)UINT64_C(1));
            ApString t4338 = AP_STR("expected newline after then");
            uintptr_t t4339 = f_expect(t4336,t4337,t4338);
            uintptr_t t4340 = v9;
            int64_t t4341 = ((int64_t)UINT64_C(7));
            uintptr_t t4342 = v0;
            int64_t t4343 = ((int64_t)UINT64_C(0));
            uintptr_t t4344 = f_block(t4342,t4343);
            f_putp(t4340,t4341,t4344);
            uintptr_t t4345 = v9;
            v30 = t4345;
            uintptr_t t4346 = f_nil();
            v31 = t4346;
            int64_t t4347 = ((int64_t)UINT64_C(0));
            v32 = t4347;
            while (true) {
              uintptr_t t4348 = v0;
              int64_t t4349 = f_kind(t4348);
              int64_t t4350 = ((int64_t)UINT64_C(54));
              bool t4351 = (t4349 == t4350);
              if (!t4351) break;
              uintptr_t t4352 = v0;
              uintptr_t t4353 = f_take(t4352);
              v33 = t4353;
              int64_t t4354 = v32;
              int64_t t4355 = ((int64_t)UINT64_C(1));
              int64_t t4356 = ap_add(t4354,t4355);
              v32 = t4356;
              int64_t t4357 = v32;
              int64_t t4358 = ((int64_t)UINT64_C(64));
              bool t4359 = (t4357 > t4358);
              if (t4359) {
                uintptr_t t4360 = v0;
                uintptr_t t4361 = v33;
                ApString t4362 = AP_STR("elif chain exceeds 64 branches");
                f_fail(t4360,t4361,t4362);
              } else {
              }
              uintptr_t t4363 = v0;
              int64_t t4364 = ((int64_t)UINT64_C(16));
              uintptr_t t4365 = f_arena(t4363,t4364);
              v34 = t4365;
              uintptr_t t4366 = v34;
              int64_t t4367 = ((int64_t)UINT64_C(0));
              uintptr_t t4368 = v30;
              f_putp(t4366,t4367,t4368);
              uintptr_t t4369 = v34;
              int64_t t4370 = ((int64_t)UINT64_C(1));
              uintptr_t t4371 = v31;
              f_putp(t4369,t4370,t4371);
              uintptr_t t4372 = v34;
              v31 = t4372;
              uintptr_t t4373 = v0;
              int64_t t4374 = ((int64_t)UINT64_C(128));
              uintptr_t t4375 = f_arena(t4373,t4374);
              v35 = t4375;
              uintptr_t t4376 = v35;
              int64_t t4377 = ((int64_t)UINT64_C(0));
              int64_t t4378 = ((int64_t)UINT64_C(2));
              f_put(t4376,t4377,t4378);
              uintptr_t t4379 = v35;
              int64_t t4380 = ((int64_t)UINT64_C(1));
              uintptr_t t4381 = v33;
              f_putp(t4379,t4380,t4381);
              uintptr_t t4382 = v0;
              int64_t t4383 = ((int64_t)UINT64_C(0));
              uintptr_t t4384 = f_expression(t4382,t4383);
              v36 = t4384;
              uintptr_t t4385 = v0;
              uintptr_t t4386 = v36;
              int64_t t4387 = ((int64_t)UINT64_C(2));
              f_require_type(t4385,t4386,t4387);
              uintptr_t t4388 = v35;
              int64_t t4389 = ((int64_t)UINT64_C(4));
              uintptr_t t4390 = v36;
              f_putp(t4388,t4389,t4390);
              uintptr_t t4391 = v0;
              int64_t t4392 = ((int64_t)UINT64_C(26));
              ApString t4393 = AP_STR("expected then after elif condition");
              uintptr_t t4394 = f_expect(t4391,t4392,t4393);
              uintptr_t t4395 = v0;
              int64_t t4396 = ((int64_t)UINT64_C(1));
              ApString t4397 = AP_STR("expected newline after then");
              uintptr_t t4398 = f_expect(t4395,t4396,t4397);
              uintptr_t t4399 = v35;
              int64_t t4400 = ((int64_t)UINT64_C(7));
              uintptr_t t4401 = v0;
              int64_t t4402 = ((int64_t)UINT64_C(0));
              uintptr_t t4403 = f_block(t4401,t4402);
              f_putp(t4399,t4400,t4403);
              uintptr_t t4404 = v30;
              int64_t t4405 = ((int64_t)UINT64_C(8));
              uintptr_t t4406 = v35;
              f_putp(t4404,t4405,t4406);
              uintptr_t t4407 = v35;
              v30 = t4407;
            }
            uintptr_t t4408 = v0;
            int64_t t4409 = ((int64_t)UINT64_C(27));
            bool t4410 = f_accept(t4408,t4409);
            if (t4410) {
              uintptr_t t4411 = v0;
              int64_t t4412 = ((int64_t)UINT64_C(1));
              ApString t4413 = AP_STR("expected newline after else");
              uintptr_t t4414 = f_expect(t4411,t4412,t4413);
              uintptr_t t4415 = v30;
              int64_t t4416 = ((int64_t)UINT64_C(8));
              uintptr_t t4417 = v0;
              int64_t t4418 = ((int64_t)UINT64_C(0));
              uintptr_t t4419 = f_block(t4417,t4418);
              f_putp(t4415,t4416,t4419);
            } else {
            }
            uintptr_t t4420 = v0;
            int64_t t4421 = ((int64_t)UINT64_C(28));
            ApString t4422 = AP_STR("expected end after if");
            uintptr_t t4423 = f_expect(t4420,t4421,t4422);
            while (true) {
              bool t4424 = true;
              if (!t4424) break;
              uintptr_t t4425 = v30;
              int64_t t4426 = ((int64_t)UINT64_C(7));
              uintptr_t t4427 = f_getp(t4425,t4426);
              bool t4428 = f_returns(t4427);
              bool t4429 = t4428;
              if (t4429) {
                uintptr_t t4430 = v30;
                int64_t t4431 = ((int64_t)UINT64_C(8));
                uintptr_t t4432 = f_getp(t4430,t4431);
                bool t4433 = f_returns(t4432);
                t4429 = t4433;
              }
              if (t4429) {
                uintptr_t t4434 = v30;
                int64_t t4435 = ((int64_t)UINT64_C(12));
                int64_t t4436 = ((int64_t)UINT64_C(1));
                f_put(t4434,t4435,t4436);
              } else {
              }
              uintptr_t t4437 = v31;
              uintptr_t t4438 = f_nil();
              bool t4439 = (t4437 == t4438);
              if (t4439) {
                break;
              } else {
              }
              uintptr_t t4440 = v31;
              int64_t t4441 = ((int64_t)UINT64_C(0));
              uintptr_t t4442 = f_getp(t4440,t4441);
              v30 = t4442;
              uintptr_t t4443 = v31;
              int64_t t4444 = ((int64_t)UINT64_C(1));
              uintptr_t t4445 = f_getp(t4443,t4444);
              v31 = t4445;
            }
          } else {
            int64_t t4446 = v6;
            int64_t t4447 = ((int64_t)UINT64_C(31));
            bool t4448 = (t4446 == t4447);
            if (t4448) {
              uintptr_t t4449 = v9;
              int64_t t4450 = ((int64_t)UINT64_C(0));
              int64_t t4451 = ((int64_t)UINT64_C(4));
              f_put(t4449,t4450,t4451);
              uintptr_t t4452 = v0;
              int64_t t4453 = ((int64_t)UINT64_C(0));
              uintptr_t t4454 = f_expression(t4452,t4453);
              v37 = t4454;
              uintptr_t t4455 = v0;
              uintptr_t t4456 = v37;
              int64_t t4457 = ((int64_t)UINT64_C(2));
              f_require_type(t4455,t4456,t4457);
              uintptr_t t4458 = v9;
              int64_t t4459 = ((int64_t)UINT64_C(4));
              uintptr_t t4460 = v37;
              f_putp(t4458,t4459,t4460);
              uintptr_t t4461 = v0;
              int64_t t4462 = ((int64_t)UINT64_C(32));
              ApString t4463 = AP_STR("expected do after while condition");
              uintptr_t t4464 = f_expect(t4461,t4462,t4463);
              uintptr_t t4465 = v0;
              int64_t t4466 = ((int64_t)UINT64_C(1));
              ApString t4467 = AP_STR("expected newline after do");
              uintptr_t t4468 = f_expect(t4465,t4466,t4467);
              uintptr_t t4469 = v0;
              int64_t t4470 = ((int64_t)UINT64_C(14));
              uintptr_t t4471 = v0;
              int64_t t4472 = ((int64_t)UINT64_C(14));
              int64_t t4473 = f_get(t4471,t4472);
              int64_t t4474 = ((int64_t)UINT64_C(1));
              int64_t t4475 = ap_add(t4473,t4474);
              f_put(t4469,t4470,t4475);
              uintptr_t t4476 = v9;
              int64_t t4477 = ((int64_t)UINT64_C(7));
              uintptr_t t4478 = v0;
              int64_t t4479 = ((int64_t)UINT64_C(0));
              uintptr_t t4480 = f_block(t4478,t4479);
              f_putp(t4476,t4477,t4480);
              uintptr_t t4481 = v0;
              int64_t t4482 = ((int64_t)UINT64_C(14));
              uintptr_t t4483 = v0;
              int64_t t4484 = ((int64_t)UINT64_C(14));
              int64_t t4485 = f_get(t4483,t4484);
              int64_t t4486 = ((int64_t)UINT64_C(1));
              int64_t t4487 = ap_sub(t4485,t4486);
              f_put(t4481,t4482,t4487);
              uintptr_t t4488 = v0;
              int64_t t4489 = ((int64_t)UINT64_C(28));
              ApString t4490 = AP_STR("expected end after while");
              uintptr_t t4491 = f_expect(t4488,t4489,t4490);
            } else {
              int64_t t4492 = v6;
              int64_t t4493 = ((int64_t)UINT64_C(29));
              bool t4494 = (t4492 == t4493);
              if (t4494) {
                uintptr_t t4495 = v9;
                int64_t t4496 = ((int64_t)UINT64_C(0));
                int64_t t4497 = ((int64_t)UINT64_C(3));
                f_put(t4495,t4496,t4497);
                uintptr_t t4498 = v0;
                int64_t t4499 = ((int64_t)UINT64_C(2));
                ApString t4500 = AP_STR("expected for variable");
                uintptr_t t4501 = f_expect(t4498,t4499,t4500);
                v38 = t4501;
                uintptr_t t4502 = v0;
                int64_t t4503 = ((int64_t)UINT64_C(30));
                ApString t4504 = AP_STR("expected in");
                uintptr_t t4505 = f_expect(t4502,t4503,t4504);
                uintptr_t t4506 = f_nil();
                v39 = t4506;
                int64_t t4507 = ((int64_t)UINT64_C(0));
                v40 = t4507;
                int64_t t4508 = ((int64_t)UINT64_C(18446744073709551615));
                v41 = t4508;
                while (true) {
                  uintptr_t t4509 = v0;
                  int64_t t4510 = f_kind(t4509);
                  int64_t t4511 = ((int64_t)UINT64_C(1));
                  bool t4512 = (t4510 != t4511);
                  bool t4513 = t4512;
                  if (t4513) {
                    uintptr_t t4514 = v0;
                    int64_t t4515 = f_kind(t4514);
                    int64_t t4516 = ((int64_t)UINT64_C(0));
                    bool t4517 = (t4515 != t4516);
                    t4513 = t4517;
                  }
                  if (!t4513) break;
                  uintptr_t t4518 = v0;
                  int64_t t4519 = ((int64_t)UINT64_C(90));
                  uintptr_t t4520 = f_expression(t4518,t4519);
                  v42 = t4520;
                  uintptr_t t4521 = v42;
                  int64_t t4522 = ((int64_t)UINT64_C(1));
                  int64_t t4523 = f_get(t4521,t4522);
                  int64_t t4524 = ((int64_t)UINT64_C(6));
                  bool t4525 = (t4523 == t4524);
                  if (t4525) {
                    uintptr_t t4526 = v0;
                    uintptr_t t4527 = v38;
                    ApString t4528 = AP_STR("void item in for list");
                    f_fail(t4526,t4527,t4528);
                  } else {
                  }
                  int64_t t4529 = v40;
                  int64_t t4530 = ((int64_t)UINT64_C(0));
                  bool t4531 = (t4529 == t4530);
                  if (t4531) {
                    uintptr_t t4532 = v42;
                    int64_t t4533 = ((int64_t)UINT64_C(1));
                    int64_t t4534 = f_get(t4532,t4533);
                    v41 = t4534;
                  } else {
                    uintptr_t t4535 = v0;
                    uintptr_t t4536 = v42;
                    int64_t t4537 = v41;
                    f_require_type(t4535,t4536,t4537);
                  }
                  uintptr_t t4538 = v0;
                  uintptr_t t4539 = v39;
                  uintptr_t t4540 = v42;
                  uintptr_t t4541 = f_list_add(t4538,t4539,t4540);
                  v39 = t4541;
                  int64_t t4542 = v40;
                  int64_t t4543 = ((int64_t)UINT64_C(1));
                  int64_t t4544 = ap_add(t4542,t4543);
                  v40 = t4544;
                  int64_t t4545 = v40;
                  int64_t t4546 = ((int64_t)UINT64_C(2048));
                  bool t4547 = (t4545 > t4546);
                  if (t4547) {
                    uintptr_t t4548 = v0;
                    uintptr_t t4549 = v38;
                    ApString t4550 = AP_STR("for list is too long");
                    f_fail(t4548,t4549,t4550);
                  } else {
                  }
                }
                int64_t t4551 = v40;
                int64_t t4552 = ((int64_t)UINT64_C(0));
                bool t4553 = (t4551 == t4552);
                if (t4553) {
                  uintptr_t t4554 = v0;
                  uintptr_t t4555 = v38;
                  ApString t4556 = AP_STR("for list must not be empty");
                  f_fail(t4554,t4555,t4556);
                } else {
                }
                uintptr_t t4557 = v0;
                int64_t t4558 = ((int64_t)UINT64_C(1));
                ApString t4559 = AP_STR("expected newline after for list");
                uintptr_t t4560 = f_expect(t4557,t4558,t4559);
                uintptr_t t4561 = v9;
                int64_t t4562 = ((int64_t)UINT64_C(5));
                uintptr_t t4563 = v39;
                f_putp(t4561,t4562,t4563);
                uintptr_t t4564 = v9;
                int64_t t4565 = ((int64_t)UINT64_C(6));
                int64_t t4566 = v40;
                f_put(t4564,t4565,t4566);
                uintptr_t t4567 = v9;
                int64_t t4568 = ((int64_t)UINT64_C(3));
                int64_t t4569 = v41;
                f_put(t4567,t4568,t4569);
                uintptr_t t4570 = v9;
                int64_t t4571 = ((int64_t)UINT64_C(2));
                uintptr_t t4572 = v0;
                int64_t t4573 = ((int64_t)UINT64_C(1));
                uintptr_t t4574 = v38;
                int64_t t4575 = f_slots(t4572,t4573,t4574);
                f_put(t4570,t4571,t4575);
                uintptr_t t4576 = v9;
                int64_t t4577 = ((int64_t)UINT64_C(9));
                uintptr_t t4578 = v0;
                int64_t t4579 = ((int64_t)UINT64_C(1));
                uintptr_t t4580 = v38;
                int64_t t4581 = f_slots(t4578,t4579,t4580);
                f_put(t4576,t4577,t4581);
                uintptr_t t4582 = v9;
                int64_t t4583 = ((int64_t)UINT64_C(10));
                uintptr_t t4584 = v0;
                int64_t t4585 = v40;
                uintptr_t t4586 = v38;
                int64_t t4587 = f_slots(t4584,t4585,t4586);
                f_put(t4582,t4583,t4587);
                uintptr_t t4588 = v0;
                f_push_scope(t4588);
                uintptr_t t4589 = v0;
                uintptr_t t4590 = v38;
                int64_t t4591 = ((int64_t)UINT64_C(1));
                ApString t4592 = f_gets(t4590,t4591);
                int64_t t4593 = v41;
                uintptr_t t4594 = v9;
                int64_t t4595 = ((int64_t)UINT64_C(2));
                int64_t t4596 = f_get(t4594,t4595);
                f_bind_name(t4589,t4592,t4593,t4596);
                uintptr_t t4597 = v0;
                int64_t t4598 = ((int64_t)UINT64_C(14));
                uintptr_t t4599 = v0;
                int64_t t4600 = ((int64_t)UINT64_C(14));
                int64_t t4601 = f_get(t4599,t4600);
                int64_t t4602 = ((int64_t)UINT64_C(1));
                int64_t t4603 = ap_add(t4601,t4602);
                f_put(t4597,t4598,t4603);
                uintptr_t t4604 = v9;
                int64_t t4605 = ((int64_t)UINT64_C(7));
                uintptr_t t4606 = v0;
                int64_t t4607 = ((int64_t)UINT64_C(0));
                uintptr_t t4608 = f_block(t4606,t4607);
                f_putp(t4604,t4605,t4608);
                uintptr_t t4609 = v0;
                int64_t t4610 = ((int64_t)UINT64_C(14));
                uintptr_t t4611 = v0;
                int64_t t4612 = ((int64_t)UINT64_C(14));
                int64_t t4613 = f_get(t4611,t4612);
                int64_t t4614 = ((int64_t)UINT64_C(1));
                int64_t t4615 = ap_sub(t4613,t4614);
                f_put(t4609,t4610,t4615);
                uintptr_t t4616 = v0;
                f_pop_scope(t4616);
                uintptr_t t4617 = v0;
                int64_t t4618 = ((int64_t)UINT64_C(28));
                ApString t4619 = AP_STR("expected end after for");
                uintptr_t t4620 = f_expect(t4617,t4618,t4619);
              } else {
                int64_t t4621 = v6;
                int64_t t4622 = ((int64_t)UINT64_C(41));
                bool t4623 = (t4621 == t4622);
                if (t4623) {
                  uintptr_t t4624 = v9;
                  int64_t t4625 = ((int64_t)UINT64_C(0));
                  int64_t t4626 = ((int64_t)UINT64_C(7));
                  f_put(t4624,t4625,t4626);
                  uintptr_t t4627 = v0;
                  int64_t t4628 = ((int64_t)UINT64_C(1));
                  ApString t4629 = AP_STR("expected newline after unsafe");
                  uintptr_t t4630 = f_expect(t4627,t4628,t4629);
                  uintptr_t t4631 = v0;
                  int64_t t4632 = ((int64_t)UINT64_C(13));
                  uintptr_t t4633 = v0;
                  int64_t t4634 = ((int64_t)UINT64_C(13));
                  int64_t t4635 = f_get(t4633,t4634);
                  int64_t t4636 = ((int64_t)UINT64_C(1));
                  int64_t t4637 = ap_add(t4635,t4636);
                  f_put(t4631,t4632,t4637);
                  uintptr_t t4638 = v9;
                  int64_t t4639 = ((int64_t)UINT64_C(7));
                  uintptr_t t4640 = v0;
                  int64_t t4641 = ((int64_t)UINT64_C(0));
                  uintptr_t t4642 = f_block(t4640,t4641);
                  f_putp(t4638,t4639,t4642);
                  uintptr_t t4643 = v0;
                  int64_t t4644 = ((int64_t)UINT64_C(13));
                  uintptr_t t4645 = v0;
                  int64_t t4646 = ((int64_t)UINT64_C(13));
                  int64_t t4647 = f_get(t4645,t4646);
                  int64_t t4648 = ((int64_t)UINT64_C(1));
                  int64_t t4649 = ap_sub(t4647,t4648);
                  f_put(t4643,t4644,t4649);
                  uintptr_t t4650 = v0;
                  int64_t t4651 = ((int64_t)UINT64_C(28));
                  ApString t4652 = AP_STR("expected end after unsafe");
                  uintptr_t t4653 = f_expect(t4650,t4651,t4652);
                  uintptr_t t4654 = v9;
                  int64_t t4655 = ((int64_t)UINT64_C(7));
                  uintptr_t t4656 = f_getp(t4654,t4655);
                  bool t4657 = f_returns(t4656);
                  if (t4657) {
                    uintptr_t t4658 = v9;
                    int64_t t4659 = ((int64_t)UINT64_C(12));
                    int64_t t4660 = ((int64_t)UINT64_C(1));
                    f_put(t4658,t4659,t4660);
                  } else {
                  }
                } else {
                  int64_t t4661 = v6;
                  int64_t t4662 = ((int64_t)UINT64_C(40));
                  bool t4663 = (t4661 == t4662);
                  if (t4663) {
                    uintptr_t t4664 = v9;
                    int64_t t4665 = ((int64_t)UINT64_C(0));
                    int64_t t4666 = ((int64_t)UINT64_C(8));
                    f_put(t4664,t4665,t4666);
                    uintptr_t t4667 = v0;
                    int64_t t4668 = ((int64_t)UINT64_C(15));
                    int64_t t4669 = f_get(t4667,t4668);
                    v43 = t4669;
                    int64_t t4670 = v43;
                    int64_t t4671 = ((int64_t)UINT64_C(0));
                    bool t4672 = (t4670 < t4671);
                    if (t4672) {
                      uintptr_t t4673 = v0;
                      uintptr_t t4674 = v5;
                      ApString t4675 = AP_STR("return is only valid in a function");
                      f_fail(t4673,t4674,t4675);
                    } else {
                    }
                    uintptr_t t4676 = v0;
                    int64_t t4677 = f_kind(t4676);
                    int64_t t4678 = ((int64_t)UINT64_C(1));
                    bool t4679 = (t4677 != t4678);
                    bool t4680 = t4679;
                    if (t4680) {
                      uintptr_t t4681 = v0;
                      int64_t t4682 = f_kind(t4681);
                      int64_t t4683 = ((int64_t)UINT64_C(0));
                      bool t4684 = (t4682 != t4683);
                      t4680 = t4684;
                    }
                    if (t4680) {
                      uintptr_t t4685 = v0;
                      int64_t t4686 = ((int64_t)UINT64_C(0));
                      uintptr_t t4687 = f_expression(t4685,t4686);
                      v44 = t4687;
                      int64_t t4688 = v43;
                      int64_t t4689 = ((int64_t)UINT64_C(6));
                      bool t4690 = (t4688 == t4689);
                      if (t4690) {
                        uintptr_t t4691 = v0;
                        uintptr_t t4692 = v5;
                        ApString t4693 = AP_STR("void functions cannot return a value");
                        f_fail(t4691,t4692,t4693);
                      } else {
                      }
                      uintptr_t t4694 = v0;
                      uintptr_t t4695 = v44;
                      int64_t t4696 = v43;
                      f_require_type(t4694,t4695,t4696);
                      uintptr_t t4697 = v9;
                      int64_t t4698 = ((int64_t)UINT64_C(4));
                      uintptr_t t4699 = v44;
                      f_putp(t4697,t4698,t4699);
                    } else {
                      int64_t t4700 = v43;
                      int64_t t4701 = ((int64_t)UINT64_C(6));
                      bool t4702 = (t4700 != t4701);
                      if (t4702) {
                        uintptr_t t4703 = v0;
                        uintptr_t t4704 = v5;
                        ApString t4705 = AP_STR("this function must return a value");
                        f_fail(t4703,t4704,t4705);
                      } else {
                      }
                    }
                    uintptr_t t4706 = v9;
                    int64_t t4707 = ((int64_t)UINT64_C(12));
                    int64_t t4708 = ((int64_t)UINT64_C(1));
                    f_put(t4706,t4707,t4708);
                  } else {
                    int64_t t4709 = v6;
                    int64_t t4710 = ((int64_t)UINT64_C(42));
                    bool t4711 = (t4709 == t4710);
                    bool t4712 = t4711;
                    if (!t4712) {
                      int64_t t4713 = v6;
                      int64_t t4714 = ((int64_t)UINT64_C(43));
                      bool t4715 = (t4713 == t4714);
                      t4712 = t4715;
                    }
                    if (t4712) {
                      uintptr_t t4716 = v0;
                      int64_t t4717 = ((int64_t)UINT64_C(14));
                      int64_t t4718 = f_get(t4716,t4717);
                      int64_t t4719 = ((int64_t)UINT64_C(0));
                      bool t4720 = (t4718 == t4719);
                      if (t4720) {
                        uintptr_t t4721 = v0;
                        uintptr_t t4722 = v5;
                        ApString t4723 = AP_STR("break and continue require a loop");
                        f_fail(t4721,t4722,t4723);
                      } else {
                      }
                      uintptr_t t4724 = v9;
                      int64_t t4725 = ((int64_t)UINT64_C(0));
                      int64_t t4726 = ((int64_t)UINT64_C(9));
                      f_put(t4724,t4725,t4726);
                      int64_t t4727 = v6;
                      int64_t t4728 = ((int64_t)UINT64_C(43));
                      bool t4729 = (t4727 == t4728);
                      if (t4729) {
                        uintptr_t t4730 = v9;
                        int64_t t4731 = ((int64_t)UINT64_C(0));
                        int64_t t4732 = ((int64_t)UINT64_C(10));
                        f_put(t4730,t4731,t4732);
                      } else {
                      }
                    } else {
                      uintptr_t t4733 = v0;
                      uintptr_t t4734 = v5;
                      ApString t4735 = AP_STR("expected a statement; functions are top-level only");
                      f_fail(t4733,t4734,t4735);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uintptr_t t4736 = v0;
    f_finish_line(t4736);
    uintptr_t t4737 = v3;
    uintptr_t t4738 = f_nil();
    bool t4739 = (t4737 == t4738);
    if (t4739) {
      uintptr_t t4740 = v9;
      v3 = t4740;
    } else {
      uintptr_t t4741 = v4;
      int64_t t4742 = ((int64_t)UINT64_C(11));
      uintptr_t t4743 = v9;
      f_putp(t4741,t4742,t4743);
    }
    uintptr_t t4744 = v9;
    v4 = t4744;
    int64_t t4745 = v1;
    int64_t t4746 = ((int64_t)UINT64_C(1));
    bool t4747 = (t4745 == t4746);
    if (t4747) {
      break;
    } else {
    }
    uintptr_t t4748 = v0;
    f_skip_lines(t4748);
  }
  int64_t t4749 = v1;
  int64_t t4750 = ((int64_t)UINT64_C(0));
  bool t4751 = (t4749 == t4750);
  if (t4751) {
    uintptr_t t4752 = v0;
    f_pop_scope(t4752);
    uintptr_t t4753 = v0;
    int64_t t4754 = ((int64_t)UINT64_C(17));
    int64_t t4755 = v2;
    f_put(t4753,t4754,t4755);
  } else {
  }
  uintptr_t t4756 = v3;
  return t4756;
}
static void f_function_definition(uintptr_t v0) {
  uintptr_t v1;
  ApString v2;
  uintptr_t v3;
  uintptr_t v4;
  int64_t v5;
  uintptr_t v6;
  int64_t v7;
  uintptr_t v8;
  int64_t v9;
  int64_t v10;
  int64_t v11;
  uintptr_t v12;
  uintptr_t v13;
  int64_t v14;
  int64_t v15;
  uintptr_t v16;
  uintptr_t v17;
  uintptr_t t4757 = v0;
  int64_t t4758 = ((int64_t)UINT64_C(2));
  ApString t4759 = AP_STR("expected function name");
  uintptr_t t4760 = f_expect(t4757,t4758,t4759);
  v1 = t4760;
  uintptr_t t4761 = v1;
  int64_t t4762 = ((int64_t)UINT64_C(1));
  ApString t4763 = f_gets(t4761,t4762);
  v2 = t4763;
  ApString t4764 = v2;
  ApString t4765 = f_builtin_spec(t4764);
  ApString t4766 = AP_STR("");
  bool t4767 = !ap_equal(t4765,t4766);
  bool t4768 = t4767;
  if (!t4768) {
    uintptr_t t4769 = v0;
    ApString t4770 = v2;
    uintptr_t t4771 = f_function_named(t4769,t4770);
    uintptr_t t4772 = f_nil();
    bool t4773 = (t4771 != t4772);
    t4768 = t4773;
  }
  if (t4768) {
    uintptr_t t4774 = v0;
    uintptr_t t4775 = v1;
    ApString t4776 = AP_STR("function name is already defined or reserved");
    f_fail(t4774,t4775,t4776);
  } else {
  }
  uintptr_t t4777 = v0;
  int64_t t4778 = ((int64_t)UINT64_C(128));
  uintptr_t t4779 = f_arena(t4777,t4778);
  v3 = t4779;
  uintptr_t t4780 = v3;
  int64_t t4781 = ((int64_t)UINT64_C(11));
  uintptr_t t4782 = v0;
  int64_t t4783 = ((int64_t)UINT64_C(27));
  int64_t t4784 = f_get(t4782,t4783);
  f_put(t4780,t4781,t4784);
  uintptr_t t4785 = v3;
  int64_t t4786 = ((int64_t)UINT64_C(0));
  ApString t4787 = v2;
  f_puts(t4785,t4786,t4787);
  uintptr_t t4788 = v3;
  int64_t t4789 = ((int64_t)UINT64_C(2));
  uintptr_t t4790 = v1;
  f_putp(t4788,t4789,t4790);
  uintptr_t t4791 = v0;
  int64_t t4792 = ((int64_t)UINT64_C(6));
  ApString t4793 = AP_STR("expected (");
  uintptr_t t4794 = f_expect(t4791,t4792,t4793);
  uintptr_t t4795 = f_nil();
  v4 = t4795;
  int64_t t4796 = ((int64_t)UINT64_C(0));
  v5 = t4796;
  uintptr_t t4797 = v0;
  int64_t t4798 = f_kind(t4797);
  int64_t t4799 = ((int64_t)UINT64_C(7));
  bool t4800 = (t4798 != t4799);
  if (t4800) {
    while (true) {
      bool t4801 = true;
      if (!t4801) break;
      int64_t t4802 = v5;
      int64_t t4803 = ((int64_t)UINT64_C(16));
      bool t4804 = (t4802 >= t4803);
      if (t4804) {
        uintptr_t t4805 = v0;
        uintptr_t t4806 = v1;
        ApString t4807 = AP_STR("at most 16 function parameters are supported");
        f_fail(t4805,t4806,t4807);
      } else {
      }
      uintptr_t t4808 = v0;
      int64_t t4809 = ((int64_t)UINT64_C(2));
      ApString t4810 = AP_STR("expected parameter name");
      uintptr_t t4811 = f_expect(t4808,t4809,t4810);
      v6 = t4811;
      int64_t t4812 = ((int64_t)UINT64_C(0));
      v7 = t4812;
      while (true) {
        int64_t t4813 = v7;
        int64_t t4814 = v5;
        bool t4815 = (t4813 < t4814);
        if (!t4815) break;
        uintptr_t t4816 = v4;
        int64_t t4817 = v7;
        uintptr_t t4818 = f_list_get(t4816,t4817);
        int64_t t4819 = ((int64_t)UINT64_C(0));
        ApString t4820 = f_gets(t4818,t4819);
        uintptr_t t4821 = v6;
        int64_t t4822 = ((int64_t)UINT64_C(1));
        ApString t4823 = f_gets(t4821,t4822);
        bool t4824 = ap_equal(t4820,t4823);
        if (t4824) {
          uintptr_t t4825 = v0;
          uintptr_t t4826 = v6;
          ApString t4827 = AP_STR("duplicate parameter");
          f_fail(t4825,t4826,t4827);
        } else {
        }
        int64_t t4828 = v7;
        int64_t t4829 = ((int64_t)UINT64_C(1));
        int64_t t4830 = ap_add(t4828,t4829);
        v7 = t4830;
      }
      uintptr_t t4831 = v0;
      int64_t t4832 = ((int64_t)UINT64_C(48));
      uintptr_t t4833 = f_arena(t4831,t4832);
      v8 = t4833;
      uintptr_t t4834 = v8;
      int64_t t4835 = ((int64_t)UINT64_C(0));
      uintptr_t t4836 = v6;
      int64_t t4837 = ((int64_t)UINT64_C(1));
      ApString t4838 = f_gets(t4836,t4837);
      f_puts(t4834,t4835,t4838);
      int64_t t4839 = ((int64_t)UINT64_C(0));
      v9 = t4839;
      uintptr_t t4840 = v0;
      int64_t t4841 = ((int64_t)UINT64_C(11));
      bool t4842 = f_accept(t4840,t4841);
      if (t4842) {
        uintptr_t t4843 = v0;
        bool t4844 = false;
        int64_t t4845 = f_read_type(t4843,t4844);
        v9 = t4845;
      } else {
      }
      uintptr_t t4846 = v8;
      int64_t t4847 = ((int64_t)UINT64_C(2));
      int64_t t4848 = v9;
      f_put(t4846,t4847,t4848);
      uintptr_t t4849 = v8;
      int64_t t4850 = ((int64_t)UINT64_C(3));
      int64_t t4851 = v5;
      f_put(t4849,t4850,t4851);
      uintptr_t t4852 = v0;
      uintptr_t t4853 = v4;
      uintptr_t t4854 = v8;
      uintptr_t t4855 = f_list_add(t4852,t4853,t4854);
      v4 = t4855;
      int64_t t4856 = v5;
      int64_t t4857 = ((int64_t)UINT64_C(1));
      int64_t t4858 = ap_add(t4856,t4857);
      v5 = t4858;
      uintptr_t t4859 = v0;
      int64_t t4860 = ((int64_t)UINT64_C(10));
      bool t4861 = f_accept(t4859,t4860);
      bool t4862 = !t4861;
      bool t4863 = t4862;
      if (!t4863) {
        uintptr_t t4864 = v0;
        int64_t t4865 = f_kind(t4864);
        int64_t t4866 = ((int64_t)UINT64_C(7));
        bool t4867 = (t4865 == t4866);
        t4863 = t4867;
      }
      if (t4863) {
        break;
      } else {
      }
    }
  } else {
  }
  uintptr_t t4868 = v0;
  int64_t t4869 = ((int64_t)UINT64_C(7));
  ApString t4870 = AP_STR("expected )");
  uintptr_t t4871 = f_expect(t4868,t4869,t4870);
  int64_t t4872 = ((int64_t)UINT64_C(0));
  v10 = t4872;
  uintptr_t t4873 = v0;
  int64_t t4874 = ((int64_t)UINT64_C(11));
  bool t4875 = f_accept(t4873,t4874);
  if (t4875) {
    uintptr_t t4876 = v0;
    bool t4877 = true;
    int64_t t4878 = f_read_type(t4876,t4877);
    v10 = t4878;
  } else {
  }
  uintptr_t t4879 = v0;
  int64_t t4880 = ((int64_t)UINT64_C(27));
  int64_t t4881 = f_get(t4879,t4880);
  int64_t t4882 = ((int64_t)UINT64_C(0));
  bool t4883 = (t4881 != t4882);
  if (t4883) {
    int64_t t4884 = v5;
    int64_t t4885 = ((int64_t)UINT64_C(3));
    bool t4886 = (t4884 != t4885);
    bool t4887 = t4886;
    if (!t4887) {
      int64_t t4888 = v10;
      int64_t t4889 = ((int64_t)UINT64_C(6));
      bool t4890 = (t4888 != t4889);
      t4887 = t4890;
    }
    if (t4887) {
      uintptr_t t4891 = v0;
      uintptr_t t4892 = v1;
      ApString t4893 = AP_STR("task signature must be (data: buffer, begin: int, finish: int): void");
      f_fail(t4891,t4892,t4893);
    } else {
    }
    uintptr_t t4894 = v4;
    int64_t t4895 = ((int64_t)UINT64_C(0));
    uintptr_t t4896 = f_list_get(t4894,t4895);
    int64_t t4897 = ((int64_t)UINT64_C(2));
    int64_t t4898 = f_get(t4896,t4897);
    int64_t t4899 = ((int64_t)UINT64_C(4));
    bool t4900 = (t4898 != t4899);
    bool t4901 = t4900;
    if (!t4901) {
      uintptr_t t4902 = v4;
      int64_t t4903 = ((int64_t)UINT64_C(1));
      uintptr_t t4904 = f_list_get(t4902,t4903);
      int64_t t4905 = ((int64_t)UINT64_C(2));
      int64_t t4906 = f_get(t4904,t4905);
      int64_t t4907 = ((int64_t)UINT64_C(3));
      bool t4908 = (t4906 != t4907);
      t4901 = t4908;
    }
    bool t4909 = t4901;
    if (!t4909) {
      uintptr_t t4910 = v4;
      int64_t t4911 = ((int64_t)UINT64_C(2));
      uintptr_t t4912 = f_list_get(t4910,t4911);
      int64_t t4913 = ((int64_t)UINT64_C(2));
      int64_t t4914 = f_get(t4912,t4913);
      int64_t t4915 = ((int64_t)UINT64_C(3));
      bool t4916 = (t4914 != t4915);
      t4909 = t4916;
    }
    if (t4909) {
      uintptr_t t4917 = v0;
      uintptr_t t4918 = v1;
      ApString t4919 = AP_STR("task signature must be (data: buffer, begin: int, finish: int): void");
      f_fail(t4917,t4918,t4919);
    } else {
    }
  } else {
  }
  uintptr_t t4920 = v3;
  int64_t t4921 = ((int64_t)UINT64_C(3));
  int64_t t4922 = v10;
  f_put(t4920,t4921,t4922);
  uintptr_t t4923 = v3;
  int64_t t4924 = ((int64_t)UINT64_C(4));
  uintptr_t t4925 = v4;
  f_putp(t4923,t4924,t4925);
  uintptr_t t4926 = v3;
  int64_t t4927 = ((int64_t)UINT64_C(5));
  int64_t t4928 = v5;
  f_put(t4926,t4927,t4928);
  uintptr_t t4929 = v0;
  int64_t t4930 = ((int64_t)UINT64_C(1));
  ApString t4931 = AP_STR("expected newline after function signature");
  uintptr_t t4932 = f_expect(t4929,t4930,t4931);
  uintptr_t t4933 = v0;
  int64_t t4934 = ((int64_t)UINT64_C(8));
  uintptr_t t4935 = f_getp(t4933,t4934);
  uintptr_t t4936 = f_nil();
  bool t4937 = (t4935 == t4936);
  if (t4937) {
    uintptr_t t4938 = v0;
    int64_t t4939 = ((int64_t)UINT64_C(8));
    uintptr_t t4940 = v3;
    f_putp(t4938,t4939,t4940);
  } else {
    uintptr_t t4941 = v0;
    int64_t t4942 = ((int64_t)UINT64_C(9));
    uintptr_t t4943 = f_getp(t4941,t4942);
    int64_t t4944 = ((int64_t)UINT64_C(8));
    uintptr_t t4945 = v3;
    f_putp(t4943,t4944,t4945);
  }
  uintptr_t t4946 = v0;
  int64_t t4947 = ((int64_t)UINT64_C(9));
  uintptr_t t4948 = v3;
  f_putp(t4946,t4947,t4948);
  ApString t4949 = v2;
  int64_t t4950 = f_name_bucket(t4949);
  v11 = t4950;
  uintptr_t t4951 = v0;
  int64_t t4952 = ((int64_t)UINT64_C(26));
  uintptr_t t4953 = f_getp(t4951,t4952);
  v12 = t4953;
  uintptr_t t4954 = v3;
  int64_t t4955 = ((int64_t)UINT64_C(10));
  uintptr_t t4956 = v12;
  int64_t t4957 = v11;
  uintptr_t t4958 = f_getp(t4956,t4957);
  f_putp(t4954,t4955,t4958);
  uintptr_t t4959 = v12;
  int64_t t4960 = v11;
  uintptr_t t4961 = v3;
  f_putp(t4959,t4960,t4961);
  uintptr_t t4962 = v0;
  int64_t t4963 = ((int64_t)UINT64_C(6));
  uintptr_t t4964 = f_getp(t4962,t4963);
  v13 = t4964;
  uintptr_t t4965 = v0;
  int64_t t4966 = ((int64_t)UINT64_C(7));
  int64_t t4967 = f_get(t4965,t4966);
  v14 = t4967;
  uintptr_t t4968 = v0;
  int64_t t4969 = ((int64_t)UINT64_C(6));
  uintptr_t t4970 = f_nil();
  f_putp(t4968,t4969,t4970);
  uintptr_t t4971 = v0;
  f_push_scope(t4971);
  uintptr_t t4972 = v0;
  int64_t t4973 = ((int64_t)UINT64_C(7));
  int64_t t4974 = v5;
  f_put(t4972,t4973,t4974);
  uintptr_t t4975 = v0;
  int64_t t4976 = ((int64_t)UINT64_C(15));
  int64_t t4977 = v10;
  f_put(t4975,t4976,t4977);
  int64_t t4978 = ((int64_t)UINT64_C(0));
  v15 = t4978;
  while (true) {
    int64_t t4979 = v15;
    int64_t t4980 = v5;
    bool t4981 = (t4979 < t4980);
    if (!t4981) break;
    uintptr_t t4982 = v4;
    int64_t t4983 = v15;
    uintptr_t t4984 = f_list_get(t4982,t4983);
    v16 = t4984;
    uintptr_t t4985 = v0;
    uintptr_t t4986 = v16;
    int64_t t4987 = ((int64_t)UINT64_C(0));
    ApString t4988 = f_gets(t4986,t4987);
    uintptr_t t4989 = v16;
    int64_t t4990 = ((int64_t)UINT64_C(2));
    int64_t t4991 = f_get(t4989,t4990);
    uintptr_t t4992 = v16;
    int64_t t4993 = ((int64_t)UINT64_C(3));
    int64_t t4994 = f_get(t4992,t4993);
    f_bind_name(t4985,t4988,t4991,t4994);
    int64_t t4995 = v15;
    int64_t t4996 = ((int64_t)UINT64_C(1));
    int64_t t4997 = ap_add(t4995,t4996);
    v15 = t4997;
  }
  uintptr_t t4998 = v0;
  int64_t t4999 = ((int64_t)UINT64_C(0));
  uintptr_t t5000 = f_block(t4998,t4999);
  v17 = t5000;
  uintptr_t t5001 = v3;
  int64_t t5002 = ((int64_t)UINT64_C(6));
  uintptr_t t5003 = v17;
  f_putp(t5001,t5002,t5003);
  uintptr_t t5004 = v3;
  int64_t t5005 = ((int64_t)UINT64_C(7));
  uintptr_t t5006 = v0;
  int64_t t5007 = ((int64_t)UINT64_C(7));
  int64_t t5008 = f_get(t5006,t5007);
  f_put(t5004,t5005,t5008);
  uintptr_t t5009 = v0;
  int64_t t5010 = ((int64_t)UINT64_C(28));
  ApString t5011 = AP_STR("expected end after function");
  uintptr_t t5012 = f_expect(t5009,t5010,t5011);
  uintptr_t t5013 = v0;
  f_finish_line(t5013);
  int64_t t5014 = v10;
  int64_t t5015 = ((int64_t)UINT64_C(6));
  bool t5016 = (t5014 != t5015);
  bool t5017 = t5016;
  if (t5017) {
    uintptr_t t5018 = v17;
    bool t5019 = f_returns(t5018);
    bool t5020 = !t5019;
    t5017 = t5020;
  }
  if (t5017) {
    uintptr_t t5021 = v0;
    uintptr_t t5022 = v1;
    ApString t5023 = AP_STR("non-void function must return on every path");
    f_fail(t5021,t5022,t5023);
  } else {
  }
  uintptr_t t5024 = v0;
  int64_t t5025 = ((int64_t)UINT64_C(6));
  uintptr_t t5026 = v13;
  f_putp(t5024,t5025,t5026);
  uintptr_t t5027 = v0;
  int64_t t5028 = ((int64_t)UINT64_C(7));
  int64_t t5029 = v14;
  f_put(t5027,t5028,t5029);
  uintptr_t t5030 = v0;
  int64_t t5031 = ((int64_t)UINT64_C(15));
  int64_t t5032 = ((int64_t)UINT64_C(18446744073709551615));
  f_put(t5030,t5031,t5032);
}
static uintptr_t f_parse(ApString v0,ApString v1) {
  uintptr_t v2;
  uintptr_t v3;
  uintptr_t v4;
  uintptr_t v5;
  int64_t t5033 = ((int64_t)UINT64_C(67108864));
  int64_t t5034 = ((int64_t)UINT64_C(256));
  uintptr_t t5035 = f_new_arena(t5033,t5034);
  v2 = t5035;
  uintptr_t t5036 = v2;
  int64_t t5037 = ((int64_t)UINT64_C(26));
  int64_t t5038 = ((int64_t)UINT64_C(8192));
  uintptr_t t5039 = f_raw(t5038);
  f_putp(t5036,t5037,t5039);
  uintptr_t t5040 = v2;
  int64_t t5041 = ((int64_t)UINT64_C(19));
  ApString t5042 = v1;
  f_puts(t5040,t5041,t5042);
  uintptr_t t5043 = v2;
  int64_t t5044 = ((int64_t)UINT64_C(21));
  ApString t5045 = v0;
  f_puts(t5043,t5044,t5045);
  uintptr_t t5046 = v2;
  int64_t t5047 = ((int64_t)UINT64_C(15));
  int64_t t5048 = ((int64_t)UINT64_C(18446744073709551615));
  f_put(t5046,t5047,t5048);
  uintptr_t t5049 = v2;
  f_push_scope(t5049);
  uintptr_t t5050 = v2;
  ApString t5051 = v0;
  f_lex(t5050,t5051);
  uintptr_t t5052 = f_nil();
  v3 = t5052;
  uintptr_t t5053 = f_nil();
  v4 = t5053;
  uintptr_t t5054 = v2;
  f_skip_lines(t5054);
  while (true) {
    uintptr_t t5055 = v2;
    int64_t t5056 = f_kind(t5055);
    int64_t t5057 = ((int64_t)UINT64_C(0));
    bool t5058 = (t5056 != t5057);
    if (!t5058) break;
    uintptr_t t5059 = v2;
    int64_t t5060 = ((int64_t)UINT64_C(27));
    int64_t t5061 = ((int64_t)UINT64_C(0));
    f_put(t5059,t5060,t5061);
    uintptr_t t5062 = v2;
    int64_t t5063 = ((int64_t)UINT64_C(57));
    bool t5064 = f_accept(t5062,t5063);
    if (t5064) {
      uintptr_t t5065 = v2;
      int64_t t5066 = ((int64_t)UINT64_C(27));
      int64_t t5067 = ((int64_t)UINT64_C(1));
      f_put(t5065,t5066,t5067);
    } else {
    }
    uintptr_t t5068 = v2;
    int64_t t5069 = ((int64_t)UINT64_C(27));
    int64_t t5070 = f_get(t5068,t5069);
    int64_t t5071 = ((int64_t)UINT64_C(0));
    bool t5072 = (t5070 != t5071);
    bool t5073 = t5072;
    if (t5073) {
      uintptr_t t5074 = v2;
      int64_t t5075 = f_kind(t5074);
      int64_t t5076 = ((int64_t)UINT64_C(39));
      bool t5077 = (t5075 != t5076);
      t5073 = t5077;
    }
    if (t5073) {
      uintptr_t t5078 = v2;
      uintptr_t t5079 = v2;
      uintptr_t t5080 = f_peek(t5079);
      ApString t5081 = AP_STR("task must be followed by fn");
      f_fail(t5078,t5080,t5081);
    } else {
    }
    uintptr_t t5082 = v2;
    int64_t t5083 = ((int64_t)UINT64_C(39));
    bool t5084 = f_accept(t5082,t5083);
    if (t5084) {
      uintptr_t t5085 = v2;
      f_function_definition(t5085);
    } else {
      uintptr_t t5086 = v2;
      int64_t t5087 = f_kind(t5086);
      int64_t t5088 = ((int64_t)UINT64_C(28));
      bool t5089 = (t5087 == t5088);
      bool t5090 = t5089;
      if (!t5090) {
        uintptr_t t5091 = v2;
        int64_t t5092 = f_kind(t5091);
        int64_t t5093 = ((int64_t)UINT64_C(27));
        bool t5094 = (t5092 == t5093);
        t5090 = t5094;
      }
      bool t5095 = t5090;
      if (!t5095) {
        uintptr_t t5096 = v2;
        int64_t t5097 = f_kind(t5096);
        int64_t t5098 = ((int64_t)UINT64_C(54));
        bool t5099 = (t5097 == t5098);
        t5095 = t5099;
      }
      if (t5095) {
        uintptr_t t5100 = v2;
        uintptr_t t5101 = v2;
        uintptr_t t5102 = f_peek(t5101);
        ApString t5103 = AP_STR("unexpected end, else, or elif");
        f_fail(t5100,t5102,t5103);
      } else {
      }
      uintptr_t t5104 = v2;
      int64_t t5105 = ((int64_t)UINT64_C(1));
      uintptr_t t5106 = f_block(t5104,t5105);
      v5 = t5106;
      uintptr_t t5107 = v5;
      uintptr_t t5108 = f_nil();
      bool t5109 = (t5107 != t5108);
      ApString t5110 = AP_STR("internal empty top-level statement");
      f_need(t5109,t5110);
      uintptr_t t5111 = v3;
      uintptr_t t5112 = f_nil();
      bool t5113 = (t5111 == t5112);
      if (t5113) {
        uintptr_t t5114 = v5;
        v3 = t5114;
      } else {
        uintptr_t t5115 = v4;
        int64_t t5116 = ((int64_t)UINT64_C(11));
        uintptr_t t5117 = v5;
        f_putp(t5115,t5116,t5117);
      }
      uintptr_t t5118 = v5;
      v4 = t5118;
    }
    uintptr_t t5119 = v2;
    f_skip_lines(t5119);
  }
  uintptr_t t5120 = v2;
  int64_t t5121 = ((int64_t)UINT64_C(10));
  uintptr_t t5122 = v3;
  f_putp(t5120,t5121,t5122);
  uintptr_t t5123 = v2;
  int64_t t5124 = ((int64_t)UINT64_C(11));
  uintptr_t t5125 = v2;
  int64_t t5126 = ((int64_t)UINT64_C(7));
  int64_t t5127 = f_get(t5125,t5126);
  f_put(t5123,t5124,t5127);
  uintptr_t t5128 = v2;
  return t5128;
}
static void f_emit(uintptr_t v0,int64_t v1) {
  int64_t v2;
  uintptr_t t5129 = v0;
  int64_t t5130 = ((int64_t)UINT64_C(4));
  int64_t t5131 = f_get(t5129,t5130);
  v2 = t5131;
  int64_t t5132 = v2;
  int64_t t5133 = ((int64_t)UINT64_C(0));
  bool t5134 = (t5132 >= t5133);
  bool t5135 = t5134;
  if (t5135) {
    int64_t t5136 = v2;
    int64_t t5137 = ((int64_t)UINT64_C(33554428));
    bool t5138 = (t5136 <= t5137);
    t5135 = t5138;
  }
  ApString t5139 = AP_STR("generated code exceeds 32 MiB");
  f_need(t5135,t5139);
  {
    uintptr_t t5140 = v0;
    int64_t t5141 = ((int64_t)UINT64_C(3));
    uintptr_t t5142 = f_getp(t5140,t5141);
    int64_t t5143 = v2;
    uintptr_t t5144 = (t5142 + (uintptr_t)t5143);
    int64_t t5145 = v1;
    ap_poke(t5144,4,t5145);
  }
  uintptr_t t5146 = v0;
  int64_t t5147 = ((int64_t)UINT64_C(4));
  int64_t t5148 = v2;
  int64_t t5149 = ((int64_t)UINT64_C(4));
  int64_t t5150 = ap_add(t5148,t5149);
  f_put(t5146,t5147,t5150);
}
static void f_mark(uintptr_t v0,int64_t v1,int64_t v2) {
  uintptr_t v3;
  int64_t t5151 = v1;
  int64_t t5152 = ((int64_t)UINT64_C(0));
  bool t5153 = (t5151 > t5152);
  bool t5154 = t5153;
  if (t5154) {
    int64_t t5155 = v1;
    int64_t t5156 = ((int64_t)UINT64_C(262144));
    bool t5157 = (t5155 < t5156);
    t5154 = t5157;
  }
  ApString t5158 = AP_STR("label limit exceeded");
  f_need(t5154,t5158);
  uintptr_t t5159 = v0;
  int64_t t5160 = ((int64_t)UINT64_C(6));
  uintptr_t t5161 = f_getp(t5159,t5160);
  v3 = t5161;
  uintptr_t t5162 = v3;
  int64_t t5163 = v1;
  int64_t t5164 = f_get(t5162,t5163);
  int64_t t5165 = ((int64_t)UINT64_C(0));
  bool t5166 = (t5164 == t5165);
  ApString t5167 = AP_STR("duplicate machine-code label");
  f_need(t5166,t5167);
  uintptr_t t5168 = v3;
  int64_t t5169 = v1;
  int64_t t5170 = v2;
  int64_t t5171 = ((int64_t)UINT64_C(1));
  int64_t t5172 = ap_add(t5170,t5171);
  f_put(t5168,t5169,t5172);
}
static int64_t f_fresh(uintptr_t v0) {
  int64_t v1;
  uintptr_t t5173 = v0;
  int64_t t5174 = ((int64_t)UINT64_C(5));
  int64_t t5175 = f_get(t5173,t5174);
  v1 = t5175;
  int64_t t5176 = v1;
  int64_t t5177 = ((int64_t)UINT64_C(0));
  bool t5178 = (t5176 > t5177);
  bool t5179 = t5178;
  if (t5179) {
    int64_t t5180 = v1;
    int64_t t5181 = ((int64_t)UINT64_C(262144));
    bool t5182 = (t5180 < t5181);
    t5179 = t5182;
  }
  ApString t5183 = AP_STR("label limit exceeded");
  f_need(t5179,t5183);
  uintptr_t t5184 = v0;
  int64_t t5185 = ((int64_t)UINT64_C(5));
  int64_t t5186 = v1;
  int64_t t5187 = ((int64_t)UINT64_C(1));
  int64_t t5188 = ap_add(t5186,t5187);
  f_put(t5184,t5185,t5188);
  int64_t t5189 = v1;
  return t5189;
}
static void f_label_here(uintptr_t v0,int64_t v1) {
  uintptr_t t5190 = v0;
  int64_t t5191 = v1;
  uintptr_t t5192 = v0;
  int64_t t5193 = ((int64_t)UINT64_C(4));
  int64_t t5194 = f_get(t5192,t5193);
  f_mark(t5190,t5191,t5194);
}
static void f_fixup(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3) {
  uintptr_t v4;
  uintptr_t t5195 = v0;
  int64_t t5196 = ((int64_t)UINT64_C(32));
  uintptr_t t5197 = f_arena(t5195,t5196);
  v4 = t5197;
  uintptr_t t5198 = v4;
  int64_t t5199 = ((int64_t)UINT64_C(0));
  int64_t t5200 = v1;
  f_put(t5198,t5199,t5200);
  uintptr_t t5201 = v4;
  int64_t t5202 = ((int64_t)UINT64_C(1));
  int64_t t5203 = v2;
  f_put(t5201,t5202,t5203);
  uintptr_t t5204 = v4;
  int64_t t5205 = ((int64_t)UINT64_C(2));
  int64_t t5206 = v3;
  f_put(t5204,t5205,t5206);
  uintptr_t t5207 = v0;
  int64_t t5208 = ((int64_t)UINT64_C(7));
  uintptr_t t5209 = f_getp(t5207,t5208);
  uintptr_t t5210 = f_nil();
  bool t5211 = (t5209 == t5210);
  if (t5211) {
    uintptr_t t5212 = v0;
    int64_t t5213 = ((int64_t)UINT64_C(7));
    uintptr_t t5214 = v4;
    f_putp(t5212,t5213,t5214);
  } else {
    uintptr_t t5215 = v0;
    int64_t t5216 = ((int64_t)UINT64_C(8));
    uintptr_t t5217 = f_getp(t5215,t5216);
    int64_t t5218 = ((int64_t)UINT64_C(3));
    uintptr_t t5219 = v4;
    f_putp(t5217,t5218,t5219);
  }
  uintptr_t t5220 = v0;
  int64_t t5221 = ((int64_t)UINT64_C(8));
  uintptr_t t5222 = v4;
  f_putp(t5220,t5221,t5222);
}
static void f_constant(uintptr_t v0,int64_t v1,ApString v2) {
  uintptr_t v3;
  uintptr_t t5223 = v0;
  int64_t t5224 = ((int64_t)UINT64_C(32));
  uintptr_t t5225 = f_arena(t5223,t5224);
  v3 = t5225;
  uintptr_t t5226 = v3;
  int64_t t5227 = ((int64_t)UINT64_C(0));
  int64_t t5228 = v1;
  f_put(t5226,t5227,t5228);
  uintptr_t t5229 = v3;
  int64_t t5230 = ((int64_t)UINT64_C(1));
  ApString t5231 = v2;
  f_puts(t5229,t5230,t5231);
  uintptr_t t5232 = v0;
  int64_t t5233 = ((int64_t)UINT64_C(9));
  uintptr_t t5234 = f_getp(t5232,t5233);
  uintptr_t t5235 = f_nil();
  bool t5236 = (t5234 == t5235);
  if (t5236) {
    uintptr_t t5237 = v0;
    int64_t t5238 = ((int64_t)UINT64_C(9));
    uintptr_t t5239 = v3;
    f_putp(t5237,t5238,t5239);
  } else {
    uintptr_t t5240 = v0;
    int64_t t5241 = ((int64_t)UINT64_C(10));
    uintptr_t t5242 = f_getp(t5240,t5241);
    int64_t t5243 = ((int64_t)UINT64_C(3));
    uintptr_t t5244 = v3;
    f_putp(t5242,t5243,t5244);
  }
  uintptr_t t5245 = v0;
  int64_t t5246 = ((int64_t)UINT64_C(10));
  uintptr_t t5247 = v3;
  f_putp(t5245,t5246,t5247);
}
static int64_t f_text_label(uintptr_t v0,ApString v1) {
  int64_t v2;
  int64_t v3;
  uintptr_t v4;
  uintptr_t v5;
  int64_t v6;
  int64_t v7;
  uintptr_t t5248 = v0;
  int64_t t5249 = ((int64_t)UINT64_C(17));
  int64_t t5250 = f_get(t5248,t5249);
  int64_t t5251 = ((int64_t)UINT64_C(0));
  bool t5252 = (t5250 != t5251);
  if (t5252) {
    int64_t t5253 = ((int64_t)UINT64_C(0));
    v2 = t5253;
    int64_t t5254 = ((int64_t)UINT64_C(0));
    v3 = t5254;
    while (true) {
      int64_t t5255 = v3;
      ApString t5256 = v1;
      int64_t t5257 = ap_scale(ap_length_string(t5256));
      int64_t t5258 = ap_unscale(t5257);
      bool t5259 = (t5255 < t5258);
      if (!t5259) break;
      int64_t t5260 = v2;
      int64_t t5261 = ((int64_t)UINT64_C(33));
      int64_t t5262 = ap_mul(t5260,t5261);
      ApString t5263 = v1;
      int64_t t5264 = v3;
      int64_t t5265 = ap_byte(t5263,t5264);
      int64_t t5266 = ap_add(t5262,t5265);
      int64_t t5267 = ((int64_t)UINT64_C(1024));
      int64_t t5268 = ap_rem(t5266,t5267);
      v2 = t5268;
      int64_t t5269 = v3;
      int64_t t5270 = ((int64_t)UINT64_C(1));
      int64_t t5271 = ap_add(t5269,t5270);
      v3 = t5271;
    }
    uintptr_t t5272 = v0;
    int64_t t5273 = ((int64_t)UINT64_C(18));
    uintptr_t t5274 = f_getp(t5272,t5273);
    v4 = t5274;
    uintptr_t t5275 = v4;
    int64_t t5276 = v2;
    uintptr_t t5277 = f_getp(t5275,t5276);
    v5 = t5277;
    while (true) {
      uintptr_t t5278 = v5;
      uintptr_t t5279 = f_nil();
      bool t5280 = (t5278 != t5279);
      if (!t5280) break;
      uintptr_t t5281 = v5;
      int64_t t5282 = ((int64_t)UINT64_C(1));
      ApString t5283 = f_gets(t5281,t5282);
      ApString t5284 = v1;
      bool t5285 = ap_equal(t5283,t5284);
      if (t5285) {
        uintptr_t t5286 = v5;
        int64_t t5287 = ((int64_t)UINT64_C(0));
        int64_t t5288 = f_get(t5286,t5287);
        return t5288;
      } else {
      }
      uintptr_t t5289 = v5;
      int64_t t5290 = ((int64_t)UINT64_C(3));
      uintptr_t t5291 = f_getp(t5289,t5290);
      v5 = t5291;
    }
    uintptr_t t5292 = v0;
    int64_t t5293 = f_fresh(t5292);
    v6 = t5293;
    uintptr_t t5294 = v0;
    int64_t t5295 = v6;
    ApString t5296 = v1;
    f_constant(t5294,t5295,t5296);
    uintptr_t t5297 = v0;
    int64_t t5298 = ((int64_t)UINT64_C(32));
    uintptr_t t5299 = f_arena(t5297,t5298);
    v5 = t5299;
    uintptr_t t5300 = v5;
    int64_t t5301 = ((int64_t)UINT64_C(0));
    int64_t t5302 = v6;
    f_put(t5300,t5301,t5302);
    uintptr_t t5303 = v5;
    int64_t t5304 = ((int64_t)UINT64_C(1));
    ApString t5305 = v1;
    f_puts(t5303,t5304,t5305);
    uintptr_t t5306 = v5;
    int64_t t5307 = ((int64_t)UINT64_C(3));
    uintptr_t t5308 = v4;
    int64_t t5309 = v2;
    uintptr_t t5310 = f_getp(t5308,t5309);
    f_putp(t5306,t5307,t5310);
    uintptr_t t5311 = v4;
    int64_t t5312 = v2;
    uintptr_t t5313 = v5;
    f_putp(t5311,t5312,t5313);
    int64_t t5314 = v6;
    return t5314;
  } else {
  }
  uintptr_t t5315 = v0;
  int64_t t5316 = f_fresh(t5315);
  v7 = t5316;
  uintptr_t t5317 = v0;
  int64_t t5318 = v7;
  ApString t5319 = v1;
  f_constant(t5317,t5318,t5319);
  int64_t t5320 = v7;
  return t5320;
}
static void f_a_value(uintptr_t v0,int64_t v1,int64_t v2) {
  int64_t v3;
  int64_t v4;
  int64_t v5;
  int64_t v6;
  bool v7;
  int64_t v8;
  int64_t v9;
  int64_t v10;
  int64_t v11;
  int64_t v12;
  uintptr_t t5321 = v0;
  int64_t t5322 = ((int64_t)UINT64_C(17));
  int64_t t5323 = f_get(t5321,t5322);
  int64_t t5324 = ((int64_t)UINT64_C(0));
  bool t5325 = (t5323 != t5324);
  if (t5325) {
    int64_t t5326 = ((int64_t)UINT64_C(0));
    v3 = t5326;
    int64_t t5327 = ((int64_t)UINT64_C(0));
    v4 = t5327;
    int64_t t5328 = ((int64_t)UINT64_C(0));
    v5 = t5328;
    while (true) {
      int64_t t5329 = v5;
      int64_t t5330 = ((int64_t)UINT64_C(64));
      bool t5331 = (t5329 < t5330);
      if (!t5331) break;
      int64_t t5332 = v2;
      int64_t t5333 = v5;
      int64_t t5334 = ap_shr(t5332,t5333);
      int64_t t5335 = ((int64_t)UINT64_C(65535));
      int64_t t5336 = (t5334 & t5335);
      v6 = t5336;
      int64_t t5337 = v6;
      int64_t t5338 = ((int64_t)UINT64_C(0));
      bool t5339 = (t5337 == t5338);
      if (t5339) {
        int64_t t5340 = v3;
        int64_t t5341 = ((int64_t)UINT64_C(1));
        int64_t t5342 = ap_add(t5340,t5341);
        v3 = t5342;
      } else {
      }
      int64_t t5343 = v6;
      int64_t t5344 = ((int64_t)UINT64_C(65535));
      bool t5345 = (t5343 == t5344);
      if (t5345) {
        int64_t t5346 = v4;
        int64_t t5347 = ((int64_t)UINT64_C(1));
        int64_t t5348 = ap_add(t5346,t5347);
        v4 = t5348;
      } else {
      }
      int64_t t5349 = v5;
      int64_t t5350 = ((int64_t)UINT64_C(16));
      int64_t t5351 = ap_add(t5349,t5350);
      v5 = t5351;
    }
    int64_t t5352 = v4;
    int64_t t5353 = v3;
    bool t5354 = (t5352 > t5353);
    if (t5354) {
      int64_t t5355 = ((int64_t)UINT64_C(0));
      v5 = t5355;
      bool t5356 = true;
      v7 = t5356;
      while (true) {
        int64_t t5357 = v5;
        int64_t t5358 = ((int64_t)UINT64_C(64));
        bool t5359 = (t5357 < t5358);
        if (!t5359) break;
        int64_t t5360 = v2;
        int64_t t5361 = v5;
        int64_t t5362 = ap_shr(t5360,t5361);
        int64_t t5363 = ((int64_t)UINT64_C(65535));
        int64_t t5364 = (t5362 & t5363);
        v8 = t5364;
        int64_t t5365 = v8;
        int64_t t5366 = ((int64_t)UINT64_C(65535));
        bool t5367 = (t5365 != t5366);
        bool t5368 = t5367;
        if (!t5368) {
          bool t5369 = v7;
          bool t5370 = t5369;
          if (t5370) {
            int64_t t5371 = v5;
            int64_t t5372 = ((int64_t)UINT64_C(48));
            bool t5373 = (t5371 == t5372);
            t5370 = t5373;
          }
          t5368 = t5370;
        }
        if (t5368) {
          int64_t t5374 = ((int64_t)UINT64_C(4068474880));
          v9 = t5374;
          int64_t t5375 = v8;
          v10 = t5375;
          bool t5376 = v7;
          if (t5376) {
            bool t5377 = false;
            v7 = t5377;
            int64_t t5378 = ((int64_t)UINT64_C(2457862144));
            v9 = t5378;
            int64_t t5379 = v8;
            int64_t t5380 = ((int64_t)UINT64_C(65535));
            int64_t t5381 = (t5379 ^ t5380);
            v10 = t5381;
          } else {
          }
          uintptr_t t5382 = v0;
          int64_t t5383 = v9;
          int64_t t5384 = v5;
          int64_t t5385 = ((int64_t)UINT64_C(16));
          int64_t t5386 = ap_div(t5384,t5385);
          int64_t t5387 = ((int64_t)UINT64_C(21));
          int64_t t5388 = ap_shl(t5386,t5387);
          int64_t t5389 = v10;
          int64_t t5390 = ((int64_t)UINT64_C(5));
          int64_t t5391 = ap_shl(t5389,t5390);
          int64_t t5392 = v1;
          int64_t t5393 = (t5391 | t5392);
          int64_t t5394 = (t5388 | t5393);
          int64_t t5395 = (t5383 | t5394);
          f_emit(t5382,t5395);
        } else {
        }
        int64_t t5396 = v5;
        int64_t t5397 = ((int64_t)UINT64_C(16));
        int64_t t5398 = ap_add(t5396,t5397);
        v5 = t5398;
      }
      return;
    } else {
    }
  } else {
  }
  uintptr_t t5399 = v0;
  int64_t t5400 = ((int64_t)UINT64_C(3531603968));
  int64_t t5401 = v2;
  int64_t t5402 = ((int64_t)UINT64_C(65535));
  int64_t t5403 = (t5401 & t5402);
  int64_t t5404 = ((int64_t)UINT64_C(5));
  int64_t t5405 = ap_shl(t5403,t5404);
  int64_t t5406 = v1;
  int64_t t5407 = (t5405 | t5406);
  int64_t t5408 = (t5400 | t5407);
  f_emit(t5399,t5408);
  int64_t t5409 = ((int64_t)UINT64_C(16));
  v11 = t5409;
  while (true) {
    int64_t t5410 = v11;
    int64_t t5411 = ((int64_t)UINT64_C(64));
    bool t5412 = (t5410 < t5411);
    if (!t5412) break;
    int64_t t5413 = v2;
    int64_t t5414 = v11;
    int64_t t5415 = ap_shr(t5413,t5414);
    int64_t t5416 = ((int64_t)UINT64_C(65535));
    int64_t t5417 = (t5415 & t5416);
    v12 = t5417;
    int64_t t5418 = v12;
    int64_t t5419 = ((int64_t)UINT64_C(0));
    bool t5420 = (t5418 != t5419);
    if (t5420) {
      uintptr_t t5421 = v0;
      int64_t t5422 = ((int64_t)UINT64_C(4068474880));
      int64_t t5423 = v11;
      int64_t t5424 = ((int64_t)UINT64_C(16));
      int64_t t5425 = ap_div(t5423,t5424);
      int64_t t5426 = ((int64_t)UINT64_C(21));
      int64_t t5427 = ap_shl(t5425,t5426);
      int64_t t5428 = v12;
      int64_t t5429 = ((int64_t)UINT64_C(5));
      int64_t t5430 = ap_shl(t5428,t5429);
      int64_t t5431 = v1;
      int64_t t5432 = (t5430 | t5431);
      int64_t t5433 = (t5427 | t5432);
      int64_t t5434 = (t5422 | t5433);
      f_emit(t5421,t5434);
    } else {
    }
    int64_t t5435 = v11;
    int64_t t5436 = ((int64_t)UINT64_C(16));
    int64_t t5437 = ap_add(t5435,t5436);
    v11 = t5437;
  }
}
static void f_a_mov(uintptr_t v0,int64_t v1,int64_t v2) {
  uintptr_t t5438 = v0;
  int64_t t5439 = ((int64_t)UINT64_C(2852127712));
  int64_t t5440 = v2;
  int64_t t5441 = ((int64_t)UINT64_C(16));
  int64_t t5442 = ap_shl(t5440,t5441);
  int64_t t5443 = v1;
  int64_t t5444 = (t5442 | t5443);
  int64_t t5445 = (t5439 | t5444);
  f_emit(t5438,t5445);
}
static void f_a_add(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3) {
  uintptr_t t5446 = v0;
  int64_t t5447 = ((int64_t)UINT64_C(2332033024));
  int64_t t5448 = v3;
  int64_t t5449 = ((int64_t)UINT64_C(16));
  int64_t t5450 = ap_shl(t5448,t5449);
  int64_t t5451 = v2;
  int64_t t5452 = ((int64_t)UINT64_C(5));
  int64_t t5453 = ap_shl(t5451,t5452);
  int64_t t5454 = v1;
  int64_t t5455 = (t5453 | t5454);
  int64_t t5456 = (t5450 | t5455);
  int64_t t5457 = (t5447 | t5456);
  f_emit(t5446,t5457);
}
static void f_a_addshift(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3,int64_t v4) {
  uintptr_t t5458 = v0;
  int64_t t5459 = ((int64_t)UINT64_C(2332033024));
  int64_t t5460 = v3;
  int64_t t5461 = ((int64_t)UINT64_C(16));
  int64_t t5462 = ap_shl(t5460,t5461);
  int64_t t5463 = v4;
  int64_t t5464 = ((int64_t)UINT64_C(10));
  int64_t t5465 = ap_shl(t5463,t5464);
  int64_t t5466 = v2;
  int64_t t5467 = ((int64_t)UINT64_C(5));
  int64_t t5468 = ap_shl(t5466,t5467);
  int64_t t5469 = v1;
  int64_t t5470 = (t5468 | t5469);
  int64_t t5471 = (t5465 | t5470);
  int64_t t5472 = (t5462 | t5471);
  int64_t t5473 = (t5459 | t5472);
  f_emit(t5458,t5473);
}
static void f_a_sub(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3) {
  uintptr_t t5474 = v0;
  int64_t t5475 = ((int64_t)UINT64_C(3405774848));
  int64_t t5476 = v3;
  int64_t t5477 = ((int64_t)UINT64_C(16));
  int64_t t5478 = ap_shl(t5476,t5477);
  int64_t t5479 = v2;
  int64_t t5480 = ((int64_t)UINT64_C(5));
  int64_t t5481 = ap_shl(t5479,t5480);
  int64_t t5482 = v1;
  int64_t t5483 = (t5481 | t5482);
  int64_t t5484 = (t5478 | t5483);
  int64_t t5485 = (t5475 | t5484);
  f_emit(t5474,t5485);
}
static void f_a_immediate(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3,bool v4,bool v5) {
  int64_t v6;
  int64_t t5486 = v3;
  int64_t t5487 = ((int64_t)UINT64_C(0));
  bool t5488 = (t5486 >= t5487);
  bool t5489 = t5488;
  if (t5489) {
    int64_t t5490 = v3;
    int64_t t5491 = ((int64_t)UINT64_C(4096));
    bool t5492 = (t5490 < t5491);
    t5489 = t5492;
  }
  ApString t5493 = AP_STR("bad internal immediate");
  f_need(t5489,t5493);
  int64_t t5494 = ((int64_t)UINT64_C(2432696320));
  v6 = t5494;
  bool t5495 = v4;
  if (t5495) {
    int64_t t5496 = ((int64_t)UINT64_C(3506438144));
    v6 = t5496;
  } else {
  }
  bool t5497 = v5;
  if (t5497) {
    int64_t t5498 = v6;
    int64_t t5499 = ((int64_t)UINT64_C(4194304));
    int64_t t5500 = (t5498 | t5499);
    v6 = t5500;
  } else {
  }
  uintptr_t t5501 = v0;
  int64_t t5502 = v6;
  int64_t t5503 = v3;
  int64_t t5504 = ((int64_t)UINT64_C(10));
  int64_t t5505 = ap_shl(t5503,t5504);
  int64_t t5506 = v2;
  int64_t t5507 = ((int64_t)UINT64_C(5));
  int64_t t5508 = ap_shl(t5506,t5507);
  int64_t t5509 = v1;
  int64_t t5510 = (t5508 | t5509);
  int64_t t5511 = (t5505 | t5510);
  int64_t t5512 = (t5502 | t5511);
  f_emit(t5501,t5512);
}
static void f_a_addi(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3) {
  uintptr_t t5513 = v0;
  int64_t t5514 = v1;
  int64_t t5515 = v2;
  int64_t t5516 = v3;
  bool t5517 = false;
  bool t5518 = false;
  f_a_immediate(t5513,t5514,t5515,t5516,t5517,t5518);
}
static void f_a_subi(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3) {
  uintptr_t t5519 = v0;
  int64_t t5520 = v1;
  int64_t t5521 = v2;
  int64_t t5522 = v3;
  bool t5523 = true;
  bool t5524 = false;
  f_a_immediate(t5519,t5520,t5521,t5522,t5523,t5524);
}
static void f_a_stack(uintptr_t v0,int64_t v1,bool v2) {
  int64_t t5525 = v1;
  int64_t t5526 = ((int64_t)UINT64_C(0));
  bool t5527 = (t5525 >= t5526);
  bool t5528 = t5527;
  if (t5528) {
    int64_t t5529 = v1;
    int64_t t5530 = ((int64_t)UINT64_C(32768));
    bool t5531 = (t5529 <= t5530);
    t5528 = t5531;
  }
  bool t5532 = t5528;
  if (t5532) {
    int64_t t5533 = v1;
    int64_t t5534 = ((int64_t)UINT64_C(16));
    int64_t t5535 = ap_rem(t5533,t5534);
    int64_t t5536 = ((int64_t)UINT64_C(0));
    bool t5537 = (t5535 == t5536);
    t5532 = t5537;
  }
  ApString t5538 = AP_STR("bad stack size");
  f_need(t5532,t5538);
  int64_t t5539 = v1;
  int64_t t5540 = ((int64_t)UINT64_C(4096));
  int64_t t5541 = ap_div(t5539,t5540);
  int64_t t5542 = ((int64_t)UINT64_C(0));
  bool t5543 = (t5541 != t5542);
  if (t5543) {
    uintptr_t t5544 = v0;
    int64_t t5545 = ((int64_t)UINT64_C(31));
    int64_t t5546 = ((int64_t)UINT64_C(31));
    int64_t t5547 = v1;
    int64_t t5548 = ((int64_t)UINT64_C(4096));
    int64_t t5549 = ap_div(t5547,t5548);
    bool t5550 = v2;
    bool t5551 = true;
    f_a_immediate(t5544,t5545,t5546,t5549,t5550,t5551);
  } else {
  }
  int64_t t5552 = v1;
  int64_t t5553 = ((int64_t)UINT64_C(4096));
  int64_t t5554 = ap_rem(t5552,t5553);
  int64_t t5555 = ((int64_t)UINT64_C(0));
  bool t5556 = (t5554 != t5555);
  if (t5556) {
    uintptr_t t5557 = v0;
    int64_t t5558 = ((int64_t)UINT64_C(31));
    int64_t t5559 = ((int64_t)UINT64_C(31));
    int64_t t5560 = v1;
    int64_t t5561 = ((int64_t)UINT64_C(4096));
    int64_t t5562 = ap_rem(t5560,t5561);
    bool t5563 = v2;
    bool t5564 = false;
    f_a_immediate(t5557,t5558,t5559,t5562,t5563,t5564);
  } else {
  }
}
static void f_a_load(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3) {
  int64_t t5565 = v3;
  int64_t t5566 = ((int64_t)UINT64_C(0));
  bool t5567 = (t5565 >= t5566);
  bool t5568 = t5567;
  if (t5568) {
    int64_t t5569 = v3;
    int64_t t5570 = ((int64_t)UINT64_C(32760));
    bool t5571 = (t5569 <= t5570);
    t5568 = t5571;
  }
  bool t5572 = t5568;
  if (t5572) {
    int64_t t5573 = v3;
    int64_t t5574 = ((int64_t)UINT64_C(8));
    int64_t t5575 = ap_rem(t5573,t5574);
    int64_t t5576 = ((int64_t)UINT64_C(0));
    bool t5577 = (t5575 == t5576);
    t5572 = t5577;
  }
  ApString t5578 = AP_STR("bad load offset");
  f_need(t5572,t5578);
  uintptr_t t5579 = v0;
  int64_t t5580 = ((int64_t)UINT64_C(4181721088));
  int64_t t5581 = v3;
  int64_t t5582 = ((int64_t)UINT64_C(8));
  int64_t t5583 = ap_div(t5581,t5582);
  int64_t t5584 = ((int64_t)UINT64_C(10));
  int64_t t5585 = ap_shl(t5583,t5584);
  int64_t t5586 = v2;
  int64_t t5587 = ((int64_t)UINT64_C(5));
  int64_t t5588 = ap_shl(t5586,t5587);
  int64_t t5589 = v1;
  int64_t t5590 = (t5588 | t5589);
  int64_t t5591 = (t5585 | t5590);
  int64_t t5592 = (t5580 | t5591);
  f_emit(t5579,t5592);
}
static void f_a_store(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3) {
  int64_t t5593 = v3;
  int64_t t5594 = ((int64_t)UINT64_C(0));
  bool t5595 = (t5593 >= t5594);
  bool t5596 = t5595;
  if (t5596) {
    int64_t t5597 = v3;
    int64_t t5598 = ((int64_t)UINT64_C(32760));
    bool t5599 = (t5597 <= t5598);
    t5596 = t5599;
  }
  bool t5600 = t5596;
  if (t5600) {
    int64_t t5601 = v3;
    int64_t t5602 = ((int64_t)UINT64_C(8));
    int64_t t5603 = ap_rem(t5601,t5602);
    int64_t t5604 = ((int64_t)UINT64_C(0));
    bool t5605 = (t5603 == t5604);
    t5600 = t5605;
  }
  ApString t5606 = AP_STR("bad store offset");
  f_need(t5600,t5606);
  uintptr_t t5607 = v0;
  int64_t t5608 = ((int64_t)UINT64_C(4177526784));
  int64_t t5609 = v3;
  int64_t t5610 = ((int64_t)UINT64_C(8));
  int64_t t5611 = ap_div(t5609,t5610);
  int64_t t5612 = ((int64_t)UINT64_C(10));
  int64_t t5613 = ap_shl(t5611,t5612);
  int64_t t5614 = v2;
  int64_t t5615 = ((int64_t)UINT64_C(5));
  int64_t t5616 = ap_shl(t5614,t5615);
  int64_t t5617 = v1;
  int64_t t5618 = (t5616 | t5617);
  int64_t t5619 = (t5613 | t5618);
  int64_t t5620 = (t5608 | t5619);
  f_emit(t5607,t5620);
}
static void f_a_width(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3,bool v4) {
  int64_t v5;
  int64_t t5621 = ((int64_t)UINT64_C(956301312));
  v5 = t5621;
  int64_t t5622 = v3;
  int64_t t5623 = ((int64_t)UINT64_C(2));
  bool t5624 = (t5622 == t5623);
  if (t5624) {
    int64_t t5625 = ((int64_t)UINT64_C(2030043136));
    v5 = t5625;
  } else {
  }
  int64_t t5626 = v3;
  int64_t t5627 = ((int64_t)UINT64_C(4));
  bool t5628 = (t5626 == t5627);
  if (t5628) {
    int64_t t5629 = ((int64_t)UINT64_C(3103784960));
    v5 = t5629;
  } else {
  }
  int64_t t5630 = v3;
  int64_t t5631 = ((int64_t)UINT64_C(8));
  bool t5632 = (t5630 == t5631);
  if (t5632) {
    int64_t t5633 = ((int64_t)UINT64_C(4177526784));
    v5 = t5633;
  } else {
  }
  bool t5634 = v4;
  if (t5634) {
    int64_t t5635 = v5;
    int64_t t5636 = ((int64_t)UINT64_C(4194304));
    int64_t t5637 = (t5635 | t5636);
    v5 = t5637;
  } else {
  }
  uintptr_t t5638 = v0;
  int64_t t5639 = v5;
  int64_t t5640 = v2;
  int64_t t5641 = ((int64_t)UINT64_C(5));
  int64_t t5642 = ap_shl(t5640,t5641);
  int64_t t5643 = v1;
  int64_t t5644 = (t5642 | t5643);
  int64_t t5645 = (t5639 | t5644);
  f_emit(t5638,t5645);
}
static void f_a_cmp(uintptr_t v0,int64_t v1,int64_t v2) {
  uintptr_t t5646 = v0;
  int64_t t5647 = ((int64_t)UINT64_C(3942645791));
  int64_t t5648 = v2;
  int64_t t5649 = ((int64_t)UINT64_C(16));
  int64_t t5650 = ap_shl(t5648,t5649);
  int64_t t5651 = v1;
  int64_t t5652 = ((int64_t)UINT64_C(5));
  int64_t t5653 = ap_shl(t5651,t5652);
  int64_t t5654 = (t5650 | t5653);
  int64_t t5655 = (t5647 | t5654);
  f_emit(t5646,t5655);
}
static void f_a_cmpi(uintptr_t v0,int64_t v1,int64_t v2) {
  int64_t t5656 = v2;
  int64_t t5657 = ((int64_t)UINT64_C(0));
  bool t5658 = (t5656 >= t5657);
  bool t5659 = t5658;
  if (t5659) {
    int64_t t5660 = v2;
    int64_t t5661 = ((int64_t)UINT64_C(4096));
    bool t5662 = (t5660 < t5661);
    t5659 = t5662;
  }
  ApString t5663 = AP_STR("bad comparison immediate");
  f_need(t5659,t5663);
  uintptr_t t5664 = v0;
  int64_t t5665 = ((int64_t)UINT64_C(4043309087));
  int64_t t5666 = v2;
  int64_t t5667 = ((int64_t)UINT64_C(10));
  int64_t t5668 = ap_shl(t5666,t5667);
  int64_t t5669 = v1;
  int64_t t5670 = ((int64_t)UINT64_C(5));
  int64_t t5671 = ap_shl(t5669,t5670);
  int64_t t5672 = (t5668 | t5671);
  int64_t t5673 = (t5665 | t5672);
  f_emit(t5664,t5673);
}
static void f_a_cset(uintptr_t v0,int64_t v1,int64_t v2) {
  uintptr_t t5674 = v0;
  int64_t t5675 = ((int64_t)UINT64_C(2594113504));
  int64_t t5676 = v2;
  int64_t t5677 = ((int64_t)UINT64_C(1));
  int64_t t5678 = (t5676 ^ t5677);
  int64_t t5679 = ((int64_t)UINT64_C(12));
  int64_t t5680 = ap_shl(t5678,t5679);
  int64_t t5681 = v1;
  int64_t t5682 = (t5680 | t5681);
  int64_t t5683 = (t5675 | t5682);
  f_emit(t5674,t5683);
}
static void f_a_branch(uintptr_t v0,int64_t v1,bool v2) {
  int64_t v3;
  uintptr_t t5684 = v0;
  uintptr_t t5685 = v0;
  int64_t t5686 = ((int64_t)UINT64_C(4));
  int64_t t5687 = f_get(t5685,t5686);
  int64_t t5688 = ((int64_t)UINT64_C(0));
  int64_t t5689 = v1;
  f_fixup(t5684,t5687,t5688,t5689);
  int64_t t5690 = ((int64_t)UINT64_C(335544320));
  v3 = t5690;
  bool t5691 = v2;
  if (t5691) {
    int64_t t5692 = ((int64_t)UINT64_C(2483027968));
    v3 = t5692;
  } else {
  }
  uintptr_t t5693 = v0;
  int64_t t5694 = v3;
  f_emit(t5693,t5694);
}
static void f_a_condition(uintptr_t v0,int64_t v1,int64_t v2) {
  uintptr_t t5695 = v0;
  int64_t t5696 = ((int64_t)UINT64_C(1409286208));
  int64_t t5697 = v1;
  int64_t t5698 = ((int64_t)UINT64_C(1));
  int64_t t5699 = (t5697 ^ t5698);
  int64_t t5700 = (t5696 | t5699);
  f_emit(t5695,t5700);
  uintptr_t t5701 = v0;
  int64_t t5702 = v2;
  bool t5703 = false;
  f_a_branch(t5701,t5702,t5703);
}
static void f_a_zero(uintptr_t v0,int64_t v1,int64_t v2,bool v3) {
  int64_t v4;
  int64_t t5704 = ((int64_t)UINT64_C(3036676160));
  v4 = t5704;
  bool t5705 = v3;
  if (t5705) {
    int64_t t5706 = ((int64_t)UINT64_C(3019898944));
    v4 = t5706;
  } else {
  }
  uintptr_t t5707 = v0;
  int64_t t5708 = v4;
  int64_t t5709 = v1;
  int64_t t5710 = (t5708 | t5709);
  f_emit(t5707,t5710);
  uintptr_t t5711 = v0;
  int64_t t5712 = v2;
  bool t5713 = false;
  f_a_branch(t5711,t5712,t5713);
}
static void f_a_address(uintptr_t v0,int64_t v1,int64_t v2) {
  uintptr_t t5714 = v0;
  uintptr_t t5715 = v0;
  int64_t t5716 = ((int64_t)UINT64_C(4));
  int64_t t5717 = f_get(t5715,t5716);
  int64_t t5718 = ((int64_t)UINT64_C(2));
  int64_t t5719 = v2;
  f_fixup(t5714,t5717,t5718,t5719);
  uintptr_t t5720 = v0;
  int64_t t5721 = ((int64_t)UINT64_C(2415919104));
  int64_t t5722 = v1;
  int64_t t5723 = (t5721 | t5722);
  f_emit(t5720,t5723);
  uintptr_t t5724 = v0;
  int64_t t5725 = ((int64_t)UINT64_C(2432696320));
  int64_t t5726 = v1;
  int64_t t5727 = ((int64_t)UINT64_C(5));
  int64_t t5728 = ap_shl(t5726,t5727);
  int64_t t5729 = v1;
  int64_t t5730 = (t5728 | t5729);
  int64_t t5731 = (t5725 | t5730);
  f_emit(t5724,t5731);
}
static void f_a_op3(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3,int64_t v4) {
  uintptr_t t5732 = v0;
  int64_t t5733 = v1;
  int64_t t5734 = v4;
  int64_t t5735 = ((int64_t)UINT64_C(16));
  int64_t t5736 = ap_shl(t5734,t5735);
  int64_t t5737 = v3;
  int64_t t5738 = ((int64_t)UINT64_C(5));
  int64_t t5739 = ap_shl(t5737,t5738);
  int64_t t5740 = v2;
  int64_t t5741 = (t5739 | t5740);
  int64_t t5742 = (t5736 | t5741);
  int64_t t5743 = (t5733 | t5742);
  f_emit(t5732,t5743);
}
static void f_a_neg(uintptr_t v0,int64_t v1,int64_t v2,bool v3) {
  int64_t v4;
  int64_t t5744 = ((int64_t)UINT64_C(3405775840));
  v4 = t5744;
  bool t5745 = v3;
  if (t5745) {
    int64_t t5746 = ((int64_t)UINT64_C(3942646752));
    v4 = t5746;
  } else {
  }
  uintptr_t t5747 = v0;
  int64_t t5748 = v4;
  int64_t t5749 = v2;
  int64_t t5750 = ((int64_t)UINT64_C(16));
  int64_t t5751 = ap_shl(t5749,t5750);
  int64_t t5752 = v1;
  int64_t t5753 = (t5751 | t5752);
  int64_t t5754 = (t5748 | t5753);
  f_emit(t5747,t5754);
}
static void f_a_msub(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3,int64_t v4) {
  uintptr_t t5755 = v0;
  int64_t t5756 = ((int64_t)UINT64_C(2600501248));
  int64_t t5757 = v4;
  int64_t t5758 = ((int64_t)UINT64_C(10));
  int64_t t5759 = ap_shl(t5757,t5758);
  int64_t t5760 = (t5756 | t5759);
  int64_t t5761 = v1;
  int64_t t5762 = v2;
  int64_t t5763 = v3;
  f_a_op3(t5755,t5760,t5761,t5762,t5763);
}
static void f_a_right(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3,bool v4) {
  int64_t v5;
  int64_t t5764 = ((int64_t)UINT64_C(3544251392));
  v5 = t5764;
  bool t5765 = v4;
  if (t5765) {
    int64_t t5766 = ((int64_t)UINT64_C(2470509568));
    v5 = t5766;
  } else {
  }
  uintptr_t t5767 = v0;
  int64_t t5768 = v5;
  int64_t t5769 = v3;
  int64_t t5770 = ((int64_t)UINT64_C(16));
  int64_t t5771 = ap_shl(t5769,t5770);
  int64_t t5772 = v2;
  int64_t t5773 = ((int64_t)UINT64_C(5));
  int64_t t5774 = ap_shl(t5772,t5773);
  int64_t t5775 = v1;
  int64_t t5776 = (t5774 | t5775);
  int64_t t5777 = (t5771 | t5776);
  int64_t t5778 = (t5768 | t5777);
  f_emit(t5767,t5778);
}
static void f_a_fmov(uintptr_t v0,int64_t v1,int64_t v2,bool v3) {
  int64_t v4;
  int64_t t5779 = ((int64_t)UINT64_C(2657484800));
  v4 = t5779;
  bool t5780 = v3;
  if (t5780) {
    int64_t t5781 = ((int64_t)UINT64_C(2657550336));
    v4 = t5781;
  } else {
  }
  uintptr_t t5782 = v0;
  int64_t t5783 = v4;
  int64_t t5784 = v2;
  int64_t t5785 = ((int64_t)UINT64_C(5));
  int64_t t5786 = ap_shl(t5784,t5785);
  int64_t t5787 = v1;
  int64_t t5788 = (t5786 | t5787);
  int64_t t5789 = (t5783 | t5788);
  f_emit(t5782,t5789);
}
static void f_a_fconstant(uintptr_t v0,int64_t v1,int64_t v2) {
  uintptr_t t5790 = v0;
  int64_t t5791 = ((int64_t)UINT64_C(9));
  int64_t t5792 = v2;
  f_a_value(t5790,t5791,t5792);
  uintptr_t t5793 = v0;
  int64_t t5794 = v1;
  int64_t t5795 = ((int64_t)UINT64_C(9));
  bool t5796 = true;
  f_a_fmov(t5793,t5794,t5795,t5796);
}
static void f_a_fcmp(uintptr_t v0,int64_t v1,int64_t v2) {
  uintptr_t t5797 = v0;
  int64_t t5798 = ((int64_t)UINT64_C(509616128));
  int64_t t5799 = ((int64_t)UINT64_C(0));
  int64_t t5800 = v1;
  int64_t t5801 = v2;
  f_a_op3(t5797,t5798,t5799,t5800,t5801);
}
static void f_a_fbinary(uintptr_t v0,int64_t v1,int64_t v2,int64_t v3,ApString v4) {
  int64_t v5;
  int64_t t5802 = ((int64_t)UINT64_C(509618176));
  v5 = t5802;
  ApString t5803 = v4;
  ApString t5804 = AP_STR("-");
  bool t5805 = ap_equal(t5803,t5804);
  if (t5805) {
    int64_t t5806 = ((int64_t)UINT64_C(509622272));
    v5 = t5806;
  } else {
  }
  ApString t5807 = v4;
  ApString t5808 = AP_STR("*");
  bool t5809 = ap_equal(t5807,t5808);
  if (t5809) {
    int64_t t5810 = ((int64_t)UINT64_C(509609984));
    v5 = t5810;
  } else {
  }
  ApString t5811 = v4;
  ApString t5812 = AP_STR("/");
  bool t5813 = ap_equal(t5811,t5812);
  if (t5813) {
    int64_t t5814 = ((int64_t)UINT64_C(509614080));
    v5 = t5814;
  } else {
  }
  uintptr_t t5815 = v0;
  int64_t t5816 = v5;
  int64_t t5817 = v1;
  int64_t t5818 = v2;
  int64_t t5819 = v3;
  f_a_op3(t5815,t5816,t5817,t5818,t5819);
}
static void f_store_slot(uintptr_t v0,int64_t v1) {
  uintptr_t t5820 = v0;
  int64_t t5821 = ((int64_t)UINT64_C(0));
  int64_t t5822 = ((int64_t)UINT64_C(28));
  int64_t t5823 = v1;
  int64_t t5824 = ((int64_t)UINT64_C(16));
  int64_t t5825 = ap_mul(t5823,t5824);
  f_a_store(t5820,t5821,t5822,t5825);
  uintptr_t t5826 = v0;
  int64_t t5827 = ((int64_t)UINT64_C(1));
  int64_t t5828 = ((int64_t)UINT64_C(28));
  int64_t t5829 = v1;
  int64_t t5830 = ((int64_t)UINT64_C(16));
  int64_t t5831 = ap_mul(t5829,t5830);
  int64_t t5832 = ((int64_t)UINT64_C(8));
  int64_t t5833 = ap_add(t5831,t5832);
  f_a_store(t5826,t5827,t5828,t5833);
}
static void f_load_slot(uintptr_t v0,int64_t v1) {
  uintptr_t t5834 = v0;
  int64_t t5835 = ((int64_t)UINT64_C(0));
  int64_t t5836 = ((int64_t)UINT64_C(28));
  int64_t t5837 = v1;
  int64_t t5838 = ((int64_t)UINT64_C(16));
  int64_t t5839 = ap_mul(t5837,t5838);
  f_a_load(t5834,t5835,t5836,t5839);
  uintptr_t t5840 = v0;
  int64_t t5841 = ((int64_t)UINT64_C(1));
  int64_t t5842 = ((int64_t)UINT64_C(28));
  int64_t t5843 = v1;
  int64_t t5844 = ((int64_t)UINT64_C(16));
  int64_t t5845 = ap_mul(t5843,t5844);
  int64_t t5846 = ((int64_t)UINT64_C(8));
  int64_t t5847 = ap_add(t5845,t5846);
  f_a_load(t5840,t5841,t5842,t5847);
}
static void f_push_value(uintptr_t v0) {
  uintptr_t t5848 = v0;
  int64_t t5849 = ((int64_t)UINT64_C(16));
  bool t5850 = true;
  f_a_stack(t5848,t5849,t5850);
  uintptr_t t5851 = v0;
  int64_t t5852 = ((int64_t)UINT64_C(0));
  int64_t t5853 = ((int64_t)UINT64_C(31));
  int64_t t5854 = ((int64_t)UINT64_C(0));
  f_a_store(t5851,t5852,t5853,t5854);
  uintptr_t t5855 = v0;
  int64_t t5856 = ((int64_t)UINT64_C(1));
  int64_t t5857 = ((int64_t)UINT64_C(31));
  int64_t t5858 = ((int64_t)UINT64_C(8));
  f_a_store(t5855,t5856,t5857,t5858);
}
static void f_pop_left(uintptr_t v0) {
  uintptr_t t5859 = v0;
  int64_t t5860 = ((int64_t)UINT64_C(2));
  int64_t t5861 = ((int64_t)UINT64_C(31));
  int64_t t5862 = ((int64_t)UINT64_C(0));
  f_a_load(t5859,t5860,t5861,t5862);
  uintptr_t t5863 = v0;
  int64_t t5864 = ((int64_t)UINT64_C(3));
  int64_t t5865 = ((int64_t)UINT64_C(31));
  int64_t t5866 = ((int64_t)UINT64_C(8));
  f_a_load(t5863,t5864,t5865,t5866);
  uintptr_t t5867 = v0;
  int64_t t5868 = ((int64_t)UINT64_C(16));
  bool t5869 = false;
  f_a_stack(t5867,t5868,t5869);
}
static void f_raw_copy(uintptr_t v0,uintptr_t v1,int64_t v2) {
  int64_t v3;
  int64_t t5870 = ((int64_t)UINT64_C(0));
  v3 = t5870;
  {
    while (true) {
      int64_t t5871 = v3;
      int64_t t5872 = ((int64_t)UINT64_C(8));
      int64_t t5873 = ap_add(t5871,t5872);
      int64_t t5874 = v2;
      bool t5875 = (t5873 <= t5874);
      if (!t5875) break;
      uintptr_t t5876 = v0;
      int64_t t5877 = v3;
      uintptr_t t5878 = (t5876 + (uintptr_t)t5877);
      uintptr_t t5879 = v1;
      int64_t t5880 = v3;
      uintptr_t t5881 = (t5879 + (uintptr_t)t5880);
      int64_t t5882 = ap_peek(t5881,8);
      ap_poke(t5878,8,t5882);
      int64_t t5883 = v3;
      int64_t t5884 = ((int64_t)UINT64_C(8));
      int64_t t5885 = ap_add(t5883,t5884);
      v3 = t5885;
    }
    while (true) {
      int64_t t5886 = v3;
      int64_t t5887 = v2;
      bool t5888 = (t5886 < t5887);
      if (!t5888) break;
      uintptr_t t5889 = v0;
      int64_t t5890 = v3;
      uintptr_t t5891 = (t5889 + (uintptr_t)t5890);
      uintptr_t t5892 = v1;
      int64_t t5893 = v3;
      uintptr_t t5894 = (t5892 + (uintptr_t)t5893);
      int64_t t5895 = ap_scale(ap_peek(t5894,1));
      ap_poke(t5891,1,ap_unscale(t5895));
      int64_t t5896 = v3;
      int64_t t5897 = ((int64_t)UINT64_C(1));
      int64_t t5898 = ap_add(t5896,t5897);
      v3 = t5898;
    }
  }
}
static ApString f_path_normal(ApString v0) {
  ApBuffer v1;
  ApBuffer v2;
  int64_t v3;
  int64_t v4;
  bool v5;
  int64_t v6;
  int64_t v7;
  ApString v8;
  int64_t v9;
  int64_t v10;
  ApString v11;
  ApString t5899 = v0;
  int64_t t5900 = ap_scale(ap_length_string(t5899));
  int64_t t5901 = ((int64_t)UINT64_C(0));
  bool t5902 = (t5900 > t5901);
  bool t5903 = t5902;
  if (t5903) {
    ApString t5904 = v0;
    int64_t t5905 = ap_scale(ap_length_string(t5904));
    int64_t t5906 = ((int64_t)UINT64_C(4096000000));
    bool t5907 = (t5905 < t5906);
    t5903 = t5907;
  }
  ap_assert(t5903);
  int64_t t5908 = ((int64_t)UINT64_C(4096));
  ApBuffer t5909 = ap_alloc(t5908);
  v1 = t5909;
  int64_t t5910 = ((int64_t)UINT64_C(4096));
  int64_t t5911 = ((int64_t)UINT64_C(8));
  int64_t t5912 = ap_mul(t5910,t5911);
  ApBuffer t5913 = ap_alloc(t5912);
  v2 = t5913;
  int64_t t5914 = ((int64_t)UINT64_C(0));
  v3 = t5914;
  int64_t t5915 = ((int64_t)UINT64_C(0));
  v4 = t5915;
  ApString t5916 = v0;
  int64_t t5917 = ((int64_t)UINT64_C(0));
  int64_t t5918 = ap_byte(t5916,t5917);
  int64_t t5919 = ((int64_t)UINT64_C(47));
  bool t5920 = (t5918 == t5919);
  v5 = t5920;
  bool t5921 = v5;
  if (t5921) {
    ApBuffer t5922 = v1;
    int64_t t5923 = ((int64_t)UINT64_C(0));
    int64_t t5924 = ((int64_t)UINT64_C(47));
    ap_store(t5922,ap_unscale(t5923),1,t5924);
    int64_t t5925 = ((int64_t)UINT64_C(1));
    v4 = t5925;
  } else {
  }
  int64_t t5926 = ((int64_t)UINT64_C(0));
  v6 = t5926;
  while (true) {
    int64_t t5927 = v6;
    ApString t5928 = v0;
    int64_t t5929 = ap_scale(ap_length_string(t5928));
    int64_t t5930 = ap_unscale(t5929);
    bool t5931 = (t5927 < t5930);
    if (!t5931) break;
    int64_t t5932 = v6;
    v7 = t5932;
    while (true) {
      int64_t t5933 = v6;
      ApString t5934 = v0;
      int64_t t5935 = ap_scale(ap_length_string(t5934));
      int64_t t5936 = ap_unscale(t5935);
      bool t5937 = (t5933 < t5936);
      bool t5938 = t5937;
      if (t5938) {
        ApString t5939 = v0;
        int64_t t5940 = v6;
        int64_t t5941 = ap_byte(t5939,t5940);
        int64_t t5942 = ((int64_t)UINT64_C(47));
        bool t5943 = (t5941 != t5942);
        t5938 = t5943;
      }
      if (!t5938) break;
      ApString t5944 = v0;
      int64_t t5945 = v6;
      int64_t t5946 = ap_byte(t5944,t5945);
      int64_t t5947 = ((int64_t)UINT64_C(10));
      bool t5948 = (t5946 == t5947);
      bool t5949 = t5948;
      if (!t5949) {
        ApString t5950 = v0;
        int64_t t5951 = v6;
        int64_t t5952 = ap_byte(t5950,t5951);
        int64_t t5953 = ((int64_t)UINT64_C(13));
        bool t5954 = (t5952 == t5953);
        t5949 = t5954;
      }
      if (t5949) {
        ApString t5955 = AP_STR("newlines are not permitted in source paths");
        int64_t t5956 = ((int64_t)UINT64_C(65));
        f_die(t5955,t5956);
      } else {
      }
      int64_t t5957 = v6;
      int64_t t5958 = ((int64_t)UINT64_C(1));
      int64_t t5959 = ap_add(t5957,t5958);
      v6 = t5959;
    }
    ApString t5960 = v0;
    int64_t t5961 = v7;
    int64_t t5962 = v6;
    int64_t t5963 = v7;
    int64_t t5964 = ap_sub(t5962,t5963);
    ApString t5965 = ap_slice(t5960,t5961,t5964);
    v8 = t5965;
    int64_t t5966 = v6;
    int64_t t5967 = ((int64_t)UINT64_C(1));
    int64_t t5968 = ap_add(t5966,t5967);
    v6 = t5968;
    ApString t5969 = v8;
    ApString t5970 = AP_STR("");
    bool t5971 = ap_equal(t5969,t5970);
    bool t5972 = t5971;
    if (!t5972) {
      ApString t5973 = v8;
      ApString t5974 = AP_STR(".");
      bool t5975 = ap_equal(t5973,t5974);
      t5972 = t5975;
    }
    if (t5972) {
      continue;
    } else {
    }
    ApString t5976 = v8;
    ApString t5977 = AP_STR("..");
    bool t5978 = ap_equal(t5976,t5977);
    bool t5979 = t5978;
    if (t5979) {
      int64_t t5980 = v3;
      int64_t t5981 = ((int64_t)UINT64_C(0));
      bool t5982 = (t5980 > t5981);
      t5979 = t5982;
    }
    if (t5979) {
      ApBuffer t5983 = v2;
      int64_t t5984 = v3;
      int64_t t5985 = ((int64_t)UINT64_C(1));
      int64_t t5986 = ap_sub(t5984,t5985);
      int64_t t5987 = ((int64_t)UINT64_C(8));
      int64_t t5988 = ap_mul(t5986,t5987);
      int64_t t5989 = ap_load(t5983,t5988,8);
      v9 = t5989;
      int64_t t5990 = v9;
      v10 = t5990;
      int64_t t5991 = v10;
      int64_t t5992 = v4;
      bool t5993 = (t5991 < t5992);
      bool t5994 = t5993;
      if (t5994) {
        ApBuffer t5995 = v1;
        int64_t t5996 = v10;
        int64_t t5997 = ap_scale(ap_load(t5995,t5996,1));
        int64_t t5998 = ap_unscale(t5997);
        int64_t t5999 = ((int64_t)UINT64_C(47));
        bool t6000 = (t5998 == t5999);
        t5994 = t6000;
      }
      if (t5994) {
        int64_t t6001 = v10;
        int64_t t6002 = ((int64_t)UINT64_C(1));
        int64_t t6003 = ap_add(t6001,t6002);
        v10 = t6003;
      } else {
      }
      ApString t6004 = AP_STR("");
      v11 = t6004;
      {
        ApBuffer t6005 = v1;
        int64_t t6006 = v10;
        int64_t t6007 = v4;
        int64_t t6008 = v10;
        int64_t t6009 = ap_sub(t6007,t6008);
        ApString t6010 = ap_view(t6005,t6006,t6009);
        v11 = t6010;
      }
      ApString t6011 = v11;
      ApString t6012 = AP_STR("..");
      bool t6013 = !ap_equal(t6011,t6012);
      if (t6013) {
        int64_t t6014 = v9;
        v4 = t6014;
        int64_t t6015 = v3;
        int64_t t6016 = ((int64_t)UINT64_C(1));
        int64_t t6017 = ap_sub(t6015,t6016);
        v3 = t6017;
        continue;
      } else {
      }
    } else {
    }
    ApString t6018 = v8;
    ApString t6019 = AP_STR("..");
    bool t6020 = ap_equal(t6018,t6019);
    bool t6021 = t6020;
    if (t6021) {
      bool t6022 = v5;
      t6021 = t6022;
    }
    bool t6023 = t6021;
    if (t6023) {
      int64_t t6024 = v3;
      int64_t t6025 = ((int64_t)UINT64_C(0));
      bool t6026 = (t6024 == t6025);
      t6023 = t6026;
    }
    if (t6023) {
      continue;
    } else {
    }
    ApBuffer t6027 = v2;
    int64_t t6028 = v3;
    int64_t t6029 = ((int64_t)UINT64_C(8));
    int64_t t6030 = ap_mul(t6028,t6029);
    int64_t t6031 = v4;
    ap_store(t6027,t6030,8,t6031);
    int64_t t6032 = v3;
    int64_t t6033 = ((int64_t)UINT64_C(1));
    int64_t t6034 = ap_add(t6032,t6033);
    v3 = t6034;
    int64_t t6035 = v4;
    int64_t t6036 = ((int64_t)UINT64_C(0));
    bool t6037 = (t6035 > t6036);
    bool t6038 = t6037;
    if (t6038) {
      ApBuffer t6039 = v1;
      int64_t t6040 = v4;
      int64_t t6041 = ((int64_t)UINT64_C(1));
      int64_t t6042 = ap_sub(t6040,t6041);
      int64_t t6043 = ap_scale(ap_load(t6039,t6042,1));
      int64_t t6044 = ap_unscale(t6043);
      int64_t t6045 = ((int64_t)UINT64_C(47));
      bool t6046 = (t6044 != t6045);
      t6038 = t6046;
    }
    if (t6038) {
      ApBuffer t6047 = v1;
      int64_t t6048 = v4;
      int64_t t6049 = ((int64_t)UINT64_C(47));
      ap_store(t6047,t6048,1,t6049);
      int64_t t6050 = v4;
      int64_t t6051 = ((int64_t)UINT64_C(1));
      int64_t t6052 = ap_add(t6050,t6051);
      v4 = t6052;
    } else {
    }
    ApBuffer t6053 = v1;
    int64_t t6054 = v4;
    ApString t6055 = v8;
    int64_t t6056 = ((int64_t)UINT64_C(0));
    ApString t6057 = v8;
    int64_t t6058 = ap_scale(ap_length_string(t6057));
    ap_copy_string(t6053,t6054,t6055,t6056,ap_unscale(t6058));
    int64_t t6059 = v4;
    ApString t6060 = v8;
    int64_t t6061 = ap_scale(ap_length_string(t6060));
    int64_t t6062 = ap_unscale(t6061);
    int64_t t6063 = ap_add(t6059,t6062);
    v4 = t6063;
  }
  ApBuffer t6064 = v2;
  ap_free(t6064);
  int64_t t6065 = v4;
  int64_t t6066 = ((int64_t)UINT64_C(0));
  bool t6067 = (t6065 == t6066);
  if (t6067) {
    ApBuffer t6068 = v1;
    int64_t t6069 = ((int64_t)UINT64_C(0));
    int64_t t6070 = ((int64_t)UINT64_C(46));
    ap_store(t6068,ap_unscale(t6069),1,t6070);
    int64_t t6071 = ((int64_t)UINT64_C(1));
    v4 = t6071;
  } else {
  }
  {
    ApBuffer t6072 = v1;
    int64_t t6073 = ((int64_t)UINT64_C(0));
    int64_t t6074 = v4;
    ApString t6075 = ap_view(t6072,t6073,t6074);
    return t6075;
  }
}
static ApString f_source_parent(ApString v0) {
  int64_t v1;
  int64_t v2;
  int64_t t6076 = ((int64_t)UINT64_C(18446744073709551615));
  v1 = t6076;
  int64_t t6077 = ((int64_t)UINT64_C(0));
  v2 = t6077;
  while (true) {
    int64_t t6078 = v2;
    ApString t6079 = v0;
    int64_t t6080 = ap_scale(ap_length_string(t6079));
    int64_t t6081 = ap_unscale(t6080);
    bool t6082 = (t6078 < t6081);
    if (!t6082) break;
    ApString t6083 = v0;
    int64_t t6084 = v2;
    int64_t t6085 = ap_byte(t6083,t6084);
    int64_t t6086 = ((int64_t)UINT64_C(47));
    bool t6087 = (t6085 == t6086);
    if (t6087) {
      int64_t t6088 = v2;
      v1 = t6088;
    } else {
    }
    int64_t t6089 = v2;
    int64_t t6090 = ((int64_t)UINT64_C(1));
    int64_t t6091 = ap_add(t6089,t6090);
    v2 = t6091;
  }
  int64_t t6092 = v1;
  int64_t t6093 = ((int64_t)UINT64_C(0));
  bool t6094 = (t6092 < t6093);
  if (t6094) {
    ApString t6095 = AP_STR("");
    return t6095;
  } else {
  }
  ApString t6096 = v0;
  int64_t t6097 = ((int64_t)UINT64_C(0));
  int64_t t6098 = v1;
  int64_t t6099 = ((int64_t)UINT64_C(1));
  int64_t t6100 = ap_add(t6098,t6099);
  ApString t6101 = ap_slice(t6096,t6097,t6100);
  return t6101;
}
static ApString f_environment(ApString v0) {
  uintptr_t v1;
  int64_t v2;
  uintptr_t v3;
  int64_t v4;
  ApString v5;
  int64_t v6;
  {
    uintptr_t t6102 = ((uintptr_t)environ);
    v1 = t6102;
    int64_t t6103 = ((int64_t)UINT64_C(0));
    v2 = t6103;
    while (true) {
      int64_t t6104 = v2;
      int64_t t6105 = ((int64_t)UINT64_C(65536));
      bool t6106 = (t6104 < t6105);
      if (!t6106) break;
      uintptr_t t6107 = v1;
      int64_t t6108 = v2;
      int64_t t6109 = ((int64_t)UINT64_C(8));
      int64_t t6110 = ap_mul(t6108,t6109);
      uintptr_t t6111 = (t6107 + (uintptr_t)t6110);
      int64_t t6112 = ap_peek(t6111,8);
      uintptr_t t6113 = ((uintptr_t)t6112);
      v3 = t6113;
      uintptr_t t6114 = v3;
      uintptr_t t6115 = f_nil();
      bool t6116 = (t6114 == t6115);
      if (t6116) {
        ApString t6117 = AP_STR("");
        return t6117;
      } else {
      }
      int64_t t6118 = ((int64_t)UINT64_C(0));
      v4 = t6118;
      while (true) {
        int64_t t6119 = v4;
        int64_t t6120 = ((int64_t)UINT64_C(65536));
        bool t6121 = (t6119 < t6120);
        bool t6122 = t6121;
        if (t6122) {
          uintptr_t t6123 = v3;
          int64_t t6124 = v4;
          uintptr_t t6125 = (t6123 + (uintptr_t)t6124);
          int64_t t6126 = ap_scale(ap_peek(t6125,1));
          int64_t t6127 = ap_unscale(t6126);
          int64_t t6128 = ((int64_t)UINT64_C(0));
          bool t6129 = (t6127 != t6128);
          t6122 = t6129;
        }
        if (!t6122) break;
        int64_t t6130 = v4;
        int64_t t6131 = ((int64_t)UINT64_C(1));
        int64_t t6132 = ap_add(t6130,t6131);
        v4 = t6132;
      }
      uintptr_t t6133 = v3;
      int64_t t6134 = v4;
      ApString t6135 = ap_string_at(t6133,t6134);
      v5 = t6135;
      ApString t6136 = v0;
      int64_t t6137 = ap_scale(ap_length_string(t6136));
      int64_t t6138 = ap_unscale(t6137);
      v6 = t6138;
      int64_t t6139 = v4;
      int64_t t6140 = v6;
      bool t6141 = (t6139 > t6140);
      bool t6142 = t6141;
      if (t6142) {
        ApString t6143 = v5;
        int64_t t6144 = ((int64_t)UINT64_C(0));
        int64_t t6145 = v6;
        ApString t6146 = ap_slice(t6143,t6144,t6145);
        ApString t6147 = v0;
        bool t6148 = ap_equal(t6146,t6147);
        t6142 = t6148;
      }
      bool t6149 = t6142;
      if (t6149) {
        ApString t6150 = v5;
        int64_t t6151 = v6;
        int64_t t6152 = ap_byte(t6150,t6151);
        int64_t t6153 = ((int64_t)UINT64_C(61));
        bool t6154 = (t6152 == t6153);
        t6149 = t6154;
      }
      if (t6149) {
        ApString t6155 = v5;
        int64_t t6156 = v6;
        int64_t t6157 = ((int64_t)UINT64_C(1));
        int64_t t6158 = ap_add(t6156,t6157);
        int64_t t6159 = v4;
        int64_t t6160 = v6;
        int64_t t6161 = ap_sub(t6159,t6160);
        int64_t t6162 = ((int64_t)UINT64_C(1));
        int64_t t6163 = ap_sub(t6161,t6162);
        ApString t6164 = ap_slice(t6155,t6158,t6163);
        return t6164;
      } else {
      }
      int64_t t6165 = v2;
      int64_t t6166 = ((int64_t)UINT64_C(1));
      int64_t t6167 = ap_add(t6165,t6166);
      v2 = t6167;
    }
  }
  ApString t6168 = AP_STR("");
  return t6168;
}
static bool f_file_exists(ApString v0) {
  ApBuffer v1;
  int64_t v2;
  ApString t6169 = v0;
  ApBuffer t6170 = f_cstring(t6169);
  v1 = t6170;
  {
    int64_t t6171 = ((int64_t)UINT64_C(5));
    ApBuffer t6172 = v1;
    uintptr_t t6173 = ap_address_buffer(t6172);
    int64_t t6174 = ((int64_t)UINT64_C(0));
    int64_t t6175 = ((int64_t)UINT64_C(0));
    int64_t t6176 = ((int64_t)UINT64_C(0));
    int64_t t6177 = ((int64_t)UINT64_C(0));
    int64_t t6178 = ((int64_t)UINT64_C(0));
    int64_t t6179 = ap_syscall((uintptr_t)t6171,(uintptr_t)t6173,(uintptr_t)t6174,(uintptr_t)t6175,(uintptr_t)t6176,(uintptr_t)t6177,(uintptr_t)t6178);
    v2 = t6179;
    ApBuffer t6180 = v1;
    ap_free(t6180);
    int64_t t6181 = v2;
    int64_t t6182 = ((int64_t)UINT64_C(0));
    bool t6183 = (t6181 < t6182);
    if (t6183) {
      bool t6184 = false;
      return t6184;
    } else {
    }
    int64_t t6185 = ((int64_t)UINT64_C(6));
    int64_t t6186 = v2;
    int64_t t6187 = ((int64_t)UINT64_C(0));
    int64_t t6188 = ((int64_t)UINT64_C(0));
    int64_t t6189 = ((int64_t)UINT64_C(0));
    int64_t t6190 = ((int64_t)UINT64_C(0));
    int64_t t6191 = ((int64_t)UINT64_C(0));
    int64_t t6192 = ap_syscall((uintptr_t)t6185,(uintptr_t)t6186,(uintptr_t)t6187,(uintptr_t)t6188,(uintptr_t)t6189,(uintptr_t)t6190,(uintptr_t)t6191);
  }
  bool t6193 = true;
  return t6193;
}
static ApString f_executable_name() {
  ApString v0;
  int64_t v1;
  ApString v2;
  int64_t v3;
  ApString v4;
  ApString v5;
  int64_t t6194 = ((int64_t)UINT64_C(0));
  ApString t6195 = ap_arg(t6194);
  v0 = t6195;
  int64_t t6196 = ((int64_t)UINT64_C(0));
  v1 = t6196;
  while (true) {
    int64_t t6197 = v1;
    ApString t6198 = v0;
    int64_t t6199 = ap_scale(ap_length_string(t6198));
    int64_t t6200 = ap_unscale(t6199);
    bool t6201 = (t6197 < t6200);
    if (!t6201) break;
    ApString t6202 = v0;
    int64_t t6203 = v1;
    int64_t t6204 = ap_byte(t6202,t6203);
    int64_t t6205 = ((int64_t)UINT64_C(47));
    bool t6206 = (t6204 == t6205);
    if (t6206) {
      ApString t6207 = v0;
      return t6207;
    } else {
    }
    int64_t t6208 = v1;
    int64_t t6209 = ((int64_t)UINT64_C(1));
    int64_t t6210 = ap_add(t6208,t6209);
    v1 = t6210;
  }
  ApString t6211 = AP_STR("PATH");
  ApString t6212 = f_environment(t6211);
  v2 = t6212;
  int64_t t6213 = ((int64_t)UINT64_C(0));
  v1 = t6213;
  while (true) {
    int64_t t6214 = v1;
    ApString t6215 = v2;
    int64_t t6216 = ap_scale(ap_length_string(t6215));
    int64_t t6217 = ap_unscale(t6216);
    bool t6218 = (t6214 <= t6217);
    if (!t6218) break;
    int64_t t6219 = v1;
    v3 = t6219;
    while (true) {
      int64_t t6220 = v1;
      ApString t6221 = v2;
      int64_t t6222 = ap_scale(ap_length_string(t6221));
      int64_t t6223 = ap_unscale(t6222);
      bool t6224 = (t6220 < t6223);
      bool t6225 = t6224;
      if (t6225) {
        ApString t6226 = v2;
        int64_t t6227 = v1;
        int64_t t6228 = ap_byte(t6226,t6227);
        int64_t t6229 = ((int64_t)UINT64_C(58));
        bool t6230 = (t6228 != t6229);
        t6225 = t6230;
      }
      if (!t6225) break;
      int64_t t6231 = v1;
      int64_t t6232 = ((int64_t)UINT64_C(1));
      int64_t t6233 = ap_add(t6231,t6232);
      v1 = t6233;
    }
    ApString t6234 = v2;
    int64_t t6235 = v3;
    int64_t t6236 = v1;
    int64_t t6237 = v3;
    int64_t t6238 = ap_sub(t6236,t6237);
    ApString t6239 = ap_slice(t6234,t6235,t6238);
    v4 = t6239;
    ApString t6240 = v4;
    ApString t6241 = AP_STR("");
    bool t6242 = ap_equal(t6240,t6241);
    if (t6242) {
      ApString t6243 = AP_STR(".");
      v4 = t6243;
    } else {
    }
    ApString t6244 = v4;
    ApString t6245 = AP_STR("/");
    ApString t6246 = f_concat(t6244,t6245);
    ApString t6247 = v0;
    ApString t6248 = f_concat(t6246,t6247);
    v5 = t6248;
    ApString t6249 = v5;
    bool t6250 = f_file_exists(t6249);
    if (t6250) {
      ApString t6251 = v5;
      return t6251;
    } else {
    }
    int64_t t6252 = v1;
    int64_t t6253 = ((int64_t)UINT64_C(1));
    int64_t t6254 = ap_add(t6252,t6253);
    v1 = t6254;
  }
  ApString t6255 = v0;
  return t6255;
}
static ApString f_library_root() {
  ApString v0;
  ApString t6256 = AP_STR("APO_LIB");
  ApString t6257 = f_environment(t6256);
  v0 = t6257;
  ApString t6258 = v0;
  ApString t6259 = AP_STR("");
  bool t6260 = !ap_equal(t6258,t6259);
  if (t6260) {
    ApString t6261 = v0;
    ApString t6262 = f_path_normal(t6261);
    return t6262;
  } else {
  }
  ApString t6263 = f_executable_name();
  ApString t6264 = f_source_parent(t6263);
  ApString t6265 = AP_STR("lib");
  ApString t6266 = f_concat(t6264,t6265);
  ApString t6267 = f_path_normal(t6266);
  return t6267;
}
static void f_source_append(uintptr_t v0,ApString v1) {
  int64_t v2;
  int64_t v3;
  ApString t6268 = v1;
  int64_t t6269 = ap_scale(ap_length_string(t6268));
  int64_t t6270 = ap_unscale(t6269);
  v2 = t6270;
  uintptr_t t6271 = v0;
  int64_t t6272 = ((int64_t)UINT64_C(1));
  int64_t t6273 = f_get(t6271,t6272);
  v3 = t6273;
  int64_t t6274 = v2;
  int64_t t6275 = ((int64_t)UINT64_C(8388608));
  int64_t t6276 = v3;
  int64_t t6277 = ap_sub(t6275,t6276);
  bool t6278 = (t6274 > t6277);
  if (t6278) {
    ApString t6279 = AP_STR("expanded source exceeds 8 MiB");
    int64_t t6280 = ((int64_t)UINT64_C(65));
    f_die(t6279,t6280);
  } else {
  }
  {
    uintptr_t t6281 = v0;
    int64_t t6282 = ((int64_t)UINT64_C(0));
    uintptr_t t6283 = f_getp(t6281,t6282);
    int64_t t6284 = v3;
    uintptr_t t6285 = f_at(t6283,t6284);
    ApString t6286 = v1;
    uintptr_t t6287 = ap_address_string(t6286);
    int64_t t6288 = v2;
    f_raw_copy(t6285,t6287,t6288);
  }
  uintptr_t t6289 = v0;
  int64_t t6290 = ((int64_t)UINT64_C(1));
  int64_t t6291 = v3;
  int64_t t6292 = v2;
  int64_t t6293 = ap_add(t6291,t6292);
  f_put(t6289,t6290,t6293);
}
static void f_source_marker(uintptr_t v0,ApString v1,int64_t v2) {
  uintptr_t t6294 = v0;
  ApString t6295 = AP_STR("#@apo-file:");
  f_source_append(t6294,t6295);
  uintptr_t t6296 = v0;
  int64_t t6297 = v2;
  ApString t6298 = f_strint(t6297);
  f_source_append(t6296,t6298);
  uintptr_t t6299 = v0;
  ApString t6300 = AP_STR(":");
  f_source_append(t6299,t6300);
  uintptr_t t6301 = v0;
  ApString t6302 = v1;
  f_source_append(t6301,t6302);
  uintptr_t t6303 = v0;
  ApString t6304 = AP_STR("\012");
  f_source_append(t6303,t6304);
}
static void f_expand_file(uintptr_t v0,ApString v1,int64_t v2) {
  ApString v3;
  uintptr_t v4;
  ApString v5;
  int64_t v6;
  int64_t v7;
  int64_t v8;
  ApString v9;
  int64_t v10;
  int64_t v11;
  ApString v12;
  bool v13;
  int64_t v14;
  ApString v15;
  int64_t v16;
  int64_t t6305 = v2;
  int64_t t6306 = ((int64_t)UINT64_C(16));
  bool t6307 = (t6305 > t6306);
  if (t6307) {
    ApString t6308 = AP_STR("use nesting exceeds 16");
    int64_t t6309 = ((int64_t)UINT64_C(65));
    f_die(t6308,t6309);
  } else {
  }
  ApString t6310 = v1;
  ApString t6311 = f_path_normal(t6310);
  v3 = t6311;
  uintptr_t t6312 = v0;
  int64_t t6313 = ((int64_t)UINT64_C(2));
  uintptr_t t6314 = f_getp(t6312,t6313);
  v4 = t6314;
  while (true) {
    uintptr_t t6315 = v4;
    uintptr_t t6316 = f_nil();
    bool t6317 = (t6315 != t6316);
    if (!t6317) break;
    uintptr_t t6318 = v4;
    int64_t t6319 = ((int64_t)UINT64_C(0));
    ApString t6320 = f_gets(t6318,t6319);
    ApString t6321 = v3;
    bool t6322 = ap_equal(t6320,t6321);
    if (t6322) {
      uintptr_t t6323 = v4;
      int64_t t6324 = ((int64_t)UINT64_C(2));
      int64_t t6325 = f_get(t6323,t6324);
      int64_t t6326 = ((int64_t)UINT64_C(1));
      bool t6327 = (t6325 == t6326);
      if (t6327) {
        ApString t6328 = AP_STR("cyclic use: ");
        ApString t6329 = v3;
        ApString t6330 = f_concat(t6328,t6329);
        int64_t t6331 = ((int64_t)UINT64_C(65));
        f_die(t6330,t6331);
      } else {
      }
      return;
    } else {
    }
    uintptr_t t6332 = v4;
    int64_t t6333 = ((int64_t)UINT64_C(3));
    uintptr_t t6334 = f_getp(t6332,t6333);
    v4 = t6334;
  }
  uintptr_t t6335 = v0;
  int64_t t6336 = ((int64_t)UINT64_C(3));
  int64_t t6337 = f_get(t6335,t6336);
  int64_t t6338 = ((int64_t)UINT64_C(64));
  bool t6339 = (t6337 >= t6338);
  if (t6339) {
    ApString t6340 = AP_STR("use limit is 64 source files");
    int64_t t6341 = ((int64_t)UINT64_C(65));
    f_die(t6340,t6341);
  } else {
  }
  uintptr_t t6342 = v0;
  int64_t t6343 = ((int64_t)UINT64_C(3));
  uintptr_t t6344 = v0;
  int64_t t6345 = ((int64_t)UINT64_C(3));
  int64_t t6346 = f_get(t6344,t6345);
  int64_t t6347 = ((int64_t)UINT64_C(1));
  int64_t t6348 = ap_add(t6346,t6347);
  f_put(t6342,t6343,t6348);
  int64_t t6349 = ((int64_t)UINT64_C(32));
  uintptr_t t6350 = f_raw(t6349);
  v4 = t6350;
  uintptr_t t6351 = v4;
  int64_t t6352 = ((int64_t)UINT64_C(0));
  ApString t6353 = v3;
  f_puts(t6351,t6352,t6353);
  uintptr_t t6354 = v4;
  int64_t t6355 = ((int64_t)UINT64_C(2));
  int64_t t6356 = ((int64_t)UINT64_C(1));
  f_put(t6354,t6355,t6356);
  uintptr_t t6357 = v4;
  int64_t t6358 = ((int64_t)UINT64_C(3));
  uintptr_t t6359 = v0;
  int64_t t6360 = ((int64_t)UINT64_C(2));
  uintptr_t t6361 = f_getp(t6359,t6360);
  f_putp(t6357,t6358,t6361);
  uintptr_t t6362 = v0;
  int64_t t6363 = ((int64_t)UINT64_C(2));
  uintptr_t t6364 = v4;
  f_putp(t6362,t6363,t6364);
  ApString t6365 = v3;
  ApString t6366 = f_read_source(t6365);
  v5 = t6366;
  uintptr_t t6367 = v0;
  ApString t6368 = v3;
  int64_t t6369 = ((int64_t)UINT64_C(1));
  f_source_marker(t6367,t6368,t6369);
  int64_t t6370 = ((int64_t)UINT64_C(0));
  v6 = t6370;
  int64_t t6371 = ((int64_t)UINT64_C(1));
  v7 = t6371;
  while (true) {
    int64_t t6372 = v6;
    ApString t6373 = v5;
    int64_t t6374 = ap_scale(ap_length_string(t6373));
    int64_t t6375 = ap_unscale(t6374);
    bool t6376 = (t6372 < t6375);
    if (!t6376) break;
    int64_t t6377 = v6;
    v8 = t6377;
    while (true) {
      int64_t t6378 = v6;
      ApString t6379 = v5;
      int64_t t6380 = ap_scale(ap_length_string(t6379));
      int64_t t6381 = ap_unscale(t6380);
      bool t6382 = (t6378 < t6381);
      bool t6383 = t6382;
      if (t6383) {
        ApString t6384 = v5;
        int64_t t6385 = v6;
        int64_t t6386 = ap_byte(t6384,t6385);
        int64_t t6387 = ((int64_t)UINT64_C(10));
        bool t6388 = (t6386 != t6387);
        t6383 = t6388;
      }
      bool t6389 = t6383;
      if (t6389) {
        ApString t6390 = v5;
        int64_t t6391 = v6;
        int64_t t6392 = ap_byte(t6390,t6391);
        int64_t t6393 = ((int64_t)UINT64_C(13));
        bool t6394 = (t6392 != t6393);
        t6389 = t6394;
      }
      if (!t6389) break;
      int64_t t6395 = v6;
      int64_t t6396 = ((int64_t)UINT64_C(1));
      int64_t t6397 = ap_add(t6395,t6396);
      v6 = t6397;
    }
    ApString t6398 = v5;
    int64_t t6399 = v8;
    int64_t t6400 = v6;
    int64_t t6401 = v8;
    int64_t t6402 = ap_sub(t6400,t6401);
    ApString t6403 = ap_slice(t6398,t6399,t6402);
    v9 = t6403;
    int64_t t6404 = v6;
    ApString t6405 = v5;
    int64_t t6406 = ap_scale(ap_length_string(t6405));
    int64_t t6407 = ap_unscale(t6406);
    bool t6408 = (t6404 < t6407);
    if (t6408) {
      ApString t6409 = v5;
      int64_t t6410 = v6;
      int64_t t6411 = ap_byte(t6409,t6410);
      v10 = t6411;
      int64_t t6412 = v6;
      int64_t t6413 = ((int64_t)UINT64_C(1));
      int64_t t6414 = ap_add(t6412,t6413);
      v6 = t6414;
      int64_t t6415 = v10;
      int64_t t6416 = ((int64_t)UINT64_C(13));
      bool t6417 = (t6415 == t6416);
      bool t6418 = t6417;
      if (t6418) {
        ApString t6419 = v5;
        int64_t t6420 = v6;
        int64_t t6421 = f_source_byte(t6419,t6420);
        int64_t t6422 = ((int64_t)UINT64_C(10));
        bool t6423 = (t6421 == t6422);
        t6418 = t6423;
      }
      if (t6418) {
        int64_t t6424 = v6;
        int64_t t6425 = ((int64_t)UINT64_C(1));
        int64_t t6426 = ap_add(t6424,t6425);
        v6 = t6426;
      } else {
      }
    } else {
    }
    ApString t6427 = v9;
    ApString t6428 = AP_STR("use ");
    bool t6429 = f_starts(t6427,t6428);
    bool t6430 = t6429;
    if (!t6430) {
      ApString t6431 = v9;
      ApString t6432 = AP_STR("use\011");
      bool t6433 = f_starts(t6431,t6432);
      t6430 = t6433;
    }
    if (t6430) {
      int64_t t6434 = ((int64_t)UINT64_C(3));
      v11 = t6434;
      while (true) {
        int64_t t6435 = v11;
        ApString t6436 = v9;
        int64_t t6437 = ap_scale(ap_length_string(t6436));
        int64_t t6438 = ap_unscale(t6437);
        bool t6439 = (t6435 < t6438);
        bool t6440 = t6439;
        if (t6440) {
          ApString t6441 = v9;
          int64_t t6442 = v11;
          int64_t t6443 = ap_byte(t6441,t6442);
          int64_t t6444 = ((int64_t)UINT64_C(32));
          bool t6445 = (t6443 == t6444);
          bool t6446 = t6445;
          if (!t6446) {
            ApString t6447 = v9;
            int64_t t6448 = v11;
            int64_t t6449 = ap_byte(t6447,t6448);
            int64_t t6450 = ((int64_t)UINT64_C(9));
            bool t6451 = (t6449 == t6450);
            t6446 = t6451;
          }
          t6440 = t6446;
        }
        if (!t6440) break;
        int64_t t6452 = v11;
        int64_t t6453 = ((int64_t)UINT64_C(1));
        int64_t t6454 = ap_add(t6452,t6453);
        v11 = t6454;
      }
      ApString t6455 = AP_STR("");
      v12 = t6455;
      ApString t6456 = v9;
      int64_t t6457 = v11;
      int64_t t6458 = f_source_byte(t6456,t6457);
      int64_t t6459 = ((int64_t)UINT64_C(34));
      bool t6460 = (t6458 != t6459);
      v13 = t6460;
      bool t6461 = v13;
      if (t6461) {
        int64_t t6462 = v11;
        v14 = t6462;
        ApString t6463 = v9;
        int64_t t6464 = v11;
        int64_t t6465 = f_source_byte(t6463,t6464);
        bool t6466 = f_isletter(t6465);
        bool t6467 = !t6466;
        bool t6468 = t6467;
        if (t6468) {
          ApString t6469 = v9;
          int64_t t6470 = v11;
          int64_t t6471 = f_source_byte(t6469,t6470);
          int64_t t6472 = ((int64_t)UINT64_C(95));
          bool t6473 = (t6471 != t6472);
          t6468 = t6473;
        }
        if (t6468) {
          ApString t6474 = v3;
          ApString t6475 = AP_STR(": expected a library name or quoted .apo path after use");
          ApString t6476 = f_concat(t6474,t6475);
          int64_t t6477 = ((int64_t)UINT64_C(65));
          f_die(t6476,t6477);
        } else {
        }
        while (true) {
          int64_t t6478 = v11;
          ApString t6479 = v9;
          int64_t t6480 = ap_scale(ap_length_string(t6479));
          int64_t t6481 = ap_unscale(t6480);
          bool t6482 = (t6478 < t6481);
          bool t6483 = t6482;
          if (t6483) {
            ApString t6484 = v9;
            int64_t t6485 = v11;
            int64_t t6486 = ap_byte(t6484,t6485);
            bool t6487 = f_isident(t6486);
            t6483 = t6487;
          }
          if (!t6483) break;
          int64_t t6488 = v11;
          int64_t t6489 = ((int64_t)UINT64_C(1));
          int64_t t6490 = ap_add(t6488,t6489);
          v11 = t6490;
        }
        ApString t6491 = v9;
        int64_t t6492 = v14;
        int64_t t6493 = v11;
        int64_t t6494 = v14;
        int64_t t6495 = ap_sub(t6493,t6494);
        ApString t6496 = ap_slice(t6491,t6492,t6495);
        v15 = t6496;
        uintptr_t t6497 = v0;
        int64_t t6498 = ((int64_t)UINT64_C(4));
        ApString t6499 = f_gets(t6497,t6498);
        ApString t6500 = AP_STR("/");
        ApString t6501 = f_concat(t6499,t6500);
        ApString t6502 = v15;
        ApString t6503 = AP_STR(".apo");
        ApString t6504 = f_concat(t6502,t6503);
        ApString t6505 = f_concat(t6501,t6504);
        v12 = t6505;
        ApString t6506 = v12;
        bool t6507 = f_file_exists(t6506);
        bool t6508 = !t6507;
        if (t6508) {
          ApString t6509 = AP_STR("library not found: ");
          ApString t6510 = v15;
          ApString t6511 = f_concat(t6509,t6510);
          ApString t6512 = AP_STR("; searched ");
          ApString t6513 = v12;
          ApString t6514 = AP_STR("; set APO_LIB or pass --lib-dir");
          ApString t6515 = f_concat(t6513,t6514);
          ApString t6516 = f_concat(t6512,t6515);
          ApString t6517 = f_concat(t6511,t6516);
          int64_t t6518 = ((int64_t)UINT64_C(66));
          f_die(t6517,t6518);
        } else {
        }
      } else {
        int64_t t6519 = v11;
        int64_t t6520 = ((int64_t)UINT64_C(1));
        int64_t t6521 = ap_add(t6519,t6520);
        v11 = t6521;
        int64_t t6522 = v11;
        v16 = t6522;
        while (true) {
          int64_t t6523 = v11;
          ApString t6524 = v9;
          int64_t t6525 = ap_scale(ap_length_string(t6524));
          int64_t t6526 = ap_unscale(t6525);
          bool t6527 = (t6523 < t6526);
          bool t6528 = t6527;
          if (t6528) {
            ApString t6529 = v9;
            int64_t t6530 = v11;
            int64_t t6531 = ap_byte(t6529,t6530);
            int64_t t6532 = ((int64_t)UINT64_C(34));
            bool t6533 = (t6531 != t6532);
            t6528 = t6533;
          }
          if (!t6528) break;
          ApString t6534 = v9;
          int64_t t6535 = v11;
          int64_t t6536 = ap_byte(t6534,t6535);
          int64_t t6537 = ((int64_t)UINT64_C(92));
          bool t6538 = (t6536 == t6537);
          if (t6538) {
            ApString t6539 = AP_STR("use paths must not contain backslash escapes");
            int64_t t6540 = ((int64_t)UINT64_C(65));
            f_die(t6539,t6540);
          } else {
          }
          int64_t t6541 = v11;
          int64_t t6542 = ((int64_t)UINT64_C(1));
          int64_t t6543 = ap_add(t6541,t6542);
          v11 = t6543;
        }
        int64_t t6544 = v11;
        ApString t6545 = v9;
        int64_t t6546 = ap_scale(ap_length_string(t6545));
        int64_t t6547 = ap_unscale(t6546);
        bool t6548 = (t6544 >= t6547);
        bool t6549 = t6548;
        if (!t6549) {
          int64_t t6550 = v11;
          int64_t t6551 = v16;
          bool t6552 = (t6550 == t6551);
          t6549 = t6552;
        }
        if (t6549) {
          ApString t6553 = AP_STR("invalid use path");
          int64_t t6554 = ((int64_t)UINT64_C(65));
          f_die(t6553,t6554);
        } else {
        }
        ApString t6555 = v9;
        int64_t t6556 = v16;
        int64_t t6557 = v11;
        int64_t t6558 = v16;
        int64_t t6559 = ap_sub(t6557,t6558);
        ApString t6560 = ap_slice(t6555,t6556,t6559);
        v12 = t6560;
        int64_t t6561 = v11;
        int64_t t6562 = ((int64_t)UINT64_C(1));
        int64_t t6563 = ap_add(t6561,t6562);
        v11 = t6563;
        ApString t6564 = v12;
        int64_t t6565 = ((int64_t)UINT64_C(0));
        int64_t t6566 = ap_byte(t6564,t6565);
        int64_t t6567 = ((int64_t)UINT64_C(47));
        bool t6568 = (t6566 != t6567);
        if (t6568) {
          ApString t6569 = v3;
          ApString t6570 = f_source_parent(t6569);
          ApString t6571 = v12;
          ApString t6572 = f_concat(t6570,t6571);
          v12 = t6572;
        } else {
        }
      }
      while (true) {
        int64_t t6573 = v11;
        ApString t6574 = v9;
        int64_t t6575 = ap_scale(ap_length_string(t6574));
        int64_t t6576 = ap_unscale(t6575);
        bool t6577 = (t6573 < t6576);
        bool t6578 = t6577;
        if (t6578) {
          ApString t6579 = v9;
          int64_t t6580 = v11;
          int64_t t6581 = ap_byte(t6579,t6580);
          int64_t t6582 = ((int64_t)UINT64_C(32));
          bool t6583 = (t6581 == t6582);
          bool t6584 = t6583;
          if (!t6584) {
            ApString t6585 = v9;
            int64_t t6586 = v11;
            int64_t t6587 = ap_byte(t6585,t6586);
            int64_t t6588 = ((int64_t)UINT64_C(9));
            bool t6589 = (t6587 == t6588);
            t6584 = t6589;
          }
          t6578 = t6584;
        }
        if (!t6578) break;
        int64_t t6590 = v11;
        int64_t t6591 = ((int64_t)UINT64_C(1));
        int64_t t6592 = ap_add(t6590,t6591);
        v11 = t6592;
      }
      int64_t t6593 = v11;
      ApString t6594 = v9;
      int64_t t6595 = ap_scale(ap_length_string(t6594));
      int64_t t6596 = ap_unscale(t6595);
      bool t6597 = (t6593 < t6596);
      bool t6598 = t6597;
      if (t6598) {
        ApString t6599 = v9;
        int64_t t6600 = v11;
        int64_t t6601 = ap_byte(t6599,t6600);
        int64_t t6602 = ((int64_t)UINT64_C(35));
        bool t6603 = (t6601 != t6602);
        t6598 = t6603;
      }
      bool t6604 = t6598;
      if (t6604) {
        ApString t6605 = v9;
        int64_t t6606 = v11;
        ApString t6607 = v9;
        int64_t t6608 = ap_scale(ap_length_string(t6607));
        int64_t t6609 = ap_unscale(t6608);
        int64_t t6610 = v11;
        int64_t t6611 = ap_sub(t6609,t6610);
        ApString t6612 = ap_slice(t6605,t6606,t6611);
        ApString t6613 = AP_STR("//");
        bool t6614 = f_starts(t6612,t6613);
        bool t6615 = !t6614;
        t6604 = t6615;
      }
      if (t6604) {
        ApString t6616 = AP_STR("only a line comment may follow use");
        int64_t t6617 = ((int64_t)UINT64_C(65));
        f_die(t6616,t6617);
      } else {
      }
      ApString t6618 = v12;
      bool t6619 = f_apo_suffix(t6618);
      bool t6620 = !t6619;
      if (t6620) {
        ApString t6621 = AP_STR("use path must end in .apo");
        int64_t t6622 = ((int64_t)UINT64_C(65));
        f_die(t6621,t6622);
      } else {
      }
      uintptr_t t6623 = v0;
      ApString t6624 = v12;
      int64_t t6625 = v2;
      int64_t t6626 = ((int64_t)UINT64_C(1));
      int64_t t6627 = ap_add(t6625,t6626);
      f_expand_file(t6623,t6624,t6627);
      uintptr_t t6628 = v0;
      ApString t6629 = v3;
      int64_t t6630 = v7;
      int64_t t6631 = ((int64_t)UINT64_C(1));
      int64_t t6632 = ap_add(t6630,t6631);
      f_source_marker(t6628,t6629,t6632);
    } else {
      uintptr_t t6633 = v0;
      ApString t6634 = v9;
      f_source_append(t6633,t6634);
      uintptr_t t6635 = v0;
      ApString t6636 = AP_STR("\012");
      f_source_append(t6635,t6636);
    }
    int64_t t6637 = v7;
    int64_t t6638 = ((int64_t)UINT64_C(1));
    int64_t t6639 = ap_add(t6637,t6638);
    v7 = t6639;
  }
  uintptr_t t6640 = v4;
  int64_t t6641 = ((int64_t)UINT64_C(2));
  int64_t t6642 = ((int64_t)UINT64_C(0));
  f_put(t6640,t6641,t6642);
}
static ApString f_load_program(ApString v0,ApString v1) {
  uintptr_t v2;
  int64_t t6643 = ((int64_t)UINT64_C(48));
  uintptr_t t6644 = f_raw(t6643);
  v2 = t6644;
  uintptr_t t6645 = v2;
  int64_t t6646 = ((int64_t)UINT64_C(4));
  ApString t6647 = v1;
  f_puts(t6645,t6646,t6647);
  uintptr_t t6648 = v2;
  int64_t t6649 = ((int64_t)UINT64_C(0));
  int64_t t6650 = ((int64_t)UINT64_C(8388609));
  uintptr_t t6651 = f_raw(t6650);
  f_putp(t6648,t6649,t6651);
  uintptr_t t6652 = v2;
  ApString t6653 = v0;
  int64_t t6654 = ((int64_t)UINT64_C(0));
  f_expand_file(t6652,t6653,t6654);
  uintptr_t t6655 = v2;
  int64_t t6656 = ((int64_t)UINT64_C(0));
  uintptr_t t6657 = f_getp(t6655,t6656);
  uintptr_t t6658 = v2;
  int64_t t6659 = ((int64_t)UINT64_C(1));
  int64_t t6660 = f_get(t6658,t6659);
  ApString t6661 = f_rawtext(t6657,t6660);
  return t6661;
}
static void f_finish_code(uintptr_t v0) {
  int64_t v1;
  uintptr_t v2;
  uintptr_t v3;
  int64_t v4;
  int64_t v5;
  uintptr_t v6;
  uintptr_t v7;
  int64_t v8;
  int64_t v9;
  int64_t v10;
  int64_t v11;
  int64_t v12;
  int64_t v13;
  int64_t v14;
  int64_t v15;
  int64_t v16;
  uintptr_t t6662 = v0;
  int64_t t6663 = ((int64_t)UINT64_C(4));
  int64_t t6664 = f_get(t6662,t6663);
  v1 = t6664;
  uintptr_t t6665 = v0;
  int64_t t6666 = ((int64_t)UINT64_C(11));
  int64_t t6667 = v1;
  f_put(t6665,t6666,t6667);
  int64_t t6668 = v1;
  int64_t t6669 = ((int64_t)UINT64_C(15));
  int64_t t6670 = ap_add(t6668,t6669);
  int64_t t6671 = ((int64_t)UINT64_C(18446744073709551600));
  int64_t t6672 = (t6670 & t6671);
  v1 = t6672;
  uintptr_t t6673 = v0;
  int64_t t6674 = ((int64_t)UINT64_C(12));
  int64_t t6675 = v1;
  f_put(t6673,t6674,t6675);
  uintptr_t t6676 = v0;
  int64_t t6677 = ((int64_t)UINT64_C(9));
  uintptr_t t6678 = f_getp(t6676,t6677);
  v2 = t6678;
  uintptr_t t6679 = v0;
  int64_t t6680 = ((int64_t)UINT64_C(3));
  uintptr_t t6681 = f_getp(t6679,t6680);
  v3 = t6681;
  while (true) {
    uintptr_t t6682 = v2;
    uintptr_t t6683 = f_nil();
    bool t6684 = (t6682 != t6683);
    if (!t6684) break;
    uintptr_t t6685 = v2;
    int64_t t6686 = ((int64_t)UINT64_C(2));
    int64_t t6687 = f_get(t6685,t6686);
    v4 = t6687;
    int64_t t6688 = v1;
    int64_t t6689 = v4;
    int64_t t6690 = ap_add(t6688,t6689);
    int64_t t6691 = ((int64_t)UINT64_C(1));
    int64_t t6692 = ap_add(t6690,t6691);
    int64_t t6693 = ((int64_t)UINT64_C(33554432));
    bool t6694 = (t6692 <= t6693);
    ApString t6695 = AP_STR("payload exceeds 32 MiB");
    f_need(t6694,t6695);
    uintptr_t t6696 = v0;
    uintptr_t t6697 = v2;
    int64_t t6698 = ((int64_t)UINT64_C(0));
    int64_t t6699 = f_get(t6697,t6698);
    int64_t t6700 = v1;
    f_mark(t6696,t6699,t6700);
    uintptr_t t6701 = v3;
    int64_t t6702 = v1;
    uintptr_t t6703 = f_at(t6701,t6702);
    uintptr_t t6704 = v2;
    int64_t t6705 = ((int64_t)UINT64_C(1));
    uintptr_t t6706 = f_getp(t6704,t6705);
    int64_t t6707 = v4;
    f_raw_copy(t6703,t6706,t6707);
    uintptr_t t6708 = v3;
    int64_t t6709 = v1;
    int64_t t6710 = v4;
    int64_t t6711 = ap_add(t6709,t6710);
    int64_t t6712 = ((int64_t)UINT64_C(0));
    f_setb(t6708,t6711,t6712);
    int64_t t6713 = v1;
    int64_t t6714 = v4;
    int64_t t6715 = ap_add(t6713,t6714);
    int64_t t6716 = ((int64_t)UINT64_C(1));
    int64_t t6717 = ap_add(t6715,t6716);
    v1 = t6717;
    uintptr_t t6718 = v2;
    int64_t t6719 = ((int64_t)UINT64_C(3));
    uintptr_t t6720 = f_getp(t6718,t6719);
    v2 = t6720;
  }
  uintptr_t t6721 = v0;
  int64_t t6722 = ((int64_t)UINT64_C(13));
  int64_t t6723 = v1;
  f_put(t6721,t6722,t6723);
  int64_t t6724 = ((int64_t)UINT64_C(4096));
  int64_t t6725 = v1;
  int64_t t6726 = ap_add(t6724,t6725);
  int64_t t6727 = ((int64_t)UINT64_C(16383));
  int64_t t6728 = ap_add(t6726,t6727);
  int64_t t6729 = ((int64_t)UINT64_C(16384));
  int64_t t6730 = ap_div(t6728,t6729);
  int64_t t6731 = ((int64_t)UINT64_C(16384));
  int64_t t6732 = ap_mul(t6730,t6731);
  int64_t t6733 = ((int64_t)UINT64_C(4096));
  int64_t t6734 = ap_sub(t6732,t6733);
  v5 = t6734;
  uintptr_t t6735 = v0;
  int64_t t6736 = ((int64_t)UINT64_C(25));
  int64_t t6737 = f_get(t6735,t6736);
  int64_t t6738 = ((int64_t)UINT64_C(0));
  bool t6739 = (t6737 != t6738);
  if (t6739) {
    uintptr_t t6740 = v0;
    uintptr_t t6741 = v0;
    int64_t t6742 = ((int64_t)UINT64_C(25));
    int64_t t6743 = f_get(t6741,t6742);
    int64_t t6744 = v5;
    f_mark(t6740,t6743,t6744);
  } else {
  }
  uintptr_t t6745 = v0;
  int64_t t6746 = ((int64_t)UINT64_C(26));
  int64_t t6747 = f_get(t6745,t6746);
  int64_t t6748 = ((int64_t)UINT64_C(0));
  bool t6749 = (t6747 != t6748);
  if (t6749) {
    uintptr_t t6750 = v0;
    uintptr_t t6751 = v0;
    int64_t t6752 = ((int64_t)UINT64_C(26));
    int64_t t6753 = f_get(t6751,t6752);
    int64_t t6754 = v5;
    int64_t t6755 = ((int64_t)UINT64_C(8));
    int64_t t6756 = ap_add(t6754,t6755);
    f_mark(t6750,t6753,t6756);
  } else {
  }
  uintptr_t t6757 = v0;
  int64_t t6758 = ((int64_t)UINT64_C(7));
  uintptr_t t6759 = f_getp(t6757,t6758);
  v6 = t6759;
  uintptr_t t6760 = v0;
  int64_t t6761 = ((int64_t)UINT64_C(6));
  uintptr_t t6762 = f_getp(t6760,t6761);
  v7 = t6762;
  while (true) {
    uintptr_t t6763 = v6;
    uintptr_t t6764 = f_nil();
    bool t6765 = (t6763 != t6764);
    if (!t6765) break;
    uintptr_t t6766 = v6;
    int64_t t6767 = ((int64_t)UINT64_C(0));
    int64_t t6768 = f_get(t6766,t6767);
    v8 = t6768;
    uintptr_t t6769 = v6;
    int64_t t6770 = ((int64_t)UINT64_C(1));
    int64_t t6771 = f_get(t6769,t6770);
    v9 = t6771;
    uintptr_t t6772 = v7;
    uintptr_t t6773 = v6;
    int64_t t6774 = ((int64_t)UINT64_C(2));
    int64_t t6775 = f_get(t6773,t6774);
    int64_t t6776 = f_get(t6772,t6775);
    int64_t t6777 = ((int64_t)UINT64_C(1));
    int64_t t6778 = ap_sub(t6776,t6777);
    v10 = t6778;
    int64_t t6779 = v10;
    int64_t t6780 = ((int64_t)UINT64_C(0));
    bool t6781 = (t6779 >= t6780);
    ApString t6782 = AP_STR("unresolved native label");
    f_need(t6781,t6782);
    {
      uintptr_t t6783 = v3;
      int64_t t6784 = v8;
      uintptr_t t6785 = f_at(t6783,t6784);
      int64_t t6786 = ap_scale(ap_peek(t6785,4));
      int64_t t6787 = ap_unscale(t6786);
      v11 = t6787;
      int64_t t6788 = v9;
      int64_t t6789 = ((int64_t)UINT64_C(2));
      bool t6790 = (t6788 == t6789);
      if (t6790) {
        int64_t t6791 = ((int64_t)UINT64_C(4096));
        int64_t t6792 = v10;
        int64_t t6793 = ap_add(t6791,t6792);
        int64_t t6794 = ((int64_t)UINT64_C(4096));
        int64_t t6795 = ap_div(t6793,t6794);
        int64_t t6796 = ((int64_t)UINT64_C(4096));
        int64_t t6797 = v8;
        int64_t t6798 = ap_add(t6796,t6797);
        int64_t t6799 = ((int64_t)UINT64_C(4096));
        int64_t t6800 = ap_div(t6798,t6799);
        int64_t t6801 = ap_sub(t6795,t6800);
        v12 = t6801;
        int64_t t6802 = v12;
        int64_t t6803 = ((int64_t)UINT64_C(18446744073708503040));
        bool t6804 = (t6802 >= t6803);
        bool t6805 = t6804;
        if (t6805) {
          int64_t t6806 = v12;
          int64_t t6807 = ((int64_t)UINT64_C(1048576));
          bool t6808 = (t6806 < t6807);
          t6805 = t6808;
        }
        ApString t6809 = AP_STR("ADRP range exceeded");
        f_need(t6805,t6809);
        int64_t t6810 = v12;
        int64_t t6811 = ((int64_t)UINT64_C(2097151));
        int64_t t6812 = (t6810 & t6811);
        v13 = t6812;
        int64_t t6813 = v11;
        int64_t t6814 = v13;
        int64_t t6815 = ((int64_t)UINT64_C(3));
        int64_t t6816 = (t6814 & t6815);
        int64_t t6817 = ((int64_t)UINT64_C(29));
        int64_t t6818 = ap_shl(t6816,t6817);
        int64_t t6819 = v13;
        int64_t t6820 = ((int64_t)UINT64_C(2));
        int64_t t6821 = ap_shr(t6819,t6820);
        int64_t t6822 = ((int64_t)UINT64_C(5));
        int64_t t6823 = ap_shl(t6821,t6822);
        int64_t t6824 = (t6818 | t6823);
        int64_t t6825 = (t6813 | t6824);
        v11 = t6825;
        uintptr_t t6826 = v3;
        int64_t t6827 = v8;
        int64_t t6828 = ((int64_t)UINT64_C(4));
        int64_t t6829 = ap_add(t6827,t6828);
        uintptr_t t6830 = f_at(t6826,t6829);
        int64_t t6831 = ap_scale(ap_peek(t6830,4));
        int64_t t6832 = ap_unscale(t6831);
        v14 = t6832;
        uintptr_t t6833 = v3;
        int64_t t6834 = v8;
        int64_t t6835 = ((int64_t)UINT64_C(4));
        int64_t t6836 = ap_add(t6834,t6835);
        uintptr_t t6837 = f_at(t6833,t6836);
        int64_t t6838 = v14;
        int64_t t6839 = ((int64_t)UINT64_C(4096));
        int64_t t6840 = v10;
        int64_t t6841 = ap_add(t6839,t6840);
        int64_t t6842 = ((int64_t)UINT64_C(4095));
        int64_t t6843 = (t6841 & t6842);
        int64_t t6844 = ((int64_t)UINT64_C(10));
        int64_t t6845 = ap_shl(t6843,t6844);
        int64_t t6846 = (t6838 | t6845);
        ap_poke(t6837,4,t6846);
      } else {
        int64_t t6847 = v10;
        int64_t t6848 = v8;
        int64_t t6849 = ap_sub(t6847,t6848);
        v15 = t6849;
        int64_t t6850 = v15;
        int64_t t6851 = ((int64_t)UINT64_C(4));
        int64_t t6852 = ap_rem(t6850,t6851);
        int64_t t6853 = ((int64_t)UINT64_C(0));
        bool t6854 = (t6852 == t6853);
        ApString t6855 = AP_STR("unaligned branch target");
        f_need(t6854,t6855);
        int64_t t6856 = v15;
        int64_t t6857 = ((int64_t)UINT64_C(4));
        int64_t t6858 = ap_div(t6856,t6857);
        v16 = t6858;
        int64_t t6859 = v16;
        int64_t t6860 = ((int64_t)UINT64_C(18446744073675997184));
        bool t6861 = (t6859 >= t6860);
        bool t6862 = t6861;
        if (t6862) {
          int64_t t6863 = v16;
          int64_t t6864 = ((int64_t)UINT64_C(33554432));
          bool t6865 = (t6863 < t6864);
          t6862 = t6865;
        }
        ApString t6866 = AP_STR("branch range exceeded");
        f_need(t6862,t6866);
        int64_t t6867 = v11;
        int64_t t6868 = v16;
        int64_t t6869 = ((int64_t)UINT64_C(67108863));
        int64_t t6870 = (t6868 & t6869);
        int64_t t6871 = (t6867 | t6870);
        v11 = t6871;
      }
      uintptr_t t6872 = v3;
      int64_t t6873 = v8;
      uintptr_t t6874 = f_at(t6872,t6873);
      int64_t t6875 = v11;
      ap_poke(t6874,4,t6875);
    }
    uintptr_t t6876 = v6;
    int64_t t6877 = ((int64_t)UINT64_C(3));
    uintptr_t t6878 = f_getp(t6876,t6877);
    v6 = t6878;
  }
}
static int64_t f_runtime_id(ApString v0) {
  ApString t6879 = v0;
  ApString t6880 = AP_STR("error.assert");
  bool t6881 = ap_equal(t6879,t6880);
  if (t6881) {
    int64_t t6882 = ((int64_t)UINT64_C(6));
    return t6882;
  } else {
  }
  ApString t6883 = v0;
  ApString t6884 = AP_STR("error.bounds");
  bool t6885 = ap_equal(t6883,t6884);
  if (t6885) {
    int64_t t6886 = ((int64_t)UINT64_C(7));
    return t6886;
  } else {
  }
  ApString t6887 = v0;
  ApString t6888 = AP_STR("error.byte");
  bool t6889 = ap_equal(t6887,t6888);
  if (t6889) {
    int64_t t6890 = ((int64_t)UINT64_C(8));
    return t6890;
  } else {
  }
  ApString t6891 = v0;
  ApString t6892 = AP_STR("error.exit");
  bool t6893 = ap_equal(t6891,t6892);
  if (t6893) {
    int64_t t6894 = ((int64_t)UINT64_C(9));
    return t6894;
  } else {
  }
  ApString t6895 = v0;
  ApString t6896 = AP_STR("error.float");
  bool t6897 = ap_equal(t6895,t6896);
  if (t6897) {
    int64_t t6898 = ((int64_t)UINT64_C(10));
    return t6898;
  } else {
  }
  ApString t6899 = v0;
  ApString t6900 = AP_STR("error.freed");
  bool t6901 = ap_equal(t6899,t6900);
  if (t6901) {
    int64_t t6902 = ((int64_t)UINT64_C(11));
    return t6902;
  } else {
  }
  ApString t6903 = v0;
  ApString t6904 = AP_STR("error.int_overflow");
  bool t6905 = ap_equal(t6903,t6904);
  if (t6905) {
    int64_t t6906 = ((int64_t)UINT64_C(12));
    return t6906;
  } else {
  }
  ApString t6907 = v0;
  ApString t6908 = AP_STR("error.integer");
  bool t6909 = ap_equal(t6907,t6908);
  if (t6909) {
    int64_t t6910 = ((int64_t)UINT64_C(13));
    return t6910;
  } else {
  }
  ApString t6911 = v0;
  ApString t6912 = AP_STR("error.memory");
  bool t6913 = ap_equal(t6911,t6912);
  if (t6913) {
    int64_t t6914 = ((int64_t)UINT64_C(14));
    return t6914;
  } else {
  }
  ApString t6915 = v0;
  ApString t6916 = AP_STR("error.overflow");
  bool t6917 = ap_equal(t6915,t6916);
  if (t6917) {
    int64_t t6918 = ((int64_t)UINT64_C(15));
    return t6918;
  } else {
  }
  ApString t6919 = v0;
  ApString t6920 = AP_STR("error.precision");
  bool t6921 = ap_equal(t6919,t6920);
  if (t6921) {
    int64_t t6922 = ((int64_t)UINT64_C(16));
    return t6922;
  } else {
  }
  ApString t6923 = v0;
  ApString t6924 = AP_STR("error.shift");
  bool t6925 = ap_equal(t6923,t6924);
  if (t6925) {
    int64_t t6926 = ((int64_t)UINT64_C(17));
    return t6926;
  } else {
  }
  ApString t6927 = v0;
  ApString t6928 = AP_STR("error.size");
  bool t6929 = ap_equal(t6927,t6928);
  if (t6929) {
    int64_t t6930 = ((int64_t)UINT64_C(18));
    return t6930;
  } else {
  }
  ApString t6931 = v0;
  ApString t6932 = AP_STR("error.stack");
  bool t6933 = ap_equal(t6931,t6932);
  if (t6933) {
    int64_t t6934 = ((int64_t)UINT64_C(19));
    return t6934;
  } else {
  }
  ApString t6935 = v0;
  ApString t6936 = AP_STR("error.time");
  bool t6937 = ap_equal(t6935,t6936);
  if (t6937) {
    int64_t t6938 = ((int64_t)UINT64_C(20));
    return t6938;
  } else {
  }
  ApString t6939 = v0;
  ApString t6940 = AP_STR("error.zero");
  bool t6941 = ap_equal(t6939,t6940);
  if (t6941) {
    int64_t t6942 = ((int64_t)UINT64_C(21));
    return t6942;
  } else {
  }
  ApString t6943 = v0;
  ApString t6944 = AP_STR("program.entry");
  bool t6945 = ap_equal(t6943,t6944);
  if (t6945) {
    int64_t t6946 = ((int64_t)UINT64_C(55));
    return t6946;
  } else {
  }
  ApString t6947 = v0;
  ApString t6948 = AP_STR("runtime.alloc");
  bool t6949 = ap_equal(t6947,t6948);
  if (t6949) {
    int64_t t6950 = ((int64_t)UINT64_C(56));
    return t6950;
  } else {
  }
  ApString t6951 = v0;
  ApString t6952 = AP_STR("runtime.bounds");
  bool t6953 = ap_equal(t6951,t6952);
  if (t6953) {
    int64_t t6954 = ((int64_t)UINT64_C(57));
    return t6954;
  } else {
  }
  ApString t6955 = v0;
  ApString t6956 = AP_STR("runtime.clock");
  bool t6957 = ap_equal(t6955,t6956);
  if (t6957) {
    int64_t t6958 = ((int64_t)UINT64_C(58));
    return t6958;
  } else {
  }
  ApString t6959 = v0;
  ApString t6960 = AP_STR("runtime.divide");
  bool t6961 = ap_equal(t6959,t6960);
  if (t6961) {
    int64_t t6962 = ((int64_t)UINT64_C(59));
    return t6962;
  } else {
  }
  ApString t6963 = v0;
  ApString t6964 = AP_STR("runtime.float_print");
  bool t6965 = ap_equal(t6963,t6964);
  if (t6965) {
    int64_t t6966 = ((int64_t)UINT64_C(60));
    return t6966;
  } else {
  }
  ApString t6967 = v0;
  ApString t6968 = AP_STR("runtime.free");
  bool t6969 = ap_equal(t6967,t6968);
  if (t6969) {
    int64_t t6970 = ((int64_t)UINT64_C(61));
    return t6970;
  } else {
  }
  ApString t6971 = v0;
  ApString t6972 = AP_STR("runtime.integer_print");
  bool t6973 = ap_equal(t6971,t6972);
  if (t6973) {
    int64_t t6974 = ((int64_t)UINT64_C(62));
    return t6974;
  } else {
  }
  ApString t6975 = v0;
  ApString t6976 = AP_STR("runtime.muldiv");
  bool t6977 = ap_equal(t6975,t6976);
  if (t6977) {
    int64_t t6978 = ((int64_t)UINT64_C(63));
    return t6978;
  } else {
  }
  ApString t6979 = v0;
  ApString t6980 = AP_STR("runtime.multiply");
  bool t6981 = ap_equal(t6979,t6980);
  if (t6981) {
    int64_t t6982 = ((int64_t)UINT64_C(64));
    return t6982;
  } else {
  }
  ApString t6983 = v0;
  ApString t6984 = AP_STR("runtime.number");
  bool t6985 = ap_equal(t6983,t6984);
  if (t6985) {
    int64_t t6986 = ((int64_t)UINT64_C(65));
    return t6986;
  } else {
  }
  ApString t6987 = v0;
  ApString t6988 = AP_STR("runtime.pointer_print");
  bool t6989 = ap_equal(t6987,t6988);
  if (t6989) {
    int64_t t6990 = ((int64_t)UINT64_C(66));
    return t6990;
  } else {
  }
  ApString t6991 = v0;
  ApString t6992 = AP_STR("runtime.rawclock");
  bool t6993 = ap_equal(t6991,t6992);
  if (t6993) {
    int64_t t6994 = ((int64_t)UINT64_C(67));
    return t6994;
  } else {
  }
  ApString t6995 = v0;
  ApString t6996 = AP_STR("runtime.sleep");
  bool t6997 = ap_equal(t6995,t6996);
  if (t6997) {
    int64_t t6998 = ((int64_t)UINT64_C(68));
    return t6998;
  } else {
  }
  ApString t6999 = v0;
  ApString t7000 = AP_STR("runtime.sleep_common");
  bool t7001 = ap_equal(t6999,t7000);
  if (t7001) {
    int64_t t7002 = ((int64_t)UINT64_C(69));
    return t7002;
  } else {
  }
  ApString t7003 = v0;
  ApString t7004 = AP_STR("runtime.sleep_until");
  bool t7005 = ap_equal(t7003,t7004);
  if (t7005) {
    int64_t t7006 = ((int64_t)UINT64_C(70));
    return t7006;
  } else {
  }
  ApString t7007 = v0;
  ApString t7008 = AP_STR("runtime.string_equal");
  bool t7009 = ap_equal(t7007,t7008);
  if (t7009) {
    int64_t t7010 = ((int64_t)UINT64_C(71));
    return t7010;
  } else {
  }
  ApString t7011 = v0;
  ApString t7012 = AP_STR("runtime.validate");
  bool t7013 = ap_equal(t7011,t7012);
  if (t7013) {
    int64_t t7014 = ((int64_t)UINT64_C(72));
    return t7014;
  } else {
  }
  ApString t7015 = v0;
  ApString t7016 = AP_STR("runtime.write");
  bool t7017 = ap_equal(t7015,t7016);
  if (t7017) {
    int64_t t7018 = ((int64_t)UINT64_C(73));
    return t7018;
  } else {
  }
  ApString t7019 = AP_STR("internal error: unknown runtime label ");
  ap_print_string(t7019);
  ApString t7020 = v0;
  ap_print_string(t7020);
  ApString t7021 = AP_STR("\012");
  ap_print_string(t7021);
  int64_t t7022 = ((int64_t)UINT64_C(70));
  exit((int)t7022);
}
static void f_emit_runtime(uintptr_t v0) {
  uintptr_t t7023 = v0;
  int64_t t7024 = ((int64_t)UINT64_C(335544320));
  f_emit(t7023,t7024);
  uintptr_t t7025 = v0;
  int64_t t7026 = ((int64_t)UINT64_C(73));
  int64_t t7027 = ((int64_t)UINT64_C(4));
  f_mark(t7025,t7026,t7027);
  uintptr_t t7028 = v0;
  int64_t t7029 = ((int64_t)UINT64_C(2852127721));
  f_emit(t7028,t7029);
  uintptr_t t7030 = v0;
  int64_t t7031 = ((int64_t)UINT64_C(2852193258));
  f_emit(t7030,t7031);
  uintptr_t t7032 = v0;
  int64_t t7033 = ((int64_t)UINT64_C(2852258795));
  f_emit(t7032,t7033);
  uintptr_t t7034 = v0;
  int64_t t7035 = ((int64_t)UINT64_C(3036676171));
  f_emit(t7034,t7035);
  uintptr_t t7036 = v0;
  int64_t t7037 = ((int64_t)UINT64_C(335544320));
  f_emit(t7036,t7037);
  uintptr_t t7038 = v0;
  int64_t t7039 = ((int64_t)UINT64_C(103));
  int64_t t7040 = ((int64_t)UINT64_C(24));
  f_mark(t7038,t7039,t7040);
  uintptr_t t7041 = v0;
  int64_t t7042 = ((int64_t)UINT64_C(2852717536));
  f_emit(t7041,t7042);
  uintptr_t t7043 = v0;
  int64_t t7044 = ((int64_t)UINT64_C(2852783073));
  f_emit(t7043,t7044);
  uintptr_t t7045 = v0;
  int64_t t7046 = ((int64_t)UINT64_C(2852848610));
  f_emit(t7045,t7046);
  uintptr_t t7047 = v0;
  int64_t t7048 = ((int64_t)UINT64_C(3531604112));
  f_emit(t7047,t7048);
  uintptr_t t7049 = v0;
  int64_t t7050 = ((int64_t)UINT64_C(3556773889));
  f_emit(t7049,t7050);
  uintptr_t t7051 = v0;
  int64_t t7052 = ((int64_t)UINT64_C(1409286211));
  f_emit(t7051,t7052);
  uintptr_t t7053 = v0;
  int64_t t7054 = ((int64_t)UINT64_C(335544320));
  f_emit(t7053,t7054);
  uintptr_t t7055 = v0;
  int64_t t7056 = ((int64_t)UINT64_C(3036676160));
  f_emit(t7055,t7056);
  uintptr_t t7057 = v0;
  int64_t t7058 = ((int64_t)UINT64_C(335544320));
  f_emit(t7057,t7058);
  uintptr_t t7059 = v0;
  int64_t t7060 = ((int64_t)UINT64_C(2332033354));
  f_emit(t7059,t7060);
  uintptr_t t7061 = v0;
  int64_t t7062 = ((int64_t)UINT64_C(3405775211));
  f_emit(t7061,t7062);
  uintptr_t t7063 = v0;
  int64_t t7064 = ((int64_t)UINT64_C(3019898955));
  f_emit(t7063,t7064);
  uintptr_t t7065 = v0;
  int64_t t7066 = ((int64_t)UINT64_C(335544320));
  f_emit(t7065,t7066);
  uintptr_t t7067 = v0;
  int64_t t7068 = ((int64_t)UINT64_C(100));
  int64_t t7069 = ((int64_t)UINT64_C(76));
  f_mark(t7067,t7068,t7069);
  uintptr_t t7070 = v0;
  int64_t t7071 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7070,t7071);
  uintptr_t t7072 = v0;
  int64_t t7073 = ((int64_t)UINT64_C(101));
  int64_t t7074 = ((int64_t)UINT64_C(80));
  f_mark(t7072,t7073,t7074);
  uintptr_t t7075 = v0;
  int64_t t7076 = ((int64_t)UINT64_C(4043313183));
  f_emit(t7075,t7076);
  uintptr_t t7077 = v0;
  int64_t t7078 = ((int64_t)UINT64_C(1409286209));
  f_emit(t7077,t7078);
  uintptr_t t7079 = v0;
  int64_t t7080 = ((int64_t)UINT64_C(335544320));
  f_emit(t7079,t7080);
  uintptr_t t7081 = v0;
  int64_t t7082 = ((int64_t)UINT64_C(102));
  int64_t t7083 = ((int64_t)UINT64_C(92));
  f_mark(t7081,t7082,t7083);
  uintptr_t t7084 = v0;
  int64_t t7085 = ((int64_t)UINT64_C(3531606336));
  f_emit(t7084,t7085);
  uintptr_t t7086 = v0;
  int64_t t7087 = ((int64_t)UINT64_C(3531604016));
  f_emit(t7086,t7087);
  uintptr_t t7088 = v0;
  int64_t t7089 = ((int64_t)UINT64_C(3556773889));
  f_emit(t7088,t7089);
  uintptr_t t7090 = v0;
  int64_t t7091 = ((int64_t)UINT64_C(3558866944));
  f_emit(t7090,t7091);
  uintptr_t t7092 = v0;
  int64_t t7093 = ((int64_t)UINT64_C(65));
  int64_t t7094 = ((int64_t)UINT64_C(108));
  f_mark(t7092,t7093,t7094);
  uintptr_t t7095 = v0;
  int64_t t7096 = ((int64_t)UINT64_C(3506537471));
  f_emit(t7095,t7096);
  uintptr_t t7097 = v0;
  int64_t t7098 = ((int64_t)UINT64_C(4177538045));
  f_emit(t7097,t7098);
  uintptr_t t7099 = v0;
  int64_t t7100 = ((int64_t)UINT64_C(4177539070));
  f_emit(t7099,t7100);
  uintptr_t t7101 = v0;
  int64_t t7102 = ((int64_t)UINT64_C(2432779261));
  f_emit(t7101,t7102);
  uintptr_t t7103 = v0;
  int64_t t7104 = ((int64_t)UINT64_C(2432762852));
  f_emit(t7103,t7104);
  uintptr_t t7105 = v0;
  int64_t t7106 = ((int64_t)UINT64_C(2852389873));
  f_emit(t7105,t7106);
  uintptr_t t7107 = v0;
  int64_t t7108 = ((int64_t)UINT64_C(2852127724));
  f_emit(t7107,t7108);
  uintptr_t t7109 = v0;
  int64_t t7110 = ((int64_t)UINT64_C(3531603983));
  f_emit(t7109,t7110);
  uintptr_t t7111 = v0;
  int64_t t7112 = ((int64_t)UINT64_C(4043309087));
  f_emit(t7111,t7112);
  uintptr_t t7113 = v0;
  int64_t t7114 = ((int64_t)UINT64_C(1409286219));
  f_emit(t7113,t7114);
  uintptr_t t7115 = v0;
  int64_t t7116 = ((int64_t)UINT64_C(335544320));
  f_emit(t7115,t7116);
  uintptr_t t7117 = v0;
  int64_t t7118 = ((int64_t)UINT64_C(3406562284));
  f_emit(t7117,t7118);
  uintptr_t t7119 = v0;
  int64_t t7120 = ((int64_t)UINT64_C(3531604015));
  f_emit(t7119,t7120);
  uintptr_t t7121 = v0;
  int64_t t7122 = ((int64_t)UINT64_C(51));
  int64_t t7123 = ((int64_t)UINT64_C(160));
  f_mark(t7121,t7122,t7123);
  uintptr_t t7124 = v0;
  int64_t t7125 = ((int64_t)UINT64_C(3532146704));
  f_emit(t7124,t7125);
  uintptr_t t7126 = v0;
  int64_t t7127 = ((int64_t)UINT64_C(4070572528));
  f_emit(t7126,t7127);
  uintptr_t t7128 = v0;
  int64_t t7129 = ((int64_t)UINT64_C(2597325197));
  f_emit(t7128,t7129);
  uintptr_t t7130 = v0;
  int64_t t7131 = ((int64_t)UINT64_C(2601562542));
  f_emit(t7130,t7131);
  uintptr_t t7132 = v0;
  int64_t t7133 = ((int64_t)UINT64_C(3531604296));
  f_emit(t7132,t7133);
  uintptr_t t7134 = v0;
  int64_t t7135 = ((int64_t)UINT64_C(3036676174));
  f_emit(t7134,t7135);
  uintptr_t t7136 = v0;
  int64_t t7137 = ((int64_t)UINT64_C(335544320));
  f_emit(t7136,t7137);
  uintptr_t t7138 = v0;
  int64_t t7139 = ((int64_t)UINT64_C(3531604167));
  f_emit(t7138,t7139);
  uintptr_t t7140 = v0;
  int64_t t7141 = ((int64_t)UINT64_C(29));
  int64_t t7142 = ((int64_t)UINT64_C(192));
  f_mark(t7140,t7141,t7142);
  uintptr_t t7143 = v0;
  int64_t t7144 = ((int64_t)UINT64_C(2596800966));
  f_emit(t7143,t7144);
  uintptr_t t7145 = v0;
  int64_t t7146 = ((int64_t)UINT64_C(2601040069));
  f_emit(t7145,t7146);
  uintptr_t t7147 = v0;
  int64_t t7148 = ((int64_t)UINT64_C(3019898949));
  f_emit(t7147,t7148);
  uintptr_t t7149 = v0;
  int64_t t7150 = ((int64_t)UINT64_C(335544320));
  f_emit(t7149,t7150);
  uintptr_t t7151 = v0;
  int64_t t7152 = ((int64_t)UINT64_C(2852520942));
  f_emit(t7151,t7152);
  uintptr_t t7153 = v0;
  int64_t t7154 = ((int64_t)UINT64_C(3506439399));
  f_emit(t7153,t7154);
  uintptr_t t7155 = v0;
  int64_t t7156 = ((int64_t)UINT64_C(335544320));
  f_emit(t7155,t7156);
  uintptr_t t7157 = v0;
  int64_t t7158 = ((int64_t)UINT64_C(28));
  int64_t t7159 = ((int64_t)UINT64_C(220));
  f_mark(t7157,t7158,t7159);
  uintptr_t t7160 = v0;
  int64_t t7161 = ((int64_t)UINT64_C(2596800966));
  f_emit(t7160,t7161);
  uintptr_t t7162 = v0;
  int64_t t7163 = ((int64_t)UINT64_C(2601040069));
  f_emit(t7162,t7163);
  uintptr_t t7164 = v0;
  int64_t t7165 = ((int64_t)UINT64_C(2432745637));
  f_emit(t7164,t7165);
  uintptr_t t7166 = v0;
  int64_t t7167 = ((int64_t)UINT64_C(3506439729));
  f_emit(t7166,t7167);
  uintptr_t t7168 = v0;
  int64_t t7169 = ((int64_t)UINT64_C(956301861));
  f_emit(t7168,t7169);
  uintptr_t t7170 = v0;
  int64_t t7171 = ((int64_t)UINT64_C(2852520942));
  f_emit(t7170,t7171);
  uintptr_t t7172 = v0;
  int64_t t7173 = ((int64_t)UINT64_C(3506439399));
  f_emit(t7172,t7173);
  uintptr_t t7174 = v0;
  int64_t t7175 = ((int64_t)UINT64_C(3019898951));
  f_emit(t7174,t7175);
  uintptr_t t7176 = v0;
  int64_t t7177 = ((int64_t)UINT64_C(335544320));
  f_emit(t7176,t7177);
  uintptr_t t7178 = v0;
  int64_t t7179 = ((int64_t)UINT64_C(3506439729));
  f_emit(t7178,t7179);
  uintptr_t t7180 = v0;
  int64_t t7181 = ((int64_t)UINT64_C(3531605445));
  f_emit(t7180,t7181);
  uintptr_t t7182 = v0;
  int64_t t7183 = ((int64_t)UINT64_C(956301861));
  f_emit(t7182,t7183);
  uintptr_t t7184 = v0;
  int64_t t7185 = ((int64_t)UINT64_C(50));
  int64_t t7186 = ((int64_t)UINT64_C(268));
  f_mark(t7184,t7185,t7186);
  uintptr_t t7187 = v0;
  int64_t t7188 = ((int64_t)UINT64_C(2596800934));
  f_emit(t7187,t7188);
  uintptr_t t7189 = v0;
  int64_t t7190 = ((int64_t)UINT64_C(2601039045));
  f_emit(t7189,t7190);
  uintptr_t t7191 = v0;
  int64_t t7192 = ((int64_t)UINT64_C(2432745637));
  f_emit(t7191,t7192);
  uintptr_t t7193 = v0;
  int64_t t7194 = ((int64_t)UINT64_C(3506439729));
  f_emit(t7193,t7194);
  uintptr_t t7195 = v0;
  int64_t t7196 = ((int64_t)UINT64_C(956301861));
  f_emit(t7195,t7196);
  uintptr_t t7197 = v0;
  int64_t t7198 = ((int64_t)UINT64_C(2852520941));
  f_emit(t7197,t7198);
  uintptr_t t7199 = v0;
  int64_t t7200 = ((int64_t)UINT64_C(3019898957));
  f_emit(t7199,t7200);
  uintptr_t t7201 = v0;
  int64_t t7202 = ((int64_t)UINT64_C(335544320));
  f_emit(t7201,t7202);
  uintptr_t t7203 = v0;
  int64_t t7204 = ((int64_t)UINT64_C(3036676175));
  f_emit(t7203,t7204);
  uintptr_t t7205 = v0;
  int64_t t7206 = ((int64_t)UINT64_C(335544320));
  f_emit(t7205,t7206);
  uintptr_t t7207 = v0;
  int64_t t7208 = ((int64_t)UINT64_C(3506439729));
  f_emit(t7207,t7208);
  uintptr_t t7209 = v0;
  int64_t t7210 = ((int64_t)UINT64_C(3531605413));
  f_emit(t7209,t7210);
  uintptr_t t7211 = v0;
  int64_t t7212 = ((int64_t)UINT64_C(956301861));
  f_emit(t7211,t7212);
  uintptr_t t7213 = v0;
  int64_t t7214 = ((int64_t)UINT64_C(52));
  int64_t t7215 = ((int64_t)UINT64_C(320));
  f_mark(t7213,t7214,t7215);
  uintptr_t t7216 = v0;
  int64_t t7217 = ((int64_t)UINT64_C(3531604000));
  f_emit(t7216,t7217);
  uintptr_t t7218 = v0;
  int64_t t7219 = ((int64_t)UINT64_C(2853241825));
  f_emit(t7218,t7219);
  uintptr_t t7220 = v0;
  int64_t t7221 = ((int64_t)UINT64_C(3406889090));
  f_emit(t7220,t7221);
  uintptr_t t7222 = v0;
  int64_t t7223 = ((int64_t)UINT64_C(2483027968));
  f_emit(t7222,t7223);
  uintptr_t t7224 = v0;
  int64_t t7225 = ((int64_t)UINT64_C(4181732349));
  f_emit(t7224,t7225);
  uintptr_t t7226 = v0;
  int64_t t7227 = ((int64_t)UINT64_C(4181733374));
  f_emit(t7226,t7227);
  uintptr_t t7228 = v0;
  int64_t t7229 = ((int64_t)UINT64_C(2432795647));
  f_emit(t7228,t7229);
  uintptr_t t7230 = v0;
  int64_t t7231 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7230,t7231);
  uintptr_t t7232 = v0;
  int64_t t7233 = ((int64_t)UINT64_C(62));
  int64_t t7234 = ((int64_t)UINT64_C(352));
  f_mark(t7232,t7233,t7234);
  uintptr_t t7235 = v0;
  int64_t t7236 = ((int64_t)UINT64_C(3506504703));
  f_emit(t7235,t7236);
  uintptr_t t7237 = v0;
  int64_t t7238 = ((int64_t)UINT64_C(4177533949));
  f_emit(t7237,t7238);
  uintptr_t t7239 = v0;
  int64_t t7240 = ((int64_t)UINT64_C(4177534974));
  f_emit(t7239,t7240);
  uintptr_t t7241 = v0;
  int64_t t7242 = ((int64_t)UINT64_C(2432746493));
  f_emit(t7241,t7242);
  uintptr_t t7243 = v0;
  int64_t t7244 = ((int64_t)UINT64_C(2432738276));
  f_emit(t7243,t7244);
  uintptr_t t7245 = v0;
  int64_t t7246 = ((int64_t)UINT64_C(2852389873));
  f_emit(t7245,t7246);
  uintptr_t t7247 = v0;
  int64_t t7248 = ((int64_t)UINT64_C(2852127724));
  f_emit(t7247,t7248);
  uintptr_t t7249 = v0;
  int64_t t7250 = ((int64_t)UINT64_C(3531603983));
  f_emit(t7249,t7250);
  uintptr_t t7251 = v0;
  int64_t t7252 = ((int64_t)UINT64_C(4043309471));
  f_emit(t7251,t7252);
  uintptr_t t7253 = v0;
  int64_t t7254 = ((int64_t)UINT64_C(1409286219));
  f_emit(t7253,t7254);
  uintptr_t t7255 = v0;
  int64_t t7256 = ((int64_t)UINT64_C(335544320));
  f_emit(t7255,t7256);
  uintptr_t t7257 = v0;
  int64_t t7258 = ((int64_t)UINT64_C(3406562284));
  f_emit(t7257,t7258);
  uintptr_t t7259 = v0;
  int64_t t7260 = ((int64_t)UINT64_C(3531604015));
  f_emit(t7259,t7260);
  uintptr_t t7261 = v0;
  int64_t t7262 = ((int64_t)UINT64_C(41));
  int64_t t7263 = ((int64_t)UINT64_C(404));
  f_mark(t7261,t7262,t7263);
  uintptr_t t7264 = v0;
  int64_t t7265 = ((int64_t)UINT64_C(3531604296));
  f_emit(t7264,t7265);
  uintptr_t t7266 = v0;
  int64_t t7267 = ((int64_t)UINT64_C(39));
  int64_t t7268 = ((int64_t)UINT64_C(408));
  f_mark(t7266,t7267,t7268);
  uintptr_t t7269 = v0;
  int64_t t7270 = ((int64_t)UINT64_C(2596800902));
  f_emit(t7269,t7270);
  uintptr_t t7271 = v0;
  int64_t t7272 = ((int64_t)UINT64_C(2601038021));
  f_emit(t7271,t7272);
  uintptr_t t7273 = v0;
  int64_t t7274 = ((int64_t)UINT64_C(2432745637));
  f_emit(t7273,t7274);
  uintptr_t t7275 = v0;
  int64_t t7276 = ((int64_t)UINT64_C(3506439729));
  f_emit(t7275,t7276);
  uintptr_t t7277 = v0;
  int64_t t7278 = ((int64_t)UINT64_C(956301861));
  f_emit(t7277,t7278);
  uintptr_t t7279 = v0;
  int64_t t7280 = ((int64_t)UINT64_C(2852520940));
  f_emit(t7279,t7280);
  uintptr_t t7281 = v0;
  int64_t t7282 = ((int64_t)UINT64_C(3019898956));
  f_emit(t7281,t7282);
  uintptr_t t7283 = v0;
  int64_t t7284 = ((int64_t)UINT64_C(335544320));
  f_emit(t7283,t7284);
  uintptr_t t7285 = v0;
  int64_t t7286 = ((int64_t)UINT64_C(3036676175));
  f_emit(t7285,t7286);
  uintptr_t t7287 = v0;
  int64_t t7288 = ((int64_t)UINT64_C(335544320));
  f_emit(t7287,t7288);
  uintptr_t t7289 = v0;
  int64_t t7290 = ((int64_t)UINT64_C(3531605413));
  f_emit(t7289,t7290);
  uintptr_t t7291 = v0;
  int64_t t7292 = ((int64_t)UINT64_C(3506439729));
  f_emit(t7291,t7292);
  uintptr_t t7293 = v0;
  int64_t t7294 = ((int64_t)UINT64_C(956301861));
  f_emit(t7293,t7294);
  uintptr_t t7295 = v0;
  int64_t t7296 = ((int64_t)UINT64_C(40));
  int64_t t7297 = ((int64_t)UINT64_C(460));
  f_mark(t7295,t7296,t7297);
  uintptr_t t7298 = v0;
  int64_t t7299 = ((int64_t)UINT64_C(2853241825));
  f_emit(t7298,t7299);
  uintptr_t t7300 = v0;
  int64_t t7301 = ((int64_t)UINT64_C(3406889090));
  f_emit(t7300,t7301);
  uintptr_t t7302 = v0;
  int64_t t7303 = ((int64_t)UINT64_C(3531604000));
  f_emit(t7302,t7303);
  uintptr_t t7304 = v0;
  int64_t t7305 = ((int64_t)UINT64_C(2483027968));
  f_emit(t7304,t7305);
  uintptr_t t7306 = v0;
  int64_t t7307 = ((int64_t)UINT64_C(4181728253));
  f_emit(t7306,t7307);
  uintptr_t t7308 = v0;
  int64_t t7309 = ((int64_t)UINT64_C(4181729278));
  f_emit(t7308,t7309);
  uintptr_t t7310 = v0;
  int64_t t7311 = ((int64_t)UINT64_C(2432762879));
  f_emit(t7310,t7311);
  uintptr_t t7312 = v0;
  int64_t t7313 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7312,t7313);
  uintptr_t t7314 = v0;
  int64_t t7315 = ((int64_t)UINT64_C(66));
  int64_t t7316 = ((int64_t)UINT64_C(492));
  f_mark(t7314,t7315,t7316);
  uintptr_t t7317 = v0;
  int64_t t7318 = ((int64_t)UINT64_C(3506504703));
  f_emit(t7317,t7318);
  uintptr_t t7319 = v0;
  int64_t t7320 = ((int64_t)UINT64_C(4177533949));
  f_emit(t7319,t7320);
  uintptr_t t7321 = v0;
  int64_t t7322 = ((int64_t)UINT64_C(4177534974));
  f_emit(t7321,t7322);
  uintptr_t t7323 = v0;
  int64_t t7324 = ((int64_t)UINT64_C(2432746493));
  f_emit(t7323,t7324);
  uintptr_t t7325 = v0;
  int64_t t7326 = ((int64_t)UINT64_C(2432715761));
  f_emit(t7325,t7326);
  uintptr_t t7327 = v0;
  int64_t t7328 = ((int64_t)UINT64_C(3531604487));
  f_emit(t7327,t7328);
  uintptr_t t7329 = v0;
  int64_t t7330 = ((int64_t)UINT64_C(3531604456));
  f_emit(t7329,t7330);
  uintptr_t t7331 = v0;
  int64_t t7332 = ((int64_t)UINT64_C(2415919110));
  f_emit(t7331,t7332);
  uintptr_t t7333 = v0;
  int64_t t7334 = ((int64_t)UINT64_C(2432696518));
  f_emit(t7333,t7334);
  uintptr_t t7335 = v0;
  int64_t t7336 = ((int64_t)UINT64_C(38));
  int64_t t7337 = ((int64_t)UINT64_C(528));
  f_mark(t7335,t7336,t7337);
  uintptr_t t7338 = v0;
  int64_t t7339 = ((int64_t)UINT64_C(2315780101));
  f_emit(t7338,t7339);
  uintptr_t t7340 = v0;
  int64_t t7341 = ((int64_t)UINT64_C(2332360901));
  f_emit(t7340,t7341);
  uintptr_t t7342 = v0;
  int64_t t7343 = ((int64_t)UINT64_C(960495781));
  f_emit(t7342,t7343);
  uintptr_t t7344 = v0;
  int64_t t7345 = ((int64_t)UINT64_C(3506439729));
  f_emit(t7344,t7345);
  uintptr_t t7346 = v0;
  int64_t t7347 = ((int64_t)UINT64_C(956301861));
  f_emit(t7346,t7347);
  uintptr_t t7348 = v0;
  int64_t t7349 = ((int64_t)UINT64_C(3544513536));
  f_emit(t7348,t7349);
  uintptr_t t7350 = v0;
  int64_t t7351 = ((int64_t)UINT64_C(3506439399));
  f_emit(t7350,t7351);
  uintptr_t t7352 = v0;
  int64_t t7353 = ((int64_t)UINT64_C(3019898951));
  f_emit(t7352,t7353);
  uintptr_t t7354 = v0;
  int64_t t7355 = ((int64_t)UINT64_C(335544320));
  f_emit(t7354,t7355);
  uintptr_t t7356 = v0;
  int64_t t7357 = ((int64_t)UINT64_C(3506439729));
  f_emit(t7356,t7357);
  uintptr_t t7358 = v0;
  int64_t t7359 = ((int64_t)UINT64_C(3531607813));
  f_emit(t7358,t7359);
  uintptr_t t7360 = v0;
  int64_t t7361 = ((int64_t)UINT64_C(956301861));
  f_emit(t7360,t7361);
  uintptr_t t7362 = v0;
  int64_t t7363 = ((int64_t)UINT64_C(3506439729));
  f_emit(t7362,t7363);
  uintptr_t t7364 = v0;
  int64_t t7365 = ((int64_t)UINT64_C(3531605509));
  f_emit(t7364,t7365);
  uintptr_t t7366 = v0;
  int64_t t7367 = ((int64_t)UINT64_C(956301861));
  f_emit(t7366,t7367);
  uintptr_t t7368 = v0;
  int64_t t7369 = ((int64_t)UINT64_C(3531604000));
  f_emit(t7368,t7369);
  uintptr_t t7370 = v0;
  int64_t t7371 = ((int64_t)UINT64_C(2432697313));
  f_emit(t7370,t7371);
  uintptr_t t7372 = v0;
  int64_t t7373 = ((int64_t)UINT64_C(3531604546));
  f_emit(t7372,t7373);
  uintptr_t t7374 = v0;
  int64_t t7375 = ((int64_t)UINT64_C(2483027968));
  f_emit(t7374,t7375);
  uintptr_t t7376 = v0;
  int64_t t7377 = ((int64_t)UINT64_C(4181728253));
  f_emit(t7376,t7377);
  uintptr_t t7378 = v0;
  int64_t t7379 = ((int64_t)UINT64_C(4181729278));
  f_emit(t7378,t7379);
  uintptr_t t7380 = v0;
  int64_t t7381 = ((int64_t)UINT64_C(2432762879));
  f_emit(t7380,t7381);
  uintptr_t t7382 = v0;
  int64_t t7383 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7382,t7383);
  uintptr_t t7384 = v0;
  int64_t t7385 = ((int64_t)UINT64_C(71));
  int64_t t7386 = ((int64_t)UINT64_C(620));
  f_mark(t7384,t7385,t7386);
  uintptr_t t7387 = v0;
  int64_t t7388 = ((int64_t)UINT64_C(3942711423));
  f_emit(t7387,t7388);
  uintptr_t t7389 = v0;
  int64_t t7390 = ((int64_t)UINT64_C(1409286208));
  f_emit(t7389,t7390);
  uintptr_t t7391 = v0;
  int64_t t7392 = ((int64_t)UINT64_C(335544320));
  f_emit(t7391,t7392);
  uintptr_t t7393 = v0;
  int64_t t7394 = ((int64_t)UINT64_C(3036676161));
  f_emit(t7393,t7394);
  uintptr_t t7395 = v0;
  int64_t t7396 = ((int64_t)UINT64_C(335544320));
  f_emit(t7395,t7396);
  uintptr_t t7397 = v0;
  int64_t t7398 = ((int64_t)UINT64_C(97));
  int64_t t7399 = ((int64_t)UINT64_C(640));
  f_mark(t7397,t7398,t7399);
  uintptr_t t7400 = v0;
  int64_t t7401 = ((int64_t)UINT64_C(960495689));
  f_emit(t7400,t7401);
  uintptr_t t7402 = v0;
  int64_t t7403 = ((int64_t)UINT64_C(960495626));
  f_emit(t7402,t7403);
  uintptr_t t7404 = v0;
  int64_t t7405 = ((int64_t)UINT64_C(3943301439));
  f_emit(t7404,t7405);
  uintptr_t t7406 = v0;
  int64_t t7407 = ((int64_t)UINT64_C(1409286208));
  f_emit(t7406,t7407);
  uintptr_t t7408 = v0;
  int64_t t7409 = ((int64_t)UINT64_C(335544320));
  f_emit(t7408,t7409);
  uintptr_t t7410 = v0;
  int64_t t7411 = ((int64_t)UINT64_C(2432697410));
  f_emit(t7410,t7411);
  uintptr_t t7412 = v0;
  int64_t t7413 = ((int64_t)UINT64_C(2432697344));
  f_emit(t7412,t7413);
  uintptr_t t7414 = v0;
  int64_t t7415 = ((int64_t)UINT64_C(3506439201));
  f_emit(t7414,t7415);
  uintptr_t t7416 = v0;
  int64_t t7417 = ((int64_t)UINT64_C(3019898945));
  f_emit(t7416,t7417);
  uintptr_t t7418 = v0;
  int64_t t7419 = ((int64_t)UINT64_C(335544320));
  f_emit(t7418,t7419);
  uintptr_t t7420 = v0;
  int64_t t7421 = ((int64_t)UINT64_C(99));
  int64_t t7422 = ((int64_t)UINT64_C(680));
  f_mark(t7420,t7421,t7422);
  uintptr_t t7423 = v0;
  int64_t t7424 = ((int64_t)UINT64_C(3531604000));
  f_emit(t7423,t7424);
  uintptr_t t7425 = v0;
  int64_t t7426 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7425,t7426);
  uintptr_t t7427 = v0;
  int64_t t7428 = ((int64_t)UINT64_C(98));
  int64_t t7429 = ((int64_t)UINT64_C(688));
  f_mark(t7427,t7428,t7429);
  uintptr_t t7430 = v0;
  int64_t t7431 = ((int64_t)UINT64_C(3531603968));
  f_emit(t7430,t7431);
  uintptr_t t7432 = v0;
  int64_t t7433 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7432,t7433);
  uintptr_t t7434 = v0;
  int64_t t7435 = ((int64_t)UINT64_C(64));
  int64_t t7436 = ((int64_t)UINT64_C(696));
  f_mark(t7434,t7435,t7436);
  uintptr_t t7437 = v0;
  int64_t t7438 = ((int64_t)UINT64_C(2852258796));
  f_emit(t7437,t7438);
  uintptr_t t7439 = v0;
  int64_t t7440 = ((int64_t)UINT64_C(2852127725));
  f_emit(t7439,t7440);
  uintptr_t t7441 = v0;
  int64_t t7442 = ((int64_t)UINT64_C(3389849998));
  f_emit(t7441,t7442);
  uintptr_t t7443 = v0;
  int64_t t7444 = ((int64_t)UINT64_C(3548380622));
  f_emit(t7443,t7444);
  uintptr_t t7445 = v0;
  int64_t t7446 = ((int64_t)UINT64_C(4043309471));
  f_emit(t7445,t7446);
  uintptr_t t7447 = v0;
  int64_t t7448 = ((int64_t)UINT64_C(1409286219));
  f_emit(t7447,t7448);
  uintptr_t t7449 = v0;
  int64_t t7450 = ((int64_t)UINT64_C(335544320));
  f_emit(t7449,t7450);
  uintptr_t t7451 = v0;
  int64_t t7452 = ((int64_t)UINT64_C(3406562284));
  f_emit(t7451,t7452);
  uintptr_t t7453 = v0;
  int64_t t7454 = ((int64_t)UINT64_C(42));
  int64_t t7455 = ((int64_t)UINT64_C(728));
  f_mark(t7453,t7454,t7455);
  uintptr_t t7456 = v0;
  int64_t t7457 = ((int64_t)UINT64_C(4043309503));
  f_emit(t7456,t7457);
  uintptr_t t7458 = v0;
  int64_t t7459 = ((int64_t)UINT64_C(1409286219));
  f_emit(t7458,t7459);
  uintptr_t t7460 = v0;
  int64_t t7461 = ((int64_t)UINT64_C(335544320));
  f_emit(t7460,t7461);
  uintptr_t t7462 = v0;
  int64_t t7463 = ((int64_t)UINT64_C(3406627821));
  f_emit(t7462,t7463);
  uintptr_t t7464 = v0;
  int64_t t7465 = ((int64_t)UINT64_C(44));
  int64_t t7466 = ((int64_t)UINT64_C(744));
  f_mark(t7464,t7465,t7466);
  uintptr_t t7467 = v0;
  int64_t t7468 = ((int64_t)UINT64_C(3036676172));
  f_emit(t7467,t7468);
  uintptr_t t7469 = v0;
  int64_t t7470 = ((int64_t)UINT64_C(335544320));
  f_emit(t7469,t7470);
  uintptr_t t7471 = v0;
  int64_t t7472 = ((int64_t)UINT64_C(3036676173));
  f_emit(t7471,t7472);
  uintptr_t t7473 = v0;
  int64_t t7474 = ((int64_t)UINT64_C(335544320));
  f_emit(t7473,t7474);
  uintptr_t t7475 = v0;
  int64_t t7476 = ((int64_t)UINT64_C(3532146703));
  f_emit(t7475,t7476);
  uintptr_t t7477 = v0;
  int64_t t7478 = ((int64_t)UINT64_C(4070572527));
  f_emit(t7477,t7478);
  uintptr_t t7479 = v0;
  int64_t t7480 = ((int64_t)UINT64_C(2852914153));
  f_emit(t7479,t7480);
  uintptr_t t7481 = v0;
  int64_t t7482 = ((int64_t)UINT64_C(2853110762));
  f_emit(t7481,t7482);
  uintptr_t t7483 = v0;
  int64_t t7484 = ((int64_t)UINT64_C(34));
  int64_t t7485 = ((int64_t)UINT64_C(776));
  f_mark(t7483,t7484,t7485);
  uintptr_t t7486 = v0;
  int64_t t7487 = ((int64_t)UINT64_C(3036676170));
  f_emit(t7486,t7487);
  uintptr_t t7488 = v0;
  int64_t t7489 = ((int64_t)UINT64_C(335544320));
  f_emit(t7488,t7489);
  uintptr_t t7490 = v0;
  int64_t t7491 = ((int64_t)UINT64_C(2596931883));
  f_emit(t7490,t7491);
  uintptr_t t7492 = v0;
  int64_t t7493 = ((int64_t)UINT64_C(2601166187));
  f_emit(t7492,t7493);
  uintptr_t t7494 = v0;
  int64_t t7495 = ((int64_t)UINT64_C(2852783081));
  f_emit(t7494,t7495);
  uintptr_t t7496 = v0;
  int64_t t7497 = ((int64_t)UINT64_C(2852848618));
  f_emit(t7496,t7497);
  uintptr_t t7498 = v0;
  int64_t t7499 = ((int64_t)UINT64_C(335544320));
  f_emit(t7498,t7499);
  uintptr_t t7500 = v0;
  int64_t t7501 = ((int64_t)UINT64_C(30));
  int64_t t7502 = ((int64_t)UINT64_C(804));
  f_mark(t7500,t7501,t7502);
  uintptr_t t7503 = v0;
  int64_t t7504 = ((int64_t)UINT64_C(2596866444));
  f_emit(t7503,t7504);
  uintptr_t t7505 = v0;
  int64_t t7506 = ((int64_t)UINT64_C(2596866543));
  f_emit(t7505,t7506);
  uintptr_t t7507 = v0;
  int64_t t7508 = ((int64_t)UINT64_C(2852979689));
  f_emit(t7507,t7508);
  uintptr_t t7509 = v0;
  int64_t t7510 = ((int64_t)UINT64_C(2853110762));
  f_emit(t7509,t7510);
  uintptr_t t7511 = v0;
  int64_t t7512 = ((int64_t)UINT64_C(35));
  int64_t t7513 = ((int64_t)UINT64_C(820));
  f_mark(t7511,t7512,t7513);
  uintptr_t t7514 = v0;
  int64_t t7515 = ((int64_t)UINT64_C(3036676170));
  f_emit(t7514,t7515);
  uintptr_t t7516 = v0;
  int64_t t7517 = ((int64_t)UINT64_C(335544320));
  f_emit(t7516,t7517);
  uintptr_t t7518 = v0;
  int64_t t7519 = ((int64_t)UINT64_C(2596931883));
  f_emit(t7518,t7519);
  uintptr_t t7520 = v0;
  int64_t t7521 = ((int64_t)UINT64_C(2601166187));
  f_emit(t7520,t7521);
  uintptr_t t7522 = v0;
  int64_t t7523 = ((int64_t)UINT64_C(2852783081));
  f_emit(t7522,t7523);
  uintptr_t t7524 = v0;
  int64_t t7525 = ((int64_t)UINT64_C(2852848618));
  f_emit(t7524,t7525);
  uintptr_t t7526 = v0;
  int64_t t7527 = ((int64_t)UINT64_C(335544320));
  f_emit(t7526,t7527);
  uintptr_t t7528 = v0;
  int64_t t7529 = ((int64_t)UINT64_C(31));
  int64_t t7530 = ((int64_t)UINT64_C(848));
  f_mark(t7528,t7529,t7530);
  uintptr_t t7531 = v0;
  int64_t t7532 = ((int64_t)UINT64_C(2596866477));
  f_emit(t7531,t7532);
  uintptr_t t7533 = v0;
  int64_t t7534 = ((int64_t)UINT64_C(2596866543));
  f_emit(t7533,t7534);
  uintptr_t t7535 = v0;
  int64_t t7536 = ((int64_t)UINT64_C(4043310591));
  f_emit(t7535,t7536);
  uintptr_t t7537 = v0;
  int64_t t7538 = ((int64_t)UINT64_C(1409286208));
  f_emit(t7537,t7538);
  uintptr_t t7539 = v0;
  int64_t t7540 = ((int64_t)UINT64_C(335544320));
  f_emit(t7539,t7540);
  uintptr_t t7541 = v0;
  int64_t t7542 = ((int64_t)UINT64_C(2601352576));
  f_emit(t7541,t7542);
  uintptr_t t7543 = v0;
  int64_t t7544 = ((int64_t)UINT64_C(2613935504));
  f_emit(t7543,t7544);
  uintptr_t t7545 = v0;
  int64_t t7546 = ((int64_t)UINT64_C(3019898960));
  f_emit(t7545,t7546);
  uintptr_t t7547 = v0;
  int64_t t7548 = ((int64_t)UINT64_C(335544320));
  f_emit(t7547,t7548);
  uintptr_t t7549 = v0;
  int64_t t7550 = ((int64_t)UINT64_C(3019898958));
  f_emit(t7549,t7550);
  uintptr_t t7551 = v0;
  int64_t t7552 = ((int64_t)UINT64_C(335544320));
  f_emit(t7551,t7552);
  uintptr_t t7553 = v0;
  int64_t t7554 = ((int64_t)UINT64_C(3533701103));
  f_emit(t7553,t7554);
  uintptr_t t7555 = v0;
  int64_t t7556 = ((int64_t)UINT64_C(4072669167));
  f_emit(t7555,t7556);
  uintptr_t t7557 = v0;
  int64_t t7558 = ((int64_t)UINT64_C(4074766319));
  f_emit(t7557,t7558);
  uintptr_t t7559 = v0;
  int64_t t7560 = ((int64_t)UINT64_C(4075814895));
  f_emit(t7559,t7560);
  uintptr_t t7561 = v0;
  int64_t t7562 = ((int64_t)UINT64_C(3943628831));
  f_emit(t7561,t7562);
  uintptr_t t7563 = v0;
  int64_t t7564 = ((int64_t)UINT64_C(1409286217));
  f_emit(t7563,t7564);
  uintptr_t t7565 = v0;
  int64_t t7566 = ((int64_t)UINT64_C(335544320));
  f_emit(t7565,t7566);
  uintptr_t t7567 = v0;
  int64_t t7568 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7567,t7568);
  uintptr_t t7569 = v0;
  int64_t t7570 = ((int64_t)UINT64_C(53));
  int64_t t7571 = ((int64_t)UINT64_C(924));
  f_mark(t7569,t7570,t7571);
  uintptr_t t7572 = v0;
  int64_t t7573 = ((int64_t)UINT64_C(3531603983));
  f_emit(t7572,t7573);
  uintptr_t t7574 = v0;
  int64_t t7575 = ((int64_t)UINT64_C(4075814927));
  f_emit(t7574,t7575);
  uintptr_t t7576 = v0;
  int64_t t7577 = ((int64_t)UINT64_C(3943628831));
  f_emit(t7576,t7577);
  uintptr_t t7578 = v0;
  int64_t t7579 = ((int64_t)UINT64_C(1409286217));
  f_emit(t7578,t7579);
  uintptr_t t7580 = v0;
  int64_t t7581 = ((int64_t)UINT64_C(335544320));
  f_emit(t7580,t7581);
  uintptr_t t7582 = v0;
  int64_t t7583 = ((int64_t)UINT64_C(3405775840));
  f_emit(t7582,t7583);
  uintptr_t t7584 = v0;
  int64_t t7585 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7584,t7585);
  uintptr_t t7586 = v0;
  int64_t t7587 = ((int64_t)UINT64_C(49));
  int64_t t7588 = ((int64_t)UINT64_C(952));
  f_mark(t7586,t7587,t7588);
  uintptr_t t7589 = v0;
  int64_t t7590 = ((int64_t)UINT64_C(3531603968));
  f_emit(t7589,t7590);
  uintptr_t t7591 = v0;
  int64_t t7592 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7591,t7592);
  uintptr_t t7593 = v0;
  int64_t t7594 = ((int64_t)UINT64_C(59));
  int64_t t7595 = ((int64_t)UINT64_C(960));
  f_mark(t7593,t7594,t7595);
  uintptr_t t7596 = v0;
  int64_t t7597 = ((int64_t)UINT64_C(3036676160));
  f_emit(t7596,t7597);
  uintptr_t t7598 = v0;
  int64_t t7599 = ((int64_t)UINT64_C(335544320));
  f_emit(t7598,t7599);
  uintptr_t t7600 = v0;
  int64_t t7601 = ((int64_t)UINT64_C(2852258796));
  f_emit(t7600,t7601);
  uintptr_t t7602 = v0;
  int64_t t7603 = ((int64_t)UINT64_C(2852127725));
  f_emit(t7602,t7603);
  uintptr_t t7604 = v0;
  int64_t t7605 = ((int64_t)UINT64_C(3389849998));
  f_emit(t7604,t7605);
  uintptr_t t7606 = v0;
  int64_t t7607 = ((int64_t)UINT64_C(3548380622));
  f_emit(t7606,t7607);
  uintptr_t t7608 = v0;
  int64_t t7609 = ((int64_t)UINT64_C(4043309471));
  f_emit(t7608,t7609);
  uintptr_t t7610 = v0;
  int64_t t7611 = ((int64_t)UINT64_C(1409286219));
  f_emit(t7610,t7611);
  uintptr_t t7612 = v0;
  int64_t t7613 = ((int64_t)UINT64_C(335544320));
  f_emit(t7612,t7613);
  uintptr_t t7614 = v0;
  int64_t t7615 = ((int64_t)UINT64_C(3406562284));
  f_emit(t7614,t7615);
  uintptr_t t7616 = v0;
  int64_t t7617 = ((int64_t)UINT64_C(43));
  int64_t t7618 = ((int64_t)UINT64_C(1000));
  f_mark(t7616,t7617,t7618);
  uintptr_t t7619 = v0;
  int64_t t7620 = ((int64_t)UINT64_C(4043309503));
  f_emit(t7619,t7620);
  uintptr_t t7621 = v0;
  int64_t t7622 = ((int64_t)UINT64_C(1409286219));
  f_emit(t7621,t7622);
  uintptr_t t7623 = v0;
  int64_t t7624 = ((int64_t)UINT64_C(335544320));
  f_emit(t7623,t7624);
  uintptr_t t7625 = v0;
  int64_t t7626 = ((int64_t)UINT64_C(3406627821));
  f_emit(t7625,t7626);
  uintptr_t t7627 = v0;
  int64_t t7628 = ((int64_t)UINT64_C(45));
  int64_t t7629 = ((int64_t)UINT64_C(1016));
  f_mark(t7627,t7628,t7629);
  uintptr_t t7630 = v0;
  int64_t t7631 = ((int64_t)UINT64_C(3036676172));
  f_emit(t7630,t7631);
  uintptr_t t7632 = v0;
  int64_t t7633 = ((int64_t)UINT64_C(335544320));
  f_emit(t7632,t7633);
  uintptr_t t7634 = v0;
  int64_t t7635 = ((int64_t)UINT64_C(2852914153));
  f_emit(t7634,t7635);
  uintptr_t t7636 = v0;
  int64_t t7637 = ((int64_t)UINT64_C(2852979690));
  f_emit(t7636,t7637);
  uintptr_t t7638 = v0;
  int64_t t7639 = ((int64_t)UINT64_C(36));
  int64_t t7640 = ((int64_t)UINT64_C(1032));
  f_mark(t7638,t7639,t7640);
  uintptr_t t7641 = v0;
  int64_t t7642 = ((int64_t)UINT64_C(3036676170));
  f_emit(t7641,t7642);
  uintptr_t t7643 = v0;
  int64_t t7644 = ((int64_t)UINT64_C(335544320));
  f_emit(t7643,t7644);
  uintptr_t t7645 = v0;
  int64_t t7646 = ((int64_t)UINT64_C(2596931883));
  f_emit(t7645,t7646);
  uintptr_t t7647 = v0;
  int64_t t7648 = ((int64_t)UINT64_C(2601166187));
  f_emit(t7647,t7648);
  uintptr_t t7649 = v0;
  int64_t t7650 = ((int64_t)UINT64_C(2852783081));
  f_emit(t7649,t7650);
  uintptr_t t7651 = v0;
  int64_t t7652 = ((int64_t)UINT64_C(2852848618));
  f_emit(t7651,t7652);
  uintptr_t t7653 = v0;
  int64_t t7654 = ((int64_t)UINT64_C(335544320));
  f_emit(t7653,t7654);
  uintptr_t t7655 = v0;
  int64_t t7656 = ((int64_t)UINT64_C(32));
  int64_t t7657 = ((int64_t)UINT64_C(1060));
  f_mark(t7655,t7656,t7657);
  uintptr_t t7658 = v0;
  int64_t t7659 = ((int64_t)UINT64_C(2596866444));
  f_emit(t7658,t7659);
  uintptr_t t7660 = v0;
  int64_t t7661 = ((int64_t)UINT64_C(2596866477));
  f_emit(t7660,t7661);
  uintptr_t t7662 = v0;
  int64_t t7663 = ((int64_t)UINT64_C(3532146703));
  f_emit(t7662,t7663);
  uintptr_t t7664 = v0;
  int64_t t7665 = ((int64_t)UINT64_C(4070572527));
  f_emit(t7664,t7665);
  uintptr_t t7666 = v0;
  int64_t t7667 = ((int64_t)UINT64_C(2853110761));
  f_emit(t7666,t7667);
  uintptr_t t7668 = v0;
  int64_t t7669 = ((int64_t)UINT64_C(2852979690));
  f_emit(t7668,t7669);
  uintptr_t t7670 = v0;
  int64_t t7671 = ((int64_t)UINT64_C(37));
  int64_t t7672 = ((int64_t)UINT64_C(1084));
  f_mark(t7670,t7671,t7672);
  uintptr_t t7673 = v0;
  int64_t t7674 = ((int64_t)UINT64_C(3036676170));
  f_emit(t7673,t7674);
  uintptr_t t7675 = v0;
  int64_t t7676 = ((int64_t)UINT64_C(335544320));
  f_emit(t7675,t7676);
  uintptr_t t7677 = v0;
  int64_t t7678 = ((int64_t)UINT64_C(2596931883));
  f_emit(t7677,t7678);
  uintptr_t t7679 = v0;
  int64_t t7680 = ((int64_t)UINT64_C(2601166187));
  f_emit(t7679,t7680);
  uintptr_t t7681 = v0;
  int64_t t7682 = ((int64_t)UINT64_C(2852783081));
  f_emit(t7681,t7682);
  uintptr_t t7683 = v0;
  int64_t t7684 = ((int64_t)UINT64_C(2852848618));
  f_emit(t7683,t7684);
  uintptr_t t7685 = v0;
  int64_t t7686 = ((int64_t)UINT64_C(335544320));
  f_emit(t7685,t7686);
  uintptr_t t7687 = v0;
  int64_t t7688 = ((int64_t)UINT64_C(33));
  int64_t t7689 = ((int64_t)UINT64_C(1112));
  f_mark(t7687,t7688,t7689);
  uintptr_t t7690 = v0;
  int64_t t7691 = ((int64_t)UINT64_C(2596866543));
  f_emit(t7690,t7691);
  uintptr_t t7692 = v0;
  int64_t t7693 = ((int64_t)UINT64_C(2596866477));
  f_emit(t7692,t7693);
  uintptr_t t7694 = v0;
  int64_t t7695 = ((int64_t)UINT64_C(4043310527));
  f_emit(t7694,t7695);
  uintptr_t t7696 = v0;
  int64_t t7697 = ((int64_t)UINT64_C(1409286208));
  f_emit(t7696,t7697);
  uintptr_t t7698 = v0;
  int64_t t7699 = ((int64_t)UINT64_C(335544320));
  f_emit(t7698,t7699);
  uintptr_t t7700 = v0;
  int64_t t7701 = ((int64_t)UINT64_C(2601483648));
  f_emit(t7700,t7701);
  uintptr_t t7702 = v0;
  int64_t t7703 = ((int64_t)UINT64_C(2614066576));
  f_emit(t7702,t7703);
  uintptr_t t7704 = v0;
  int64_t t7705 = ((int64_t)UINT64_C(3019898960));
  f_emit(t7704,t7705);
  uintptr_t t7706 = v0;
  int64_t t7707 = ((int64_t)UINT64_C(335544320));
  f_emit(t7706,t7707);
  uintptr_t t7708 = v0;
  int64_t t7709 = ((int64_t)UINT64_C(3019898958));
  f_emit(t7708,t7709);
  uintptr_t t7710 = v0;
  int64_t t7711 = ((int64_t)UINT64_C(335544320));
  f_emit(t7710,t7711);
  uintptr_t t7712 = v0;
  int64_t t7713 = ((int64_t)UINT64_C(3533701103));
  f_emit(t7712,t7713);
  uintptr_t t7714 = v0;
  int64_t t7715 = ((int64_t)UINT64_C(4072669167));
  f_emit(t7714,t7715);
  uintptr_t t7716 = v0;
  int64_t t7717 = ((int64_t)UINT64_C(4074766319));
  f_emit(t7716,t7717);
  uintptr_t t7718 = v0;
  int64_t t7719 = ((int64_t)UINT64_C(4075814895));
  f_emit(t7718,t7719);
  uintptr_t t7720 = v0;
  int64_t t7721 = ((int64_t)UINT64_C(3943628831));
  f_emit(t7720,t7721);
  uintptr_t t7722 = v0;
  int64_t t7723 = ((int64_t)UINT64_C(1409286217));
  f_emit(t7722,t7723);
  uintptr_t t7724 = v0;
  int64_t t7725 = ((int64_t)UINT64_C(335544320));
  f_emit(t7724,t7725);
  uintptr_t t7726 = v0;
  int64_t t7727 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7726,t7727);
  uintptr_t t7728 = v0;
  int64_t t7729 = ((int64_t)UINT64_C(54));
  int64_t t7730 = ((int64_t)UINT64_C(1188));
  f_mark(t7728,t7729,t7730);
  uintptr_t t7731 = v0;
  int64_t t7732 = ((int64_t)UINT64_C(3531603983));
  f_emit(t7731,t7732);
  uintptr_t t7733 = v0;
  int64_t t7734 = ((int64_t)UINT64_C(4075814927));
  f_emit(t7733,t7734);
  uintptr_t t7735 = v0;
  int64_t t7736 = ((int64_t)UINT64_C(3943628831));
  f_emit(t7735,t7736);
  uintptr_t t7737 = v0;
  int64_t t7738 = ((int64_t)UINT64_C(1409286217));
  f_emit(t7737,t7738);
  uintptr_t t7739 = v0;
  int64_t t7740 = ((int64_t)UINT64_C(335544320));
  f_emit(t7739,t7740);
  uintptr_t t7741 = v0;
  int64_t t7742 = ((int64_t)UINT64_C(3405775840));
  f_emit(t7741,t7742);
  uintptr_t t7743 = v0;
  int64_t t7744 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7743,t7744);
  uintptr_t t7745 = v0;
  int64_t t7746 = ((int64_t)UINT64_C(5));
  int64_t t7747 = ((int64_t)UINT64_C(1216));
  f_mark(t7745,t7746,t7747);
  uintptr_t t7748 = v0;
  int64_t t7749 = ((int64_t)UINT64_C(3531603968));
  f_emit(t7748,t7749);
  uintptr_t t7750 = v0;
  int64_t t7751 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7750,t7751);
  uintptr_t t7752 = v0;
  int64_t t7753 = ((int64_t)UINT64_C(60));
  int64_t t7754 = ((int64_t)UINT64_C(1224));
  f_mark(t7752,t7753,t7754);
  uintptr_t t7755 = v0;
  int64_t t7756 = ((int64_t)UINT64_C(3547659273));
  f_emit(t7755,t7756);
  uintptr_t t7757 = v0;
  int64_t t7758 = ((int64_t)UINT64_C(3531669482));
  f_emit(t7757,t7758);
  uintptr_t t7759 = v0;
  int64_t t7760 = ((int64_t)UINT64_C(2315911465));
  f_emit(t7759,t7760);
  uintptr_t t7761 = v0;
  int64_t t7762 = ((int64_t)UINT64_C(4045405503));
  f_emit(t7761,t7762);
  uintptr_t t7763 = v0;
  int64_t t7764 = ((int64_t)UINT64_C(1409286209));
  f_emit(t7763,t7764);
  uintptr_t t7765 = v0;
  int64_t t7766 = ((int64_t)UINT64_C(335544320));
  f_emit(t7765,t7766);
  uintptr_t t7767 = v0;
  int64_t t7768 = ((int64_t)UINT64_C(3506504703));
  f_emit(t7767,t7768);
  uintptr_t t7769 = v0;
  int64_t t7770 = ((int64_t)UINT64_C(4177533949));
  f_emit(t7769,t7770);
  uintptr_t t7771 = v0;
  int64_t t7772 = ((int64_t)UINT64_C(4177534974));
  f_emit(t7771,t7772);
  uintptr_t t7773 = v0;
  int64_t t7774 = ((int64_t)UINT64_C(2432746493));
  f_emit(t7773,t7774);
  uintptr_t t7775 = v0;
  int64_t t7776 = ((int64_t)UINT64_C(2657550336));
  f_emit(t7775,t7776);
  uintptr_t t7777 = v0;
  int64_t t7778 = ((int64_t)UINT64_C(509657089));
  f_emit(t7777,t7778);
  uintptr_t t7779 = v0;
  int64_t t7780 = ((int64_t)UINT64_C(3531603980));
  f_emit(t7779,t7780);
  uintptr_t t7781 = v0;
  int64_t t7782 = ((int64_t)UINT64_C(3531603977));
  f_emit(t7781,t7782);
  uintptr_t t7783 = v0;
  int64_t t7784 = ((int64_t)UINT64_C(2657550626));
  f_emit(t7783,t7784);
  uintptr_t t7785 = v0;
  int64_t t7786 = ((int64_t)UINT64_C(509747232));
  f_emit(t7785,t7786);
  uintptr_t t7787 = v0;
  int64_t t7788 = ((int64_t)UINT64_C(1409286209));
  f_emit(t7787,t7788);
  uintptr_t t7789 = v0;
  int64_t t7790 = ((int64_t)UINT64_C(335544320));
  f_emit(t7789,t7790);
  uintptr_t t7791 = v0;
  int64_t t7792 = ((int64_t)UINT64_C(3533549993));
  f_emit(t7791,t7792);
  uintptr_t t7793 = v0;
  int64_t t7794 = ((int64_t)UINT64_C(4071888553));
  f_emit(t7793,t7794);
  uintptr_t t7795 = v0;
  int64_t t7796 = ((int64_t)UINT64_C(4074299113));
  f_emit(t7795,t7796);
  uintptr_t t7797 = v0;
  int64_t t7798 = ((int64_t)UINT64_C(4075279881));
  f_emit(t7797,t7798);
  uintptr_t t7799 = v0;
  int64_t t7800 = ((int64_t)UINT64_C(2657550626));
  f_emit(t7799,t7800);
  uintptr_t t7801 = v0;
  int64_t t7802 = ((int64_t)UINT64_C(509747232));
  f_emit(t7801,t7802);
  uintptr_t t7803 = v0;
  int64_t t7804 = ((int64_t)UINT64_C(1409286213));
  f_emit(t7803,t7804);
  uintptr_t t7805 = v0;
  int64_t t7806 = ((int64_t)UINT64_C(335544320));
  f_emit(t7805,t7806);
  uintptr_t t7807 = v0;
  int64_t t7808 = ((int64_t)UINT64_C(3531603977));
  f_emit(t7807,t7808);
  uintptr_t t7809 = v0;
  int64_t t7810 = ((int64_t)UINT64_C(4071899145));
  f_emit(t7809,t7810);
  uintptr_t t7811 = v0;
  int64_t t7812 = ((int64_t)UINT64_C(4072886921));
  f_emit(t7811,t7812);
  uintptr_t t7813 = v0;
  int64_t t7814 = ((int64_t)UINT64_C(4075310505));
  f_emit(t7813,t7814);
  uintptr_t t7815 = v0;
  int64_t t7816 = ((int64_t)UINT64_C(2657550626));
  f_emit(t7815,t7816);
  uintptr_t t7817 = v0;
  int64_t t7818 = ((int64_t)UINT64_C(509747232));
  f_emit(t7817,t7818);
  uintptr_t t7819 = v0;
  int64_t t7820 = ((int64_t)UINT64_C(1409286213));
  f_emit(t7819,t7820);
  uintptr_t t7821 = v0;
  int64_t t7822 = ((int64_t)UINT64_C(335544320));
  f_emit(t7821,t7822);
  uintptr_t t7823 = v0;
  int64_t t7824 = ((int64_t)UINT64_C(26));
  int64_t t7825 = ((int64_t)UINT64_C(1360));
  f_mark(t7823,t7824,t7825);
  uintptr_t t7826 = v0;
  int64_t t7827 = ((int64_t)UINT64_C(3531603977));
  f_emit(t7826,t7827);
  uintptr_t t7828 = v0;
  int64_t t7829 = ((int64_t)UINT64_C(4075291785));
  f_emit(t7828,t7829);
  uintptr_t t7830 = v0;
  int64_t t7831 = ((int64_t)UINT64_C(2657550626));
  f_emit(t7830,t7831);
  uintptr_t t7832 = v0;
  int64_t t7833 = ((int64_t)UINT64_C(3531603977));
  f_emit(t7832,t7833);
  uintptr_t t7834 = v0;
  int64_t t7835 = ((int64_t)UINT64_C(4075290121));
  f_emit(t7834,t7835);
  uintptr_t t7836 = v0;
  int64_t t7837 = ((int64_t)UINT64_C(2657550627));
  f_emit(t7836,t7837);
  uintptr_t t7838 = v0;
  int64_t t7839 = ((int64_t)UINT64_C(23));
  int64_t t7840 = ((int64_t)UINT64_C(1384));
  f_mark(t7838,t7839,t7840);
  uintptr_t t7841 = v0;
  int64_t t7842 = ((int64_t)UINT64_C(509747232));
  f_emit(t7841,t7842);
  uintptr_t t7843 = v0;
  int64_t t7844 = ((int64_t)UINT64_C(1409286213));
  f_emit(t7843,t7844);
  uintptr_t t7845 = v0;
  int64_t t7846 = ((int64_t)UINT64_C(335544320));
  f_emit(t7845,t7846);
  uintptr_t t7847 = v0;
  int64_t t7848 = ((int64_t)UINT64_C(509745152));
  f_emit(t7847,t7848);
  uintptr_t t7849 = v0;
  int64_t t7850 = ((int64_t)UINT64_C(509745185));
  f_emit(t7849,t7850);
  uintptr_t t7851 = v0;
  int64_t t7852 = ((int64_t)UINT64_C(2432697740));
  f_emit(t7851,t7852);
  uintptr_t t7853 = v0;
  int64_t t7854 = ((int64_t)UINT64_C(335544320));
  f_emit(t7853,t7854);
  uintptr_t t7855 = v0;
  int64_t t7856 = ((int64_t)UINT64_C(24));
  int64_t t7857 = ((int64_t)UINT64_C(1412));
  f_mark(t7855,t7856,t7857);
  uintptr_t t7858 = v0;
  int64_t t7859 = ((int64_t)UINT64_C(509812768));
  f_emit(t7858,t7859);
  uintptr_t t7860 = v0;
  int64_t t7861 = ((int64_t)UINT64_C(1409286219));
  f_emit(t7860,t7861);
  uintptr_t t7862 = v0;
  int64_t t7863 = ((int64_t)UINT64_C(335544320));
  f_emit(t7862,t7863);
  uintptr_t t7864 = v0;
  int64_t t7865 = ((int64_t)UINT64_C(509741056));
  f_emit(t7864,t7865);
  uintptr_t t7866 = v0;
  int64_t t7867 = ((int64_t)UINT64_C(509741089));
  f_emit(t7866,t7867);
  uintptr_t t7868 = v0;
  int64_t t7869 = ((int64_t)UINT64_C(3506439564));
  f_emit(t7868,t7869);
  uintptr_t t7870 = v0;
  int64_t t7871 = ((int64_t)UINT64_C(335544320));
  f_emit(t7870,t7871);
  uintptr_t t7872 = v0;
  int64_t t7873 = ((int64_t)UINT64_C(25));
  int64_t t7874 = ((int64_t)UINT64_C(1440));
  f_mark(t7872,t7873,t7874);
  uintptr_t t7875 = v0;
  int64_t t7876 = ((int64_t)UINT64_C(3531603980));
  f_emit(t7875,t7876);
  uintptr_t t7877 = v0;
  int64_t t7878 = ((int64_t)UINT64_C(27));
  int64_t t7879 = ((int64_t)UINT64_C(1444));
  f_mark(t7877,t7878,t7879);
  uintptr_t t7880 = v0;
  int64_t t7881 = ((int64_t)UINT64_C(4177527788));
  f_emit(t7880,t7881);
  uintptr_t t7882 = v0;
  int64_t t7883 = ((int64_t)UINT64_C(3531603977));
  f_emit(t7882,t7883);
  uintptr_t t7884 = v0;
  int64_t t7885 = ((int64_t)UINT64_C(4073754633));
  f_emit(t7884,t7885);
  uintptr_t t7886 = v0;
  int64_t t7887 = ((int64_t)UINT64_C(4075300297));
  f_emit(t7886,t7887);
  uintptr_t t7888 = v0;
  int64_t t7889 = ((int64_t)UINT64_C(2657550625));
  f_emit(t7888,t7889);
  uintptr_t t7890 = v0;
  int64_t t7891 = ((int64_t)UINT64_C(509675520));
  f_emit(t7890,t7891);
  uintptr_t t7892 = v0;
  int64_t t7893 = ((int64_t)UINT64_C(2657091584));
  f_emit(t7892,t7893);
  uintptr_t t7894 = v0;
  int64_t t7895 = ((int64_t)UINT64_C(2483027968));
  f_emit(t7894,t7895);
  uintptr_t t7896 = v0;
  int64_t t7897 = ((int64_t)UINT64_C(4181722092));
  f_emit(t7896,t7897);
  uintptr_t t7898 = v0;
  int64_t t7899 = ((int64_t)UINT64_C(3036676172));
  f_emit(t7898,t7899);
  uintptr_t t7900 = v0;
  int64_t t7901 = ((int64_t)UINT64_C(335544320));
  f_emit(t7900,t7901);
  uintptr_t t7902 = v0;
  int64_t t7903 = ((int64_t)UINT64_C(2415919104));
  f_emit(t7902,t7903);
  uintptr_t t7904 = v0;
  int64_t t7905 = ((int64_t)UINT64_C(2432696320));
  f_emit(t7904,t7905);
  uintptr_t t7906 = v0;
  int64_t t7907 = ((int64_t)UINT64_C(3531604001));
  f_emit(t7906,t7907);
  uintptr_t t7908 = v0;
  int64_t t7909 = ((int64_t)UINT64_C(2852193250));
  f_emit(t7908,t7909);
  uintptr_t t7910 = v0;
  int64_t t7911 = ((int64_t)UINT64_C(2852127713));
  f_emit(t7910,t7911);
  uintptr_t t7912 = v0;
  int64_t t7913 = ((int64_t)UINT64_C(3531604000));
  f_emit(t7912,t7913);
  uintptr_t t7914 = v0;
  int64_t t7915 = ((int64_t)UINT64_C(2483027968));
  f_emit(t7914,t7915);
  uintptr_t t7916 = v0;
  int64_t t7917 = ((int64_t)UINT64_C(4181722080));
  f_emit(t7916,t7917);
  uintptr_t t7918 = v0;
  int64_t t7919 = ((int64_t)UINT64_C(2483027968));
  f_emit(t7918,t7919);
  uintptr_t t7920 = v0;
  int64_t t7921 = ((int64_t)UINT64_C(22));
  int64_t t7922 = ((int64_t)UINT64_C(1524));
  f_mark(t7920,t7921,t7922);
  uintptr_t t7923 = v0;
  int64_t t7924 = ((int64_t)UINT64_C(4181728253));
  f_emit(t7923,t7924);
  uintptr_t t7925 = v0;
  int64_t t7926 = ((int64_t)UINT64_C(4181729278));
  f_emit(t7925,t7926);
  uintptr_t t7927 = v0;
  int64_t t7928 = ((int64_t)UINT64_C(2432762879));
  f_emit(t7927,t7928);
  uintptr_t t7929 = v0;
  int64_t t7930 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7929,t7930);
  uintptr_t t7931 = v0;
  int64_t t7932 = ((int64_t)UINT64_C(72));
  int64_t t7933 = ((int64_t)UINT64_C(1540));
  f_mark(t7931,t7932,t7933);
  uintptr_t t7934 = v0;
  int64_t t7935 = ((int64_t)UINT64_C(3036676160));
  f_emit(t7934,t7935);
  uintptr_t t7936 = v0;
  int64_t t7937 = ((int64_t)UINT64_C(335544320));
  f_emit(t7936,t7937);
  uintptr_t t7938 = v0;
  int64_t t7939 = ((int64_t)UINT64_C(4181723145));
  f_emit(t7938,t7939);
  uintptr_t t7940 = v0;
  int64_t t7941 = ((int64_t)UINT64_C(3942711615));
  f_emit(t7940,t7941);
  uintptr_t t7942 = v0;
  int64_t t7943 = ((int64_t)UINT64_C(1409286208));
  f_emit(t7942,t7943);
  uintptr_t t7944 = v0;
  int64_t t7945 = ((int64_t)UINT64_C(335544320));
  f_emit(t7944,t7945);
  uintptr_t t7946 = v0;
  int64_t t7947 = ((int64_t)UINT64_C(4181721096));
  f_emit(t7946,t7947);
  uintptr_t t7948 = v0;
  int64_t t7949 = ((int64_t)UINT64_C(3036676168));
  f_emit(t7948,t7949);
  uintptr_t t7950 = v0;
  int64_t t7951 = ((int64_t)UINT64_C(335544320));
  f_emit(t7950,t7951);
  uintptr_t t7952 = v0;
  int64_t t7953 = ((int64_t)UINT64_C(4181722121));
  f_emit(t7952,t7953);
  uintptr_t t7954 = v0;
  int64_t t7955 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7954,t7955);
  uintptr_t t7956 = v0;
  int64_t t7957 = ((int64_t)UINT64_C(57));
  int64_t t7958 = ((int64_t)UINT64_C(1584));
  f_mark(t7956,t7957,t7958);
  uintptr_t t7959 = v0;
  int64_t t7960 = ((int64_t)UINT64_C(3036676160));
  f_emit(t7959,t7960);
  uintptr_t t7961 = v0;
  int64_t t7962 = ((int64_t)UINT64_C(335544320));
  f_emit(t7961,t7962);
  uintptr_t t7963 = v0;
  int64_t t7964 = ((int64_t)UINT64_C(4181723145));
  f_emit(t7963,t7964);
  uintptr_t t7965 = v0;
  int64_t t7966 = ((int64_t)UINT64_C(3942711615));
  f_emit(t7965,t7966);
  uintptr_t t7967 = v0;
  int64_t t7968 = ((int64_t)UINT64_C(1409286208));
  f_emit(t7967,t7968);
  uintptr_t t7969 = v0;
  int64_t t7970 = ((int64_t)UINT64_C(335544320));
  f_emit(t7969,t7970);
  uintptr_t t7971 = v0;
  int64_t t7972 = ((int64_t)UINT64_C(4181721096));
  f_emit(t7971,t7972);
  uintptr_t t7973 = v0;
  int64_t t7974 = ((int64_t)UINT64_C(3036676168));
  f_emit(t7973,t7974);
  uintptr_t t7975 = v0;
  int64_t t7976 = ((int64_t)UINT64_C(335544320));
  f_emit(t7975,t7976);
  uintptr_t t7977 = v0;
  int64_t t7978 = ((int64_t)UINT64_C(4181722121));
  f_emit(t7977,t7978);
  uintptr_t t7979 = v0;
  int64_t t7980 = ((int64_t)UINT64_C(3943235679));
  f_emit(t7979,t7980);
  uintptr_t t7981 = v0;
  int64_t t7982 = ((int64_t)UINT64_C(1409286217));
  f_emit(t7981,t7982);
  uintptr_t t7983 = v0;
  int64_t t7984 = ((int64_t)UINT64_C(335544320));
  f_emit(t7983,t7984);
  uintptr_t t7985 = v0;
  int64_t t7986 = ((int64_t)UINT64_C(3405906218));
  f_emit(t7985,t7986);
  uintptr_t t7987 = v0;
  int64_t t7988 = ((int64_t)UINT64_C(3943301247));
  f_emit(t7987,t7988);
  uintptr_t t7989 = v0;
  int64_t t7990 = ((int64_t)UINT64_C(1409286217));
  f_emit(t7989,t7990);
  uintptr_t t7991 = v0;
  int64_t t7992 = ((int64_t)UINT64_C(335544320));
  f_emit(t7991,t7992);
  uintptr_t t7993 = v0;
  int64_t t7994 = ((int64_t)UINT64_C(2332164352));
  f_emit(t7993,t7994);
  uintptr_t t7995 = v0;
  int64_t t7996 = ((int64_t)UINT64_C(3596551104));
  f_emit(t7995,t7996);
  uintptr_t t7997 = v0;
  int64_t t7998 = ((int64_t)UINT64_C(56));
  int64_t t7999 = ((int64_t)UINT64_C(1660));
  f_mark(t7997,t7998,t7999);
  uintptr_t t8000 = v0;
  int64_t t8001 = ((int64_t)UINT64_C(4043309087));
  f_emit(t8000,t8001);
  uintptr_t t8002 = v0;
  int64_t t8003 = ((int64_t)UINT64_C(1409286220));
  f_emit(t8002,t8003);
  uintptr_t t8004 = v0;
  int64_t t8005 = ((int64_t)UINT64_C(335544320));
  f_emit(t8004,t8005);
  uintptr_t t8006 = v0;
  int64_t t8007 = ((int64_t)UINT64_C(3531603977));
  f_emit(t8006,t8007);
  uintptr_t t8008 = v0;
  int64_t t8009 = ((int64_t)UINT64_C(4071096329));
  f_emit(t8008,t8009);
  uintptr_t t8010 = v0;
  int64_t t8011 = ((int64_t)UINT64_C(3943235615));
  f_emit(t8010,t8011);
  uintptr_t t8012 = v0;
  int64_t t8013 = ((int64_t)UINT64_C(1409286217));
  f_emit(t8012,t8013);
  uintptr_t t8014 = v0;
  int64_t t8015 = ((int64_t)UINT64_C(335544320));
  f_emit(t8014,t8015);
  uintptr_t t8016 = v0;
  int64_t t8017 = ((int64_t)UINT64_C(3506504703));
  f_emit(t8016,t8017);
  uintptr_t t8018 = v0;
  int64_t t8019 = ((int64_t)UINT64_C(4177533949));
  f_emit(t8018,t8019);
  uintptr_t t8020 = v0;
  int64_t t8021 = ((int64_t)UINT64_C(4177534974));
  f_emit(t8020,t8021);
  uintptr_t t8022 = v0;
  int64_t t8023 = ((int64_t)UINT64_C(2432746493));
  f_emit(t8022,t8023);
  uintptr_t t8024 = v0;
  int64_t t8025 = ((int64_t)UINT64_C(4177527776));
  f_emit(t8024,t8025);
  uintptr_t t8026 = v0;
  int64_t t8027 = ((int64_t)UINT64_C(3019898971));
  f_emit(t8026,t8027);
  uintptr_t t8028 = v0;
  int64_t t8029 = ((int64_t)UINT64_C(335544320));
  f_emit(t8028,t8029);
  uintptr_t t8030 = v0;
  int64_t t8031 = ((int64_t)UINT64_C(3532652545));
  f_emit(t8030,t8031);
  uintptr_t t8032 = v0;
  int64_t t8033 = ((int64_t)UINT64_C(3531603968));
  f_emit(t8032,t8033);
  uintptr_t t8034 = v0;
  int64_t t8035 = ((int64_t)UINT64_C(3531604066));
  f_emit(t8034,t8035);
  uintptr_t t8036 = v0;
  int64_t t8037 = ((int64_t)UINT64_C(3531735107));
  f_emit(t8036,t8037);
  uintptr_t t8038 = v0;
  int64_t t8039 = ((int64_t)UINT64_C(3533701092));
  f_emit(t8038,t8039);
  uintptr_t t8040 = v0;
  int64_t t8041 = ((int64_t)UINT64_C(4072669156));
  f_emit(t8040,t8041);
  uintptr_t t8042 = v0;
  int64_t t8043 = ((int64_t)UINT64_C(4074766308));
  f_emit(t8042,t8043);
  uintptr_t t8044 = v0;
  int64_t t8045 = ((int64_t)UINT64_C(4076863460));
  f_emit(t8044,t8045);
  uintptr_t t8046 = v0;
  int64_t t8047 = ((int64_t)UINT64_C(3531603973));
  f_emit(t8046,t8047);
  uintptr_t t8048 = v0;
  int64_t t8049 = ((int64_t)UINT64_C(3531610288));
  f_emit(t8048,t8049);
  uintptr_t t8050 = v0;
  int64_t t8051 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8050,t8051);
  uintptr_t t8052 = v0;
  int64_t t8053 = ((int64_t)UINT64_C(1409286211));
  f_emit(t8052,t8053);
  uintptr_t t8054 = v0;
  int64_t t8055 = ((int64_t)UINT64_C(335544320));
  f_emit(t8054,t8055);
  uintptr_t t8056 = v0;
  int64_t t8057 = ((int64_t)UINT64_C(3036676160));
  f_emit(t8056,t8057);
  uintptr_t t8058 = v0;
  int64_t t8059 = ((int64_t)UINT64_C(335544320));
  f_emit(t8058,t8059);
  uintptr_t t8060 = v0;
  int64_t t8061 = ((int64_t)UINT64_C(2852127739));
  f_emit(t8060,t8061);
  uintptr_t t8062 = v0;
  int64_t t8063 = ((int64_t)UINT64_C(4));
  int64_t t8064 = ((int64_t)UINT64_C(1784));
  f_mark(t8062,t8063,t8064);
  uintptr_t t8065 = v0;
  int64_t t8066 = ((int64_t)UINT64_C(2853897193));
  f_emit(t8065,t8066);
  uintptr_t t8067 = v0;
  int64_t t8068 = ((int64_t)UINT64_C(3532652554));
  f_emit(t8067,t8068);
  uintptr_t t8069 = v0;
  int64_t t8070 = ((int64_t)UINT64_C(2332689258));
  f_emit(t8069,t8070);
  uintptr_t t8071 = v0;
  int64_t t8072 = ((int64_t)UINT64_C(3533701101));
  f_emit(t8071,t8072);
  uintptr_t t8073 = v0;
  int64_t t8074 = ((int64_t)UINT64_C(4072669165));
  f_emit(t8073,t8074);
  uintptr_t t8075 = v0;
  int64_t t8076 = ((int64_t)UINT64_C(4074766317));
  f_emit(t8075,t8076);
  uintptr_t t8077 = v0;
  int64_t t8078 = ((int64_t)UINT64_C(4076863469));
  f_emit(t8077,t8078);
  uintptr_t t8079 = v0;
  int64_t t8080 = ((int64_t)UINT64_C(2));
  int64_t t8081 = ((int64_t)UINT64_C(1812));
  f_mark(t8079,t8080,t8081);
  uintptr_t t8082 = v0;
  int64_t t8083 = ((int64_t)UINT64_C(3943301439));
  f_emit(t8082,t8083);
  uintptr_t t8084 = v0;
  int64_t t8085 = ((int64_t)UINT64_C(1409286211));
  f_emit(t8084,t8085);
  uintptr_t t8086 = v0;
  int64_t t8087 = ((int64_t)UINT64_C(335544320));
  f_emit(t8086,t8087);
  uintptr_t t8088 = v0;
  int64_t t8089 = ((int64_t)UINT64_C(4181721387));
  f_emit(t8088,t8089);
  uintptr_t t8090 = v0;
  int64_t t8091 = ((int64_t)UINT64_C(3019898955));
  f_emit(t8090,t8091);
  uintptr_t t8092 = v0;
  int64_t t8093 = ((int64_t)UINT64_C(335544320));
  f_emit(t8092,t8093);
  uintptr_t t8094 = v0;
  int64_t t8095 = ((int64_t)UINT64_C(4181723436));
  f_emit(t8094,t8095);
  uintptr_t t8096 = v0;
  int64_t t8097 = ((int64_t)UINT64_C(3943498143));
  f_emit(t8096,t8097);
  uintptr_t t8098 = v0;
  int64_t t8099 = ((int64_t)UINT64_C(1409286208));
  f_emit(t8098,t8099);
  uintptr_t t8100 = v0;
  int64_t t8101 = ((int64_t)UINT64_C(335544320));
  f_emit(t8100,t8101);
  uintptr_t t8102 = v0;
  int64_t t8103 = ((int64_t)UINT64_C(3));
  int64_t t8104 = ((int64_t)UINT64_C(1852));
  f_mark(t8102,t8103,t8104);
  uintptr_t t8105 = v0;
  int64_t t8106 = ((int64_t)UINT64_C(2432729385));
  f_emit(t8105,t8106);
  uintptr_t t8107 = v0;
  int64_t t8108 = ((int64_t)UINT64_C(335544320));
  f_emit(t8107,t8108);
  uintptr_t t8109 = v0;
  int64_t t8110 = ((int64_t)UINT64_C(1));
  int64_t t8111 = ((int64_t)UINT64_C(1860));
  f_mark(t8109,t8110,t8111);
  uintptr_t t8112 = v0;
  int64_t t8113 = ((int64_t)UINT64_C(4177528809));
  f_emit(t8112,t8113);
  uintptr_t t8114 = v0;
  int64_t t8115 = ((int64_t)UINT64_C(4181722081));
  f_emit(t8114,t8115);
  uintptr_t t8116 = v0;
  int64_t t8117 = ((int64_t)UINT64_C(3531603968));
  f_emit(t8116,t8117);
  uintptr_t t8118 = v0;
  int64_t t8119 = ((int64_t)UINT64_C(3531604066));
  f_emit(t8118,t8119);
  uintptr_t t8120 = v0;
  int64_t t8121 = ((int64_t)UINT64_C(3531735107));
  f_emit(t8120,t8121);
  uintptr_t t8122 = v0;
  int64_t t8123 = ((int64_t)UINT64_C(3533701092));
  f_emit(t8122,t8123);
  uintptr_t t8124 = v0;
  int64_t t8125 = ((int64_t)UINT64_C(4072669156));
  f_emit(t8124,t8125);
  uintptr_t t8126 = v0;
  int64_t t8127 = ((int64_t)UINT64_C(4074766308));
  f_emit(t8126,t8127);
  uintptr_t t8128 = v0;
  int64_t t8129 = ((int64_t)UINT64_C(4076863460));
  f_emit(t8128,t8129);
  uintptr_t t8130 = v0;
  int64_t t8131 = ((int64_t)UINT64_C(3531603973));
  f_emit(t8130,t8131);
  uintptr_t t8132 = v0;
  int64_t t8133 = ((int64_t)UINT64_C(3531610288));
  f_emit(t8132,t8133);
  uintptr_t t8134 = v0;
  int64_t t8135 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8134,t8135);
  uintptr_t t8136 = v0;
  int64_t t8137 = ((int64_t)UINT64_C(1409286211));
  f_emit(t8136,t8137);
  uintptr_t t8138 = v0;
  int64_t t8139 = ((int64_t)UINT64_C(335544320));
  f_emit(t8138,t8139);
  uintptr_t t8140 = v0;
  int64_t t8141 = ((int64_t)UINT64_C(3036676160));
  f_emit(t8140,t8141);
  uintptr_t t8142 = v0;
  int64_t t8143 = ((int64_t)UINT64_C(335544320));
  f_emit(t8142,t8143);
  uintptr_t t8144 = v0;
  int64_t t8145 = ((int64_t)UINT64_C(4181723113));
  f_emit(t8144,t8145);
  uintptr_t t8146 = v0;
  int64_t t8147 = ((int64_t)UINT64_C(4181722090));
  f_emit(t8146,t8147);
  uintptr_t t8148 = v0;
  int64_t t8149 = ((int64_t)UINT64_C(4177527072));
  f_emit(t8148,t8149);
  uintptr_t t8150 = v0;
  int64_t t8151 = ((int64_t)UINT64_C(4177528106));
  f_emit(t8150,t8151);
  uintptr_t t8152 = v0;
  int64_t t8153 = ((int64_t)UINT64_C(4181723425));
  f_emit(t8152,t8153);
  uintptr_t t8154 = v0;
  int64_t t8155 = ((int64_t)UINT64_C(2432697377));
  f_emit(t8154,t8155);
  uintptr_t t8156 = v0;
  int64_t t8157 = ((int64_t)UINT64_C(4177529121));
  f_emit(t8156,t8157);
  uintptr_t t8158 = v0;
  int64_t t8159 = ((int64_t)UINT64_C(2852717536));
  f_emit(t8158,t8159);
  uintptr_t t8160 = v0;
  int64_t t8161 = ((int64_t)UINT64_C(4181728253));
  f_emit(t8160,t8161);
  uintptr_t t8162 = v0;
  int64_t t8163 = ((int64_t)UINT64_C(4181729278));
  f_emit(t8162,t8163);
  uintptr_t t8164 = v0;
  int64_t t8165 = ((int64_t)UINT64_C(2432762879));
  f_emit(t8164,t8165);
  uintptr_t t8166 = v0;
  int64_t t8167 = ((int64_t)UINT64_C(3596551104));
  f_emit(t8166,t8167);
  uintptr_t t8168 = v0;
  int64_t t8169 = ((int64_t)UINT64_C(61));
  int64_t t8170 = ((int64_t)UINT64_C(1972));
  f_mark(t8168,t8169,t8170);
  uintptr_t t8171 = v0;
  int64_t t8172 = ((int64_t)UINT64_C(3036676160));
  f_emit(t8171,t8172);
  uintptr_t t8173 = v0;
  int64_t t8174 = ((int64_t)UINT64_C(335544320));
  f_emit(t8173,t8174);
  uintptr_t t8175 = v0;
  int64_t t8176 = ((int64_t)UINT64_C(4181723145));
  f_emit(t8175,t8176);
  uintptr_t t8177 = v0;
  int64_t t8178 = ((int64_t)UINT64_C(3942711615));
  f_emit(t8177,t8178);
  uintptr_t t8179 = v0;
  int64_t t8180 = ((int64_t)UINT64_C(1409286208));
  f_emit(t8179,t8180);
  uintptr_t t8181 = v0;
  int64_t t8182 = ((int64_t)UINT64_C(335544320));
  f_emit(t8181,t8182);
  uintptr_t t8183 = v0;
  int64_t t8184 = ((int64_t)UINT64_C(4181721096));
  f_emit(t8183,t8184);
  uintptr_t t8185 = v0;
  int64_t t8186 = ((int64_t)UINT64_C(3036676168));
  f_emit(t8185,t8186);
  uintptr_t t8187 = v0;
  int64_t t8188 = ((int64_t)UINT64_C(335544320));
  f_emit(t8187,t8188);
  uintptr_t t8189 = v0;
  int64_t t8190 = ((int64_t)UINT64_C(4181722121));
  f_emit(t8189,t8190);
  uintptr_t t8191 = v0;
  int64_t t8192 = ((int64_t)UINT64_C(3506455551));
  f_emit(t8191,t8192);
  uintptr_t t8193 = v0;
  int64_t t8194 = ((int64_t)UINT64_C(4177527776));
  f_emit(t8193,t8194);
  uintptr_t t8195 = v0;
  int64_t t8196 = ((int64_t)UINT64_C(2852652000));
  f_emit(t8195,t8196);
  uintptr_t t8197 = v0;
  int64_t t8198 = ((int64_t)UINT64_C(2852717537));
  f_emit(t8197,t8198);
  uintptr_t t8199 = v0;
  int64_t t8200 = ((int64_t)UINT64_C(3531606320));
  f_emit(t8199,t8200);
  uintptr_t t8201 = v0;
  int64_t t8202 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8201,t8202);
  uintptr_t t8203 = v0;
  int64_t t8204 = ((int64_t)UINT64_C(1409286211));
  f_emit(t8203,t8204);
  uintptr_t t8205 = v0;
  int64_t t8206 = ((int64_t)UINT64_C(335544320));
  f_emit(t8205,t8206);
  uintptr_t t8207 = v0;
  int64_t t8208 = ((int64_t)UINT64_C(4181722089));
  f_emit(t8207,t8208);
  uintptr_t t8209 = v0;
  int64_t t8210 = ((int64_t)UINT64_C(4177527103));
  f_emit(t8209,t8210);
  uintptr_t t8211 = v0;
  int64_t t8212 = ((int64_t)UINT64_C(2432713727));
  f_emit(t8211,t8212);
  uintptr_t t8213 = v0;
  int64_t t8214 = ((int64_t)UINT64_C(3531603968));
  f_emit(t8213,t8214);
  uintptr_t t8215 = v0;
  int64_t t8216 = ((int64_t)UINT64_C(3531603969));
  f_emit(t8215,t8216);
  uintptr_t t8217 = v0;
  int64_t t8218 = ((int64_t)UINT64_C(3596551104));
  f_emit(t8217,t8218);
  uintptr_t t8219 = v0;
  int64_t t8220 = ((int64_t)UINT64_C(67));
  int64_t t8221 = ((int64_t)UINT64_C(2068));
  f_mark(t8219,t8220,t8221);
  uintptr_t t8222 = v0;
  int64_t t8223 = ((int64_t)UINT64_C(3506455551));
  f_emit(t8222,t8223);
  uintptr_t t8224 = v0;
  int64_t t8225 = ((int64_t)UINT64_C(3531603968));
  f_emit(t8224,t8225);
  uintptr_t t8226 = v0;
  int64_t t8227 = ((int64_t)UINT64_C(3531603969));
  f_emit(t8226,t8227);
  uintptr_t t8228 = v0;
  int64_t t8229 = ((int64_t)UINT64_C(2432697314));
  f_emit(t8228,t8229);
  uintptr_t t8230 = v0;
  int64_t t8231 = ((int64_t)UINT64_C(3531607696));
  f_emit(t8230,t8231);
  uintptr_t t8232 = v0;
  int64_t t8233 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8232,t8233);
  uintptr_t t8234 = v0;
  int64_t t8235 = ((int64_t)UINT64_C(1409286211));
  f_emit(t8234,t8235);
  uintptr_t t8236 = v0;
  int64_t t8237 = ((int64_t)UINT64_C(335544320));
  f_emit(t8236,t8237);
  uintptr_t t8238 = v0;
  int64_t t8239 = ((int64_t)UINT64_C(4181722080));
  f_emit(t8238,t8239);
  uintptr_t t8240 = v0;
  int64_t t8241 = ((int64_t)UINT64_C(2432713727));
  f_emit(t8240,t8241);
  uintptr_t t8242 = v0;
  int64_t t8243 = ((int64_t)UINT64_C(3596551104));
  f_emit(t8242,t8243);
  uintptr_t t8244 = v0;
  int64_t t8245 = ((int64_t)UINT64_C(63));
  int64_t t8246 = ((int64_t)UINT64_C(2112));
  f_mark(t8244,t8245,t8246);
  uintptr_t t8247 = v0;
  int64_t t8248 = ((int64_t)UINT64_C(3036676163));
  f_emit(t8247,t8248);
  uintptr_t t8249 = v0;
  int64_t t8250 = ((int64_t)UINT64_C(335544320));
  f_emit(t8249,t8250);
  uintptr_t t8251 = v0;
  int64_t t8252 = ((int64_t)UINT64_C(2613214213));
  f_emit(t8251,t8252);
  uintptr_t t8253 = v0;
  int64_t t8254 = ((int64_t)UINT64_C(2600631300));
  f_emit(t8253,t8254);
  uintptr_t t8255 = v0;
  int64_t t8256 = ((int64_t)UINT64_C(3942842559));
  f_emit(t8255,t8256);
  uintptr_t t8257 = v0;
  int64_t t8258 = ((int64_t)UINT64_C(1409286211));
  f_emit(t8257,t8258);
  uintptr_t t8259 = v0;
  int64_t t8260 = ((int64_t)UINT64_C(335544320));
  f_emit(t8259,t8260);
  uintptr_t t8261 = v0;
  int64_t t8262 = ((int64_t)UINT64_C(3531603974));
  f_emit(t8261,t8262);
  uintptr_t t8263 = v0;
  int64_t t8264 = ((int64_t)UINT64_C(3531606023));
  f_emit(t8263,t8264);
  uintptr_t t8265 = v0;
  int64_t t8266 = ((int64_t)UINT64_C(46));
  int64_t t8267 = ((int64_t)UINT64_C(2148));
  f_mark(t8265,t8266,t8267);
  uintptr_t t8268 = v0;
  int64_t t8269 = ((int64_t)UINT64_C(2332426438));
  f_emit(t8268,t8269);
  uintptr_t t8270 = v0;
  int64_t t8271 = ((int64_t)UINT64_C(3548380296));
  f_emit(t8270,t8271);
  uintptr_t t8272 = v0;
  int64_t t8273 = ((int64_t)UINT64_C(2332295300));
  f_emit(t8272,t8273);
  uintptr_t t8274 = v0;
  int64_t t8275 = ((int64_t)UINT64_C(2869231781));
  f_emit(t8274,t8275);
  uintptr_t t8276 = v0;
  int64_t t8277 = ((int64_t)UINT64_C(2852651173));
  f_emit(t8276,t8277);
  uintptr_t t8278 = v0;
  int64_t t8279 = ((int64_t)UINT64_C(1409286211));
  f_emit(t8278,t8279);
  uintptr_t t8280 = v0;
  int64_t t8281 = ((int64_t)UINT64_C(335544320));
  f_emit(t8280,t8281);
  uintptr_t t8282 = v0;
  int64_t t8283 = ((int64_t)UINT64_C(3942842559));
  f_emit(t8282,t8283);
  uintptr_t t8284 = v0;
  int64_t t8285 = ((int64_t)UINT64_C(1409286210));
  f_emit(t8284,t8285);
  uintptr_t t8286 = v0;
  int64_t t8287 = ((int64_t)UINT64_C(335544320));
  f_emit(t8286,t8287);
  uintptr_t t8288 = v0;
  int64_t t8289 = ((int64_t)UINT64_C(48));
  int64_t t8290 = ((int64_t)UINT64_C(2188));
  f_mark(t8288,t8289,t8290);
  uintptr_t t8291 = v0;
  int64_t t8292 = ((int64_t)UINT64_C(3405971621));
  f_emit(t8291,t8292);
  uintptr_t t8293 = v0;
  int64_t t8294 = ((int64_t)UINT64_C(2432697542));
  f_emit(t8293,t8294);
  uintptr_t t8295 = v0;
  int64_t t8296 = ((int64_t)UINT64_C(47));
  int64_t t8297 = ((int64_t)UINT64_C(2196));
  f_mark(t8295,t8296,t8297);
  uintptr_t t8298 = v0;
  int64_t t8299 = ((int64_t)UINT64_C(3506439399));
  f_emit(t8298,t8299);
  uintptr_t t8300 = v0;
  int64_t t8301 = ((int64_t)UINT64_C(3019898951));
  f_emit(t8300,t8301);
  uintptr_t t8302 = v0;
  int64_t t8303 = ((int64_t)UINT64_C(335544320));
  f_emit(t8302,t8303);
  uintptr_t t8304 = v0;
  int64_t t8305 = ((int64_t)UINT64_C(2852520928));
  f_emit(t8304,t8305);
  uintptr_t t8306 = v0;
  int64_t t8307 = ((int64_t)UINT64_C(2852455393));
  f_emit(t8306,t8307);
  uintptr_t t8308 = v0;
  int64_t t8309 = ((int64_t)UINT64_C(3596551104));
  f_emit(t8308,t8309);
  uintptr_t t8310 = v0;
  int64_t t8311 = ((int64_t)UINT64_C(58));
  int64_t t8312 = ((int64_t)UINT64_C(2220));
  f_mark(t8310,t8311,t8312);
  uintptr_t t8313 = v0;
  int64_t t8314 = ((int64_t)UINT64_C(3506455551));
  f_emit(t8313,t8314);
  uintptr_t t8315 = v0;
  int64_t t8316 = ((int64_t)UINT64_C(4177527805));
  f_emit(t8315,t8316);
  uintptr_t t8317 = v0;
  int64_t t8318 = ((int64_t)UINT64_C(4177528830));
  f_emit(t8317,t8318);
  uintptr_t t8319 = v0;
  int64_t t8320 = ((int64_t)UINT64_C(2432697341));
  f_emit(t8319,t8320);
  uintptr_t t8321 = v0;
  int64_t t8322 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8321,t8322);
  uintptr_t t8323 = v0;
  int64_t t8324 = ((int64_t)UINT64_C(3407282176));
  f_emit(t8323,t8324);
  uintptr_t t8325 = v0;
  int64_t t8326 = ((int64_t)UINT64_C(2853766114));
  f_emit(t8325,t8326);
  uintptr_t t8327 = v0;
  int64_t t8328 = ((int64_t)UINT64_C(2853700579));
  f_emit(t8327,t8328);
  uintptr_t t8329 = v0;
  int64_t t8330 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8329,t8330);
  uintptr_t t8331 = v0;
  int64_t t8332 = ((int64_t)UINT64_C(4043309087));
  f_emit(t8331,t8332);
  uintptr_t t8333 = v0;
  int64_t t8334 = ((int64_t)UINT64_C(1409286218));
  f_emit(t8333,t8334);
  uintptr_t t8335 = v0;
  int64_t t8336 = ((int64_t)UINT64_C(335544320));
  f_emit(t8335,t8336);
  uintptr_t t8337 = v0;
  int64_t t8338 = ((int64_t)UINT64_C(3531603969));
  f_emit(t8337,t8338);
  uintptr_t t8339 = v0;
  int64_t t8340 = ((int64_t)UINT64_C(4181722109));
  f_emit(t8339,t8340);
  uintptr_t t8341 = v0;
  int64_t t8342 = ((int64_t)UINT64_C(4181723134));
  f_emit(t8341,t8342);
  uintptr_t t8343 = v0;
  int64_t t8344 = ((int64_t)UINT64_C(2432713727));
  f_emit(t8343,t8344);
  uintptr_t t8345 = v0;
  int64_t t8346 = ((int64_t)UINT64_C(3596551104));
  f_emit(t8345,t8346);
  uintptr_t t8347 = v0;
  int64_t t8348 = ((int64_t)UINT64_C(68));
  int64_t t8349 = ((int64_t)UINT64_C(2288));
  f_mark(t8347,t8348,t8349);
  uintptr_t t8350 = v0;
  int64_t t8351 = ((int64_t)UINT64_C(3531603980));
  f_emit(t8350,t8351);
  uintptr_t t8352 = v0;
  int64_t t8353 = ((int64_t)UINT64_C(335544320));
  f_emit(t8352,t8353);
  uintptr_t t8354 = v0;
  int64_t t8355 = ((int64_t)UINT64_C(70));
  int64_t t8356 = ((int64_t)UINT64_C(2296));
  f_mark(t8354,t8355,t8356);
  uintptr_t t8357 = v0;
  int64_t t8358 = ((int64_t)UINT64_C(3531604012));
  f_emit(t8357,t8358);
  uintptr_t t8359 = v0;
  int64_t t8360 = ((int64_t)UINT64_C(69));
  int64_t t8361 = ((int64_t)UINT64_C(2300));
  f_mark(t8359,t8360,t8361);
  uintptr_t t8362 = v0;
  int64_t t8363 = ((int64_t)UINT64_C(4043309087));
  f_emit(t8362,t8363);
  uintptr_t t8364 = v0;
  int64_t t8365 = ((int64_t)UINT64_C(1409286218));
  f_emit(t8364,t8365);
  uintptr_t t8366 = v0;
  int64_t t8367 = ((int64_t)UINT64_C(335544320));
  f_emit(t8366,t8367);
  uintptr_t t8368 = v0;
  int64_t t8369 = ((int64_t)UINT64_C(3506488319));
  f_emit(t8368,t8369);
  uintptr_t t8370 = v0;
  int64_t t8371 = ((int64_t)UINT64_C(4177531901));
  f_emit(t8370,t8371);
  uintptr_t t8372 = v0;
  int64_t t8373 = ((int64_t)UINT64_C(4177532926));
  f_emit(t8372,t8373);
  uintptr_t t8374 = v0;
  int64_t t8375 = ((int64_t)UINT64_C(2432730109));
  f_emit(t8374,t8375);
  uintptr_t t8376 = v0;
  int64_t t8377 = ((int64_t)UINT64_C(4177529836));
  f_emit(t8376,t8377);
  uintptr_t t8378 = v0;
  int64_t t8379 = ((int64_t)UINT64_C(2853700578));
  f_emit(t8378,t8379);
  uintptr_t t8380 = v0;
  int64_t t8381 = ((int64_t)UINT64_C(2853766115));
  f_emit(t8380,t8381);
  uintptr_t t8382 = v0;
  int64_t t8383 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8382,t8383);
  uintptr_t t8384 = v0;
  int64_t t8385 = ((int64_t)UINT64_C(3036676161));
  f_emit(t8384,t8385);
  uintptr_t t8386 = v0;
  int64_t t8387 = ((int64_t)UINT64_C(335544320));
  f_emit(t8386,t8387);
  uintptr_t t8388 = v0;
  int64_t t8389 = ((int64_t)UINT64_C(3531604009));
  f_emit(t8388,t8389);
  uintptr_t t8390 = v0;
  int64_t t8391 = ((int64_t)UINT64_C(2869493760));
  f_emit(t8390,t8391);
  uintptr_t t8392 = v0;
  int64_t t8393 = ((int64_t)UINT64_C(1409286211));
  f_emit(t8392,t8393);
  uintptr_t t8394 = v0;
  int64_t t8395 = ((int64_t)UINT64_C(335544320));
  f_emit(t8394,t8395);
  uintptr_t t8396 = v0;
  int64_t t8397 = ((int64_t)UINT64_C(76));
  int64_t t8398 = ((int64_t)UINT64_C(2368));
  f_mark(t8396,t8397,t8398);
  uintptr_t t8399 = v0;
  int64_t t8400 = ((int64_t)UINT64_C(4177527776));
  f_emit(t8399,t8400);
  uintptr_t t8401 = v0;
  int64_t t8402 = ((int64_t)UINT64_C(4181724140));
  f_emit(t8401,t8402);
  uintptr_t t8403 = v0;
  int64_t t8404 = ((int64_t)UINT64_C(3019898956));
  f_emit(t8403,t8404);
  uintptr_t t8405 = v0;
  int64_t t8406 = ((int64_t)UINT64_C(335544320));
  f_emit(t8405,t8406);
  uintptr_t t8407 = v0;
  int64_t t8408 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8407,t8408);
  uintptr_t t8409 = v0;
  int64_t t8410 = ((int64_t)UINT64_C(4181722082));
  f_emit(t8409,t8410);
  uintptr_t t8411 = v0;
  int64_t t8412 = ((int64_t)UINT64_C(2869035008));
  f_emit(t8411,t8412);
  uintptr_t t8413 = v0;
  int64_t t8414 = ((int64_t)UINT64_C(1409286211));
  f_emit(t8413,t8414);
  uintptr_t t8415 = v0;
  int64_t t8416 = ((int64_t)UINT64_C(335544320));
  f_emit(t8415,t8416);
  uintptr_t t8417 = v0;
  int64_t t8418 = ((int64_t)UINT64_C(335544320));
  f_emit(t8417,t8418);
  uintptr_t t8419 = v0;
  int64_t t8420 = ((int64_t)UINT64_C(74));
  int64_t t8421 = ((int64_t)UINT64_C(2408));
  f_mark(t8419,t8420,t8421);
  uintptr_t t8422 = v0;
  int64_t t8423 = ((int64_t)UINT64_C(2870411264));
  f_emit(t8422,t8423);
  uintptr_t t8424 = v0;
  int64_t t8425 = ((int64_t)UINT64_C(1409286211));
  f_emit(t8424,t8425);
  uintptr_t t8426 = v0;
  int64_t t8427 = ((int64_t)UINT64_C(335544320));
  f_emit(t8426,t8427);
  uintptr_t t8428 = v0;
  int64_t t8429 = ((int64_t)UINT64_C(77));
  int64_t t8430 = ((int64_t)UINT64_C(2420));
  f_mark(t8428,t8429,t8430);
  uintptr_t t8431 = v0;
  int64_t t8432 = ((int64_t)UINT64_C(4177527776));
  f_emit(t8431,t8432);
  uintptr_t t8433 = v0;
  int64_t t8434 = ((int64_t)UINT64_C(78));
  int64_t t8435 = ((int64_t)UINT64_C(2424));
  f_mark(t8433,t8434,t8435);
  uintptr_t t8436 = v0;
  int64_t t8437 = ((int64_t)UINT64_C(4181722080));
  f_emit(t8436,t8437);
  uintptr_t t8438 = v0;
  int64_t t8439 = ((int64_t)UINT64_C(3533698256));
  f_emit(t8438,t8439);
  uintptr_t t8440 = v0;
  int64_t t8441 = ((int64_t)UINT64_C(4072669168));
  f_emit(t8440,t8441);
  uintptr_t t8442 = v0;
  int64_t t8443 = ((int64_t)UINT64_C(4074766320));
  f_emit(t8442,t8443);
  uintptr_t t8444 = v0;
  int64_t t8445 = ((int64_t)UINT64_C(4076863472));
  f_emit(t8444,t8445);
  uintptr_t t8446 = v0;
  int64_t t8447 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8446,t8447);
  uintptr_t t8448 = v0;
  int64_t t8449 = ((int64_t)UINT64_C(3036676160));
  f_emit(t8448,t8449);
  uintptr_t t8450 = v0;
  int64_t t8451 = ((int64_t)UINT64_C(335544320));
  f_emit(t8450,t8451);
  uintptr_t t8452 = v0;
  int64_t t8453 = ((int64_t)UINT64_C(4043323423));
  f_emit(t8452,t8453);
  uintptr_t t8454 = v0;
  int64_t t8455 = ((int64_t)UINT64_C(1409286209));
  f_emit(t8454,t8455);
  uintptr_t t8456 = v0;
  int64_t t8457 = ((int64_t)UINT64_C(335544320));
  f_emit(t8456,t8457);
  uintptr_t t8458 = v0;
  int64_t t8459 = ((int64_t)UINT64_C(335544320));
  f_emit(t8458,t8459);
  uintptr_t t8460 = v0;
  int64_t t8461 = ((int64_t)UINT64_C(75));
  int64_t t8462 = ((int64_t)UINT64_C(2472));
  f_mark(t8460,t8461,t8462);
  uintptr_t t8463 = v0;
  int64_t t8464 = ((int64_t)UINT64_C(3531603968));
  f_emit(t8463,t8464);
  uintptr_t t8465 = v0;
  int64_t t8466 = ((int64_t)UINT64_C(3531603969));
  f_emit(t8465,t8466);
  uintptr_t t8467 = v0;
  int64_t t8468 = ((int64_t)UINT64_C(4181726205));
  f_emit(t8467,t8468);
  uintptr_t t8469 = v0;
  int64_t t8470 = ((int64_t)UINT64_C(4181727230));
  f_emit(t8469,t8470);
  uintptr_t t8471 = v0;
  int64_t t8472 = ((int64_t)UINT64_C(2432746495));
  f_emit(t8471,t8472);
  uintptr_t t8473 = v0;
  int64_t t8474 = ((int64_t)UINT64_C(3596551104));
  f_emit(t8473,t8474);
  uintptr_t t8475 = v0;
  int64_t t8476 = ((int64_t)UINT64_C(10));
  int64_t t8477 = ((int64_t)UINT64_C(2496));
  f_mark(t8475,t8476,t8477);
  uintptr_t t8478 = v0;
  int64_t t8479 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8478,t8479);
  uintptr_t t8480 = v0;
  int64_t t8481 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8480,t8481);
  uintptr_t t8482 = v0;
  int64_t t8483 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8482,t8483);
  uintptr_t t8484 = v0;
  int64_t t8485 = ((int64_t)UINT64_C(3531605442));
  f_emit(t8484,t8485);
  uintptr_t t8486 = v0;
  int64_t t8487 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8486,t8487);
  uintptr_t t8488 = v0;
  int64_t t8489 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8488,t8489);
  uintptr_t t8490 = v0;
  int64_t t8491 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8490,t8491);
  uintptr_t t8492 = v0;
  int64_t t8493 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8492,t8493);
  uintptr_t t8494 = v0;
  int64_t t8495 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8494,t8495);
  uintptr_t t8496 = v0;
  int64_t t8497 = ((int64_t)UINT64_C(15));
  int64_t t8498 = ((int64_t)UINT64_C(2532));
  f_mark(t8496,t8497,t8498);
  uintptr_t t8499 = v0;
  int64_t t8500 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8499,t8500);
  uintptr_t t8501 = v0;
  int64_t t8502 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8501,t8502);
  uintptr_t t8503 = v0;
  int64_t t8504 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8503,t8504);
  uintptr_t t8505 = v0;
  int64_t t8506 = ((int64_t)UINT64_C(3531605122));
  f_emit(t8505,t8506);
  uintptr_t t8507 = v0;
  int64_t t8508 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8507,t8508);
  uintptr_t t8509 = v0;
  int64_t t8510 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8509,t8510);
  uintptr_t t8511 = v0;
  int64_t t8512 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8511,t8512);
  uintptr_t t8513 = v0;
  int64_t t8514 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8513,t8514);
  uintptr_t t8515 = v0;
  int64_t t8516 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8515,t8516);
  uintptr_t t8517 = v0;
  int64_t t8518 = ((int64_t)UINT64_C(16));
  int64_t t8519 = ((int64_t)UINT64_C(2568));
  f_mark(t8517,t8518,t8519);
  uintptr_t t8520 = v0;
  int64_t t8521 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8520,t8521);
  uintptr_t t8522 = v0;
  int64_t t8523 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8522,t8523);
  uintptr_t t8524 = v0;
  int64_t t8525 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8524,t8525);
  uintptr_t t8526 = v0;
  int64_t t8527 = ((int64_t)UINT64_C(3531607586));
  f_emit(t8526,t8527);
  uintptr_t t8528 = v0;
  int64_t t8529 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8528,t8529);
  uintptr_t t8530 = v0;
  int64_t t8531 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8530,t8531);
  uintptr_t t8532 = v0;
  int64_t t8533 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8532,t8533);
  uintptr_t t8534 = v0;
  int64_t t8535 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8534,t8535);
  uintptr_t t8536 = v0;
  int64_t t8537 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8536,t8537);
  uintptr_t t8538 = v0;
  int64_t t8539 = ((int64_t)UINT64_C(21));
  int64_t t8540 = ((int64_t)UINT64_C(2604));
  f_mark(t8538,t8539,t8540);
  uintptr_t t8541 = v0;
  int64_t t8542 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8541,t8542);
  uintptr_t t8543 = v0;
  int64_t t8544 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8543,t8544);
  uintptr_t t8545 = v0;
  int64_t t8546 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8545,t8546);
  uintptr_t t8547 = v0;
  int64_t t8548 = ((int64_t)UINT64_C(3531605122));
  f_emit(t8547,t8548);
  uintptr_t t8549 = v0;
  int64_t t8550 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8549,t8550);
  uintptr_t t8551 = v0;
  int64_t t8552 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8551,t8552);
  uintptr_t t8553 = v0;
  int64_t t8554 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8553,t8554);
  uintptr_t t8555 = v0;
  int64_t t8556 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8555,t8556);
  uintptr_t t8557 = v0;
  int64_t t8558 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8557,t8558);
  uintptr_t t8559 = v0;
  int64_t t8560 = ((int64_t)UINT64_C(9));
  int64_t t8561 = ((int64_t)UINT64_C(2640));
  f_mark(t8559,t8560,t8561);
  uintptr_t t8562 = v0;
  int64_t t8563 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8562,t8563);
  uintptr_t t8564 = v0;
  int64_t t8565 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8564,t8565);
  uintptr_t t8566 = v0;
  int64_t t8567 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8566,t8567);
  uintptr_t t8568 = v0;
  int64_t t8569 = ((int64_t)UINT64_C(3531605954));
  f_emit(t8568,t8569);
  uintptr_t t8570 = v0;
  int64_t t8571 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8570,t8571);
  uintptr_t t8572 = v0;
  int64_t t8573 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8572,t8573);
  uintptr_t t8574 = v0;
  int64_t t8575 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8574,t8575);
  uintptr_t t8576 = v0;
  int64_t t8577 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8576,t8577);
  uintptr_t t8578 = v0;
  int64_t t8579 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8578,t8579);
  uintptr_t t8580 = v0;
  int64_t t8581 = ((int64_t)UINT64_C(13));
  int64_t t8582 = ((int64_t)UINT64_C(2676));
  f_mark(t8580,t8581,t8582);
  uintptr_t t8583 = v0;
  int64_t t8584 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8583,t8584);
  uintptr_t t8585 = v0;
  int64_t t8586 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8585,t8586);
  uintptr_t t8587 = v0;
  int64_t t8588 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8587,t8588);
  uintptr_t t8589 = v0;
  int64_t t8590 = ((int64_t)UINT64_C(3531606050));
  f_emit(t8589,t8590);
  uintptr_t t8591 = v0;
  int64_t t8592 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8591,t8592);
  uintptr_t t8593 = v0;
  int64_t t8594 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8593,t8594);
  uintptr_t t8595 = v0;
  int64_t t8596 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8595,t8596);
  uintptr_t t8597 = v0;
  int64_t t8598 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8597,t8598);
  uintptr_t t8599 = v0;
  int64_t t8600 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8599,t8600);
  uintptr_t t8601 = v0;
  int64_t t8602 = ((int64_t)UINT64_C(12));
  int64_t t8603 = ((int64_t)UINT64_C(2712));
  f_mark(t8601,t8602,t8603);
  uintptr_t t8604 = v0;
  int64_t t8605 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8604,t8605);
  uintptr_t t8606 = v0;
  int64_t t8607 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8606,t8607);
  uintptr_t t8608 = v0;
  int64_t t8609 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8608,t8609);
  uintptr_t t8610 = v0;
  int64_t t8611 = ((int64_t)UINT64_C(3531605346));
  f_emit(t8610,t8611);
  uintptr_t t8612 = v0;
  int64_t t8613 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8612,t8613);
  uintptr_t t8614 = v0;
  int64_t t8615 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8614,t8615);
  uintptr_t t8616 = v0;
  int64_t t8617 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8616,t8617);
  uintptr_t t8618 = v0;
  int64_t t8619 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8618,t8619);
  uintptr_t t8620 = v0;
  int64_t t8621 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8620,t8621);
  uintptr_t t8622 = v0;
  int64_t t8623 = ((int64_t)UINT64_C(7));
  int64_t t8624 = ((int64_t)UINT64_C(2748));
  f_mark(t8622,t8623,t8624);
  uintptr_t t8625 = v0;
  int64_t t8626 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8625,t8626);
  uintptr_t t8627 = v0;
  int64_t t8628 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8627,t8628);
  uintptr_t t8629 = v0;
  int64_t t8630 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8629,t8630);
  uintptr_t t8631 = v0;
  int64_t t8632 = ((int64_t)UINT64_C(3531605762));
  f_emit(t8631,t8632);
  uintptr_t t8633 = v0;
  int64_t t8634 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8633,t8634);
  uintptr_t t8635 = v0;
  int64_t t8636 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8635,t8636);
  uintptr_t t8637 = v0;
  int64_t t8638 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8637,t8638);
  uintptr_t t8639 = v0;
  int64_t t8640 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8639,t8640);
  uintptr_t t8641 = v0;
  int64_t t8642 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8641,t8642);
  uintptr_t t8643 = v0;
  int64_t t8644 = ((int64_t)UINT64_C(11));
  int64_t t8645 = ((int64_t)UINT64_C(2784));
  f_mark(t8643,t8644,t8645);
  uintptr_t t8646 = v0;
  int64_t t8647 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8646,t8647);
  uintptr_t t8648 = v0;
  int64_t t8649 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8648,t8649);
  uintptr_t t8650 = v0;
  int64_t t8651 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8650,t8651);
  uintptr_t t8652 = v0;
  int64_t t8653 = ((int64_t)UINT64_C(3531605730));
  f_emit(t8652,t8653);
  uintptr_t t8654 = v0;
  int64_t t8655 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8654,t8655);
  uintptr_t t8656 = v0;
  int64_t t8657 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8656,t8657);
  uintptr_t t8658 = v0;
  int64_t t8659 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8658,t8659);
  uintptr_t t8660 = v0;
  int64_t t8661 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8660,t8661);
  uintptr_t t8662 = v0;
  int64_t t8663 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8662,t8663);
  uintptr_t t8664 = v0;
  int64_t t8665 = ((int64_t)UINT64_C(14));
  int64_t t8666 = ((int64_t)UINT64_C(2820));
  f_mark(t8664,t8665,t8666);
  uintptr_t t8667 = v0;
  int64_t t8668 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8667,t8668);
  uintptr_t t8669 = v0;
  int64_t t8670 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8669,t8670);
  uintptr_t t8671 = v0;
  int64_t t8672 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8671,t8672);
  uintptr_t t8673 = v0;
  int64_t t8674 = ((int64_t)UINT64_C(3531606594));
  f_emit(t8673,t8674);
  uintptr_t t8675 = v0;
  int64_t t8676 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8675,t8676);
  uintptr_t t8677 = v0;
  int64_t t8678 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8677,t8678);
  uintptr_t t8679 = v0;
  int64_t t8680 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8679,t8680);
  uintptr_t t8681 = v0;
  int64_t t8682 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8681,t8682);
  uintptr_t t8683 = v0;
  int64_t t8684 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8683,t8684);
  uintptr_t t8685 = v0;
  int64_t t8686 = ((int64_t)UINT64_C(18));
  int64_t t8687 = ((int64_t)UINT64_C(2856));
  f_mark(t8685,t8686,t8687);
  uintptr_t t8688 = v0;
  int64_t t8689 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8688,t8689);
  uintptr_t t8690 = v0;
  int64_t t8691 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8690,t8691);
  uintptr_t t8692 = v0;
  int64_t t8693 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8692,t8693);
  uintptr_t t8694 = v0;
  int64_t t8695 = ((int64_t)UINT64_C(3531605986));
  f_emit(t8694,t8695);
  uintptr_t t8696 = v0;
  int64_t t8697 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8696,t8697);
  uintptr_t t8698 = v0;
  int64_t t8699 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8698,t8699);
  uintptr_t t8700 = v0;
  int64_t t8701 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8700,t8701);
  uintptr_t t8702 = v0;
  int64_t t8703 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8702,t8703);
  uintptr_t t8704 = v0;
  int64_t t8705 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8704,t8705);
  uintptr_t t8706 = v0;
  int64_t t8707 = ((int64_t)UINT64_C(20));
  int64_t t8708 = ((int64_t)UINT64_C(2892));
  f_mark(t8706,t8707,t8708);
  uintptr_t t8709 = v0;
  int64_t t8710 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8709,t8710);
  uintptr_t t8711 = v0;
  int64_t t8712 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8711,t8712);
  uintptr_t t8713 = v0;
  int64_t t8714 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8713,t8714);
  uintptr_t t8715 = v0;
  int64_t t8716 = ((int64_t)UINT64_C(3531606274));
  f_emit(t8715,t8716);
  uintptr_t t8717 = v0;
  int64_t t8718 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8717,t8718);
  uintptr_t t8719 = v0;
  int64_t t8720 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8719,t8720);
  uintptr_t t8721 = v0;
  int64_t t8722 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8721,t8722);
  uintptr_t t8723 = v0;
  int64_t t8724 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8723,t8724);
  uintptr_t t8725 = v0;
  int64_t t8726 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8725,t8726);
  uintptr_t t8727 = v0;
  int64_t t8728 = ((int64_t)UINT64_C(17));
  int64_t t8729 = ((int64_t)UINT64_C(2928));
  f_mark(t8727,t8728,t8729);
  uintptr_t t8730 = v0;
  int64_t t8731 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8730,t8731);
  uintptr_t t8732 = v0;
  int64_t t8733 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8732,t8733);
  uintptr_t t8734 = v0;
  int64_t t8735 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8734,t8735);
  uintptr_t t8736 = v0;
  int64_t t8737 = ((int64_t)UINT64_C(3531605410));
  f_emit(t8736,t8737);
  uintptr_t t8738 = v0;
  int64_t t8739 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8738,t8739);
  uintptr_t t8740 = v0;
  int64_t t8741 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8740,t8741);
  uintptr_t t8742 = v0;
  int64_t t8743 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8742,t8743);
  uintptr_t t8744 = v0;
  int64_t t8745 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8744,t8745);
  uintptr_t t8746 = v0;
  int64_t t8747 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8746,t8747);
  uintptr_t t8748 = v0;
  int64_t t8749 = ((int64_t)UINT64_C(8));
  int64_t t8750 = ((int64_t)UINT64_C(2964));
  f_mark(t8748,t8749,t8750);
  uintptr_t t8751 = v0;
  int64_t t8752 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8751,t8752);
  uintptr_t t8753 = v0;
  int64_t t8754 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8753,t8754);
  uintptr_t t8755 = v0;
  int64_t t8756 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8755,t8756);
  uintptr_t t8757 = v0;
  int64_t t8758 = ((int64_t)UINT64_C(3531606306));
  f_emit(t8757,t8758);
  uintptr_t t8759 = v0;
  int64_t t8760 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8759,t8760);
  uintptr_t t8761 = v0;
  int64_t t8762 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8761,t8762);
  uintptr_t t8763 = v0;
  int64_t t8764 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8763,t8764);
  uintptr_t t8765 = v0;
  int64_t t8766 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8765,t8766);
  uintptr_t t8767 = v0;
  int64_t t8768 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8767,t8768);
  uintptr_t t8769 = v0;
  int64_t t8770 = ((int64_t)UINT64_C(6));
  int64_t t8771 = ((int64_t)UINT64_C(3000));
  f_mark(t8769,t8770,t8771);
  uintptr_t t8772 = v0;
  int64_t t8773 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8772,t8773);
  uintptr_t t8774 = v0;
  int64_t t8775 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8774,t8775);
  uintptr_t t8776 = v0;
  int64_t t8777 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8776,t8777);
  uintptr_t t8778 = v0;
  int64_t t8779 = ((int64_t)UINT64_C(3531605122));
  f_emit(t8778,t8779);
  uintptr_t t8780 = v0;
  int64_t t8781 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8780,t8781);
  uintptr_t t8782 = v0;
  int64_t t8783 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8782,t8783);
  uintptr_t t8784 = v0;
  int64_t t8785 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8784,t8785);
  uintptr_t t8786 = v0;
  int64_t t8787 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8786,t8787);
  uintptr_t t8788 = v0;
  int64_t t8789 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8788,t8789);
  uintptr_t t8790 = v0;
  int64_t t8791 = ((int64_t)UINT64_C(19));
  int64_t t8792 = ((int64_t)UINT64_C(3036));
  f_mark(t8790,t8791,t8792);
  uintptr_t t8793 = v0;
  int64_t t8794 = ((int64_t)UINT64_C(3531604032));
  f_emit(t8793,t8794);
  uintptr_t t8795 = v0;
  int64_t t8796 = ((int64_t)UINT64_C(2415919105));
  f_emit(t8795,t8796);
  uintptr_t t8797 = v0;
  int64_t t8798 = ((int64_t)UINT64_C(2432696353));
  f_emit(t8797,t8798);
  uintptr_t t8799 = v0;
  int64_t t8800 = ((int64_t)UINT64_C(3531605794));
  f_emit(t8799,t8800);
  uintptr_t t8801 = v0;
  int64_t t8802 = ((int64_t)UINT64_C(2483027968));
  f_emit(t8801,t8802);
  uintptr_t t8803 = v0;
  int64_t t8804 = ((int64_t)UINT64_C(3531606208));
  f_emit(t8803,t8804);
  uintptr_t t8805 = v0;
  int64_t t8806 = ((int64_t)UINT64_C(3531604016));
  f_emit(t8805,t8806);
  uintptr_t t8807 = v0;
  int64_t t8808 = ((int64_t)UINT64_C(3556773889));
  f_emit(t8807,t8808);
  uintptr_t t8809 = v0;
  int64_t t8810 = ((int64_t)UINT64_C(3558866944));
  f_emit(t8809,t8810);
  uintptr_t t8811 = v0;
  int64_t t8812 = ((int64_t)UINT64_C(79));
  ApString t8813 = AP_STR("0123456789abcdef");
  f_constant(t8811,t8812,t8813);
  uintptr_t t8814 = v0;
  int64_t t8815 = ((int64_t)UINT64_C(80));
  ApString t8816 = AP_STR("e");
  f_constant(t8814,t8815,t8816);
  uintptr_t t8817 = v0;
  int64_t t8818 = ((int64_t)UINT64_C(81));
  ApString t8819 = AP_STR("APO runtime error: non-finite floating result\012");
  f_constant(t8817,t8818,t8819);
  uintptr_t t8820 = v0;
  int64_t t8821 = ((int64_t)UINT64_C(82));
  ApString t8822 = AP_STR("APO runtime error: decimal overflow\012");
  f_constant(t8820,t8821,t8822);
  uintptr_t t8823 = v0;
  int64_t t8824 = ((int64_t)UINT64_C(83));
  ApString t8825 = AP_STR("APO runtime error: result needs more than 6 decimal places\012Hint: use float(a) / float(b) for approximate ratios.\012");
  f_constant(t8823,t8824,t8825);
  uintptr_t t8826 = v0;
  int64_t t8827 = ((int64_t)UINT64_C(84));
  ApString t8828 = AP_STR("APO runtime error: division by zero\012");
  f_constant(t8826,t8827,t8828);
  uintptr_t t8829 = v0;
  int64_t t8830 = ((int64_t)UINT64_C(85));
  ApString t8831 = AP_STR("APO runtime error: exit code must be an integer from 0 to 255\012");
  f_constant(t8829,t8830,t8831);
  uintptr_t t8832 = v0;
  int64_t t8833 = ((int64_t)UINT64_C(86));
  ApString t8834 = AP_STR("APO runtime error: integer value required (no implicit rounding)\012");
  f_constant(t8832,t8833,t8834);
  uintptr_t t8835 = v0;
  int64_t t8836 = ((int64_t)UINT64_C(87));
  ApString t8837 = AP_STR("APO runtime error: 64-bit integer overflow\012");
  f_constant(t8835,t8836,t8837);
  uintptr_t t8838 = v0;
  int64_t t8839 = ((int64_t)UINT64_C(88));
  ApString t8840 = AP_STR("APO runtime error: buffer or string index out of bounds\012");
  f_constant(t8838,t8839,t8840);
  uintptr_t t8841 = v0;
  int64_t t8842 = ((int64_t)UINT64_C(89));
  ApString t8843 = AP_STR("APO runtime error: buffer already freed or stale alias\012");
  f_constant(t8841,t8842,t8843);
  uintptr_t t8844 = v0;
  int64_t t8845 = ((int64_t)UINT64_C(90));
  ApString t8846 = AP_STR("APO runtime error: memory allocation/release failed or 1024 live buffers exceeded\012");
  f_constant(t8844,t8845,t8846);
  uintptr_t t8847 = v0;
  int64_t t8848 = ((int64_t)UINT64_C(91));
  ApString t8849 = AP_STR("APO runtime error: allocation size must be 1..1073741824 bytes\012");
  f_constant(t8847,t8848,t8849);
  uintptr_t t8850 = v0;
  int64_t t8851 = ((int64_t)UINT64_C(92));
  ApString t8852 = AP_STR("APO runtime error: invalid time, clock failure, or timer range exceeded\012");
  f_constant(t8850,t8851,t8852);
  uintptr_t t8853 = v0;
  int64_t t8854 = ((int64_t)UINT64_C(93));
  ApString t8855 = AP_STR("APO runtime error: shift count must be 0..63\012");
  f_constant(t8853,t8854,t8855);
  uintptr_t t8856 = v0;
  int64_t t8857 = ((int64_t)UINT64_C(94));
  ApString t8858 = AP_STR("APO runtime error: value does not fit the selected unsigned memory width\012");
  f_constant(t8856,t8857,t8858);
  uintptr_t t8859 = v0;
  int64_t t8860 = ((int64_t)UINT64_C(95));
  ApString t8861 = AP_STR("APO runtime error: assertion failed\012");
  f_constant(t8859,t8860,t8861);
  uintptr_t t8862 = v0;
  int64_t t8863 = ((int64_t)UINT64_C(96));
  ApString t8864 = AP_STR("APO runtime error: function stack limit exceeded (1 MiB)\012");
  f_constant(t8862,t8863,t8864);
  uintptr_t t8865 = v0;
  int64_t t8866 = ((int64_t)UINT64_C(0));
  int64_t t8867 = ((int64_t)UINT64_C(0));
  int64_t t8868 = ((int64_t)UINT64_C(55));
  f_fixup(t8865,t8866,t8867,t8868);
  uintptr_t t8869 = v0;
  int64_t t8870 = ((int64_t)UINT64_C(20));
  int64_t t8871 = ((int64_t)UINT64_C(0));
  int64_t t8872 = ((int64_t)UINT64_C(100));
  f_fixup(t8869,t8870,t8871,t8872);
  uintptr_t t8873 = v0;
  int64_t t8874 = ((int64_t)UINT64_C(48));
  int64_t t8875 = ((int64_t)UINT64_C(0));
  int64_t t8876 = ((int64_t)UINT64_C(101));
  f_fixup(t8873,t8874,t8875,t8876);
  uintptr_t t8877 = v0;
  int64_t t8878 = ((int64_t)UINT64_C(56));
  int64_t t8879 = ((int64_t)UINT64_C(0));
  int64_t t8880 = ((int64_t)UINT64_C(102));
  f_fixup(t8877,t8878,t8879,t8880);
  uintptr_t t8881 = v0;
  int64_t t8882 = ((int64_t)UINT64_C(72));
  int64_t t8883 = ((int64_t)UINT64_C(0));
  int64_t t8884 = ((int64_t)UINT64_C(103));
  f_fixup(t8881,t8882,t8883,t8884);
  uintptr_t t8885 = v0;
  int64_t t8886 = ((int64_t)UINT64_C(88));
  int64_t t8887 = ((int64_t)UINT64_C(0));
  int64_t t8888 = ((int64_t)UINT64_C(103));
  f_fixup(t8885,t8886,t8887,t8888);
  uintptr_t t8889 = v0;
  int64_t t8890 = ((int64_t)UINT64_C(148));
  int64_t t8891 = ((int64_t)UINT64_C(0));
  int64_t t8892 = ((int64_t)UINT64_C(51));
  f_fixup(t8889,t8890,t8891,t8892);
  uintptr_t t8893 = v0;
  int64_t t8894 = ((int64_t)UINT64_C(184));
  int64_t t8895 = ((int64_t)UINT64_C(0));
  int64_t t8896 = ((int64_t)UINT64_C(50));
  f_fixup(t8893,t8894,t8895,t8896);
  uintptr_t t8897 = v0;
  int64_t t8898 = ((int64_t)UINT64_C(204));
  int64_t t8899 = ((int64_t)UINT64_C(0));
  int64_t t8900 = ((int64_t)UINT64_C(28));
  f_fixup(t8897,t8898,t8899,t8900);
  uintptr_t t8901 = v0;
  int64_t t8902 = ((int64_t)UINT64_C(216));
  int64_t t8903 = ((int64_t)UINT64_C(0));
  int64_t t8904 = ((int64_t)UINT64_C(29));
  f_fixup(t8901,t8902,t8903,t8904);
  uintptr_t t8905 = v0;
  int64_t t8906 = ((int64_t)UINT64_C(252));
  int64_t t8907 = ((int64_t)UINT64_C(0));
  int64_t t8908 = ((int64_t)UINT64_C(28));
  f_fixup(t8905,t8906,t8907,t8908);
  uintptr_t t8909 = v0;
  int64_t t8910 = ((int64_t)UINT64_C(296));
  int64_t t8911 = ((int64_t)UINT64_C(0));
  int64_t t8912 = ((int64_t)UINT64_C(50));
  f_fixup(t8909,t8910,t8911,t8912);
  uintptr_t t8913 = v0;
  int64_t t8914 = ((int64_t)UINT64_C(304));
  int64_t t8915 = ((int64_t)UINT64_C(0));
  int64_t t8916 = ((int64_t)UINT64_C(52));
  f_fixup(t8913,t8914,t8915,t8916);
  uintptr_t t8917 = v0;
  int64_t t8918 = ((int64_t)UINT64_C(332));
  int64_t t8919 = ((int64_t)UINT64_C(0));
  int64_t t8920 = ((int64_t)UINT64_C(73));
  f_fixup(t8917,t8918,t8919,t8920);
  uintptr_t t8921 = v0;
  int64_t t8922 = ((int64_t)UINT64_C(392));
  int64_t t8923 = ((int64_t)UINT64_C(0));
  int64_t t8924 = ((int64_t)UINT64_C(41));
  f_fixup(t8921,t8922,t8923,t8924);
  uintptr_t t8925 = v0;
  int64_t t8926 = ((int64_t)UINT64_C(436));
  int64_t t8927 = ((int64_t)UINT64_C(0));
  int64_t t8928 = ((int64_t)UINT64_C(39));
  f_fixup(t8925,t8926,t8927,t8928);
  uintptr_t t8929 = v0;
  int64_t t8930 = ((int64_t)UINT64_C(444));
  int64_t t8931 = ((int64_t)UINT64_C(0));
  int64_t t8932 = ((int64_t)UINT64_C(40));
  f_fixup(t8929,t8930,t8931,t8932);
  uintptr_t t8933 = v0;
  int64_t t8934 = ((int64_t)UINT64_C(472));
  int64_t t8935 = ((int64_t)UINT64_C(0));
  int64_t t8936 = ((int64_t)UINT64_C(73));
  f_fixup(t8933,t8934,t8935,t8936);
  uintptr_t t8937 = v0;
  int64_t t8938 = ((int64_t)UINT64_C(520));
  int64_t t8939 = ((int64_t)UINT64_C(2));
  int64_t t8940 = ((int64_t)UINT64_C(79));
  f_fixup(t8937,t8938,t8939,t8940);
  uintptr_t t8941 = v0;
  int64_t t8942 = ((int64_t)UINT64_C(560));
  int64_t t8943 = ((int64_t)UINT64_C(0));
  int64_t t8944 = ((int64_t)UINT64_C(38));
  f_fixup(t8941,t8942,t8943,t8944);
  uintptr_t t8945 = v0;
  int64_t t8946 = ((int64_t)UINT64_C(600));
  int64_t t8947 = ((int64_t)UINT64_C(0));
  int64_t t8948 = ((int64_t)UINT64_C(73));
  f_fixup(t8945,t8946,t8947,t8948);
  uintptr_t t8949 = v0;
  int64_t t8950 = ((int64_t)UINT64_C(628));
  int64_t t8951 = ((int64_t)UINT64_C(0));
  int64_t t8952 = ((int64_t)UINT64_C(98));
  f_fixup(t8949,t8950,t8951,t8952);
  uintptr_t t8953 = v0;
  int64_t t8954 = ((int64_t)UINT64_C(636));
  int64_t t8955 = ((int64_t)UINT64_C(0));
  int64_t t8956 = ((int64_t)UINT64_C(99));
  f_fixup(t8953,t8954,t8955,t8956);
  uintptr_t t8957 = v0;
  int64_t t8958 = ((int64_t)UINT64_C(656));
  int64_t t8959 = ((int64_t)UINT64_C(0));
  int64_t t8960 = ((int64_t)UINT64_C(98));
  f_fixup(t8957,t8958,t8959,t8960);
  uintptr_t t8961 = v0;
  int64_t t8962 = ((int64_t)UINT64_C(676));
  int64_t t8963 = ((int64_t)UINT64_C(0));
  int64_t t8964 = ((int64_t)UINT64_C(97));
  f_fixup(t8961,t8962,t8963,t8964);
  uintptr_t t8965 = v0;
  int64_t t8966 = ((int64_t)UINT64_C(720));
  int64_t t8967 = ((int64_t)UINT64_C(0));
  int64_t t8968 = ((int64_t)UINT64_C(42));
  f_fixup(t8965,t8966,t8967,t8968);
  uintptr_t t8969 = v0;
  int64_t t8970 = ((int64_t)UINT64_C(736));
  int64_t t8971 = ((int64_t)UINT64_C(0));
  int64_t t8972 = ((int64_t)UINT64_C(44));
  f_fixup(t8969,t8970,t8971,t8972);
  uintptr_t t8973 = v0;
  int64_t t8974 = ((int64_t)UINT64_C(748));
  int64_t t8975 = ((int64_t)UINT64_C(0));
  int64_t t8976 = ((int64_t)UINT64_C(49));
  f_fixup(t8973,t8974,t8975,t8976);
  uintptr_t t8977 = v0;
  int64_t t8978 = ((int64_t)UINT64_C(756));
  int64_t t8979 = ((int64_t)UINT64_C(0));
  int64_t t8980 = ((int64_t)UINT64_C(49));
  f_fixup(t8977,t8978,t8979,t8980);
  uintptr_t t8981 = v0;
  int64_t t8982 = ((int64_t)UINT64_C(780));
  int64_t t8983 = ((int64_t)UINT64_C(0));
  int64_t t8984 = ((int64_t)UINT64_C(30));
  f_fixup(t8981,t8982,t8983,t8984);
  uintptr_t t8985 = v0;
  int64_t t8986 = ((int64_t)UINT64_C(800));
  int64_t t8987 = ((int64_t)UINT64_C(0));
  int64_t t8988 = ((int64_t)UINT64_C(34));
  f_fixup(t8985,t8986,t8987,t8988);
  uintptr_t t8989 = v0;
  int64_t t8990 = ((int64_t)UINT64_C(824));
  int64_t t8991 = ((int64_t)UINT64_C(0));
  int64_t t8992 = ((int64_t)UINT64_C(31));
  f_fixup(t8989,t8990,t8991,t8992);
  uintptr_t t8993 = v0;
  int64_t t8994 = ((int64_t)UINT64_C(844));
  int64_t t8995 = ((int64_t)UINT64_C(0));
  int64_t t8996 = ((int64_t)UINT64_C(35));
  f_fixup(t8993,t8994,t8995,t8996);
  uintptr_t t8997 = v0;
  int64_t t8998 = ((int64_t)UINT64_C(864));
  int64_t t8999 = ((int64_t)UINT64_C(0));
  int64_t t9000 = ((int64_t)UINT64_C(16));
  f_fixup(t8997,t8998,t8999,t9000);
  uintptr_t t9001 = v0;
  int64_t t9002 = ((int64_t)UINT64_C(880));
  int64_t t9003 = ((int64_t)UINT64_C(0));
  int64_t t9004 = ((int64_t)UINT64_C(15));
  f_fixup(t9001,t9002,t9003,t9004);
  uintptr_t t9005 = v0;
  int64_t t9006 = ((int64_t)UINT64_C(888));
  int64_t t9007 = ((int64_t)UINT64_C(0));
  int64_t t9008 = ((int64_t)UINT64_C(53));
  f_fixup(t9005,t9006,t9007,t9008);
  uintptr_t t9009 = v0;
  int64_t t9010 = ((int64_t)UINT64_C(916));
  int64_t t9011 = ((int64_t)UINT64_C(0));
  int64_t t9012 = ((int64_t)UINT64_C(15));
  f_fixup(t9009,t9010,t9011,t9012);
  uintptr_t t9013 = v0;
  int64_t t9014 = ((int64_t)UINT64_C(940));
  int64_t t9015 = ((int64_t)UINT64_C(0));
  int64_t t9016 = ((int64_t)UINT64_C(15));
  f_fixup(t9013,t9014,t9015,t9016);
  uintptr_t t9017 = v0;
  int64_t t9018 = ((int64_t)UINT64_C(964));
  int64_t t9019 = ((int64_t)UINT64_C(0));
  int64_t t9020 = ((int64_t)UINT64_C(21));
  f_fixup(t9017,t9018,t9019,t9020);
  uintptr_t t9021 = v0;
  int64_t t9022 = ((int64_t)UINT64_C(992));
  int64_t t9023 = ((int64_t)UINT64_C(0));
  int64_t t9024 = ((int64_t)UINT64_C(43));
  f_fixup(t9021,t9022,t9023,t9024);
  uintptr_t t9025 = v0;
  int64_t t9026 = ((int64_t)UINT64_C(1008));
  int64_t t9027 = ((int64_t)UINT64_C(0));
  int64_t t9028 = ((int64_t)UINT64_C(45));
  f_fixup(t9025,t9026,t9027,t9028);
  uintptr_t t9029 = v0;
  int64_t t9030 = ((int64_t)UINT64_C(1020));
  int64_t t9031 = ((int64_t)UINT64_C(0));
  int64_t t9032 = ((int64_t)UINT64_C(5));
  f_fixup(t9029,t9030,t9031,t9032);
  uintptr_t t9033 = v0;
  int64_t t9034 = ((int64_t)UINT64_C(1036));
  int64_t t9035 = ((int64_t)UINT64_C(0));
  int64_t t9036 = ((int64_t)UINT64_C(32));
  f_fixup(t9033,t9034,t9035,t9036);
  uintptr_t t9037 = v0;
  int64_t t9038 = ((int64_t)UINT64_C(1056));
  int64_t t9039 = ((int64_t)UINT64_C(0));
  int64_t t9040 = ((int64_t)UINT64_C(36));
  f_fixup(t9037,t9038,t9039,t9040);
  uintptr_t t9041 = v0;
  int64_t t9042 = ((int64_t)UINT64_C(1088));
  int64_t t9043 = ((int64_t)UINT64_C(0));
  int64_t t9044 = ((int64_t)UINT64_C(33));
  f_fixup(t9041,t9042,t9043,t9044);
  uintptr_t t9045 = v0;
  int64_t t9046 = ((int64_t)UINT64_C(1108));
  int64_t t9047 = ((int64_t)UINT64_C(0));
  int64_t t9048 = ((int64_t)UINT64_C(37));
  f_fixup(t9045,t9046,t9047,t9048);
  uintptr_t t9049 = v0;
  int64_t t9050 = ((int64_t)UINT64_C(1128));
  int64_t t9051 = ((int64_t)UINT64_C(0));
  int64_t t9052 = ((int64_t)UINT64_C(16));
  f_fixup(t9049,t9050,t9051,t9052);
  uintptr_t t9053 = v0;
  int64_t t9054 = ((int64_t)UINT64_C(1144));
  int64_t t9055 = ((int64_t)UINT64_C(0));
  int64_t t9056 = ((int64_t)UINT64_C(15));
  f_fixup(t9053,t9054,t9055,t9056);
  uintptr_t t9057 = v0;
  int64_t t9058 = ((int64_t)UINT64_C(1152));
  int64_t t9059 = ((int64_t)UINT64_C(0));
  int64_t t9060 = ((int64_t)UINT64_C(54));
  f_fixup(t9057,t9058,t9059,t9060);
  uintptr_t t9061 = v0;
  int64_t t9062 = ((int64_t)UINT64_C(1180));
  int64_t t9063 = ((int64_t)UINT64_C(0));
  int64_t t9064 = ((int64_t)UINT64_C(15));
  f_fixup(t9061,t9062,t9063,t9064);
  uintptr_t t9065 = v0;
  int64_t t9066 = ((int64_t)UINT64_C(1204));
  int64_t t9067 = ((int64_t)UINT64_C(0));
  int64_t t9068 = ((int64_t)UINT64_C(15));
  f_fixup(t9065,t9066,t9067,t9068);
  uintptr_t t9069 = v0;
  int64_t t9070 = ((int64_t)UINT64_C(1244));
  int64_t t9071 = ((int64_t)UINT64_C(0));
  int64_t t9072 = ((int64_t)UINT64_C(10));
  f_fixup(t9069,t9070,t9071,t9072);
  uintptr_t t9073 = v0;
  int64_t t9074 = ((int64_t)UINT64_C(1292));
  int64_t t9075 = ((int64_t)UINT64_C(0));
  int64_t t9076 = ((int64_t)UINT64_C(25));
  f_fixup(t9073,t9074,t9075,t9076);
  uintptr_t t9077 = v0;
  int64_t t9078 = ((int64_t)UINT64_C(1324));
  int64_t t9079 = ((int64_t)UINT64_C(0));
  int64_t t9080 = ((int64_t)UINT64_C(26));
  f_fixup(t9077,t9078,t9079,t9080);
  uintptr_t t9081 = v0;
  int64_t t9082 = ((int64_t)UINT64_C(1356));
  int64_t t9083 = ((int64_t)UINT64_C(0));
  int64_t t9084 = ((int64_t)UINT64_C(25));
  f_fixup(t9081,t9082,t9083,t9084);
  uintptr_t t9085 = v0;
  int64_t t9086 = ((int64_t)UINT64_C(1392));
  int64_t t9087 = ((int64_t)UINT64_C(0));
  int64_t t9088 = ((int64_t)UINT64_C(24));
  f_fixup(t9085,t9086,t9087,t9088);
  uintptr_t t9089 = v0;
  int64_t t9090 = ((int64_t)UINT64_C(1408));
  int64_t t9091 = ((int64_t)UINT64_C(0));
  int64_t t9092 = ((int64_t)UINT64_C(23));
  f_fixup(t9089,t9090,t9091,t9092);
  uintptr_t t9093 = v0;
  int64_t t9094 = ((int64_t)UINT64_C(1420));
  int64_t t9095 = ((int64_t)UINT64_C(0));
  int64_t t9096 = ((int64_t)UINT64_C(27));
  f_fixup(t9093,t9094,t9095,t9096);
  uintptr_t t9097 = v0;
  int64_t t9098 = ((int64_t)UINT64_C(1436));
  int64_t t9099 = ((int64_t)UINT64_C(0));
  int64_t t9100 = ((int64_t)UINT64_C(24));
  f_fixup(t9097,t9098,t9099,t9100);
  uintptr_t t9101 = v0;
  int64_t t9102 = ((int64_t)UINT64_C(1472));
  int64_t t9103 = ((int64_t)UINT64_C(0));
  int64_t t9104 = ((int64_t)UINT64_C(65));
  f_fixup(t9101,t9102,t9103,t9104);
  uintptr_t t9105 = v0;
  int64_t t9106 = ((int64_t)UINT64_C(1484));
  int64_t t9107 = ((int64_t)UINT64_C(0));
  int64_t t9108 = ((int64_t)UINT64_C(22));
  f_fixup(t9105,t9106,t9107,t9108);
  uintptr_t t9109 = v0;
  int64_t t9110 = ((int64_t)UINT64_C(1488));
  int64_t t9111 = ((int64_t)UINT64_C(2));
  int64_t t9112 = ((int64_t)UINT64_C(80));
  f_fixup(t9109,t9110,t9111,t9112);
  uintptr_t t9113 = v0;
  int64_t t9114 = ((int64_t)UINT64_C(1512));
  int64_t t9115 = ((int64_t)UINT64_C(0));
  int64_t t9116 = ((int64_t)UINT64_C(73));
  f_fixup(t9113,t9114,t9115,t9116);
  uintptr_t t9117 = v0;
  int64_t t9118 = ((int64_t)UINT64_C(1520));
  int64_t t9119 = ((int64_t)UINT64_C(0));
  int64_t t9120 = ((int64_t)UINT64_C(62));
  f_fixup(t9117,t9118,t9119,t9120);
  uintptr_t t9121 = v0;
  int64_t t9122 = ((int64_t)UINT64_C(1544));
  int64_t t9123 = ((int64_t)UINT64_C(0));
  int64_t t9124 = ((int64_t)UINT64_C(11));
  f_fixup(t9121,t9122,t9123,t9124);
  uintptr_t t9125 = v0;
  int64_t t9126 = ((int64_t)UINT64_C(1560));
  int64_t t9127 = ((int64_t)UINT64_C(0));
  int64_t t9128 = ((int64_t)UINT64_C(11));
  f_fixup(t9125,t9126,t9127,t9128);
  uintptr_t t9129 = v0;
  int64_t t9130 = ((int64_t)UINT64_C(1572));
  int64_t t9131 = ((int64_t)UINT64_C(0));
  int64_t t9132 = ((int64_t)UINT64_C(11));
  f_fixup(t9129,t9130,t9131,t9132);
  uintptr_t t9133 = v0;
  int64_t t9134 = ((int64_t)UINT64_C(1588));
  int64_t t9135 = ((int64_t)UINT64_C(0));
  int64_t t9136 = ((int64_t)UINT64_C(11));
  f_fixup(t9133,t9134,t9135,t9136);
  uintptr_t t9137 = v0;
  int64_t t9138 = ((int64_t)UINT64_C(1604));
  int64_t t9139 = ((int64_t)UINT64_C(0));
  int64_t t9140 = ((int64_t)UINT64_C(11));
  f_fixup(t9137,t9138,t9139,t9140);
  uintptr_t t9141 = v0;
  int64_t t9142 = ((int64_t)UINT64_C(1616));
  int64_t t9143 = ((int64_t)UINT64_C(0));
  int64_t t9144 = ((int64_t)UINT64_C(11));
  f_fixup(t9141,t9142,t9143,t9144);
  uintptr_t t9145 = v0;
  int64_t t9146 = ((int64_t)UINT64_C(1632));
  int64_t t9147 = ((int64_t)UINT64_C(0));
  int64_t t9148 = ((int64_t)UINT64_C(7));
  f_fixup(t9145,t9146,t9147,t9148);
  uintptr_t t9149 = v0;
  int64_t t9150 = ((int64_t)UINT64_C(1648));
  int64_t t9151 = ((int64_t)UINT64_C(0));
  int64_t t9152 = ((int64_t)UINT64_C(7));
  f_fixup(t9149,t9150,t9151,t9152);
  uintptr_t t9153 = v0;
  int64_t t9154 = ((int64_t)UINT64_C(1668));
  int64_t t9155 = ((int64_t)UINT64_C(0));
  int64_t t9156 = ((int64_t)UINT64_C(18));
  f_fixup(t9153,t9154,t9155,t9156);
  uintptr_t t9157 = v0;
  int64_t t9158 = ((int64_t)UINT64_C(1688));
  int64_t t9159 = ((int64_t)UINT64_C(0));
  int64_t t9160 = ((int64_t)UINT64_C(18));
  f_fixup(t9157,t9158,t9159,t9160);
  uintptr_t t9161 = v0;
  int64_t t9162 = ((int64_t)UINT64_C(1716));
  int64_t t9163 = ((int64_t)UINT64_C(0));
  int64_t t9164 = ((int64_t)UINT64_C(4));
  f_fixup(t9161,t9162,t9163,t9164);
  uintptr_t t9165 = v0;
  int64_t t9166 = ((int64_t)UINT64_C(1768));
  int64_t t9167 = ((int64_t)UINT64_C(0));
  int64_t t9168 = ((int64_t)UINT64_C(14));
  f_fixup(t9165,t9166,t9167,t9168);
  uintptr_t t9169 = v0;
  int64_t t9170 = ((int64_t)UINT64_C(1776));
  int64_t t9171 = ((int64_t)UINT64_C(0));
  int64_t t9172 = ((int64_t)UINT64_C(14));
  f_fixup(t9169,t9170,t9171,t9172);
  uintptr_t t9173 = v0;
  int64_t t9174 = ((int64_t)UINT64_C(1820));
  int64_t t9175 = ((int64_t)UINT64_C(0));
  int64_t t9176 = ((int64_t)UINT64_C(14));
  f_fixup(t9173,t9174,t9175,t9176);
  uintptr_t t9177 = v0;
  int64_t t9178 = ((int64_t)UINT64_C(1832));
  int64_t t9179 = ((int64_t)UINT64_C(0));
  int64_t t9180 = ((int64_t)UINT64_C(3));
  f_fixup(t9177,t9178,t9179,t9180);
  uintptr_t t9181 = v0;
  int64_t t9182 = ((int64_t)UINT64_C(1848));
  int64_t t9183 = ((int64_t)UINT64_C(0));
  int64_t t9184 = ((int64_t)UINT64_C(1));
  f_fixup(t9181,t9182,t9183,t9184);
  uintptr_t t9185 = v0;
  int64_t t9186 = ((int64_t)UINT64_C(1856));
  int64_t t9187 = ((int64_t)UINT64_C(0));
  int64_t t9188 = ((int64_t)UINT64_C(2));
  f_fixup(t9185,t9186,t9187,t9188);
  uintptr_t t9189 = v0;
  int64_t t9190 = ((int64_t)UINT64_C(1912));
  int64_t t9191 = ((int64_t)UINT64_C(0));
  int64_t t9192 = ((int64_t)UINT64_C(14));
  f_fixup(t9189,t9190,t9191,t9192);
  uintptr_t t9193 = v0;
  int64_t t9194 = ((int64_t)UINT64_C(1920));
  int64_t t9195 = ((int64_t)UINT64_C(0));
  int64_t t9196 = ((int64_t)UINT64_C(14));
  f_fixup(t9193,t9194,t9195,t9196);
  uintptr_t t9197 = v0;
  int64_t t9198 = ((int64_t)UINT64_C(1976));
  int64_t t9199 = ((int64_t)UINT64_C(0));
  int64_t t9200 = ((int64_t)UINT64_C(11));
  f_fixup(t9197,t9198,t9199,t9200);
  uintptr_t t9201 = v0;
  int64_t t9202 = ((int64_t)UINT64_C(1992));
  int64_t t9203 = ((int64_t)UINT64_C(0));
  int64_t t9204 = ((int64_t)UINT64_C(11));
  f_fixup(t9201,t9202,t9203,t9204);
  uintptr_t t9205 = v0;
  int64_t t9206 = ((int64_t)UINT64_C(2004));
  int64_t t9207 = ((int64_t)UINT64_C(0));
  int64_t t9208 = ((int64_t)UINT64_C(11));
  f_fixup(t9205,t9206,t9207,t9208);
  uintptr_t t9209 = v0;
  int64_t t9210 = ((int64_t)UINT64_C(2040));
  int64_t t9211 = ((int64_t)UINT64_C(0));
  int64_t t9212 = ((int64_t)UINT64_C(14));
  f_fixup(t9209,t9210,t9211,t9212);
  uintptr_t t9213 = v0;
  int64_t t9214 = ((int64_t)UINT64_C(2096));
  int64_t t9215 = ((int64_t)UINT64_C(0));
  int64_t t9216 = ((int64_t)UINT64_C(20));
  f_fixup(t9213,t9214,t9215,t9216);
  uintptr_t t9217 = v0;
  int64_t t9218 = ((int64_t)UINT64_C(2116));
  int64_t t9219 = ((int64_t)UINT64_C(0));
  int64_t t9220 = ((int64_t)UINT64_C(20));
  f_fixup(t9217,t9218,t9219,t9220);
  uintptr_t t9221 = v0;
  int64_t t9222 = ((int64_t)UINT64_C(2136));
  int64_t t9223 = ((int64_t)UINT64_C(0));
  int64_t t9224 = ((int64_t)UINT64_C(20));
  f_fixup(t9221,t9222,t9223,t9224);
  uintptr_t t9225 = v0;
  int64_t t9226 = ((int64_t)UINT64_C(2172));
  int64_t t9227 = ((int64_t)UINT64_C(0));
  int64_t t9228 = ((int64_t)UINT64_C(48));
  f_fixup(t9225,t9226,t9227,t9228);
  uintptr_t t9229 = v0;
  int64_t t9230 = ((int64_t)UINT64_C(2184));
  int64_t t9231 = ((int64_t)UINT64_C(0));
  int64_t t9232 = ((int64_t)UINT64_C(47));
  f_fixup(t9229,t9230,t9231,t9232);
  uintptr_t t9233 = v0;
  int64_t t9234 = ((int64_t)UINT64_C(2204));
  int64_t t9235 = ((int64_t)UINT64_C(0));
  int64_t t9236 = ((int64_t)UINT64_C(46));
  f_fixup(t9233,t9234,t9235,t9236);
  uintptr_t t9237 = v0;
  int64_t t9238 = ((int64_t)UINT64_C(2236));
  int64_t t9239 = ((int64_t)UINT64_C(0));
  int64_t t9240 = ((int64_t)UINT64_C(67));
  f_fixup(t9237,t9238,t9239,t9240);
  uintptr_t t9241 = v0;
  int64_t t9242 = ((int64_t)UINT64_C(2252));
  int64_t t9243 = ((int64_t)UINT64_C(0));
  int64_t t9244 = ((int64_t)UINT64_C(63));
  f_fixup(t9241,t9242,t9243,t9244);
  uintptr_t t9245 = v0;
  int64_t t9246 = ((int64_t)UINT64_C(2264));
  int64_t t9247 = ((int64_t)UINT64_C(0));
  int64_t t9248 = ((int64_t)UINT64_C(20));
  f_fixup(t9245,t9246,t9247,t9248);
  uintptr_t t9249 = v0;
  int64_t t9250 = ((int64_t)UINT64_C(2292));
  int64_t t9251 = ((int64_t)UINT64_C(0));
  int64_t t9252 = ((int64_t)UINT64_C(69));
  f_fixup(t9249,t9250,t9251,t9252);
  uintptr_t t9253 = v0;
  int64_t t9254 = ((int64_t)UINT64_C(2308));
  int64_t t9255 = ((int64_t)UINT64_C(0));
  int64_t t9256 = ((int64_t)UINT64_C(20));
  f_fixup(t9253,t9254,t9255,t9256);
  uintptr_t t9257 = v0;
  int64_t t9258 = ((int64_t)UINT64_C(2340));
  int64_t t9259 = ((int64_t)UINT64_C(0));
  int64_t t9260 = ((int64_t)UINT64_C(63));
  f_fixup(t9257,t9258,t9259,t9260);
  uintptr_t t9261 = v0;
  int64_t t9262 = ((int64_t)UINT64_C(2348));
  int64_t t9263 = ((int64_t)UINT64_C(0));
  int64_t t9264 = ((int64_t)UINT64_C(76));
  f_fixup(t9261,t9262,t9263,t9264);
  uintptr_t t9265 = v0;
  int64_t t9266 = ((int64_t)UINT64_C(2364));
  int64_t t9267 = ((int64_t)UINT64_C(0));
  int64_t t9268 = ((int64_t)UINT64_C(20));
  f_fixup(t9265,t9266,t9267,t9268);
  uintptr_t t9269 = v0;
  int64_t t9270 = ((int64_t)UINT64_C(2380));
  int64_t t9271 = ((int64_t)UINT64_C(0));
  int64_t t9272 = ((int64_t)UINT64_C(74));
  f_fixup(t9269,t9270,t9271,t9272);
  uintptr_t t9273 = v0;
  int64_t t9274 = ((int64_t)UINT64_C(2384));
  int64_t t9275 = ((int64_t)UINT64_C(0));
  int64_t t9276 = ((int64_t)UINT64_C(67));
  f_fixup(t9273,t9274,t9275,t9276);
  uintptr_t t9277 = v0;
  int64_t t9278 = ((int64_t)UINT64_C(2400));
  int64_t t9279 = ((int64_t)UINT64_C(0));
  int64_t t9280 = ((int64_t)UINT64_C(20));
  f_fixup(t9277,t9278,t9279,t9280);
  uintptr_t t9281 = v0;
  int64_t t9282 = ((int64_t)UINT64_C(2404));
  int64_t t9283 = ((int64_t)UINT64_C(0));
  int64_t t9284 = ((int64_t)UINT64_C(77));
  f_fixup(t9281,t9282,t9283,t9284);
  uintptr_t t9285 = v0;
  int64_t t9286 = ((int64_t)UINT64_C(2416));
  int64_t t9287 = ((int64_t)UINT64_C(0));
  int64_t t9288 = ((int64_t)UINT64_C(20));
  f_fixup(t9285,t9286,t9287,t9288);
  uintptr_t t9289 = v0;
  int64_t t9290 = ((int64_t)UINT64_C(2452));
  int64_t t9291 = ((int64_t)UINT64_C(0));
  int64_t t9292 = ((int64_t)UINT64_C(75));
  f_fixup(t9289,t9290,t9291,t9292);
  uintptr_t t9293 = v0;
  int64_t t9294 = ((int64_t)UINT64_C(2464));
  int64_t t9295 = ((int64_t)UINT64_C(0));
  int64_t t9296 = ((int64_t)UINT64_C(78));
  f_fixup(t9293,t9294,t9295,t9296);
  uintptr_t t9297 = v0;
  int64_t t9298 = ((int64_t)UINT64_C(2468));
  int64_t t9299 = ((int64_t)UINT64_C(0));
  int64_t t9300 = ((int64_t)UINT64_C(20));
  f_fixup(t9297,t9298,t9299,t9300);
  uintptr_t t9301 = v0;
  int64_t t9302 = ((int64_t)UINT64_C(2500));
  int64_t t9303 = ((int64_t)UINT64_C(2));
  int64_t t9304 = ((int64_t)UINT64_C(81));
  f_fixup(t9301,t9302,t9303,t9304);
  uintptr_t t9305 = v0;
  int64_t t9306 = ((int64_t)UINT64_C(2512));
  int64_t t9307 = ((int64_t)UINT64_C(0));
  int64_t t9308 = ((int64_t)UINT64_C(73));
  f_fixup(t9305,t9306,t9307,t9308);
  uintptr_t t9309 = v0;
  int64_t t9310 = ((int64_t)UINT64_C(2536));
  int64_t t9311 = ((int64_t)UINT64_C(2));
  int64_t t9312 = ((int64_t)UINT64_C(82));
  f_fixup(t9309,t9310,t9311,t9312);
  uintptr_t t9313 = v0;
  int64_t t9314 = ((int64_t)UINT64_C(2548));
  int64_t t9315 = ((int64_t)UINT64_C(0));
  int64_t t9316 = ((int64_t)UINT64_C(73));
  f_fixup(t9313,t9314,t9315,t9316);
  uintptr_t t9317 = v0;
  int64_t t9318 = ((int64_t)UINT64_C(2572));
  int64_t t9319 = ((int64_t)UINT64_C(2));
  int64_t t9320 = ((int64_t)UINT64_C(83));
  f_fixup(t9317,t9318,t9319,t9320);
  uintptr_t t9321 = v0;
  int64_t t9322 = ((int64_t)UINT64_C(2584));
  int64_t t9323 = ((int64_t)UINT64_C(0));
  int64_t t9324 = ((int64_t)UINT64_C(73));
  f_fixup(t9321,t9322,t9323,t9324);
  uintptr_t t9325 = v0;
  int64_t t9326 = ((int64_t)UINT64_C(2608));
  int64_t t9327 = ((int64_t)UINT64_C(2));
  int64_t t9328 = ((int64_t)UINT64_C(84));
  f_fixup(t9325,t9326,t9327,t9328);
  uintptr_t t9329 = v0;
  int64_t t9330 = ((int64_t)UINT64_C(2620));
  int64_t t9331 = ((int64_t)UINT64_C(0));
  int64_t t9332 = ((int64_t)UINT64_C(73));
  f_fixup(t9329,t9330,t9331,t9332);
  uintptr_t t9333 = v0;
  int64_t t9334 = ((int64_t)UINT64_C(2644));
  int64_t t9335 = ((int64_t)UINT64_C(2));
  int64_t t9336 = ((int64_t)UINT64_C(85));
  f_fixup(t9333,t9334,t9335,t9336);
  uintptr_t t9337 = v0;
  int64_t t9338 = ((int64_t)UINT64_C(2656));
  int64_t t9339 = ((int64_t)UINT64_C(0));
  int64_t t9340 = ((int64_t)UINT64_C(73));
  f_fixup(t9337,t9338,t9339,t9340);
  uintptr_t t9341 = v0;
  int64_t t9342 = ((int64_t)UINT64_C(2680));
  int64_t t9343 = ((int64_t)UINT64_C(2));
  int64_t t9344 = ((int64_t)UINT64_C(86));
  f_fixup(t9341,t9342,t9343,t9344);
  uintptr_t t9345 = v0;
  int64_t t9346 = ((int64_t)UINT64_C(2692));
  int64_t t9347 = ((int64_t)UINT64_C(0));
  int64_t t9348 = ((int64_t)UINT64_C(73));
  f_fixup(t9345,t9346,t9347,t9348);
  uintptr_t t9349 = v0;
  int64_t t9350 = ((int64_t)UINT64_C(2716));
  int64_t t9351 = ((int64_t)UINT64_C(2));
  int64_t t9352 = ((int64_t)UINT64_C(87));
  f_fixup(t9349,t9350,t9351,t9352);
  uintptr_t t9353 = v0;
  int64_t t9354 = ((int64_t)UINT64_C(2728));
  int64_t t9355 = ((int64_t)UINT64_C(0));
  int64_t t9356 = ((int64_t)UINT64_C(73));
  f_fixup(t9353,t9354,t9355,t9356);
  uintptr_t t9357 = v0;
  int64_t t9358 = ((int64_t)UINT64_C(2752));
  int64_t t9359 = ((int64_t)UINT64_C(2));
  int64_t t9360 = ((int64_t)UINT64_C(88));
  f_fixup(t9357,t9358,t9359,t9360);
  uintptr_t t9361 = v0;
  int64_t t9362 = ((int64_t)UINT64_C(2764));
  int64_t t9363 = ((int64_t)UINT64_C(0));
  int64_t t9364 = ((int64_t)UINT64_C(73));
  f_fixup(t9361,t9362,t9363,t9364);
  uintptr_t t9365 = v0;
  int64_t t9366 = ((int64_t)UINT64_C(2788));
  int64_t t9367 = ((int64_t)UINT64_C(2));
  int64_t t9368 = ((int64_t)UINT64_C(89));
  f_fixup(t9365,t9366,t9367,t9368);
  uintptr_t t9369 = v0;
  int64_t t9370 = ((int64_t)UINT64_C(2800));
  int64_t t9371 = ((int64_t)UINT64_C(0));
  int64_t t9372 = ((int64_t)UINT64_C(73));
  f_fixup(t9369,t9370,t9371,t9372);
  uintptr_t t9373 = v0;
  int64_t t9374 = ((int64_t)UINT64_C(2824));
  int64_t t9375 = ((int64_t)UINT64_C(2));
  int64_t t9376 = ((int64_t)UINT64_C(90));
  f_fixup(t9373,t9374,t9375,t9376);
  uintptr_t t9377 = v0;
  int64_t t9378 = ((int64_t)UINT64_C(2836));
  int64_t t9379 = ((int64_t)UINT64_C(0));
  int64_t t9380 = ((int64_t)UINT64_C(73));
  f_fixup(t9377,t9378,t9379,t9380);
  uintptr_t t9381 = v0;
  int64_t t9382 = ((int64_t)UINT64_C(2860));
  int64_t t9383 = ((int64_t)UINT64_C(2));
  int64_t t9384 = ((int64_t)UINT64_C(91));
  f_fixup(t9381,t9382,t9383,t9384);
  uintptr_t t9385 = v0;
  int64_t t9386 = ((int64_t)UINT64_C(2872));
  int64_t t9387 = ((int64_t)UINT64_C(0));
  int64_t t9388 = ((int64_t)UINT64_C(73));
  f_fixup(t9385,t9386,t9387,t9388);
  uintptr_t t9389 = v0;
  int64_t t9390 = ((int64_t)UINT64_C(2896));
  int64_t t9391 = ((int64_t)UINT64_C(2));
  int64_t t9392 = ((int64_t)UINT64_C(92));
  f_fixup(t9389,t9390,t9391,t9392);
  uintptr_t t9393 = v0;
  int64_t t9394 = ((int64_t)UINT64_C(2908));
  int64_t t9395 = ((int64_t)UINT64_C(0));
  int64_t t9396 = ((int64_t)UINT64_C(73));
  f_fixup(t9393,t9394,t9395,t9396);
  uintptr_t t9397 = v0;
  int64_t t9398 = ((int64_t)UINT64_C(2932));
  int64_t t9399 = ((int64_t)UINT64_C(2));
  int64_t t9400 = ((int64_t)UINT64_C(93));
  f_fixup(t9397,t9398,t9399,t9400);
  uintptr_t t9401 = v0;
  int64_t t9402 = ((int64_t)UINT64_C(2944));
  int64_t t9403 = ((int64_t)UINT64_C(0));
  int64_t t9404 = ((int64_t)UINT64_C(73));
  f_fixup(t9401,t9402,t9403,t9404);
  uintptr_t t9405 = v0;
  int64_t t9406 = ((int64_t)UINT64_C(2968));
  int64_t t9407 = ((int64_t)UINT64_C(2));
  int64_t t9408 = ((int64_t)UINT64_C(94));
  f_fixup(t9405,t9406,t9407,t9408);
  uintptr_t t9409 = v0;
  int64_t t9410 = ((int64_t)UINT64_C(2980));
  int64_t t9411 = ((int64_t)UINT64_C(0));
  int64_t t9412 = ((int64_t)UINT64_C(73));
  f_fixup(t9409,t9410,t9411,t9412);
  uintptr_t t9413 = v0;
  int64_t t9414 = ((int64_t)UINT64_C(3004));
  int64_t t9415 = ((int64_t)UINT64_C(2));
  int64_t t9416 = ((int64_t)UINT64_C(95));
  f_fixup(t9413,t9414,t9415,t9416);
  uintptr_t t9417 = v0;
  int64_t t9418 = ((int64_t)UINT64_C(3016));
  int64_t t9419 = ((int64_t)UINT64_C(0));
  int64_t t9420 = ((int64_t)UINT64_C(73));
  f_fixup(t9417,t9418,t9419,t9420);
  uintptr_t t9421 = v0;
  int64_t t9422 = ((int64_t)UINT64_C(3040));
  int64_t t9423 = ((int64_t)UINT64_C(2));
  int64_t t9424 = ((int64_t)UINT64_C(96));
  f_fixup(t9421,t9422,t9423,t9424);
  uintptr_t t9425 = v0;
  int64_t t9426 = ((int64_t)UINT64_C(3052));
  int64_t t9427 = ((int64_t)UINT64_C(0));
  int64_t t9428 = ((int64_t)UINT64_C(73));
  f_fixup(t9425,t9426,t9427,t9428);
  uintptr_t t9429 = v0;
  int64_t t9430 = ((int64_t)UINT64_C(5));
  int64_t t9431 = ((int64_t)UINT64_C(104));
  f_put(t9429,t9430,t9431);
}
static void f_rtcall(uintptr_t v0,ApString v1) {
  uintptr_t t9432 = v0;
  ApString t9433 = v1;
  int64_t t9434 = f_runtime_id(t9433);
  bool t9435 = true;
  f_a_branch(t9432,t9434,t9435);
}
static void f_rtcond(uintptr_t v0,int64_t v1,ApString v2) {
  uintptr_t t9436 = v0;
  int64_t t9437 = v1;
  ApString t9438 = v2;
  int64_t t9439 = f_runtime_id(t9438);
  f_a_condition(t9436,t9437,t9439);
}
static void f_rtzero(uintptr_t v0,int64_t v1,ApString v2,bool v3) {
  uintptr_t t9440 = v0;
  int64_t t9441 = v1;
  ApString t9442 = v2;
  int64_t t9443 = f_runtime_id(t9442);
  bool t9444 = v3;
  f_a_zero(t9440,t9441,t9443,t9444);
}
static void f_finite_value(uintptr_t v0) {
  uintptr_t t9445 = v0;
  int64_t t9446 = ((int64_t)UINT64_C(9));
  int64_t t9447 = ((int64_t)UINT64_C(0));
  int64_t t9448 = ((int64_t)UINT64_C(52));
  bool t9449 = false;
  f_a_right(t9445,t9446,t9447,t9448,t9449);
  uintptr_t t9450 = v0;
  int64_t t9451 = ((int64_t)UINT64_C(10));
  int64_t t9452 = ((int64_t)UINT64_C(2047));
  f_a_value(t9450,t9451,t9452);
  uintptr_t t9453 = v0;
  int64_t t9454 = ((int64_t)UINT64_C(2315255808));
  int64_t t9455 = ((int64_t)UINT64_C(9));
  int64_t t9456 = ((int64_t)UINT64_C(9));
  int64_t t9457 = ((int64_t)UINT64_C(10));
  f_a_op3(t9453,t9454,t9455,t9456,t9457);
  uintptr_t t9458 = v0;
  int64_t t9459 = ((int64_t)UINT64_C(9));
  int64_t t9460 = ((int64_t)UINT64_C(2047));
  f_a_cmpi(t9458,t9459,t9460);
  uintptr_t t9461 = v0;
  int64_t t9462 = ((int64_t)UINT64_C(0));
  ApString t9463 = AP_STR("error.float");
  f_rtcond(t9461,t9462,t9463);
}
static int64_t f_argument_type(uintptr_t v0,int64_t v1) {
  uintptr_t t9464 = v0;
  int64_t t9465 = ((int64_t)UINT64_C(9));
  uintptr_t t9466 = f_getp(t9464,t9465);
  int64_t t9467 = v1;
  uintptr_t t9468 = f_list_get(t9466,t9467);
  int64_t t9469 = ((int64_t)UINT64_C(1));
  int64_t t9470 = f_get(t9468,t9469);
  return t9470;
}
static void f_unscale(uintptr_t v0,int64_t v1,int64_t v2) {
  int64_t t9471 = v2;
  int64_t t9472 = ((int64_t)UINT64_C(3));
  bool t9473 = (t9471 == t9472);
  if (t9473) {
    return;
  } else {
  }
  uintptr_t t9474 = v0;
  int64_t t9475 = ((int64_t)UINT64_C(9));
  int64_t t9476 = ((int64_t)UINT64_C(1000000));
  f_a_value(t9474,t9475,t9476);
  uintptr_t t9477 = v0;
  int64_t t9478 = ((int64_t)UINT64_C(2596277248));
  int64_t t9479 = ((int64_t)UINT64_C(10));
  int64_t t9480 = v1;
  int64_t t9481 = ((int64_t)UINT64_C(9));
  f_a_op3(t9477,t9478,t9479,t9480,t9481);
  uintptr_t t9482 = v0;
  int64_t t9483 = ((int64_t)UINT64_C(11));
  int64_t t9484 = ((int64_t)UINT64_C(10));
  int64_t t9485 = ((int64_t)UINT64_C(9));
  int64_t t9486 = v1;
  f_a_msub(t9482,t9483,t9484,t9485,t9486);
  uintptr_t t9487 = v0;
  int64_t t9488 = ((int64_t)UINT64_C(11));
  ApString t9489 = AP_STR("error.integer");
  bool t9490 = true;
  f_rtzero(t9487,t9488,t9489,t9490);
  uintptr_t t9491 = v0;
  int64_t t9492 = v1;
  int64_t t9493 = ((int64_t)UINT64_C(10));
  f_a_mov(t9491,t9492,t9493);
}
static void f_to_number(uintptr_t v0,int64_t v1) {
  uintptr_t t9494 = v0;
  int64_t t9495 = ((int64_t)UINT64_C(9));
  int64_t t9496 = ((int64_t)UINT64_C(1000000));
  f_a_value(t9494,t9495,t9496);
  uintptr_t t9497 = v0;
  int64_t t9498 = ((int64_t)UINT64_C(2604694528));
  int64_t t9499 = ((int64_t)UINT64_C(10));
  int64_t t9500 = v1;
  int64_t t9501 = ((int64_t)UINT64_C(9));
  f_a_op3(t9497,t9498,t9499,t9500,t9501);
  uintptr_t t9502 = v0;
  int64_t t9503 = ((int64_t)UINT64_C(2600500224));
  int64_t t9504 = v1;
  int64_t t9505 = v1;
  int64_t t9506 = ((int64_t)UINT64_C(9));
  f_a_op3(t9502,t9503,t9504,t9505,t9506);
  uintptr_t t9507 = v0;
  int64_t t9508 = ((int64_t)UINT64_C(11));
  int64_t t9509 = v1;
  int64_t t9510 = ((int64_t)UINT64_C(63));
  bool t9511 = true;
  f_a_right(t9507,t9508,t9509,t9510,t9511);
  uintptr_t t9512 = v0;
  int64_t t9513 = ((int64_t)UINT64_C(10));
  int64_t t9514 = ((int64_t)UINT64_C(11));
  f_a_cmp(t9512,t9513,t9514);
  uintptr_t t9515 = v0;
  int64_t t9516 = ((int64_t)UINT64_C(1));
  ApString t9517 = AP_STR("error.overflow");
  f_rtcond(t9515,t9516,t9517);
}
static void f_unsigned_width(uintptr_t v0,int64_t v1,int64_t v2) {
  int64_t v3;
  int64_t t9518 = ((int64_t)UINT64_C(255));
  v3 = t9518;
  int64_t t9519 = v2;
  int64_t t9520 = ((int64_t)UINT64_C(2));
  bool t9521 = (t9519 == t9520);
  if (t9521) {
    int64_t t9522 = ((int64_t)UINT64_C(65535));
    v3 = t9522;
  } else {
  }
  int64_t t9523 = v2;
  int64_t t9524 = ((int64_t)UINT64_C(4));
  bool t9525 = (t9523 == t9524);
  if (t9525) {
    int64_t t9526 = ((int64_t)UINT64_C(4294967295));
    v3 = t9526;
  } else {
  }
  uintptr_t t9527 = v0;
  int64_t t9528 = ((int64_t)UINT64_C(9));
  int64_t t9529 = v3;
  f_a_value(t9527,t9528,t9529);
  uintptr_t t9530 = v0;
  int64_t t9531 = v1;
  int64_t t9532 = ((int64_t)UINT64_C(9));
  f_a_cmp(t9530,t9531,t9532);
  uintptr_t t9533 = v0;
  int64_t t9534 = ((int64_t)UINT64_C(8));
  ApString t9535 = AP_STR("error.byte");
  f_rtcond(t9533,t9534,t9535);
}
static void f_finish_intrinsic(uintptr_t v0,uintptr_t v1) {
  uintptr_t t9536 = v1;
  int64_t t9537 = ((int64_t)UINT64_C(1));
  int64_t t9538 = f_get(t9536,t9537);
  int64_t t9539 = ((int64_t)UINT64_C(6));
  bool t9540 = (t9538 == t9539);
  if (t9540) {
    uintptr_t t9541 = v0;
    int64_t t9542 = ((int64_t)UINT64_C(0));
    int64_t t9543 = ((int64_t)UINT64_C(0));
    f_a_value(t9541,t9542,t9543);
  } else {
  }
  uintptr_t t9544 = v0;
  int64_t t9545 = ((int64_t)UINT64_C(1));
  int64_t t9546 = ((int64_t)UINT64_C(0));
  f_a_value(t9544,t9545,t9546);
}
static void f_write_value(uintptr_t v0) {
  uintptr_t t9547 = v0;
  int64_t t9548 = ((int64_t)UINT64_C(2));
  int64_t t9549 = ((int64_t)UINT64_C(1));
  f_a_mov(t9547,t9548,t9549);
  uintptr_t t9550 = v0;
  int64_t t9551 = ((int64_t)UINT64_C(1));
  int64_t t9552 = ((int64_t)UINT64_C(0));
  f_a_mov(t9550,t9551,t9552);
  uintptr_t t9553 = v0;
  int64_t t9554 = ((int64_t)UINT64_C(0));
  int64_t t9555 = ((int64_t)UINT64_C(1));
  f_a_value(t9553,t9554,t9555);
  uintptr_t t9556 = v0;
  ApString t9557 = AP_STR("runtime.write");
  f_rtcall(t9556,t9557);
}
static void f_emit_raster_line(uintptr_t v0,uintptr_t v1) {
  int64_t v2;
  int64_t v3;
  int64_t v4;
  int64_t t9558 = ((int64_t)UINT64_C(0));
  v2 = t9558;
  while (true) {
    int64_t t9559 = v2;
    int64_t t9560 = ((int64_t)UINT64_C(6));
    bool t9561 = (t9559 < t9560);
    if (!t9561) break;
    uintptr_t t9562 = v0;
    int64_t t9563 = ((int64_t)UINT64_C(9));
    int64_t t9564 = ((int64_t)UINT64_C(31));
    int64_t t9565 = ((int64_t)UINT64_C(7));
    int64_t t9566 = v2;
    int64_t t9567 = ap_sub(t9565,t9566);
    int64_t t9568 = ((int64_t)UINT64_C(16));
    int64_t t9569 = ap_mul(t9567,t9568);
    f_a_load(t9562,t9563,t9564,t9569);
    uintptr_t t9570 = v0;
    int64_t t9571 = v2;
    int64_t t9572 = ((int64_t)UINT64_C(9));
    bool t9573 = true;
    f_a_fmov(t9570,t9571,t9572,t9573);
    int64_t t9574 = v2;
    int64_t t9575 = ((int64_t)UINT64_C(1));
    int64_t t9576 = ap_add(t9574,t9575);
    v2 = t9576;
  }
  uintptr_t t9577 = v0;
  int64_t t9578 = ((int64_t)UINT64_C(6));
  int64_t t9579 = ((int64_t)UINT64_C(31));
  int64_t t9580 = ((int64_t)UINT64_C(16));
  f_a_load(t9577,t9578,t9579,t9580);
  uintptr_t t9581 = v0;
  int64_t t9582 = ((int64_t)UINT64_C(7));
  int64_t t9583 = ((int64_t)UINT64_C(31));
  int64_t t9584 = ((int64_t)UINT64_C(0));
  f_a_load(t9581,t9582,t9583,t9584);
  uintptr_t t9585 = v0;
  int64_t t9586 = ((int64_t)UINT64_C(0));
  int64_t t9587 = ((int64_t)UINT64_C(31));
  int64_t t9588 = ((int64_t)UINT64_C(128));
  f_a_load(t9585,t9586,t9587,t9588);
  uintptr_t t9589 = v0;
  int64_t t9590 = ((int64_t)UINT64_C(1));
  int64_t t9591 = ((int64_t)UINT64_C(31));
  int64_t t9592 = ((int64_t)UINT64_C(136));
  f_a_load(t9589,t9590,t9591,t9592);
  uintptr_t t9593 = v0;
  int64_t t9594 = ((int64_t)UINT64_C(144));
  bool t9595 = false;
  f_a_stack(t9593,t9594,t9595);
  uintptr_t t9596 = v0;
  ApString t9597 = AP_STR("runtime.validate");
  f_rtcall(t9596,t9597);
  uintptr_t t9598 = v0;
  int64_t t9599 = ((int64_t)UINT64_C(9));
  int64_t t9600 = ((int64_t)UINT64_C(64));
  f_a_cmpi(t9598,t9599,t9600);
  uintptr_t t9601 = v0;
  int64_t t9602 = ((int64_t)UINT64_C(3));
  ApString t9603 = AP_STR("error.bounds");
  f_rtcond(t9601,t9602,t9603);
  uintptr_t t9604 = v0;
  int64_t t9605 = ((int64_t)UINT64_C(2));
  int64_t t9606 = ((int64_t)UINT64_C(8));
  int64_t t9607 = ((int64_t)UINT64_C(0));
  f_a_load(t9604,t9605,t9606,t9607);
  uintptr_t t9608 = v0;
  int64_t t9609 = ((int64_t)UINT64_C(3));
  int64_t t9610 = ((int64_t)UINT64_C(8));
  int64_t t9611 = ((int64_t)UINT64_C(8));
  f_a_load(t9608,t9609,t9610,t9611);
  uintptr_t t9612 = v0;
  int64_t t9613 = ((int64_t)UINT64_C(4));
  int64_t t9614 = ((int64_t)UINT64_C(8));
  int64_t t9615 = ((int64_t)UINT64_C(16));
  f_a_load(t9612,t9613,t9614,t9615);
  uintptr_t t9616 = v0;
  int64_t t9617 = ((int64_t)UINT64_C(13));
  int64_t t9618 = ((int64_t)UINT64_C(8));
  int64_t t9619 = ((int64_t)UINT64_C(24));
  f_a_load(t9616,t9617,t9618,t9619);
  uintptr_t t9620 = v0;
  int64_t t9621 = ((int64_t)UINT64_C(14));
  int64_t t9622 = ((int64_t)UINT64_C(4706348692208234544));
  f_a_value(t9620,t9621,t9622);
  uintptr_t t9623 = v0;
  int64_t t9624 = ((int64_t)UINT64_C(13));
  int64_t t9625 = ((int64_t)UINT64_C(14));
  f_a_cmp(t9623,t9624,t9625);
  uintptr_t t9626 = v0;
  int64_t t9627 = ((int64_t)UINT64_C(1));
  ApString t9628 = AP_STR("error.bounds");
  f_rtcond(t9626,t9627,t9628);
  uintptr_t t9629 = v0;
  int64_t t9630 = ((int64_t)UINT64_C(2));
  int64_t t9631 = ((int64_t)UINT64_C(16));
  f_a_cmpi(t9629,t9630,t9631);
  uintptr_t t9632 = v0;
  int64_t t9633 = ((int64_t)UINT64_C(3));
  ApString t9634 = AP_STR("error.bounds");
  f_rtcond(t9632,t9633,t9634);
  uintptr_t t9635 = v0;
  int64_t t9636 = ((int64_t)UINT64_C(2));
  int64_t t9637 = ((int64_t)UINT64_C(2048));
  f_a_cmpi(t9635,t9636,t9637);
  uintptr_t t9638 = v0;
  int64_t t9639 = ((int64_t)UINT64_C(8));
  ApString t9640 = AP_STR("error.bounds");
  f_rtcond(t9638,t9639,t9640);
  uintptr_t t9641 = v0;
  int64_t t9642 = ((int64_t)UINT64_C(3));
  int64_t t9643 = ((int64_t)UINT64_C(16));
  f_a_cmpi(t9641,t9642,t9643);
  uintptr_t t9644 = v0;
  int64_t t9645 = ((int64_t)UINT64_C(3));
  ApString t9646 = AP_STR("error.bounds");
  f_rtcond(t9644,t9645,t9646);
  uintptr_t t9647 = v0;
  int64_t t9648 = ((int64_t)UINT64_C(3));
  int64_t t9649 = ((int64_t)UINT64_C(2048));
  f_a_cmpi(t9647,t9648,t9649);
  uintptr_t t9650 = v0;
  int64_t t9651 = ((int64_t)UINT64_C(8));
  ApString t9652 = AP_STR("error.bounds");
  f_rtcond(t9650,t9651,t9652);
  uintptr_t t9653 = v0;
  int64_t t9654 = ((int64_t)UINT64_C(2600500224));
  int64_t t9655 = ((int64_t)UINT64_C(13));
  int64_t t9656 = ((int64_t)UINT64_C(2));
  int64_t t9657 = ((int64_t)UINT64_C(3));
  f_a_op3(t9653,t9654,t9655,t9656,t9657);
  uintptr_t t9658 = v0;
  int64_t t9659 = ((int64_t)UINT64_C(14));
  int64_t t9660 = ((int64_t)UINT64_C(64));
  f_a_value(t9658,t9659,t9660);
  uintptr_t t9661 = v0;
  int64_t t9662 = ((int64_t)UINT64_C(14));
  int64_t t9663 = ((int64_t)UINT64_C(14));
  int64_t t9664 = ((int64_t)UINT64_C(13));
  int64_t t9665 = ((int64_t)UINT64_C(2));
  f_a_addshift(t9661,t9662,t9663,t9664,t9665);
  uintptr_t t9666 = v0;
  int64_t t9667 = ((int64_t)UINT64_C(4));
  int64_t t9668 = ((int64_t)UINT64_C(14));
  f_a_cmp(t9666,t9667,t9668);
  uintptr_t t9669 = v0;
  int64_t t9670 = ((int64_t)UINT64_C(3));
  ApString t9671 = AP_STR("error.bounds");
  f_rtcond(t9669,t9670,t9671);
  uintptr_t t9672 = v0;
  int64_t t9673 = ((int64_t)UINT64_C(15));
  int64_t t9674 = ((int64_t)UINT64_C(0));
  f_a_value(t9672,t9673,t9674);
  uintptr_t t9675 = v0;
  int64_t t9676 = ((int64_t)UINT64_C(15));
  int64_t t9677 = ((int64_t)UINT64_C(15));
  int64_t t9678 = ((int64_t)UINT64_C(13));
  int64_t t9679 = ((int64_t)UINT64_C(3));
  f_a_addshift(t9675,t9676,t9677,t9678,t9679);
  uintptr_t t9680 = v0;
  int64_t t9681 = ((int64_t)UINT64_C(9));
  int64_t t9682 = ((int64_t)UINT64_C(15));
  f_a_cmp(t9680,t9681,t9682);
  uintptr_t t9683 = v0;
  int64_t t9684 = ((int64_t)UINT64_C(3));
  ApString t9685 = AP_STR("error.bounds");
  f_rtcond(t9683,t9684,t9685);
  uintptr_t t9686 = v0;
  int64_t t9687 = ((int64_t)UINT64_C(9));
  int64_t t9688 = ((int64_t)UINT64_C(9));
  int64_t t9689 = ((int64_t)UINT64_C(15));
  f_a_sub(t9686,t9687,t9688,t9689);
  uintptr_t t9690 = v0;
  int64_t t9691 = ((int64_t)UINT64_C(4));
  int64_t t9692 = ((int64_t)UINT64_C(9));
  f_a_cmp(t9690,t9691,t9692);
  uintptr_t t9693 = v0;
  int64_t t9694 = ((int64_t)UINT64_C(8));
  ApString t9695 = AP_STR("error.bounds");
  f_rtcond(t9693,t9694,t9695);
  uintptr_t t9696 = v0;
  int64_t t9697 = ((int64_t)UINT64_C(6));
  int64_t t9698 = ((int64_t)UINT64_C(1));
  f_a_cmpi(t9696,t9697,t9698);
  uintptr_t t9699 = v0;
  int64_t t9700 = ((int64_t)UINT64_C(3));
  ApString t9701 = AP_STR("error.bounds");
  f_rtcond(t9699,t9700,t9701);
  uintptr_t t9702 = v0;
  int64_t t9703 = ((int64_t)UINT64_C(15));
  int64_t t9704 = ((int64_t)UINT64_C(2));
  int64_t t9705 = ((int64_t)UINT64_C(3));
  f_a_add(t9702,t9703,t9704,t9705);
  uintptr_t t9706 = v0;
  int64_t t9707 = ((int64_t)UINT64_C(15));
  int64_t t9708 = ((int64_t)UINT64_C(15));
  int64_t t9709 = ((int64_t)UINT64_C(2));
  f_a_addi(t9706,t9707,t9708,t9709);
  uintptr_t t9710 = v0;
  int64_t t9711 = ((int64_t)UINT64_C(6));
  int64_t t9712 = ((int64_t)UINT64_C(15));
  f_a_cmp(t9710,t9711,t9712);
  uintptr_t t9713 = v0;
  int64_t t9714 = ((int64_t)UINT64_C(8));
  ApString t9715 = AP_STR("error.bounds");
  f_rtcond(t9713,t9714,t9715);
  uintptr_t t9716 = v0;
  int64_t t9717 = ((int64_t)UINT64_C(14));
  int64_t t9718 = ((int64_t)UINT64_C(4294967295));
  f_a_value(t9716,t9717,t9718);
  uintptr_t t9719 = v0;
  int64_t t9720 = ((int64_t)UINT64_C(7));
  int64_t t9721 = ((int64_t)UINT64_C(14));
  f_a_cmp(t9719,t9720,t9721);
  uintptr_t t9722 = v0;
  int64_t t9723 = ((int64_t)UINT64_C(8));
  ApString t9724 = AP_STR("error.byte");
  f_rtcond(t9722,t9723,t9724);
  uintptr_t t9725 = v0;
  int64_t t9726 = ((int64_t)UINT64_C(0));
  int64_t t9727 = ((int64_t)UINT64_C(8));
  int64_t t9728 = ((int64_t)UINT64_C(64));
  f_a_addi(t9725,t9726,t9727,t9728);
  uintptr_t t9729 = v0;
  int64_t t9730 = ((int64_t)UINT64_C(1));
  int64_t t9731 = ((int64_t)UINT64_C(8));
  int64_t t9732 = ((int64_t)UINT64_C(4));
  f_a_add(t9729,t9730,t9731,t9732);
  uintptr_t t9733 = v0;
  int64_t t9734 = ((int64_t)UINT64_C(16));
  int64_t t9735 = ((int64_t)UINT64_C(13830554455654793216));
  f_a_fconstant(t9733,t9734,t9735);
  uintptr_t t9736 = v0;
  int64_t t9737 = ((int64_t)UINT64_C(14));
  int64_t t9738 = ((int64_t)UINT64_C(2));
  int64_t t9739 = ((int64_t)UINT64_C(1));
  f_a_addi(t9736,t9737,t9738,t9739);
  uintptr_t t9740 = v0;
  int64_t t9741 = ((int64_t)UINT64_C(2657222656));
  int64_t t9742 = ((int64_t)UINT64_C(14));
  int64_t t9743 = ((int64_t)UINT64_C(5));
  int64_t t9744 = ap_shl(t9742,t9743);
  int64_t t9745 = ap_add(t9741,t9744);
  int64_t t9746 = ((int64_t)UINT64_C(17));
  int64_t t9747 = ap_add(t9745,t9746);
  f_emit(t9740,t9747);
  uintptr_t t9748 = v0;
  int64_t t9749 = ((int64_t)UINT64_C(14));
  int64_t t9750 = ((int64_t)UINT64_C(3));
  int64_t t9751 = ((int64_t)UINT64_C(1));
  f_a_addi(t9748,t9749,t9750,t9751);
  uintptr_t t9752 = v0;
  int64_t t9753 = ((int64_t)UINT64_C(2657222656));
  int64_t t9754 = ((int64_t)UINT64_C(14));
  int64_t t9755 = ((int64_t)UINT64_C(5));
  int64_t t9756 = ap_shl(t9754,t9755);
  int64_t t9757 = ap_add(t9753,t9756);
  int64_t t9758 = ((int64_t)UINT64_C(18));
  int64_t t9759 = ap_add(t9757,t9758);
  f_emit(t9752,t9759);
  int64_t t9760 = ((int64_t)UINT64_C(0));
  v2 = t9760;
  while (true) {
    int64_t t9761 = v2;
    int64_t t9762 = ((int64_t)UINT64_C(4));
    bool t9763 = (t9761 < t9762);
    if (!t9763) break;
    uintptr_t t9764 = v0;
    int64_t t9765 = v2;
    int64_t t9766 = ((int64_t)UINT64_C(16));
    f_a_fcmp(t9764,t9765,t9766);
    uintptr_t t9767 = v0;
    int64_t t9768 = ((int64_t)UINT64_C(6));
    ApString t9769 = AP_STR("error.float");
    f_rtcond(t9767,t9768,t9769);
    uintptr_t t9770 = v0;
    int64_t t9771 = ((int64_t)UINT64_C(11));
    ApString t9772 = AP_STR("error.bounds");
    f_rtcond(t9770,t9771,t9772);
    uintptr_t t9773 = v0;
    int64_t t9774 = v2;
    int64_t t9775 = ((int64_t)UINT64_C(17));
    int64_t t9776 = v2;
    int64_t t9777 = ((int64_t)UINT64_C(2));
    int64_t t9778 = ap_rem(t9776,t9777);
    int64_t t9779 = ap_add(t9775,t9778);
    f_a_fcmp(t9773,t9774,t9779);
    uintptr_t t9780 = v0;
    int64_t t9781 = ((int64_t)UINT64_C(12));
    ApString t9782 = AP_STR("error.bounds");
    f_rtcond(t9780,t9781,t9782);
    int64_t t9783 = v2;
    int64_t t9784 = ((int64_t)UINT64_C(1));
    int64_t t9785 = ap_add(t9783,t9784);
    v2 = t9785;
  }
  uintptr_t t9786 = v0;
  int64_t t9787 = ((int64_t)UINT64_C(16));
  int64_t t9788 = ((int64_t)UINT64_C(0));
  f_a_fconstant(t9786,t9787,t9788);
  uintptr_t t9789 = v0;
  int64_t t9790 = ((int64_t)UINT64_C(17));
  int64_t t9791 = ((int64_t)UINT64_C(4696837146684686336));
  f_a_fconstant(t9789,t9790,t9791);
  int64_t t9792 = ((int64_t)UINT64_C(4));
  v2 = t9792;
  while (true) {
    int64_t t9793 = v2;
    int64_t t9794 = ((int64_t)UINT64_C(6));
    bool t9795 = (t9793 < t9794);
    if (!t9795) break;
    uintptr_t t9796 = v0;
    int64_t t9797 = v2;
    int64_t t9798 = ((int64_t)UINT64_C(16));
    f_a_fcmp(t9796,t9797,t9798);
    uintptr_t t9799 = v0;
    int64_t t9800 = ((int64_t)UINT64_C(6));
    ApString t9801 = AP_STR("error.float");
    f_rtcond(t9799,t9800,t9801);
    uintptr_t t9802 = v0;
    int64_t t9803 = ((int64_t)UINT64_C(11));
    ApString t9804 = AP_STR("error.bounds");
    f_rtcond(t9802,t9803,t9804);
    uintptr_t t9805 = v0;
    int64_t t9806 = v2;
    int64_t t9807 = ((int64_t)UINT64_C(17));
    f_a_fcmp(t9805,t9806,t9807);
    uintptr_t t9808 = v0;
    int64_t t9809 = ((int64_t)UINT64_C(12));
    ApString t9810 = AP_STR("error.bounds");
    f_rtcond(t9808,t9809,t9810);
    int64_t t9811 = v2;
    int64_t t9812 = ((int64_t)UINT64_C(1));
    int64_t t9813 = ap_add(t9811,t9812);
    v2 = t9813;
  }
  uintptr_t t9814 = v0;
  int64_t t9815 = ((int64_t)UINT64_C(2));
  int64_t t9816 = ((int64_t)UINT64_C(2));
  int64_t t9817 = ((int64_t)UINT64_C(0));
  ApString t9818 = AP_STR("-");
  f_a_fbinary(t9814,t9815,t9816,t9817,t9818);
  uintptr_t t9819 = v0;
  int64_t t9820 = ((int64_t)UINT64_C(3));
  int64_t t9821 = ((int64_t)UINT64_C(3));
  int64_t t9822 = ((int64_t)UINT64_C(1));
  ApString t9823 = AP_STR("-");
  f_a_fbinary(t9819,t9820,t9821,t9822,t9823);
  uintptr_t t9824 = v0;
  int64_t t9825 = ((int64_t)UINT64_C(5));
  int64_t t9826 = ((int64_t)UINT64_C(5));
  int64_t t9827 = ((int64_t)UINT64_C(4));
  ApString t9828 = AP_STR("-");
  f_a_fbinary(t9824,t9825,t9826,t9827,t9828);
  uintptr_t t9829 = v0;
  int64_t t9830 = ((int64_t)UINT64_C(2657222656));
  int64_t t9831 = ((int64_t)UINT64_C(6));
  int64_t t9832 = ((int64_t)UINT64_C(5));
  int64_t t9833 = ap_shl(t9831,t9832);
  int64_t t9834 = ap_add(t9830,t9833);
  int64_t t9835 = ((int64_t)UINT64_C(6));
  int64_t t9836 = ap_add(t9834,t9835);
  f_emit(t9829,t9836);
  uintptr_t t9837 = v0;
  int64_t t9838 = ((int64_t)UINT64_C(16));
  int64_t t9839 = ((int64_t)UINT64_C(4602678819172646912));
  f_a_fconstant(t9837,t9838,t9839);
  uintptr_t t9840 = v0;
  int64_t t9841 = ((int64_t)UINT64_C(10));
  int64_t t9842 = ((int64_t)UINT64_C(0));
  f_a_value(t9840,t9841,t9842);
  uintptr_t t9843 = v0;
  int64_t t9844 = f_fresh(t9843);
  v3 = t9844;
  uintptr_t t9845 = v0;
  int64_t t9846 = f_fresh(t9845);
  v4 = t9846;
  uintptr_t t9847 = v0;
  int64_t t9848 = v3;
  f_label_here(t9847,t9848);
  uintptr_t t9849 = v0;
  int64_t t9850 = ((int64_t)UINT64_C(2657222656));
  int64_t t9851 = ((int64_t)UINT64_C(10));
  int64_t t9852 = ((int64_t)UINT64_C(5));
  int64_t t9853 = ap_shl(t9851,t9852);
  int64_t t9854 = ap_add(t9850,t9853);
  int64_t t9855 = ((int64_t)UINT64_C(7));
  int64_t t9856 = ap_add(t9854,t9855);
  f_emit(t9849,t9856);
  uintptr_t t9857 = v0;
  int64_t t9858 = ((int64_t)UINT64_C(7));
  int64_t t9859 = ((int64_t)UINT64_C(7));
  int64_t t9860 = ((int64_t)UINT64_C(6));
  ApString t9861 = AP_STR("/");
  f_a_fbinary(t9857,t9858,t9859,t9860,t9861);
  uintptr_t t9862 = v0;
  int64_t t9863 = ((int64_t)UINT64_C(17));
  int64_t t9864 = ((int64_t)UINT64_C(2));
  int64_t t9865 = ((int64_t)UINT64_C(7));
  ApString t9866 = AP_STR("*");
  f_a_fbinary(t9862,t9863,t9864,t9865,t9866);
  uintptr_t t9867 = v0;
  int64_t t9868 = ((int64_t)UINT64_C(17));
  int64_t t9869 = ((int64_t)UINT64_C(0));
  int64_t t9870 = ((int64_t)UINT64_C(17));
  ApString t9871 = AP_STR("+");
  f_a_fbinary(t9867,t9868,t9869,t9870,t9871);
  uintptr_t t9872 = v0;
  int64_t t9873 = ((int64_t)UINT64_C(17));
  int64_t t9874 = ((int64_t)UINT64_C(17));
  int64_t t9875 = ((int64_t)UINT64_C(16));
  ApString t9876 = AP_STR("+");
  f_a_fbinary(t9872,t9873,t9874,t9875,t9876);
  uintptr_t t9877 = v0;
  int64_t t9878 = ((int64_t)UINT64_C(509952000));
  int64_t t9879 = ((int64_t)UINT64_C(17));
  int64_t t9880 = ((int64_t)UINT64_C(5));
  int64_t t9881 = ap_shl(t9879,t9880);
  int64_t t9882 = ap_add(t9878,t9881);
  int64_t t9883 = ((int64_t)UINT64_C(17));
  int64_t t9884 = ap_add(t9882,t9883);
  f_emit(t9877,t9884);
  uintptr_t t9885 = v0;
  int64_t t9886 = ((int64_t)UINT64_C(2658664448));
  int64_t t9887 = ((int64_t)UINT64_C(17));
  int64_t t9888 = ((int64_t)UINT64_C(5));
  int64_t t9889 = ap_shl(t9887,t9888);
  int64_t t9890 = ap_add(t9886,t9889);
  int64_t t9891 = ((int64_t)UINT64_C(4));
  int64_t t9892 = ap_add(t9890,t9891);
  f_emit(t9885,t9892);
  uintptr_t t9893 = v0;
  int64_t t9894 = ((int64_t)UINT64_C(4));
  int64_t t9895 = ((int64_t)UINT64_C(2));
  f_a_cmp(t9893,t9894,t9895);
  uintptr_t t9896 = v0;
  int64_t t9897 = ((int64_t)UINT64_C(2));
  int64_t t9898 = v4;
  f_a_condition(t9896,t9897,t9898);
  uintptr_t t9899 = v0;
  int64_t t9900 = ((int64_t)UINT64_C(18));
  int64_t t9901 = ((int64_t)UINT64_C(3));
  int64_t t9902 = ((int64_t)UINT64_C(7));
  ApString t9903 = AP_STR("*");
  f_a_fbinary(t9899,t9900,t9901,t9902,t9903);
  uintptr_t t9904 = v0;
  int64_t t9905 = ((int64_t)UINT64_C(18));
  int64_t t9906 = ((int64_t)UINT64_C(1));
  int64_t t9907 = ((int64_t)UINT64_C(18));
  ApString t9908 = AP_STR("+");
  f_a_fbinary(t9904,t9905,t9906,t9907,t9908);
  uintptr_t t9909 = v0;
  int64_t t9910 = ((int64_t)UINT64_C(18));
  int64_t t9911 = ((int64_t)UINT64_C(18));
  int64_t t9912 = ((int64_t)UINT64_C(16));
  ApString t9913 = AP_STR("+");
  f_a_fbinary(t9909,t9910,t9911,t9912,t9913);
  uintptr_t t9914 = v0;
  int64_t t9915 = ((int64_t)UINT64_C(509952000));
  int64_t t9916 = ((int64_t)UINT64_C(18));
  int64_t t9917 = ((int64_t)UINT64_C(5));
  int64_t t9918 = ap_shl(t9916,t9917);
  int64_t t9919 = ap_add(t9915,t9918);
  int64_t t9920 = ((int64_t)UINT64_C(18));
  int64_t t9921 = ap_add(t9919,t9920);
  f_emit(t9914,t9921);
  uintptr_t t9922 = v0;
  int64_t t9923 = ((int64_t)UINT64_C(2658664448));
  int64_t t9924 = ((int64_t)UINT64_C(18));
  int64_t t9925 = ((int64_t)UINT64_C(5));
  int64_t t9926 = ap_shl(t9924,t9925);
  int64_t t9927 = ap_add(t9923,t9926);
  int64_t t9928 = ((int64_t)UINT64_C(5));
  int64_t t9929 = ap_add(t9927,t9928);
  f_emit(t9922,t9929);
  uintptr_t t9930 = v0;
  int64_t t9931 = ((int64_t)UINT64_C(5));
  int64_t t9932 = ((int64_t)UINT64_C(3));
  f_a_cmp(t9930,t9931,t9932);
  uintptr_t t9933 = v0;
  int64_t t9934 = ((int64_t)UINT64_C(2));
  int64_t t9935 = v4;
  f_a_condition(t9933,t9934,t9935);
  uintptr_t t9936 = v0;
  int64_t t9937 = ((int64_t)UINT64_C(19));
  int64_t t9938 = ((int64_t)UINT64_C(5));
  int64_t t9939 = ((int64_t)UINT64_C(7));
  ApString t9940 = AP_STR("*");
  f_a_fbinary(t9936,t9937,t9938,t9939,t9940);
  uintptr_t t9941 = v0;
  int64_t t9942 = ((int64_t)UINT64_C(19));
  int64_t t9943 = ((int64_t)UINT64_C(4));
  int64_t t9944 = ((int64_t)UINT64_C(19));
  ApString t9945 = AP_STR("+");
  f_a_fbinary(t9941,t9942,t9943,t9944,t9945);
  uintptr_t t9946 = v0;
  int64_t t9947 = ((int64_t)UINT64_C(2600468480));
  int64_t t9948 = ((int64_t)UINT64_C(2));
  int64_t t9949 = ((int64_t)UINT64_C(16));
  int64_t t9950 = ap_shl(t9948,t9949);
  int64_t t9951 = ap_add(t9947,t9950);
  int64_t t9952 = ((int64_t)UINT64_C(4));
  int64_t t9953 = ((int64_t)UINT64_C(10));
  int64_t t9954 = ap_shl(t9952,t9953);
  int64_t t9955 = ap_add(t9951,t9954);
  int64_t t9956 = ((int64_t)UINT64_C(5));
  int64_t t9957 = ((int64_t)UINT64_C(5));
  int64_t t9958 = ap_shl(t9956,t9957);
  int64_t t9959 = ap_add(t9955,t9958);
  int64_t t9960 = ((int64_t)UINT64_C(9));
  int64_t t9961 = ap_add(t9959,t9960);
  f_emit(t9946,t9961);
  uintptr_t t9962 = v0;
  int64_t t9963 = ((int64_t)UINT64_C(12));
  int64_t t9964 = ((int64_t)UINT64_C(1));
  int64_t t9965 = ((int64_t)UINT64_C(9));
  int64_t t9966 = ((int64_t)UINT64_C(3));
  f_a_addshift(t9962,t9963,t9964,t9965,t9966);
  uintptr_t t9967 = v0;
  int64_t t9968 = ((int64_t)UINT64_C(4248829952));
  int64_t t9969 = ((int64_t)UINT64_C(12));
  int64_t t9970 = ((int64_t)UINT64_C(5));
  int64_t t9971 = ap_shl(t9969,t9970);
  int64_t t9972 = ap_add(t9968,t9971);
  int64_t t9973 = ((int64_t)UINT64_C(20));
  int64_t t9974 = ap_add(t9972,t9973);
  f_emit(t9967,t9974);
  uintptr_t t9975 = v0;
  int64_t t9976 = ((int64_t)UINT64_C(19));
  int64_t t9977 = ((int64_t)UINT64_C(20));
  f_a_fcmp(t9975,t9976,t9977);
  uintptr_t t9978 = v0;
  int64_t t9979 = ((int64_t)UINT64_C(11));
  int64_t t9980 = v4;
  f_a_condition(t9978,t9979,t9980);
  uintptr_t t9981 = v0;
  int64_t t9982 = ((int64_t)UINT64_C(4244635648));
  int64_t t9983 = ((int64_t)UINT64_C(12));
  int64_t t9984 = ((int64_t)UINT64_C(5));
  int64_t t9985 = ap_shl(t9983,t9984);
  int64_t t9986 = ap_add(t9982,t9985);
  int64_t t9987 = ((int64_t)UINT64_C(19));
  int64_t t9988 = ap_add(t9986,t9987);
  f_emit(t9981,t9988);
  uintptr_t t9989 = v0;
  int64_t t9990 = ((int64_t)UINT64_C(11));
  int64_t t9991 = ((int64_t)UINT64_C(0));
  int64_t t9992 = ((int64_t)UINT64_C(9));
  int64_t t9993 = ((int64_t)UINT64_C(2));
  f_a_addshift(t9989,t9990,t9991,t9992,t9993);
  uintptr_t t9994 = v0;
  int64_t t9995 = ((int64_t)UINT64_C(3103784960));
  int64_t t9996 = ((int64_t)UINT64_C(11));
  int64_t t9997 = ((int64_t)UINT64_C(5));
  int64_t t9998 = ap_shl(t9996,t9997);
  int64_t t9999 = ap_add(t9995,t9998);
  int64_t t10000 = ((int64_t)UINT64_C(7));
  int64_t t10001 = ap_add(t9999,t10000);
  f_emit(t9994,t10001);
  uintptr_t t10002 = v0;
  int64_t t10003 = v4;
  f_label_here(t10002,t10003);
  uintptr_t t10004 = v0;
  int64_t t10005 = ((int64_t)UINT64_C(10));
  int64_t t10006 = ((int64_t)UINT64_C(10));
  int64_t t10007 = ((int64_t)UINT64_C(1));
  f_a_addi(t10004,t10005,t10006,t10007);
  uintptr_t t10008 = v0;
  int64_t t10009 = ((int64_t)UINT64_C(10));
  int64_t t10010 = ((int64_t)UINT64_C(6));
  f_a_cmp(t10008,t10009,t10010);
  uintptr_t t10011 = v0;
  int64_t t10012 = ((int64_t)UINT64_C(9));
  int64_t t10013 = v3;
  f_a_condition(t10011,t10012,t10013);
  uintptr_t t10014 = v0;
  uintptr_t t10015 = v1;
  f_finish_intrinsic(t10014,t10015);
}
static void f_intrinsic(uintptr_t v0,uintptr_t v1) {
  ApString v2;
  int64_t v3;
  int64_t v4;
  int64_t v5;
  int64_t v6;
  int64_t v7;
  int64_t v8;
  int64_t v9;
  int64_t v10;
  int64_t v11;
  int64_t v12;
  int64_t v13;
  int64_t v14;
  int64_t v15;
  int64_t v16;
  int64_t v17;
  int64_t v18;
  int64_t v19;
  int64_t v20;
  ApString v21;
  int64_t v22;
  int64_t v23;
  int64_t v24;
  int64_t v25;
  int64_t v26;
  bool v27;
  int64_t v28;
  int64_t v29;
  int64_t v30;
  int64_t v31;
  int64_t v32;
  int64_t v33;
  bool v34;
  bool v35;
  int64_t v36;
  int64_t v37;
  int64_t v38;
  int64_t v39;
  uintptr_t t10016 = v1;
  int64_t t10017 = ((int64_t)UINT64_C(4));
  ApString t10018 = f_gets(t10016,t10017);
  v2 = t10018;
  uintptr_t t10019 = v1;
  int64_t t10020 = ((int64_t)UINT64_C(10));
  int64_t t10021 = f_get(t10019,t10020);
  v3 = t10021;
  ApString t10022 = v2;
  ApString t10023 = AP_STR("_parallel");
  bool t10024 = ap_equal(t10022,t10023);
  if (t10024) {
    uintptr_t t10025 = v0;
    int64_t t10026 = ((int64_t)UINT64_C(0));
    int64_t t10027 = ((int64_t)UINT64_C(31));
    int64_t t10028 = ((int64_t)UINT64_C(64));
    f_a_load(t10025,t10026,t10027,t10028);
    uintptr_t t10029 = v0;
    int64_t t10030 = ((int64_t)UINT64_C(1));
    int64_t t10031 = ((int64_t)UINT64_C(31));
    int64_t t10032 = ((int64_t)UINT64_C(72));
    f_a_load(t10029,t10030,t10031,t10032);
    uintptr_t t10033 = v0;
    ApString t10034 = AP_STR("runtime.validate");
    f_rtcall(t10033,t10034);
    uintptr_t t10035 = v0;
    int64_t t10036 = ((int64_t)UINT64_C(3));
    int64_t t10037 = ((int64_t)UINT64_C(31));
    int64_t t10038 = ((int64_t)UINT64_C(80));
    f_a_load(t10035,t10036,t10037,t10038);
    uintptr_t t10039 = v0;
    int64_t t10040 = ((int64_t)UINT64_C(16));
    int64_t t10041 = ((int64_t)UINT64_C(31));
    int64_t t10042 = ((int64_t)UINT64_C(16));
    f_a_load(t10039,t10040,t10041,t10042);
    uintptr_t t10043 = v0;
    int64_t t10044 = ((int64_t)UINT64_C(3));
    ApString t10045 = AP_STR("error.bounds");
    bool t10046 = false;
    f_rtzero(t10043,t10044,t10045,t10046);
    uintptr_t t10047 = v0;
    int64_t t10048 = ((int64_t)UINT64_C(16));
    ApString t10049 = AP_STR("error.bounds");
    bool t10050 = false;
    f_rtzero(t10047,t10048,t10049,t10050);
    uintptr_t t10051 = v0;
    int64_t t10052 = ((int64_t)UINT64_C(10));
    int64_t t10053 = ((int64_t)UINT64_C(31));
    int64_t t10054 = ((int64_t)UINT64_C(48));
    f_a_load(t10051,t10052,t10053,t10054);
    uintptr_t t10055 = v0;
    int64_t t10056 = ((int64_t)UINT64_C(11));
    int64_t t10057 = ((int64_t)UINT64_C(31));
    int64_t t10058 = ((int64_t)UINT64_C(32));
    f_a_load(t10055,t10056,t10057,t10058);
    uintptr_t t10059 = v0;
    int64_t t10060 = ((int64_t)UINT64_C(10));
    int64_t t10061 = ((int64_t)UINT64_C(0));
    f_a_cmpi(t10059,t10060,t10061);
    uintptr_t t10062 = v0;
    int64_t t10063 = ((int64_t)UINT64_C(11));
    ApString t10064 = AP_STR("error.bounds");
    f_rtcond(t10062,t10063,t10064);
    uintptr_t t10065 = v0;
    int64_t t10066 = ((int64_t)UINT64_C(11));
    int64_t t10067 = ((int64_t)UINT64_C(1));
    f_a_cmpi(t10065,t10066,t10067);
    uintptr_t t10068 = v0;
    int64_t t10069 = ((int64_t)UINT64_C(11));
    ApString t10070 = AP_STR("error.bounds");
    f_rtcond(t10068,t10069,t10070);
    uintptr_t t10071 = v0;
    int64_t t10072 = ((int64_t)UINT64_C(11));
    int64_t t10073 = ((int64_t)UINT64_C(64));
    f_a_cmpi(t10071,t10072,t10073);
    uintptr_t t10074 = v0;
    int64_t t10075 = ((int64_t)UINT64_C(12));
    ApString t10076 = AP_STR("error.bounds");
    f_rtcond(t10074,t10075,t10076);
    uintptr_t t10077 = v0;
    int64_t t10078 = ((int64_t)UINT64_C(1));
    int64_t t10079 = ((int64_t)UINT64_C(31));
    int64_t t10080 = ((int64_t)UINT64_C(0));
    f_a_load(t10077,t10078,t10079,t10080);
    uintptr_t t10081 = v0;
    int64_t t10082 = ((int64_t)UINT64_C(48));
    bool t10083 = true;
    f_a_stack(t10081,t10082,t10083);
    uintptr_t t10084 = v0;
    int64_t t10085 = ((int64_t)UINT64_C(12));
    int64_t t10086 = ((int64_t)UINT64_C(31));
    int64_t t10087 = ((int64_t)UINT64_C(112));
    f_a_load(t10084,t10085,t10086,t10087);
    uintptr_t t10088 = v0;
    int64_t t10089 = ((int64_t)UINT64_C(12));
    int64_t t10090 = ((int64_t)UINT64_C(31));
    int64_t t10091 = ((int64_t)UINT64_C(0));
    f_a_store(t10088,t10089,t10090,t10091);
    uintptr_t t10092 = v0;
    int64_t t10093 = ((int64_t)UINT64_C(12));
    int64_t t10094 = ((int64_t)UINT64_C(31));
    int64_t t10095 = ((int64_t)UINT64_C(120));
    f_a_load(t10092,t10093,t10094,t10095);
    uintptr_t t10096 = v0;
    int64_t t10097 = ((int64_t)UINT64_C(12));
    int64_t t10098 = ((int64_t)UINT64_C(31));
    int64_t t10099 = ((int64_t)UINT64_C(8));
    f_a_store(t10096,t10097,t10098,t10099);
    uintptr_t t10100 = v0;
    int64_t t10101 = ((int64_t)UINT64_C(27));
    int64_t t10102 = ((int64_t)UINT64_C(31));
    int64_t t10103 = ((int64_t)UINT64_C(16));
    f_a_store(t10100,t10101,t10102,t10103);
    uintptr_t t10104 = v0;
    int64_t t10105 = ((int64_t)UINT64_C(10));
    int64_t t10106 = ((int64_t)UINT64_C(31));
    int64_t t10107 = ((int64_t)UINT64_C(24));
    f_a_store(t10104,t10105,t10106,t10107);
    uintptr_t t10108 = v0;
    int64_t t10109 = ((int64_t)UINT64_C(11));
    int64_t t10110 = ((int64_t)UINT64_C(31));
    int64_t t10111 = ((int64_t)UINT64_C(32));
    f_a_store(t10108,t10109,t10110,t10111);
    uintptr_t t10112 = v0;
    int64_t t10113 = ((int64_t)UINT64_C(0));
    int64_t t10114 = ((int64_t)UINT64_C(11));
    f_a_mov(t10112,t10113,t10114);
    uintptr_t t10115 = v0;
    int64_t t10116 = ((int64_t)UINT64_C(2));
    int64_t t10117 = ((int64_t)UINT64_C(31));
    int64_t t10118 = ((int64_t)UINT64_C(0));
    f_a_addi(t10115,t10116,t10117,t10118);
    uintptr_t t10119 = v0;
    int64_t t10120 = ((int64_t)UINT64_C(3594453504));
    f_emit(t10119,t10120);
    uintptr_t t10121 = v0;
    int64_t t10122 = ((int64_t)UINT64_C(144));
    bool t10123 = false;
    f_a_stack(t10121,t10122,t10123);
    uintptr_t t10124 = v0;
    int64_t t10125 = ((int64_t)UINT64_C(0));
    int64_t t10126 = ((int64_t)UINT64_C(0));
    f_a_value(t10124,t10125,t10126);
    uintptr_t t10127 = v0;
    int64_t t10128 = ((int64_t)UINT64_C(1));
    int64_t t10129 = ((int64_t)UINT64_C(0));
    f_a_value(t10127,t10128,t10129);
    return;
  } else {
  }
  ApString t10130 = v2;
  ApString t10131 = AP_STR("_raster_line");
  bool t10132 = ap_equal(t10130,t10131);
  if (t10132) {
    uintptr_t t10133 = v0;
    uintptr_t t10134 = v1;
    f_emit_raster_line(t10133,t10134);
    return;
  } else {
  }
  ApString t10135 = v2;
  ApString t10136 = AP_STR("dlopen");
  bool t10137 = ap_equal(t10135,t10136);
  bool t10138 = t10137;
  if (!t10138) {
    ApString t10139 = v2;
    ApString t10140 = AP_STR("dlsym");
    bool t10141 = ap_equal(t10139,t10140);
    t10138 = t10141;
  }
  if (t10138) {
    int64_t t10142 = ((int64_t)UINT64_C(25));
    v4 = t10142;
    ApString t10143 = v2;
    ApString t10144 = AP_STR("dlsym");
    bool t10145 = ap_equal(t10143,t10144);
    if (t10145) {
      int64_t t10146 = ((int64_t)UINT64_C(26));
      v4 = t10146;
    } else {
    }
    uintptr_t t10147 = v0;
    int64_t t10148 = v4;
    int64_t t10149 = f_get(t10147,t10148);
    int64_t t10150 = ((int64_t)UINT64_C(0));
    bool t10151 = (t10149 == t10150);
    if (t10151) {
      uintptr_t t10152 = v0;
      int64_t t10153 = v4;
      uintptr_t t10154 = v0;
      int64_t t10155 = f_fresh(t10154);
      f_put(t10152,t10153,t10155);
    } else {
    }
    uintptr_t t10156 = v0;
    int64_t t10157 = ((int64_t)UINT64_C(0));
    int64_t t10158 = ((int64_t)UINT64_C(31));
    int64_t t10159 = ((int64_t)UINT64_C(16));
    f_a_load(t10156,t10157,t10158,t10159);
    uintptr_t t10160 = v0;
    int64_t t10161 = ((int64_t)UINT64_C(1));
    int64_t t10162 = ((int64_t)UINT64_C(31));
    int64_t t10163 = ((int64_t)UINT64_C(0));
    f_a_load(t10160,t10161,t10162,t10163);
    uintptr_t t10164 = v0;
    int64_t t10165 = ((int64_t)UINT64_C(16));
    uintptr_t t10166 = v0;
    int64_t t10167 = v4;
    int64_t t10168 = f_get(t10166,t10167);
    f_a_address(t10164,t10165,t10168);
    uintptr_t t10169 = v0;
    int64_t t10170 = ((int64_t)UINT64_C(16));
    int64_t t10171 = ((int64_t)UINT64_C(16));
    int64_t t10172 = ((int64_t)UINT64_C(0));
    f_a_load(t10169,t10170,t10171,t10172);
    uintptr_t t10173 = v0;
    int64_t t10174 = ((int64_t)UINT64_C(32));
    bool t10175 = false;
    f_a_stack(t10173,t10174,t10175);
    uintptr_t t10176 = v0;
    int64_t t10177 = ((int64_t)UINT64_C(3594453504));
    f_emit(t10176,t10177);
    uintptr_t t10178 = v0;
    int64_t t10179 = ((int64_t)UINT64_C(1));
    int64_t t10180 = ((int64_t)UINT64_C(0));
    f_a_value(t10178,t10179,t10180);
    return;
  } else {
  }
  ApString t10181 = v2;
  ApString t10182 = AP_STR("ccall");
  bool t10183 = f_starts(t10181,t10182);
  if (t10183) {
    uintptr_t t10184 = v0;
    int64_t t10185 = ((int64_t)UINT64_C(16));
    int64_t t10186 = ((int64_t)UINT64_C(31));
    int64_t t10187 = v3;
    int64_t t10188 = ((int64_t)UINT64_C(1));
    int64_t t10189 = ap_sub(t10187,t10188);
    int64_t t10190 = ((int64_t)UINT64_C(16));
    int64_t t10191 = ap_mul(t10189,t10190);
    f_a_load(t10184,t10185,t10186,t10191);
    int64_t t10192 = ((int64_t)UINT64_C(0));
    v5 = t10192;
    int64_t t10193 = ((int64_t)UINT64_C(0));
    v6 = t10193;
    int64_t t10194 = ((int64_t)UINT64_C(1));
    v7 = t10194;
    while (true) {
      int64_t t10195 = v7;
      int64_t t10196 = v3;
      bool t10197 = (t10195 < t10196);
      if (!t10197) break;
      uintptr_t t10198 = v1;
      int64_t t10199 = v7;
      int64_t t10200 = f_argument_type(t10198,t10199);
      int64_t t10201 = ((int64_t)UINT64_C(7));
      bool t10202 = (t10200 == t10201);
      if (t10202) {
        uintptr_t t10203 = v0;
        int64_t t10204 = ((int64_t)UINT64_C(9));
        int64_t t10205 = ((int64_t)UINT64_C(31));
        int64_t t10206 = v3;
        int64_t t10207 = v7;
        int64_t t10208 = ap_sub(t10206,t10207);
        int64_t t10209 = ((int64_t)UINT64_C(1));
        int64_t t10210 = ap_sub(t10208,t10209);
        int64_t t10211 = ((int64_t)UINT64_C(16));
        int64_t t10212 = ap_mul(t10210,t10211);
        f_a_load(t10203,t10204,t10205,t10212);
        uintptr_t t10213 = v0;
        int64_t t10214 = v6;
        int64_t t10215 = ((int64_t)UINT64_C(9));
        bool t10216 = true;
        f_a_fmov(t10213,t10214,t10215,t10216);
        int64_t t10217 = v6;
        int64_t t10218 = ((int64_t)UINT64_C(1));
        int64_t t10219 = ap_add(t10217,t10218);
        v6 = t10219;
      } else {
        uintptr_t t10220 = v0;
        int64_t t10221 = v5;
        int64_t t10222 = ((int64_t)UINT64_C(31));
        int64_t t10223 = v3;
        int64_t t10224 = v7;
        int64_t t10225 = ap_sub(t10223,t10224);
        int64_t t10226 = ((int64_t)UINT64_C(1));
        int64_t t10227 = ap_sub(t10225,t10226);
        int64_t t10228 = ((int64_t)UINT64_C(16));
        int64_t t10229 = ap_mul(t10227,t10228);
        f_a_load(t10220,t10221,t10222,t10229);
        int64_t t10230 = v5;
        int64_t t10231 = ((int64_t)UINT64_C(1));
        int64_t t10232 = ap_add(t10230,t10231);
        v5 = t10232;
      }
      int64_t t10233 = v7;
      int64_t t10234 = ((int64_t)UINT64_C(1));
      int64_t t10235 = ap_add(t10233,t10234);
      v7 = t10235;
    }
    uintptr_t t10236 = v0;
    int64_t t10237 = v3;
    int64_t t10238 = ((int64_t)UINT64_C(16));
    int64_t t10239 = ap_mul(t10237,t10238);
    bool t10240 = false;
    f_a_stack(t10236,t10239,t10240);
    uintptr_t t10241 = v0;
    int64_t t10242 = ((int64_t)UINT64_C(16));
    ApString t10243 = AP_STR("error.bounds");
    bool t10244 = false;
    f_rtzero(t10241,t10242,t10243,t10244);
    uintptr_t t10245 = v0;
    int64_t t10246 = ((int64_t)UINT64_C(3594453504));
    f_emit(t10245,t10246);
    ApString t10247 = v2;
    ApString t10248 = AP_STR("ccallf");
    bool t10249 = f_starts(t10247,t10248);
    if (t10249) {
      int64_t t10250 = ((int64_t)UINT64_C(0));
      v8 = t10250;
      ApString t10251 = v2;
      int64_t t10252 = ap_scale(ap_length_string(t10251));
      int64_t t10253 = ap_unscale(t10252);
      int64_t t10254 = ((int64_t)UINT64_C(7));
      bool t10255 = (t10253 == t10254);
      if (t10255) {
        ApString t10256 = v2;
        int64_t t10257 = ((int64_t)UINT64_C(6));
        int64_t t10258 = ap_byte(t10256,t10257);
        int64_t t10259 = ((int64_t)UINT64_C(48));
        int64_t t10260 = ap_sub(t10258,t10259);
        v8 = t10260;
      } else {
      }
      uintptr_t t10261 = v0;
      int64_t t10262 = ((int64_t)UINT64_C(0));
      int64_t t10263 = v8;
      bool t10264 = false;
      f_a_fmov(t10261,t10262,t10263,t10264);
    } else {
    }
    ApString t10265 = v2;
    ApString t10266 = AP_STR("ccallv");
    bool t10267 = ap_equal(t10265,t10266);
    if (t10267) {
      uintptr_t t10268 = v0;
      int64_t t10269 = ((int64_t)UINT64_C(0));
      int64_t t10270 = ((int64_t)UINT64_C(0));
      f_a_value(t10268,t10269,t10270);
    } else {
    }
    uintptr_t t10271 = v0;
    int64_t t10272 = ((int64_t)UINT64_C(1));
    int64_t t10273 = ((int64_t)UINT64_C(0));
    f_a_value(t10271,t10272,t10273);
    return;
  } else {
  }
  ApString t10274 = v2;
  ApString t10275 = AP_STR("syscall");
  bool t10276 = ap_equal(t10274,t10275);
  bool t10277 = t10276;
  if (!t10277) {
    ApString t10278 = v2;
    ApString t10279 = AP_STR("asm32");
    bool t10280 = ap_equal(t10278,t10279);
    t10277 = t10280;
  }
  if (t10277) {
    ApString t10281 = v2;
    ApString t10282 = AP_STR("syscall");
    bool t10283 = ap_equal(t10281,t10282);
    if (t10283) {
      uintptr_t t10284 = v0;
      int64_t t10285 = ((int64_t)UINT64_C(16));
      int64_t t10286 = ((int64_t)UINT64_C(31));
      int64_t t10287 = v3;
      int64_t t10288 = ((int64_t)UINT64_C(1));
      int64_t t10289 = ap_sub(t10287,t10288);
      int64_t t10290 = ((int64_t)UINT64_C(16));
      int64_t t10291 = ap_mul(t10289,t10290);
      f_a_load(t10284,t10285,t10286,t10291);
    } else {
      int64_t t10292 = ((int64_t)UINT64_C(0));
      v9 = t10292;
      while (true) {
        int64_t t10293 = v9;
        int64_t t10294 = ((int64_t)UINT64_C(6));
        bool t10295 = (t10293 < t10294);
        if (!t10295) break;
        uintptr_t t10296 = v0;
        int64_t t10297 = v9;
        int64_t t10298 = ((int64_t)UINT64_C(0));
        f_a_value(t10296,t10297,t10298);
        int64_t t10299 = v9;
        int64_t t10300 = ((int64_t)UINT64_C(1));
        int64_t t10301 = ap_add(t10299,t10300);
        v9 = t10301;
      }
    }
    int64_t t10302 = ((int64_t)UINT64_C(1));
    v10 = t10302;
    while (true) {
      int64_t t10303 = v10;
      int64_t t10304 = v3;
      bool t10305 = (t10303 < t10304);
      if (!t10305) break;
      uintptr_t t10306 = v0;
      int64_t t10307 = v10;
      int64_t t10308 = ((int64_t)UINT64_C(1));
      int64_t t10309 = ap_sub(t10307,t10308);
      int64_t t10310 = ((int64_t)UINT64_C(31));
      int64_t t10311 = v3;
      int64_t t10312 = v10;
      int64_t t10313 = ap_sub(t10311,t10312);
      int64_t t10314 = ((int64_t)UINT64_C(1));
      int64_t t10315 = ap_sub(t10313,t10314);
      int64_t t10316 = ((int64_t)UINT64_C(16));
      int64_t t10317 = ap_mul(t10315,t10316);
      f_a_load(t10306,t10309,t10310,t10317);
      int64_t t10318 = v10;
      int64_t t10319 = ((int64_t)UINT64_C(1));
      int64_t t10320 = ap_add(t10318,t10319);
      v10 = t10320;
    }
    uintptr_t t10321 = v0;
    int64_t t10322 = v3;
    int64_t t10323 = ((int64_t)UINT64_C(16));
    int64_t t10324 = ap_mul(t10322,t10323);
    bool t10325 = false;
    f_a_stack(t10321,t10324,t10325);
    ApString t10326 = v2;
    ApString t10327 = AP_STR("syscall");
    bool t10328 = ap_equal(t10326,t10327);
    if (t10328) {
      uintptr_t t10329 = v0;
      int64_t t10330 = ((int64_t)UINT64_C(3556773889));
      f_emit(t10329,t10330);
      uintptr_t t10331 = v0;
      int64_t t10332 = f_fresh(t10331);
      v11 = t10332;
      uintptr_t t10333 = v0;
      int64_t t10334 = ((int64_t)UINT64_C(3));
      int64_t t10335 = v11;
      f_a_condition(t10333,t10334,t10335);
      uintptr_t t10336 = v0;
      int64_t t10337 = ((int64_t)UINT64_C(0));
      int64_t t10338 = ((int64_t)UINT64_C(0));
      bool t10339 = false;
      f_a_neg(t10336,t10337,t10338,t10339);
      uintptr_t t10340 = v0;
      int64_t t10341 = v11;
      f_label_here(t10340,t10341);
    } else {
      uintptr_t t10342 = v0;
      uintptr_t t10343 = v1;
      int64_t t10344 = ((int64_t)UINT64_C(9));
      uintptr_t t10345 = f_getp(t10343,t10344);
      int64_t t10346 = ((int64_t)UINT64_C(0));
      uintptr_t t10347 = f_list_get(t10345,t10346);
      int64_t t10348 = ((int64_t)UINT64_C(3));
      int64_t t10349 = f_get(t10347,t10348);
      f_emit(t10342,t10349);
    }
    uintptr_t t10350 = v0;
    int64_t t10351 = ((int64_t)UINT64_C(1));
    int64_t t10352 = ((int64_t)UINT64_C(0));
    f_a_value(t10350,t10351,t10352);
    return;
  } else {
  }
  int64_t t10353 = ((int64_t)UINT64_C(0));
  v12 = t10353;
  while (true) {
    int64_t t10354 = v12;
    int64_t t10355 = v3;
    bool t10356 = (t10354 < t10355);
    if (!t10356) break;
    uintptr_t t10357 = v0;
    int64_t t10358 = v12;
    int64_t t10359 = ((int64_t)UINT64_C(2));
    int64_t t10360 = ap_mul(t10358,t10359);
    int64_t t10361 = ((int64_t)UINT64_C(31));
    int64_t t10362 = v3;
    int64_t t10363 = v12;
    int64_t t10364 = ap_sub(t10362,t10363);
    int64_t t10365 = ((int64_t)UINT64_C(1));
    int64_t t10366 = ap_sub(t10364,t10365);
    int64_t t10367 = ((int64_t)UINT64_C(16));
    int64_t t10368 = ap_mul(t10366,t10367);
    f_a_load(t10357,t10360,t10361,t10368);
    uintptr_t t10369 = v0;
    int64_t t10370 = v12;
    int64_t t10371 = ((int64_t)UINT64_C(2));
    int64_t t10372 = ap_mul(t10370,t10371);
    int64_t t10373 = ((int64_t)UINT64_C(1));
    int64_t t10374 = ap_add(t10372,t10373);
    int64_t t10375 = ((int64_t)UINT64_C(31));
    int64_t t10376 = v3;
    int64_t t10377 = v12;
    int64_t t10378 = ap_sub(t10376,t10377);
    int64_t t10379 = ((int64_t)UINT64_C(1));
    int64_t t10380 = ap_sub(t10378,t10379);
    int64_t t10381 = ((int64_t)UINT64_C(16));
    int64_t t10382 = ap_mul(t10380,t10381);
    int64_t t10383 = ((int64_t)UINT64_C(8));
    int64_t t10384 = ap_add(t10382,t10383);
    f_a_load(t10369,t10374,t10375,t10384);
    int64_t t10385 = v12;
    int64_t t10386 = ((int64_t)UINT64_C(1));
    int64_t t10387 = ap_add(t10385,t10386);
    v12 = t10387;
  }
  uintptr_t t10388 = v0;
  int64_t t10389 = v3;
  int64_t t10390 = ((int64_t)UINT64_C(16));
  int64_t t10391 = ap_mul(t10389,t10390);
  bool t10392 = false;
  f_a_stack(t10388,t10391,t10392);
  ApString t10393 = v2;
  ApString t10394 = AP_STR("clock");
  bool t10395 = ap_equal(t10393,t10394);
  bool t10396 = t10395;
  if (!t10396) {
    ApString t10397 = v2;
    ApString t10398 = AP_STR("sleep");
    bool t10399 = ap_equal(t10397,t10398);
    t10396 = t10399;
  }
  bool t10400 = t10396;
  if (!t10400) {
    ApString t10401 = v2;
    ApString t10402 = AP_STR("sleep_until");
    bool t10403 = ap_equal(t10401,t10402);
    t10400 = t10403;
  }
  if (t10400) {
    ApString t10404 = v2;
    ApString t10405 = AP_STR("clock");
    bool t10406 = ap_equal(t10404,t10405);
    if (t10406) {
      uintptr_t t10407 = v0;
      ApString t10408 = AP_STR("runtime.clock");
      f_rtcall(t10407,t10408);
    } else {
    }
    ApString t10409 = v2;
    ApString t10410 = AP_STR("sleep");
    bool t10411 = ap_equal(t10409,t10410);
    if (t10411) {
      uintptr_t t10412 = v0;
      ApString t10413 = AP_STR("runtime.sleep");
      f_rtcall(t10412,t10413);
    } else {
    }
    ApString t10414 = v2;
    ApString t10415 = AP_STR("sleep_until");
    bool t10416 = ap_equal(t10414,t10415);
    if (t10416) {
      uintptr_t t10417 = v0;
      ApString t10418 = AP_STR("runtime.sleep_until");
      f_rtcall(t10417,t10418);
    } else {
    }
    return;
  } else {
  }
  ApString t10419 = v2;
  ApString t10420 = AP_STR("string_at");
  bool t10421 = ap_equal(t10419,t10420);
  if (t10421) {
    uintptr_t t10422 = v0;
    int64_t t10423 = ((int64_t)UINT64_C(2));
    uintptr_t t10424 = v1;
    int64_t t10425 = ((int64_t)UINT64_C(1));
    int64_t t10426 = f_argument_type(t10424,t10425);
    f_unscale(t10422,t10423,t10426);
    uintptr_t t10427 = v0;
    int64_t t10428 = ((int64_t)UINT64_C(2));
    int64_t t10429 = ((int64_t)UINT64_C(0));
    f_a_cmpi(t10427,t10428,t10429);
    uintptr_t t10430 = v0;
    int64_t t10431 = ((int64_t)UINT64_C(11));
    ApString t10432 = AP_STR("error.bounds");
    f_rtcond(t10430,t10431,t10432);
    uintptr_t t10433 = v0;
    int64_t t10434 = ((int64_t)UINT64_C(1));
    int64_t t10435 = ((int64_t)UINT64_C(2));
    f_a_mov(t10433,t10434,t10435);
    return;
  } else {
  }
  ApString t10436 = v2;
  ApString t10437 = AP_STR("arg");
  bool t10438 = ap_equal(t10436,t10437);
  if (t10438) {
    uintptr_t t10439 = v0;
    int64_t t10440 = ((int64_t)UINT64_C(0));
    int64_t t10441 = ((int64_t)UINT64_C(19));
    f_a_cmp(t10439,t10440,t10441);
    uintptr_t t10442 = v0;
    int64_t t10443 = ((int64_t)UINT64_C(2));
    ApString t10444 = AP_STR("error.bounds");
    f_rtcond(t10442,t10443,t10444);
    uintptr_t t10445 = v0;
    int64_t t10446 = ((int64_t)UINT64_C(9));
    int64_t t10447 = ((int64_t)UINT64_C(20));
    int64_t t10448 = ((int64_t)UINT64_C(0));
    int64_t t10449 = ((int64_t)UINT64_C(3));
    f_a_addshift(t10445,t10446,t10447,t10448,t10449);
    uintptr_t t10450 = v0;
    int64_t t10451 = ((int64_t)UINT64_C(0));
    int64_t t10452 = ((int64_t)UINT64_C(9));
    int64_t t10453 = ((int64_t)UINT64_C(0));
    f_a_load(t10450,t10451,t10452,t10453);
    uintptr_t t10454 = v0;
    int64_t t10455 = ((int64_t)UINT64_C(1));
    int64_t t10456 = ((int64_t)UINT64_C(0));
    f_a_value(t10454,t10455,t10456);
    uintptr_t t10457 = v0;
    int64_t t10458 = f_fresh(t10457);
    v13 = t10458;
    uintptr_t t10459 = v0;
    int64_t t10460 = f_fresh(t10459);
    v14 = t10460;
    uintptr_t t10461 = v0;
    int64_t t10462 = v13;
    f_label_here(t10461,t10462);
    uintptr_t t10463 = v0;
    int64_t t10464 = ((int64_t)UINT64_C(9));
    int64_t t10465 = ((int64_t)UINT64_C(0));
    int64_t t10466 = ((int64_t)UINT64_C(1));
    f_a_add(t10463,t10464,t10465,t10466);
    uintptr_t t10467 = v0;
    int64_t t10468 = ((int64_t)UINT64_C(10));
    int64_t t10469 = ((int64_t)UINT64_C(9));
    int64_t t10470 = ((int64_t)UINT64_C(1));
    bool t10471 = true;
    f_a_width(t10467,t10468,t10469,t10470,t10471);
    uintptr_t t10472 = v0;
    int64_t t10473 = ((int64_t)UINT64_C(10));
    int64_t t10474 = v14;
    bool t10475 = false;
    f_a_zero(t10472,t10473,t10474,t10475);
    uintptr_t t10476 = v0;
    int64_t t10477 = ((int64_t)UINT64_C(1));
    int64_t t10478 = ((int64_t)UINT64_C(1));
    int64_t t10479 = ((int64_t)UINT64_C(1));
    f_a_addi(t10476,t10477,t10478,t10479);
    uintptr_t t10480 = v0;
    int64_t t10481 = v13;
    bool t10482 = false;
    f_a_branch(t10480,t10481,t10482);
    uintptr_t t10483 = v0;
    int64_t t10484 = v14;
    f_label_here(t10483,t10484);
    return;
  } else {
  }
  ApString t10485 = v2;
  ApString t10486 = AP_STR("argc");
  bool t10487 = ap_equal(t10485,t10486);
  bool t10488 = t10487;
  if (!t10488) {
    ApString t10489 = v2;
    ApString t10490 = AP_STR("envp");
    bool t10491 = ap_equal(t10489,t10490);
    t10488 = t10491;
  }
  if (t10488) {
    int64_t t10492 = ((int64_t)UINT64_C(19));
    v15 = t10492;
    ApString t10493 = v2;
    ApString t10494 = AP_STR("envp");
    bool t10495 = ap_equal(t10493,t10494);
    if (t10495) {
      int64_t t10496 = ((int64_t)UINT64_C(21));
      v15 = t10496;
    } else {
    }
    uintptr_t t10497 = v0;
    int64_t t10498 = ((int64_t)UINT64_C(0));
    int64_t t10499 = v15;
    f_a_mov(t10497,t10498,t10499);
    uintptr_t t10500 = v0;
    uintptr_t t10501 = v1;
    f_finish_intrinsic(t10500,t10501);
    return;
  } else {
  }
  ApString t10502 = v2;
  ApString t10503 = AP_STR("float");
  bool t10504 = ap_equal(t10502,t10503);
  if (t10504) {
    uintptr_t t10505 = v1;
    int64_t t10506 = ((int64_t)UINT64_C(0));
    int64_t t10507 = f_argument_type(t10505,t10506);
    v16 = t10507;
    int64_t t10508 = v16;
    int64_t t10509 = ((int64_t)UINT64_C(7));
    bool t10510 = (t10508 != t10509);
    if (t10510) {
      uintptr_t t10511 = v0;
      int64_t t10512 = ((int64_t)UINT64_C(2657222656));
      f_emit(t10511,t10512);
      int64_t t10513 = v16;
      int64_t t10514 = ((int64_t)UINT64_C(0));
      bool t10515 = (t10513 == t10514);
      if (t10515) {
        uintptr_t t10516 = v0;
        int64_t t10517 = ((int64_t)UINT64_C(1));
        int64_t t10518 = ((int64_t)UINT64_C(4696837146684686336));
        f_a_fconstant(t10516,t10517,t10518);
        uintptr_t t10519 = v0;
        int64_t t10520 = ((int64_t)UINT64_C(0));
        int64_t t10521 = ((int64_t)UINT64_C(0));
        int64_t t10522 = ((int64_t)UINT64_C(1));
        ApString t10523 = AP_STR("/");
        f_a_fbinary(t10519,t10520,t10521,t10522,t10523);
      } else {
      }
      uintptr_t t10524 = v0;
      int64_t t10525 = ((int64_t)UINT64_C(0));
      int64_t t10526 = ((int64_t)UINT64_C(0));
      bool t10527 = false;
      f_a_fmov(t10524,t10525,t10526,t10527);
    } else {
    }
    uintptr_t t10528 = v0;
    uintptr_t t10529 = v1;
    f_finish_intrinsic(t10528,t10529);
    return;
  } else {
  }
  ApString t10530 = v2;
  ApString t10531 = AP_STR("float32_bits");
  bool t10532 = ap_equal(t10530,t10531);
  if (t10532) {
    uintptr_t t10533 = v0;
    f_finite_value(t10533);
    uintptr_t t10534 = v0;
    int64_t t10535 = ((int64_t)UINT64_C(0));
    int64_t t10536 = ((int64_t)UINT64_C(0));
    bool t10537 = true;
    f_a_fmov(t10534,t10535,t10536,t10537);
    uintptr_t t10538 = v0;
    int64_t t10539 = ((int64_t)UINT64_C(509755392));
    f_emit(t10538,t10539);
    uintptr_t t10540 = v0;
    int64_t t10541 = ((int64_t)UINT64_C(505806848));
    f_emit(t10540,t10541);
    uintptr_t t10542 = v0;
    int64_t t10543 = ((int64_t)UINT64_C(14));
    int64_t t10544 = ((int64_t)UINT64_C(0));
    f_a_mov(t10542,t10543,t10544);
    uintptr_t t10545 = v0;
    int64_t t10546 = ((int64_t)UINT64_C(505593856));
    f_emit(t10545,t10546);
    uintptr_t t10547 = v0;
    int64_t t10548 = ((int64_t)UINT64_C(0));
    int64_t t10549 = ((int64_t)UINT64_C(0));
    bool t10550 = false;
    f_a_fmov(t10547,t10548,t10549,t10550);
    uintptr_t t10551 = v0;
    f_finite_value(t10551);
    uintptr_t t10552 = v0;
    int64_t t10553 = ((int64_t)UINT64_C(0));
    int64_t t10554 = ((int64_t)UINT64_C(14));
    f_a_mov(t10552,t10553,t10554);
    uintptr_t t10555 = v0;
    uintptr_t t10556 = v1;
    f_finish_intrinsic(t10555,t10556);
    return;
  } else {
  }
  ApString t10557 = v2;
  ApString t10558 = AP_STR("float32_from_bits");
  bool t10559 = ap_equal(t10557,t10558);
  if (t10559) {
    uintptr_t t10560 = v0;
    int64_t t10561 = ((int64_t)UINT64_C(0));
    int64_t t10562 = ((int64_t)UINT64_C(4));
    f_unsigned_width(t10560,t10561,t10562);
    uintptr_t t10563 = v0;
    int64_t t10564 = ((int64_t)UINT64_C(505872384));
    f_emit(t10563,t10564);
    uintptr_t t10565 = v0;
    int64_t t10566 = ((int64_t)UINT64_C(505593856));
    f_emit(t10565,t10566);
    uintptr_t t10567 = v0;
    int64_t t10568 = ((int64_t)UINT64_C(0));
    int64_t t10569 = ((int64_t)UINT64_C(0));
    bool t10570 = false;
    f_a_fmov(t10567,t10568,t10569,t10570);
    uintptr_t t10571 = v0;
    f_finite_value(t10571);
    uintptr_t t10572 = v0;
    uintptr_t t10573 = v1;
    f_finish_intrinsic(t10572,t10573);
    return;
  } else {
  }
  ApString t10574 = v2;
  ApString t10575 = AP_STR("atomic_");
  bool t10576 = f_starts(t10574,t10575);
  if (t10576) {
    uintptr_t t10577 = v0;
    int64_t t10578 = ((int64_t)UINT64_C(3));
    int64_t t10579 = ((int64_t)UINT64_C(8));
    f_a_value(t10577,t10578,t10579);
    uintptr_t t10580 = v0;
    ApString t10581 = AP_STR("runtime.bounds");
    f_rtcall(t10580,t10581);
    uintptr_t t10582 = v0;
    int64_t t10583 = ((int64_t)UINT64_C(9));
    int64_t t10584 = ((int64_t)UINT64_C(0));
    f_a_mov(t10582,t10583,t10584);
    uintptr_t t10585 = v0;
    int64_t t10586 = ((int64_t)UINT64_C(10));
    int64_t t10587 = ((int64_t)UINT64_C(7));
    f_a_value(t10585,t10586,t10587);
    uintptr_t t10588 = v0;
    int64_t t10589 = ((int64_t)UINT64_C(2315255808));
    int64_t t10590 = ((int64_t)UINT64_C(10));
    int64_t t10591 = ((int64_t)UINT64_C(9));
    int64_t t10592 = ((int64_t)UINT64_C(10));
    f_a_op3(t10588,t10589,t10590,t10591,t10592);
    uintptr_t t10593 = v0;
    int64_t t10594 = ((int64_t)UINT64_C(10));
    ApString t10595 = AP_STR("error.bounds");
    bool t10596 = true;
    f_rtzero(t10593,t10594,t10595,t10596);
    ApString t10597 = v2;
    ApString t10598 = AP_STR("atomic_load");
    bool t10599 = ap_equal(t10597,t10598);
    if (t10599) {
      uintptr_t t10600 = v0;
      int64_t t10601 = ((int64_t)UINT64_C(3370122528));
      f_emit(t10600,t10601);
    } else {
    }
    ApString t10602 = v2;
    ApString t10603 = AP_STR("atomic_store");
    bool t10604 = ap_equal(t10602,t10603);
    if (t10604) {
      uintptr_t t10605 = v0;
      int64_t t10606 = ((int64_t)UINT64_C(3365928228));
      f_emit(t10605,t10606);
    } else {
    }
    ApString t10607 = v2;
    ApString t10608 = AP_STR("atomic_add");
    bool t10609 = ap_equal(t10607,t10608);
    if (t10609) {
      uintptr_t t10610 = v0;
      int64_t t10611 = f_fresh(t10610);
      v17 = t10611;
      uintptr_t t10612 = v0;
      int64_t t10613 = v17;
      f_label_here(t10612,t10613);
      uintptr_t t10614 = v0;
      int64_t t10615 = ((int64_t)UINT64_C(3361733920));
      f_emit(t10614,t10615);
      uintptr_t t10616 = v0;
      int64_t t10617 = ((int64_t)UINT64_C(10));
      int64_t t10618 = ((int64_t)UINT64_C(0));
      int64_t t10619 = ((int64_t)UINT64_C(4));
      f_a_add(t10616,t10617,t10618,t10619);
      uintptr_t t10620 = v0;
      int64_t t10621 = ((int64_t)UINT64_C(3356228906));
      f_emit(t10620,t10621);
      uintptr_t t10622 = v0;
      int64_t t10623 = ((int64_t)UINT64_C(11));
      int64_t t10624 = v17;
      bool t10625 = true;
      f_a_zero(t10622,t10623,t10624,t10625);
    } else {
    }
    uintptr_t t10626 = v0;
    uintptr_t t10627 = v1;
    f_finish_intrinsic(t10626,t10627);
    return;
  } else {
  }
  ApString t10628 = v2;
  ApString t10629 = AP_STR("float_bits");
  bool t10630 = ap_equal(t10628,t10629);
  bool t10631 = t10630;
  if (!t10631) {
    ApString t10632 = v2;
    ApString t10633 = AP_STR("float_from_bits");
    bool t10634 = ap_equal(t10632,t10633);
    t10631 = t10634;
  }
  if (t10631) {
    uintptr_t t10635 = v0;
    uintptr_t t10636 = v1;
    f_finish_intrinsic(t10635,t10636);
    return;
  } else {
  }
  ApString t10637 = v2;
  ApString t10638 = AP_STR("sqrt");
  bool t10639 = ap_equal(t10637,t10638);
  if (t10639) {
    uintptr_t t10640 = v0;
    int64_t t10641 = ((int64_t)UINT64_C(0));
    int64_t t10642 = ((int64_t)UINT64_C(0));
    bool t10643 = true;
    f_a_fmov(t10640,t10641,t10642,t10643);
    uintptr_t t10644 = v0;
    int64_t t10645 = ((int64_t)UINT64_C(509722624));
    f_emit(t10644,t10645);
    uintptr_t t10646 = v0;
    int64_t t10647 = ((int64_t)UINT64_C(0));
    int64_t t10648 = ((int64_t)UINT64_C(0));
    bool t10649 = false;
    f_a_fmov(t10646,t10647,t10648,t10649);
    uintptr_t t10650 = v0;
    f_finite_value(t10650);
    uintptr_t t10651 = v0;
    uintptr_t t10652 = v1;
    f_finish_intrinsic(t10651,t10652);
    return;
  } else {
  }
  ApString t10653 = v2;
  ApString t10654 = AP_STR("trunc");
  bool t10655 = ap_equal(t10653,t10654);
  bool t10656 = t10655;
  if (!t10656) {
    ApString t10657 = v2;
    ApString t10658 = AP_STR("int");
    bool t10659 = ap_equal(t10657,t10658);
    bool t10660 = t10659;
    if (t10660) {
      uintptr_t t10661 = v1;
      int64_t t10662 = ((int64_t)UINT64_C(0));
      int64_t t10663 = f_argument_type(t10661,t10662);
      int64_t t10664 = ((int64_t)UINT64_C(7));
      bool t10665 = (t10663 == t10664);
      t10660 = t10665;
    }
    t10656 = t10660;
  }
  if (t10656) {
    uintptr_t t10666 = v0;
    f_finite_value(t10666);
    uintptr_t t10667 = v0;
    int64_t t10668 = ((int64_t)UINT64_C(0));
    int64_t t10669 = ((int64_t)UINT64_C(0));
    bool t10670 = true;
    f_a_fmov(t10667,t10668,t10669,t10670);
    uintptr_t t10671 = v0;
    int64_t t10672 = ((int64_t)UINT64_C(1));
    int64_t t10673 = ((int64_t)UINT64_C(4890909195324358656));
    f_a_fconstant(t10671,t10672,t10673);
    uintptr_t t10674 = v0;
    int64_t t10675 = ((int64_t)UINT64_C(0));
    int64_t t10676 = ((int64_t)UINT64_C(1));
    f_a_fcmp(t10674,t10675,t10676);
    uintptr_t t10677 = v0;
    int64_t t10678 = ((int64_t)UINT64_C(10));
    ApString t10679 = AP_STR("error.int_overflow");
    f_rtcond(t10677,t10678,t10679);
    uintptr_t t10680 = v0;
    int64_t t10681 = ((int64_t)UINT64_C(1));
    int64_t t10682 = ((int64_t)UINT64_C(14114281232179134464));
    f_a_fconstant(t10680,t10681,t10682);
    uintptr_t t10683 = v0;
    int64_t t10684 = ((int64_t)UINT64_C(0));
    int64_t t10685 = ((int64_t)UINT64_C(1));
    f_a_fcmp(t10683,t10684,t10685);
    uintptr_t t10686 = v0;
    int64_t t10687 = ((int64_t)UINT64_C(4));
    ApString t10688 = AP_STR("error.int_overflow");
    f_rtcond(t10686,t10687,t10688);
    uintptr_t t10689 = v0;
    int64_t t10690 = ((int64_t)UINT64_C(2658664448));
    f_emit(t10689,t10690);
    ApString t10691 = v2;
    ApString t10692 = AP_STR("int");
    bool t10693 = ap_equal(t10691,t10692);
    if (t10693) {
      uintptr_t t10694 = v0;
      int64_t t10695 = ((int64_t)UINT64_C(2657222657));
      f_emit(t10694,t10695);
      uintptr_t t10696 = v0;
      int64_t t10697 = ((int64_t)UINT64_C(0));
      int64_t t10698 = ((int64_t)UINT64_C(1));
      f_a_fcmp(t10696,t10697,t10698);
      uintptr_t t10699 = v0;
      int64_t t10700 = ((int64_t)UINT64_C(1));
      ApString t10701 = AP_STR("error.integer");
      f_rtcond(t10699,t10700,t10701);
    } else {
    }
    uintptr_t t10702 = v0;
    uintptr_t t10703 = v1;
    f_finish_intrinsic(t10702,t10703);
    return;
  } else {
  }
  ApString t10704 = v2;
  ApString t10705 = AP_STR("int");
  bool t10706 = ap_equal(t10704,t10705);
  if (t10706) {
    uintptr_t t10707 = v0;
    int64_t t10708 = ((int64_t)UINT64_C(0));
    uintptr_t t10709 = v1;
    int64_t t10710 = ((int64_t)UINT64_C(0));
    int64_t t10711 = f_argument_type(t10709,t10710);
    f_unscale(t10707,t10708,t10711);
    uintptr_t t10712 = v0;
    uintptr_t t10713 = v1;
    f_finish_intrinsic(t10712,t10713);
    return;
  } else {
  }
  ApString t10714 = v2;
  ApString t10715 = AP_STR("number");
  bool t10716 = ap_equal(t10714,t10715);
  if (t10716) {
    uintptr_t t10717 = v1;
    int64_t t10718 = ((int64_t)UINT64_C(0));
    int64_t t10719 = f_argument_type(t10717,t10718);
    int64_t t10720 = ((int64_t)UINT64_C(3));
    bool t10721 = (t10719 == t10720);
    if (t10721) {
      uintptr_t t10722 = v0;
      int64_t t10723 = ((int64_t)UINT64_C(0));
      f_to_number(t10722,t10723);
    } else {
    }
    uintptr_t t10724 = v0;
    uintptr_t t10725 = v1;
    f_finish_intrinsic(t10724,t10725);
    return;
  } else {
  }
  ApString t10726 = v2;
  ApString t10727 = AP_STR("floor");
  bool t10728 = ap_equal(t10726,t10727);
  bool t10729 = t10728;
  if (!t10729) {
    ApString t10730 = v2;
    ApString t10731 = AP_STR("ceil");
    bool t10732 = ap_equal(t10730,t10731);
    t10729 = t10732;
  }
  bool t10733 = t10729;
  if (!t10733) {
    ApString t10734 = v2;
    ApString t10735 = AP_STR("abs");
    bool t10736 = ap_equal(t10734,t10735);
    t10733 = t10736;
  }
  if (t10733) {
    uintptr_t t10737 = v1;
    int64_t t10738 = ((int64_t)UINT64_C(1));
    int64_t t10739 = f_get(t10737,t10738);
    v18 = t10739;
    int64_t t10740 = v18;
    int64_t t10741 = ((int64_t)UINT64_C(7));
    bool t10742 = (t10740 == t10741);
    if (t10742) {
      uintptr_t t10743 = v0;
      int64_t t10744 = ((int64_t)UINT64_C(0));
      int64_t t10745 = ((int64_t)UINT64_C(0));
      bool t10746 = true;
      f_a_fmov(t10743,t10744,t10745,t10746);
      int64_t t10747 = ((int64_t)UINT64_C(509657088));
      v19 = t10747;
      ApString t10748 = v2;
      ApString t10749 = AP_STR("floor");
      bool t10750 = ap_equal(t10748,t10749);
      if (t10750) {
        int64_t t10751 = ((int64_t)UINT64_C(509952000));
        v19 = t10751;
      } else {
      }
      ApString t10752 = v2;
      ApString t10753 = AP_STR("ceil");
      bool t10754 = ap_equal(t10752,t10753);
      if (t10754) {
        int64_t t10755 = ((int64_t)UINT64_C(509919232));
        v19 = t10755;
      } else {
      }
      uintptr_t t10756 = v0;
      int64_t t10757 = v19;
      f_emit(t10756,t10757);
      uintptr_t t10758 = v0;
      int64_t t10759 = ((int64_t)UINT64_C(0));
      int64_t t10760 = ((int64_t)UINT64_C(0));
      bool t10761 = false;
      f_a_fmov(t10758,t10759,t10760,t10761);
      uintptr_t t10762 = v0;
      f_finite_value(t10762);
    } else {
      uintptr_t t10763 = v0;
      int64_t t10764 = f_fresh(t10763);
      v20 = t10764;
      ApString t10765 = v2;
      ApString t10766 = AP_STR("abs");
      bool t10767 = ap_equal(t10765,t10766);
      if (t10767) {
        uintptr_t t10768 = v0;
        int64_t t10769 = ((int64_t)UINT64_C(0));
        int64_t t10770 = ((int64_t)UINT64_C(0));
        f_a_cmpi(t10768,t10769,t10770);
        uintptr_t t10771 = v0;
        int64_t t10772 = ((int64_t)UINT64_C(10));
        int64_t t10773 = v20;
        f_a_condition(t10771,t10772,t10773);
        uintptr_t t10774 = v0;
        int64_t t10775 = ((int64_t)UINT64_C(0));
        int64_t t10776 = ((int64_t)UINT64_C(0));
        bool t10777 = true;
        f_a_neg(t10774,t10775,t10776,t10777);
        ApString t10778 = AP_STR("error.overflow");
        v21 = t10778;
        int64_t t10779 = v18;
        int64_t t10780 = ((int64_t)UINT64_C(3));
        bool t10781 = (t10779 == t10780);
        if (t10781) {
          ApString t10782 = AP_STR("error.int_overflow");
          v21 = t10782;
        } else {
        }
        uintptr_t t10783 = v0;
        int64_t t10784 = ((int64_t)UINT64_C(6));
        ApString t10785 = v21;
        f_rtcond(t10783,t10784,t10785);
      } else {
        uintptr_t t10786 = v0;
        int64_t t10787 = ((int64_t)UINT64_C(9));
        int64_t t10788 = ((int64_t)UINT64_C(1000000));
        f_a_value(t10786,t10787,t10788);
        uintptr_t t10789 = v0;
        int64_t t10790 = ((int64_t)UINT64_C(2596277248));
        int64_t t10791 = ((int64_t)UINT64_C(10));
        int64_t t10792 = ((int64_t)UINT64_C(0));
        int64_t t10793 = ((int64_t)UINT64_C(9));
        f_a_op3(t10789,t10790,t10791,t10792,t10793);
        uintptr_t t10794 = v0;
        int64_t t10795 = ((int64_t)UINT64_C(11));
        int64_t t10796 = ((int64_t)UINT64_C(10));
        int64_t t10797 = ((int64_t)UINT64_C(9));
        int64_t t10798 = ((int64_t)UINT64_C(0));
        f_a_msub(t10794,t10795,t10796,t10797,t10798);
        uintptr_t t10799 = v0;
        int64_t t10800 = ((int64_t)UINT64_C(0));
        int64_t t10801 = ((int64_t)UINT64_C(0));
        int64_t t10802 = ((int64_t)UINT64_C(11));
        f_a_sub(t10799,t10800,t10801,t10802);
        uintptr_t t10803 = v0;
        int64_t t10804 = ((int64_t)UINT64_C(11));
        int64_t t10805 = ((int64_t)UINT64_C(0));
        f_a_cmpi(t10803,t10804,t10805);
        ApString t10806 = v2;
        ApString t10807 = AP_STR("floor");
        bool t10808 = ap_equal(t10806,t10807);
        if (t10808) {
          uintptr_t t10809 = v0;
          int64_t t10810 = ((int64_t)UINT64_C(10));
          int64_t t10811 = v20;
          f_a_condition(t10809,t10810,t10811);
          uintptr_t t10812 = v0;
          int64_t t10813 = ((int64_t)UINT64_C(3942645760));
          int64_t t10814 = ((int64_t)UINT64_C(0));
          int64_t t10815 = ((int64_t)UINT64_C(0));
          int64_t t10816 = ((int64_t)UINT64_C(9));
          f_a_op3(t10812,t10813,t10814,t10815,t10816);
        } else {
          uintptr_t t10817 = v0;
          int64_t t10818 = ((int64_t)UINT64_C(13));
          int64_t t10819 = v20;
          f_a_condition(t10817,t10818,t10819);
          uintptr_t t10820 = v0;
          int64_t t10821 = ((int64_t)UINT64_C(2868903936));
          int64_t t10822 = ((int64_t)UINT64_C(0));
          int64_t t10823 = ((int64_t)UINT64_C(0));
          int64_t t10824 = ((int64_t)UINT64_C(9));
          f_a_op3(t10820,t10821,t10822,t10823,t10824);
        }
        uintptr_t t10825 = v0;
        int64_t t10826 = ((int64_t)UINT64_C(6));
        ApString t10827 = AP_STR("error.overflow");
        f_rtcond(t10825,t10826,t10827);
      }
      uintptr_t t10828 = v0;
      int64_t t10829 = v20;
      f_label_here(t10828,t10829);
    }
    uintptr_t t10830 = v0;
    uintptr_t t10831 = v1;
    f_finish_intrinsic(t10830,t10831);
    return;
  } else {
  }
  ApString t10832 = v2;
  ApString t10833 = AP_STR("alloc");
  bool t10834 = ap_equal(t10832,t10833);
  if (t10834) {
    uintptr_t t10835 = v0;
    int64_t t10836 = ((int64_t)UINT64_C(0));
    uintptr_t t10837 = v1;
    int64_t t10838 = ((int64_t)UINT64_C(0));
    int64_t t10839 = f_argument_type(t10837,t10838);
    f_unscale(t10835,t10836,t10839);
    uintptr_t t10840 = v0;
    ApString t10841 = AP_STR("runtime.alloc");
    f_rtcall(t10840,t10841);
    return;
  } else {
  }
  ApString t10842 = v2;
  ApString t10843 = AP_STR("free");
  bool t10844 = ap_equal(t10842,t10843);
  if (t10844) {
    uintptr_t t10845 = v0;
    ApString t10846 = AP_STR("runtime.free");
    f_rtcall(t10845,t10846);
    uintptr_t t10847 = v0;
    uintptr_t t10848 = v1;
    f_finish_intrinsic(t10847,t10848);
    return;
  } else {
  }
  ApString t10849 = v2;
  ApString t10850 = AP_STR("len");
  bool t10851 = ap_equal(t10849,t10850);
  if (t10851) {
    uintptr_t t10852 = v1;
    int64_t t10853 = ((int64_t)UINT64_C(0));
    int64_t t10854 = f_argument_type(t10852,t10853);
    int64_t t10855 = ((int64_t)UINT64_C(4));
    bool t10856 = (t10854 == t10855);
    if (t10856) {
      uintptr_t t10857 = v0;
      ApString t10858 = AP_STR("runtime.validate");
      f_rtcall(t10857,t10858);
      uintptr_t t10859 = v0;
      int64_t t10860 = ((int64_t)UINT64_C(0));
      int64_t t10861 = ((int64_t)UINT64_C(9));
      f_a_mov(t10859,t10860,t10861);
    } else {
      uintptr_t t10862 = v0;
      int64_t t10863 = ((int64_t)UINT64_C(0));
      int64_t t10864 = ((int64_t)UINT64_C(1));
      f_a_mov(t10862,t10863,t10864);
    }
    uintptr_t t10865 = v0;
    int64_t t10866 = ((int64_t)UINT64_C(0));
    f_to_number(t10865,t10866);
    uintptr_t t10867 = v0;
    uintptr_t t10868 = v1;
    f_finish_intrinsic(t10867,t10868);
    return;
  } else {
  }
  ApString t10869 = v2;
  ApString t10870 = AP_STR("slice");
  bool t10871 = ap_equal(t10869,t10870);
  if (t10871) {
    uintptr_t t10872 = v0;
    int64_t t10873 = ((int64_t)UINT64_C(2));
    uintptr_t t10874 = v1;
    int64_t t10875 = ((int64_t)UINT64_C(1));
    int64_t t10876 = f_argument_type(t10874,t10875);
    f_unscale(t10872,t10873,t10876);
    uintptr_t t10877 = v0;
    int64_t t10878 = ((int64_t)UINT64_C(4));
    uintptr_t t10879 = v1;
    int64_t t10880 = ((int64_t)UINT64_C(2));
    int64_t t10881 = f_argument_type(t10879,t10880);
    f_unscale(t10877,t10878,t10881);
    uintptr_t t10882 = v0;
    int64_t t10883 = ((int64_t)UINT64_C(2));
    int64_t t10884 = ((int64_t)UINT64_C(1));
    f_a_cmp(t10882,t10883,t10884);
    uintptr_t t10885 = v0;
    int64_t t10886 = ((int64_t)UINT64_C(8));
    ApString t10887 = AP_STR("error.bounds");
    f_rtcond(t10885,t10886,t10887);
    uintptr_t t10888 = v0;
    int64_t t10889 = ((int64_t)UINT64_C(9));
    int64_t t10890 = ((int64_t)UINT64_C(1));
    int64_t t10891 = ((int64_t)UINT64_C(2));
    f_a_sub(t10888,t10889,t10890,t10891);
    uintptr_t t10892 = v0;
    int64_t t10893 = ((int64_t)UINT64_C(4));
    int64_t t10894 = ((int64_t)UINT64_C(9));
    f_a_cmp(t10892,t10893,t10894);
    uintptr_t t10895 = v0;
    int64_t t10896 = ((int64_t)UINT64_C(8));
    ApString t10897 = AP_STR("error.bounds");
    f_rtcond(t10895,t10896,t10897);
    uintptr_t t10898 = v0;
    int64_t t10899 = ((int64_t)UINT64_C(0));
    int64_t t10900 = ((int64_t)UINT64_C(0));
    int64_t t10901 = ((int64_t)UINT64_C(2));
    f_a_add(t10898,t10899,t10900,t10901);
    uintptr_t t10902 = v0;
    int64_t t10903 = ((int64_t)UINT64_C(1));
    int64_t t10904 = ((int64_t)UINT64_C(4));
    f_a_mov(t10902,t10903,t10904);
    return;
  } else {
  }
  ApString t10905 = v2;
  ApString t10906 = AP_STR("view");
  bool t10907 = ap_equal(t10905,t10906);
  if (t10907) {
    uintptr_t t10908 = v0;
    int64_t t10909 = ((int64_t)UINT64_C(2));
    uintptr_t t10910 = v1;
    int64_t t10911 = ((int64_t)UINT64_C(1));
    int64_t t10912 = f_argument_type(t10910,t10911);
    f_unscale(t10908,t10909,t10912);
    uintptr_t t10913 = v0;
    int64_t t10914 = ((int64_t)UINT64_C(4));
    uintptr_t t10915 = v1;
    int64_t t10916 = ((int64_t)UINT64_C(2));
    int64_t t10917 = f_argument_type(t10915,t10916);
    f_unscale(t10913,t10914,t10917);
    uintptr_t t10918 = v0;
    int64_t t10919 = ((int64_t)UINT64_C(3));
    int64_t t10920 = ((int64_t)UINT64_C(4));
    f_a_mov(t10918,t10919,t10920);
    uintptr_t t10921 = v0;
    ApString t10922 = AP_STR("runtime.bounds");
    f_rtcall(t10921,t10922);
    uintptr_t t10923 = v0;
    int64_t t10924 = ((int64_t)UINT64_C(1));
    int64_t t10925 = ((int64_t)UINT64_C(4));
    f_a_mov(t10923,t10924,t10925);
    return;
  } else {
  }
  ApString t10926 = v2;
  ApString t10927 = AP_STR("copy");
  bool t10928 = ap_equal(t10926,t10927);
  if (t10928) {
    uintptr_t t10929 = v0;
    int64_t t10930 = ((int64_t)UINT64_C(2));
    uintptr_t t10931 = v1;
    int64_t t10932 = ((int64_t)UINT64_C(1));
    int64_t t10933 = f_argument_type(t10931,t10932);
    f_unscale(t10929,t10930,t10933);
    uintptr_t t10934 = v0;
    int64_t t10935 = ((int64_t)UINT64_C(6));
    uintptr_t t10936 = v1;
    int64_t t10937 = ((int64_t)UINT64_C(3));
    int64_t t10938 = f_argument_type(t10936,t10937);
    f_unscale(t10934,t10935,t10938);
    uintptr_t t10939 = v0;
    int64_t t10940 = ((int64_t)UINT64_C(8));
    uintptr_t t10941 = v1;
    int64_t t10942 = ((int64_t)UINT64_C(4));
    int64_t t10943 = f_argument_type(t10941,t10942);
    f_unscale(t10939,t10940,t10943);
    uintptr_t t10944 = v0;
    int64_t t10945 = ((int64_t)UINT64_C(13));
    int64_t t10946 = ((int64_t)UINT64_C(8));
    f_a_mov(t10944,t10945,t10946);
    uintptr_t t10947 = v0;
    int64_t t10948 = ((int64_t)UINT64_C(3));
    int64_t t10949 = ((int64_t)UINT64_C(13));
    f_a_mov(t10947,t10948,t10949);
    uintptr_t t10950 = v0;
    ApString t10951 = AP_STR("runtime.bounds");
    f_rtcall(t10950,t10951);
    uintptr_t t10952 = v0;
    int64_t t10953 = ((int64_t)UINT64_C(12));
    int64_t t10954 = ((int64_t)UINT64_C(0));
    f_a_mov(t10952,t10953,t10954);
    uintptr_t t10955 = v0;
    int64_t t10956 = ((int64_t)UINT64_C(0));
    int64_t t10957 = ((int64_t)UINT64_C(4));
    f_a_mov(t10955,t10956,t10957);
    uintptr_t t10958 = v0;
    int64_t t10959 = ((int64_t)UINT64_C(1));
    int64_t t10960 = ((int64_t)UINT64_C(5));
    f_a_mov(t10958,t10959,t10960);
    uintptr_t t10961 = v0;
    int64_t t10962 = ((int64_t)UINT64_C(2));
    int64_t t10963 = ((int64_t)UINT64_C(6));
    f_a_mov(t10961,t10962,t10963);
    uintptr_t t10964 = v0;
    int64_t t10965 = ((int64_t)UINT64_C(3));
    int64_t t10966 = ((int64_t)UINT64_C(13));
    f_a_mov(t10964,t10965,t10966);
    uintptr_t t10967 = v1;
    int64_t t10968 = ((int64_t)UINT64_C(2));
    int64_t t10969 = f_argument_type(t10967,t10968);
    int64_t t10970 = ((int64_t)UINT64_C(4));
    bool t10971 = (t10969 == t10970);
    if (t10971) {
      uintptr_t t10972 = v0;
      ApString t10973 = AP_STR("runtime.bounds");
      f_rtcall(t10972,t10973);
    } else {
      uintptr_t t10974 = v0;
      int64_t t10975 = ((int64_t)UINT64_C(2));
      int64_t t10976 = ((int64_t)UINT64_C(1));
      f_a_cmp(t10974,t10975,t10976);
      uintptr_t t10977 = v0;
      int64_t t10978 = ((int64_t)UINT64_C(8));
      ApString t10979 = AP_STR("error.bounds");
      f_rtcond(t10977,t10978,t10979);
      uintptr_t t10980 = v0;
      int64_t t10981 = ((int64_t)UINT64_C(9));
      int64_t t10982 = ((int64_t)UINT64_C(1));
      int64_t t10983 = ((int64_t)UINT64_C(2));
      f_a_sub(t10980,t10981,t10982,t10983);
      uintptr_t t10984 = v0;
      int64_t t10985 = ((int64_t)UINT64_C(3));
      int64_t t10986 = ((int64_t)UINT64_C(9));
      f_a_cmp(t10984,t10985,t10986);
      uintptr_t t10987 = v0;
      int64_t t10988 = ((int64_t)UINT64_C(8));
      ApString t10989 = AP_STR("error.bounds");
      f_rtcond(t10987,t10988,t10989);
      uintptr_t t10990 = v0;
      int64_t t10991 = ((int64_t)UINT64_C(0));
      int64_t t10992 = ((int64_t)UINT64_C(0));
      int64_t t10993 = ((int64_t)UINT64_C(2));
      f_a_add(t10990,t10991,t10992,t10993);
    }
    uintptr_t t10994 = v0;
    int64_t t10995 = f_fresh(t10994);
    v22 = t10995;
    uintptr_t t10996 = v0;
    int64_t t10997 = f_fresh(t10996);
    v23 = t10997;
    uintptr_t t10998 = v0;
    int64_t t10999 = f_fresh(t10998);
    v24 = t10999;
    uintptr_t t11000 = v0;
    int64_t t11001 = f_fresh(t11000);
    v25 = t11001;
    uintptr_t t11002 = v0;
    int64_t t11003 = ((int64_t)UINT64_C(13));
    int64_t t11004 = v22;
    bool t11005 = false;
    f_a_zero(t11002,t11003,t11004,t11005);
    uintptr_t t11006 = v0;
    int64_t t11007 = ((int64_t)UINT64_C(12));
    int64_t t11008 = ((int64_t)UINT64_C(0));
    f_a_cmp(t11006,t11007,t11008);
    uintptr_t t11009 = v0;
    int64_t t11010 = ((int64_t)UINT64_C(3));
    int64_t t11011 = v23;
    f_a_condition(t11009,t11010,t11011);
    uintptr_t t11012 = v0;
    int64_t t11013 = ((int64_t)UINT64_C(0));
    int64_t t11014 = ((int64_t)UINT64_C(0));
    int64_t t11015 = ((int64_t)UINT64_C(13));
    f_a_add(t11012,t11013,t11014,t11015);
    uintptr_t t11016 = v0;
    int64_t t11017 = ((int64_t)UINT64_C(12));
    int64_t t11018 = ((int64_t)UINT64_C(12));
    int64_t t11019 = ((int64_t)UINT64_C(13));
    f_a_add(t11016,t11017,t11018,t11019);
    uintptr_t t11020 = v0;
    int64_t t11021 = v24;
    f_label_here(t11020,t11021);
    uintptr_t t11022 = v0;
    int64_t t11023 = ((int64_t)UINT64_C(0));
    int64_t t11024 = ((int64_t)UINT64_C(0));
    int64_t t11025 = ((int64_t)UINT64_C(1));
    f_a_subi(t11022,t11023,t11024,t11025);
    uintptr_t t11026 = v0;
    int64_t t11027 = ((int64_t)UINT64_C(12));
    int64_t t11028 = ((int64_t)UINT64_C(12));
    int64_t t11029 = ((int64_t)UINT64_C(1));
    f_a_subi(t11026,t11027,t11028,t11029);
    uintptr_t t11030 = v0;
    int64_t t11031 = ((int64_t)UINT64_C(14));
    int64_t t11032 = ((int64_t)UINT64_C(0));
    int64_t t11033 = ((int64_t)UINT64_C(1));
    bool t11034 = true;
    f_a_width(t11030,t11031,t11032,t11033,t11034);
    uintptr_t t11035 = v0;
    int64_t t11036 = ((int64_t)UINT64_C(14));
    int64_t t11037 = ((int64_t)UINT64_C(12));
    int64_t t11038 = ((int64_t)UINT64_C(1));
    bool t11039 = false;
    f_a_width(t11035,t11036,t11037,t11038,t11039);
    uintptr_t t11040 = v0;
    int64_t t11041 = ((int64_t)UINT64_C(13));
    int64_t t11042 = ((int64_t)UINT64_C(13));
    int64_t t11043 = ((int64_t)UINT64_C(1));
    f_a_subi(t11040,t11041,t11042,t11043);
    uintptr_t t11044 = v0;
    int64_t t11045 = ((int64_t)UINT64_C(13));
    int64_t t11046 = v24;
    bool t11047 = true;
    f_a_zero(t11044,t11045,t11046,t11047);
    uintptr_t t11048 = v0;
    int64_t t11049 = v22;
    bool t11050 = false;
    f_a_branch(t11048,t11049,t11050);
    uintptr_t t11051 = v0;
    int64_t t11052 = v23;
    f_label_here(t11051,t11052);
    uintptr_t t11053 = v0;
    int64_t t11054 = v25;
    f_label_here(t11053,t11054);
    uintptr_t t11055 = v0;
    int64_t t11056 = ((int64_t)UINT64_C(14));
    int64_t t11057 = ((int64_t)UINT64_C(0));
    int64_t t11058 = ((int64_t)UINT64_C(1));
    bool t11059 = true;
    f_a_width(t11055,t11056,t11057,t11058,t11059);
    uintptr_t t11060 = v0;
    int64_t t11061 = ((int64_t)UINT64_C(14));
    int64_t t11062 = ((int64_t)UINT64_C(12));
    int64_t t11063 = ((int64_t)UINT64_C(1));
    bool t11064 = false;
    f_a_width(t11060,t11061,t11062,t11063,t11064);
    uintptr_t t11065 = v0;
    int64_t t11066 = ((int64_t)UINT64_C(0));
    int64_t t11067 = ((int64_t)UINT64_C(0));
    int64_t t11068 = ((int64_t)UINT64_C(1));
    f_a_addi(t11065,t11066,t11067,t11068);
    uintptr_t t11069 = v0;
    int64_t t11070 = ((int64_t)UINT64_C(12));
    int64_t t11071 = ((int64_t)UINT64_C(12));
    int64_t t11072 = ((int64_t)UINT64_C(1));
    f_a_addi(t11069,t11070,t11071,t11072);
    uintptr_t t11073 = v0;
    int64_t t11074 = ((int64_t)UINT64_C(13));
    int64_t t11075 = ((int64_t)UINT64_C(13));
    int64_t t11076 = ((int64_t)UINT64_C(1));
    f_a_subi(t11073,t11074,t11075,t11076);
    uintptr_t t11077 = v0;
    int64_t t11078 = ((int64_t)UINT64_C(13));
    int64_t t11079 = v25;
    bool t11080 = true;
    f_a_zero(t11077,t11078,t11079,t11080);
    uintptr_t t11081 = v0;
    int64_t t11082 = v22;
    f_label_here(t11081,t11082);
    uintptr_t t11083 = v0;
    uintptr_t t11084 = v1;
    f_finish_intrinsic(t11083,t11084);
    return;
  } else {
  }
  ApString t11085 = v2;
  ApString t11086 = AP_STR("char_at");
  bool t11087 = ap_equal(t11085,t11086);
  bool t11088 = t11087;
  if (!t11088) {
    ApString t11089 = v2;
    ApString t11090 = AP_STR("byte_at");
    bool t11091 = ap_equal(t11089,t11090);
    t11088 = t11091;
  }
  if (t11088) {
    uintptr_t t11092 = v0;
    int64_t t11093 = ((int64_t)UINT64_C(2));
    uintptr_t t11094 = v1;
    int64_t t11095 = ((int64_t)UINT64_C(1));
    int64_t t11096 = f_argument_type(t11094,t11095);
    f_unscale(t11092,t11093,t11096);
    uintptr_t t11097 = v0;
    int64_t t11098 = ((int64_t)UINT64_C(2));
    int64_t t11099 = ((int64_t)UINT64_C(1));
    f_a_cmp(t11097,t11098,t11099);
    uintptr_t t11100 = v0;
    int64_t t11101 = ((int64_t)UINT64_C(2));
    ApString t11102 = AP_STR("error.bounds");
    f_rtcond(t11100,t11101,t11102);
    uintptr_t t11103 = v0;
    int64_t t11104 = ((int64_t)UINT64_C(0));
    int64_t t11105 = ((int64_t)UINT64_C(0));
    int64_t t11106 = ((int64_t)UINT64_C(2));
    f_a_add(t11103,t11104,t11105,t11106);
    ApString t11107 = v2;
    ApString t11108 = AP_STR("byte_at");
    bool t11109 = ap_equal(t11107,t11108);
    if (t11109) {
      uintptr_t t11110 = v0;
      int64_t t11111 = ((int64_t)UINT64_C(0));
      int64_t t11112 = ((int64_t)UINT64_C(0));
      int64_t t11113 = ((int64_t)UINT64_C(1));
      bool t11114 = true;
      f_a_width(t11110,t11111,t11112,t11113,t11114);
      uintptr_t t11115 = v0;
      int64_t t11116 = ((int64_t)UINT64_C(1));
      int64_t t11117 = ((int64_t)UINT64_C(0));
      f_a_value(t11115,t11116,t11117);
    } else {
      uintptr_t t11118 = v0;
      int64_t t11119 = ((int64_t)UINT64_C(1));
      int64_t t11120 = ((int64_t)UINT64_C(1));
      f_a_value(t11118,t11119,t11120);
    }
    return;
  } else {
  }
  ApString t11121 = v2;
  ApString t11122 = AP_STR("fill");
  bool t11123 = ap_equal(t11121,t11122);
  bool t11124 = t11123;
  if (!t11124) {
    ApString t11125 = v2;
    ApString t11126 = AP_STR("fill32");
    bool t11127 = ap_equal(t11125,t11126);
    t11124 = t11127;
  }
  bool t11128 = t11124;
  if (!t11128) {
    ApString t11129 = v2;
    ApString t11130 = AP_STR("fill64");
    bool t11131 = ap_equal(t11129,t11130);
    t11128 = t11131;
  }
  bool t11132 = t11128;
  if (!t11132) {
    ApString t11133 = v2;
    ApString t11134 = AP_STR("fill_range");
    bool t11135 = ap_equal(t11133,t11134);
    t11132 = t11135;
  }
  bool t11136 = t11132;
  if (!t11136) {
    ApString t11137 = v2;
    ApString t11138 = AP_STR("fill32_range");
    bool t11139 = ap_equal(t11137,t11138);
    t11136 = t11139;
  }
  bool t11140 = t11136;
  if (!t11140) {
    ApString t11141 = v2;
    ApString t11142 = AP_STR("fill64_range");
    bool t11143 = ap_equal(t11141,t11142);
    t11140 = t11143;
  }
  if (t11140) {
    int64_t t11144 = ((int64_t)UINT64_C(1));
    v26 = t11144;
    ApString t11145 = v2;
    ApString t11146 = AP_STR("fill32");
    bool t11147 = ap_equal(t11145,t11146);
    bool t11148 = t11147;
    if (!t11148) {
      ApString t11149 = v2;
      ApString t11150 = AP_STR("fill32_range");
      bool t11151 = ap_equal(t11149,t11150);
      t11148 = t11151;
    }
    if (t11148) {
      int64_t t11152 = ((int64_t)UINT64_C(4));
      v26 = t11152;
    } else {
    }
    ApString t11153 = v2;
    ApString t11154 = AP_STR("fill64");
    bool t11155 = ap_equal(t11153,t11154);
    bool t11156 = t11155;
    if (!t11156) {
      ApString t11157 = v2;
      ApString t11158 = AP_STR("fill64_range");
      bool t11159 = ap_equal(t11157,t11158);
      t11156 = t11159;
    }
    if (t11156) {
      int64_t t11160 = ((int64_t)UINT64_C(8));
      v26 = t11160;
    } else {
    }
    int64_t t11161 = v3;
    int64_t t11162 = ((int64_t)UINT64_C(4));
    bool t11163 = (t11161 == t11162);
    v27 = t11163;
    bool t11164 = v27;
    if (t11164) {
      uintptr_t t11165 = v0;
      int64_t t11166 = ((int64_t)UINT64_C(2));
      uintptr_t t11167 = v1;
      int64_t t11168 = ((int64_t)UINT64_C(1));
      int64_t t11169 = f_argument_type(t11167,t11168);
      f_unscale(t11165,t11166,t11169);
      uintptr_t t11170 = v0;
      int64_t t11171 = ((int64_t)UINT64_C(4));
      uintptr_t t11172 = v1;
      int64_t t11173 = ((int64_t)UINT64_C(2));
      int64_t t11174 = f_argument_type(t11172,t11173);
      f_unscale(t11170,t11171,t11174);
      int64_t t11175 = v26;
      int64_t t11176 = ((int64_t)UINT64_C(8));
      bool t11177 = (t11175 != t11176);
      if (t11177) {
        uintptr_t t11178 = v0;
        int64_t t11179 = ((int64_t)UINT64_C(6));
        uintptr_t t11180 = v1;
        int64_t t11181 = ((int64_t)UINT64_C(3));
        int64_t t11182 = f_argument_type(t11180,t11181);
        f_unscale(t11178,t11179,t11182);
        uintptr_t t11183 = v0;
        int64_t t11184 = ((int64_t)UINT64_C(6));
        int64_t t11185 = v26;
        f_unsigned_width(t11183,t11184,t11185);
      } else {
      }
      uintptr_t t11186 = v0;
      int64_t t11187 = ((int64_t)UINT64_C(3));
      int64_t t11188 = ((int64_t)UINT64_C(4));
      f_a_mov(t11186,t11187,t11188);
      uintptr_t t11189 = v0;
      ApString t11190 = AP_STR("runtime.bounds");
      f_rtcall(t11189,t11190);
      uintptr_t t11191 = v0;
      int64_t t11192 = ((int64_t)UINT64_C(8));
      int64_t t11193 = ((int64_t)UINT64_C(0));
      f_a_mov(t11191,t11192,t11193);
      uintptr_t t11194 = v0;
      int64_t t11195 = ((int64_t)UINT64_C(9));
      int64_t t11196 = ((int64_t)UINT64_C(4));
      f_a_mov(t11194,t11195,t11196);
      uintptr_t t11197 = v0;
      int64_t t11198 = ((int64_t)UINT64_C(2));
      int64_t t11199 = ((int64_t)UINT64_C(6));
      f_a_mov(t11197,t11198,t11199);
    } else {
      int64_t t11200 = v26;
      int64_t t11201 = ((int64_t)UINT64_C(8));
      bool t11202 = (t11200 != t11201);
      if (t11202) {
        uintptr_t t11203 = v0;
        int64_t t11204 = ((int64_t)UINT64_C(2));
        uintptr_t t11205 = v1;
        int64_t t11206 = ((int64_t)UINT64_C(1));
        int64_t t11207 = f_argument_type(t11205,t11206);
        f_unscale(t11203,t11204,t11207);
        uintptr_t t11208 = v0;
        int64_t t11209 = ((int64_t)UINT64_C(2));
        int64_t t11210 = v26;
        f_unsigned_width(t11208,t11209,t11210);
      } else {
      }
      uintptr_t t11211 = v0;
      ApString t11212 = AP_STR("runtime.validate");
      f_rtcall(t11211,t11212);
    }
    int64_t t11213 = v26;
    int64_t t11214 = ((int64_t)UINT64_C(1));
    bool t11215 = (t11213 > t11214);
    if (t11215) {
      uintptr_t t11216 = v0;
      int64_t t11217 = ((int64_t)UINT64_C(10));
      int64_t t11218 = v26;
      int64_t t11219 = ((int64_t)UINT64_C(1));
      int64_t t11220 = ap_sub(t11218,t11219);
      f_a_value(t11216,t11217,t11220);
      uintptr_t t11221 = v0;
      int64_t t11222 = ((int64_t)UINT64_C(2315255808));
      int64_t t11223 = ((int64_t)UINT64_C(10));
      int64_t t11224 = ((int64_t)UINT64_C(9));
      int64_t t11225 = ((int64_t)UINT64_C(10));
      f_a_op3(t11221,t11222,t11223,t11224,t11225);
      uintptr_t t11226 = v0;
      int64_t t11227 = ((int64_t)UINT64_C(10));
      ApString t11228 = AP_STR("error.bounds");
      bool t11229 = true;
      f_rtzero(t11226,t11227,t11228,t11229);
    } else {
    }
    uintptr_t t11230 = v0;
    int64_t t11231 = ((int64_t)UINT64_C(17));
    int64_t t11232 = f_get(t11230,t11231);
    int64_t t11233 = ((int64_t)UINT64_C(0));
    bool t11234 = (t11232 != t11233);
    bool t11235 = t11234;
    if (t11235) {
      int64_t t11236 = v26;
      int64_t t11237 = ((int64_t)UINT64_C(8));
      bool t11238 = (t11236 < t11237);
      t11235 = t11238;
    }
    if (t11235) {
      int64_t t11239 = v26;
      int64_t t11240 = ((int64_t)UINT64_C(1));
      bool t11241 = (t11239 == t11240);
      if (t11241) {
        uintptr_t t11242 = v0;
        int64_t t11243 = ((int64_t)UINT64_C(10));
        int64_t t11244 = ((int64_t)UINT64_C(72340172838076673));
        f_a_value(t11242,t11243,t11244);
        uintptr_t t11245 = v0;
        int64_t t11246 = ((int64_t)UINT64_C(2600500224));
        int64_t t11247 = ((int64_t)UINT64_C(2));
        int64_t t11248 = ((int64_t)UINT64_C(2));
        int64_t t11249 = ((int64_t)UINT64_C(10));
        f_a_op3(t11245,t11246,t11247,t11248,t11249);
      } else {
        uintptr_t t11250 = v0;
        int64_t t11251 = ((int64_t)UINT64_C(2));
        int64_t t11252 = ((int64_t)UINT64_C(2));
        int64_t t11253 = ((int64_t)UINT64_C(2));
        int64_t t11254 = ((int64_t)UINT64_C(32));
        f_a_addshift(t11250,t11251,t11252,t11253,t11254);
      }
      uintptr_t t11255 = v0;
      int64_t t11256 = f_fresh(t11255);
      v28 = t11256;
      uintptr_t t11257 = v0;
      int64_t t11258 = f_fresh(t11257);
      v29 = t11258;
      uintptr_t t11259 = v0;
      int64_t t11260 = v28;
      f_label_here(t11259,t11260);
      uintptr_t t11261 = v0;
      int64_t t11262 = ((int64_t)UINT64_C(9));
      int64_t t11263 = ((int64_t)UINT64_C(8));
      f_a_cmpi(t11261,t11262,t11263);
      uintptr_t t11264 = v0;
      int64_t t11265 = ((int64_t)UINT64_C(3));
      int64_t t11266 = v29;
      f_a_condition(t11264,t11265,t11266);
      uintptr_t t11267 = v0;
      int64_t t11268 = ((int64_t)UINT64_C(2));
      int64_t t11269 = ((int64_t)UINT64_C(8));
      int64_t t11270 = ((int64_t)UINT64_C(8));
      bool t11271 = false;
      f_a_width(t11267,t11268,t11269,t11270,t11271);
      uintptr_t t11272 = v0;
      int64_t t11273 = ((int64_t)UINT64_C(8));
      int64_t t11274 = ((int64_t)UINT64_C(8));
      int64_t t11275 = ((int64_t)UINT64_C(8));
      f_a_addi(t11272,t11273,t11274,t11275);
      uintptr_t t11276 = v0;
      int64_t t11277 = ((int64_t)UINT64_C(9));
      int64_t t11278 = ((int64_t)UINT64_C(9));
      int64_t t11279 = ((int64_t)UINT64_C(8));
      f_a_subi(t11276,t11277,t11278,t11279);
      uintptr_t t11280 = v0;
      int64_t t11281 = v28;
      bool t11282 = false;
      f_a_branch(t11280,t11281,t11282);
      uintptr_t t11283 = v0;
      int64_t t11284 = v29;
      f_label_here(t11283,t11284);
    } else {
    }
    uintptr_t t11285 = v0;
    int64_t t11286 = f_fresh(t11285);
    v30 = t11286;
    uintptr_t t11287 = v0;
    int64_t t11288 = f_fresh(t11287);
    v31 = t11288;
    uintptr_t t11289 = v0;
    int64_t t11290 = ((int64_t)UINT64_C(9));
    int64_t t11291 = v31;
    bool t11292 = false;
    f_a_zero(t11289,t11290,t11291,t11292);
    uintptr_t t11293 = v0;
    int64_t t11294 = v30;
    f_label_here(t11293,t11294);
    uintptr_t t11295 = v0;
    int64_t t11296 = ((int64_t)UINT64_C(2));
    int64_t t11297 = ((int64_t)UINT64_C(8));
    int64_t t11298 = v26;
    bool t11299 = false;
    f_a_width(t11295,t11296,t11297,t11298,t11299);
    uintptr_t t11300 = v0;
    int64_t t11301 = ((int64_t)UINT64_C(8));
    int64_t t11302 = ((int64_t)UINT64_C(8));
    int64_t t11303 = v26;
    f_a_addi(t11300,t11301,t11302,t11303);
    uintptr_t t11304 = v0;
    int64_t t11305 = ((int64_t)UINT64_C(9));
    int64_t t11306 = ((int64_t)UINT64_C(9));
    int64_t t11307 = v26;
    f_a_subi(t11304,t11305,t11306,t11307);
    uintptr_t t11308 = v0;
    int64_t t11309 = ((int64_t)UINT64_C(9));
    int64_t t11310 = v30;
    bool t11311 = true;
    f_a_zero(t11308,t11309,t11310,t11311);
    uintptr_t t11312 = v0;
    int64_t t11313 = v31;
    f_label_here(t11312,t11313);
    uintptr_t t11314 = v0;
    uintptr_t t11315 = v1;
    f_finish_intrinsic(t11314,t11315);
    return;
  } else {
  }
  ApString t11316 = v2;
  ApString t11317 = AP_STR("write_bytes");
  bool t11318 = ap_equal(t11316,t11317);
  if (t11318) {
    uintptr_t t11319 = v0;
    int64_t t11320 = ((int64_t)UINT64_C(2));
    uintptr_t t11321 = v1;
    int64_t t11322 = ((int64_t)UINT64_C(1));
    int64_t t11323 = f_argument_type(t11321,t11322);
    f_unscale(t11319,t11320,t11323);
    uintptr_t t11324 = v0;
    int64_t t11325 = ((int64_t)UINT64_C(4));
    uintptr_t t11326 = v1;
    int64_t t11327 = ((int64_t)UINT64_C(2));
    int64_t t11328 = f_argument_type(t11326,t11327);
    f_unscale(t11324,t11325,t11328);
    uintptr_t t11329 = v0;
    int64_t t11330 = ((int64_t)UINT64_C(3));
    int64_t t11331 = ((int64_t)UINT64_C(4));
    f_a_mov(t11329,t11330,t11331);
    uintptr_t t11332 = v0;
    ApString t11333 = AP_STR("runtime.bounds");
    f_rtcall(t11332,t11333);
    uintptr_t t11334 = v0;
    int64_t t11335 = ((int64_t)UINT64_C(2));
    int64_t t11336 = ((int64_t)UINT64_C(4));
    f_a_mov(t11334,t11335,t11336);
    uintptr_t t11337 = v0;
    int64_t t11338 = ((int64_t)UINT64_C(1));
    int64_t t11339 = ((int64_t)UINT64_C(0));
    f_a_mov(t11337,t11338,t11339);
    uintptr_t t11340 = v0;
    int64_t t11341 = ((int64_t)UINT64_C(0));
    int64_t t11342 = ((int64_t)UINT64_C(1));
    f_a_value(t11340,t11341,t11342);
    uintptr_t t11343 = v0;
    ApString t11344 = AP_STR("runtime.write");
    f_rtcall(t11343,t11344);
    uintptr_t t11345 = v0;
    uintptr_t t11346 = v1;
    f_finish_intrinsic(t11345,t11346);
    return;
  } else {
  }
  ApString t11347 = v2;
  ApString t11348 = AP_STR("address");
  bool t11349 = ap_equal(t11347,t11348);
  if (t11349) {
    uintptr_t t11350 = v1;
    int64_t t11351 = ((int64_t)UINT64_C(0));
    int64_t t11352 = f_argument_type(t11350,t11351);
    int64_t t11353 = ((int64_t)UINT64_C(4));
    bool t11354 = (t11352 == t11353);
    if (t11354) {
      uintptr_t t11355 = v0;
      ApString t11356 = AP_STR("runtime.validate");
      f_rtcall(t11355,t11356);
      uintptr_t t11357 = v0;
      int64_t t11358 = ((int64_t)UINT64_C(0));
      int64_t t11359 = ((int64_t)UINT64_C(8));
      f_a_mov(t11357,t11358,t11359);
    } else {
    }
    uintptr_t t11360 = v0;
    uintptr_t t11361 = v1;
    f_finish_intrinsic(t11360,t11361);
    return;
  } else {
  }
  ApString t11362 = v2;
  ApString t11363 = AP_STR("pointer");
  bool t11364 = ap_equal(t11362,t11363);
  bool t11365 = t11364;
  if (!t11365) {
    ApString t11366 = v2;
    ApString t11367 = AP_STR("address_int");
    bool t11368 = ap_equal(t11366,t11367);
    t11365 = t11368;
  }
  if (t11365) {
    uintptr_t t11369 = v0;
    uintptr_t t11370 = v1;
    f_finish_intrinsic(t11369,t11370);
    return;
  } else {
  }
  ApString t11371 = v2;
  ApString t11372 = AP_STR("offset");
  bool t11373 = ap_equal(t11371,t11372);
  if (t11373) {
    uintptr_t t11374 = v0;
    int64_t t11375 = ((int64_t)UINT64_C(2));
    uintptr_t t11376 = v1;
    int64_t t11377 = ((int64_t)UINT64_C(1));
    int64_t t11378 = f_argument_type(t11376,t11377);
    f_unscale(t11374,t11375,t11378);
    uintptr_t t11379 = v0;
    int64_t t11380 = ((int64_t)UINT64_C(0));
    int64_t t11381 = ((int64_t)UINT64_C(0));
    int64_t t11382 = ((int64_t)UINT64_C(2));
    f_a_add(t11379,t11380,t11381,t11382);
    uintptr_t t11383 = v0;
    uintptr_t t11384 = v1;
    f_finish_intrinsic(t11383,t11384);
    return;
  } else {
  }
  ApString t11385 = v2;
  ApString t11386 = AP_STR("band");
  bool t11387 = ap_equal(t11385,t11386);
  bool t11388 = t11387;
  if (!t11388) {
    ApString t11389 = v2;
    ApString t11390 = AP_STR("bor");
    bool t11391 = ap_equal(t11389,t11390);
    t11388 = t11391;
  }
  bool t11392 = t11388;
  if (!t11392) {
    ApString t11393 = v2;
    ApString t11394 = AP_STR("bxor");
    bool t11395 = ap_equal(t11393,t11394);
    t11392 = t11395;
  }
  if (t11392) {
    int64_t t11396 = ((int64_t)UINT64_C(2315255808));
    v32 = t11396;
    ApString t11397 = v2;
    ApString t11398 = AP_STR("bor");
    bool t11399 = ap_equal(t11397,t11398);
    if (t11399) {
      int64_t t11400 = ((int64_t)UINT64_C(2852126720));
      v32 = t11400;
    } else {
    }
    ApString t11401 = v2;
    ApString t11402 = AP_STR("bxor");
    bool t11403 = ap_equal(t11401,t11402);
    if (t11403) {
      int64_t t11404 = ((int64_t)UINT64_C(3388997632));
      v32 = t11404;
    } else {
    }
    uintptr_t t11405 = v0;
    int64_t t11406 = v32;
    int64_t t11407 = ((int64_t)UINT64_C(0));
    int64_t t11408 = ((int64_t)UINT64_C(0));
    int64_t t11409 = ((int64_t)UINT64_C(2));
    f_a_op3(t11405,t11406,t11407,t11408,t11409);
    uintptr_t t11410 = v0;
    uintptr_t t11411 = v1;
    f_finish_intrinsic(t11410,t11411);
    return;
  } else {
  }
  ApString t11412 = v2;
  ApString t11413 = AP_STR("bnot");
  bool t11414 = ap_equal(t11412,t11413);
  if (t11414) {
    uintptr_t t11415 = v0;
    int64_t t11416 = ((int64_t)UINT64_C(9));
    int64_t t11417 = ((int64_t)UINT64_C(18446744073709551615));
    f_a_value(t11415,t11416,t11417);
    uintptr_t t11418 = v0;
    int64_t t11419 = ((int64_t)UINT64_C(3388997632));
    int64_t t11420 = ((int64_t)UINT64_C(0));
    int64_t t11421 = ((int64_t)UINT64_C(0));
    int64_t t11422 = ((int64_t)UINT64_C(9));
    f_a_op3(t11418,t11419,t11420,t11421,t11422);
    uintptr_t t11423 = v0;
    uintptr_t t11424 = v1;
    f_finish_intrinsic(t11423,t11424);
    return;
  } else {
  }
  ApString t11425 = v2;
  ApString t11426 = AP_STR("shl");
  bool t11427 = ap_equal(t11425,t11426);
  bool t11428 = t11427;
  if (!t11428) {
    ApString t11429 = v2;
    ApString t11430 = AP_STR("shr");
    bool t11431 = ap_equal(t11429,t11430);
    t11428 = t11431;
  }
  bool t11432 = t11428;
  if (!t11432) {
    ApString t11433 = v2;
    ApString t11434 = AP_STR("sar");
    bool t11435 = ap_equal(t11433,t11434);
    t11432 = t11435;
  }
  if (t11432) {
    uintptr_t t11436 = v0;
    int64_t t11437 = ((int64_t)UINT64_C(2));
    int64_t t11438 = ((int64_t)UINT64_C(63));
    f_a_cmpi(t11436,t11437,t11438);
    uintptr_t t11439 = v0;
    int64_t t11440 = ((int64_t)UINT64_C(8));
    ApString t11441 = AP_STR("error.shift");
    f_rtcond(t11439,t11440,t11441);
    int64_t t11442 = ((int64_t)UINT64_C(2596282368));
    v33 = t11442;
    ApString t11443 = v2;
    ApString t11444 = AP_STR("shr");
    bool t11445 = ap_equal(t11443,t11444);
    if (t11445) {
      int64_t t11446 = ((int64_t)UINT64_C(2596283392));
      v33 = t11446;
    } else {
    }
    ApString t11447 = v2;
    ApString t11448 = AP_STR("sar");
    bool t11449 = ap_equal(t11447,t11448);
    if (t11449) {
      int64_t t11450 = ((int64_t)UINT64_C(2596284416));
      v33 = t11450;
    } else {
    }
    uintptr_t t11451 = v0;
    int64_t t11452 = v33;
    int64_t t11453 = ((int64_t)UINT64_C(0));
    int64_t t11454 = ((int64_t)UINT64_C(0));
    int64_t t11455 = ((int64_t)UINT64_C(2));
    f_a_op3(t11451,t11452,t11453,t11454,t11455);
    uintptr_t t11456 = v0;
    uintptr_t t11457 = v1;
    f_finish_intrinsic(t11456,t11457);
    return;
  } else {
  }
  ApString t11458 = v2;
  ApString t11459 = AP_STR("assert");
  bool t11460 = ap_equal(t11458,t11459);
  if (t11460) {
    uintptr_t t11461 = v0;
    int64_t t11462 = ((int64_t)UINT64_C(0));
    ApString t11463 = AP_STR("error.assert");
    bool t11464 = false;
    f_rtzero(t11461,t11462,t11463,t11464);
    uintptr_t t11465 = v0;
    uintptr_t t11466 = v1;
    f_finish_intrinsic(t11465,t11466);
    return;
  } else {
  }
  ApString t11467 = v2;
  ApString t11468 = AP_STR("peek");
  bool t11469 = f_starts(t11467,t11468);
  bool t11470 = t11469;
  if (!t11470) {
    ApString t11471 = v2;
    ApString t11472 = AP_STR("poke");
    bool t11473 = f_starts(t11471,t11472);
    t11470 = t11473;
  }
  v34 = t11470;
  ApString t11474 = v2;
  ApString t11475 = AP_STR("load");
  bool t11476 = f_starts(t11474,t11475);
  bool t11477 = t11476;
  if (!t11477) {
    ApString t11478 = v2;
    ApString t11479 = AP_STR("peek");
    bool t11480 = f_starts(t11478,t11479);
    t11477 = t11480;
  }
  v35 = t11477;
  bool t11481 = v34;
  bool t11482 = t11481;
  if (!t11482) {
    ApString t11483 = v2;
    ApString t11484 = AP_STR("load");
    bool t11485 = f_starts(t11483,t11484);
    t11482 = t11485;
  }
  bool t11486 = t11482;
  if (!t11486) {
    ApString t11487 = v2;
    ApString t11488 = AP_STR("store");
    bool t11489 = f_starts(t11487,t11488);
    t11486 = t11489;
  }
  ApString t11490 = AP_STR("unimplemented compiler intrinsic");
  f_need(t11486,t11490);
  int64_t t11491 = ((int64_t)UINT64_C(1));
  v36 = t11491;
  ApString t11492 = v2;
  ApString t11493 = AP_STR("16");
  bool t11494 = f_ends(t11492,t11493);
  if (t11494) {
    int64_t t11495 = ((int64_t)UINT64_C(2));
    v36 = t11495;
  } else {
  }
  ApString t11496 = v2;
  ApString t11497 = AP_STR("32");
  bool t11498 = f_ends(t11496,t11497);
  if (t11498) {
    int64_t t11499 = ((int64_t)UINT64_C(4));
    v36 = t11499;
  } else {
  }
  ApString t11500 = v2;
  ApString t11501 = AP_STR("64");
  bool t11502 = f_ends(t11500,t11501);
  bool t11503 = t11502;
  if (!t11503) {
    ApString t11504 = v2;
    ApString t11505 = AP_STR("num");
    bool t11506 = f_ends(t11504,t11505);
    t11503 = t11506;
  }
  bool t11507 = t11503;
  if (!t11507) {
    ApString t11508 = v2;
    ApString t11509 = AP_STR("float");
    bool t11510 = f_ends(t11508,t11509);
    t11507 = t11510;
  }
  if (t11507) {
    int64_t t11511 = ((int64_t)UINT64_C(8));
    v36 = t11511;
  } else {
  }
  bool t11512 = v35;
  bool t11513 = !t11512;
  bool t11514 = t11513;
  if (t11514) {
    int64_t t11515 = v36;
    int64_t t11516 = ((int64_t)UINT64_C(8));
    bool t11517 = (t11515 < t11516);
    t11514 = t11517;
  }
  if (t11514) {
    int64_t t11518 = ((int64_t)UINT64_C(4));
    v37 = t11518;
    int64_t t11519 = ((int64_t)UINT64_C(2));
    v38 = t11519;
    bool t11520 = v34;
    if (t11520) {
      int64_t t11521 = ((int64_t)UINT64_C(2));
      v37 = t11521;
      int64_t t11522 = ((int64_t)UINT64_C(1));
      v38 = t11522;
    } else {
    }
    uintptr_t t11523 = v0;
    int64_t t11524 = v37;
    uintptr_t t11525 = v1;
    int64_t t11526 = v38;
    int64_t t11527 = f_argument_type(t11525,t11526);
    f_unscale(t11523,t11524,t11527);
    uintptr_t t11528 = v0;
    int64_t t11529 = v37;
    int64_t t11530 = v36;
    f_unsigned_width(t11528,t11529,t11530);
  } else {
  }
  bool t11531 = v34;
  bool t11532 = !t11531;
  if (t11532) {
    uintptr_t t11533 = v0;
    int64_t t11534 = ((int64_t)UINT64_C(2));
    uintptr_t t11535 = v1;
    int64_t t11536 = ((int64_t)UINT64_C(1));
    int64_t t11537 = f_argument_type(t11535,t11536);
    f_unscale(t11533,t11534,t11537);
    uintptr_t t11538 = v0;
    int64_t t11539 = ((int64_t)UINT64_C(3));
    int64_t t11540 = v36;
    f_a_value(t11538,t11539,t11540);
    uintptr_t t11541 = v0;
    ApString t11542 = AP_STR("runtime.bounds");
    f_rtcall(t11541,t11542);
  } else {
  }
  bool t11543 = v35;
  if (t11543) {
    uintptr_t t11544 = v0;
    int64_t t11545 = ((int64_t)UINT64_C(0));
    int64_t t11546 = ((int64_t)UINT64_C(0));
    int64_t t11547 = v36;
    bool t11548 = true;
    f_a_width(t11544,t11545,t11546,t11547,t11548);
    int64_t t11549 = v36;
    int64_t t11550 = ((int64_t)UINT64_C(8));
    bool t11551 = (t11549 < t11550);
    if (t11551) {
      uintptr_t t11552 = v0;
      int64_t t11553 = ((int64_t)UINT64_C(0));
      f_to_number(t11552,t11553);
    } else {
    }
  } else {
    int64_t t11554 = ((int64_t)UINT64_C(4));
    v39 = t11554;
    bool t11555 = v34;
    if (t11555) {
      int64_t t11556 = ((int64_t)UINT64_C(2));
      v39 = t11556;
    } else {
    }
    uintptr_t t11557 = v0;
    int64_t t11558 = v39;
    int64_t t11559 = ((int64_t)UINT64_C(0));
    int64_t t11560 = v36;
    bool t11561 = false;
    f_a_width(t11557,t11558,t11559,t11560,t11561);
  }
  uintptr_t t11562 = v0;
  uintptr_t t11563 = v1;
  f_finish_intrinsic(t11562,t11563);
}
static int64_t f_compare_condition(ApString v0,bool v1) {
  ApString t11564 = v0;
  ApString t11565 = AP_STR("=");
  bool t11566 = ap_equal(t11564,t11565);
  if (t11566) {
    int64_t t11567 = ((int64_t)UINT64_C(0));
    return t11567;
  } else {
  }
  ApString t11568 = v0;
  ApString t11569 = AP_STR("!=");
  bool t11570 = ap_equal(t11568,t11569);
  if (t11570) {
    int64_t t11571 = ((int64_t)UINT64_C(1));
    return t11571;
  } else {
  }
  ApString t11572 = v0;
  ApString t11573 = AP_STR("<");
  bool t11574 = ap_equal(t11572,t11573);
  if (t11574) {
    bool t11575 = v1;
    if (t11575) {
      int64_t t11576 = ((int64_t)UINT64_C(4));
      return t11576;
    } else {
    }
    int64_t t11577 = ((int64_t)UINT64_C(11));
    return t11577;
  } else {
  }
  ApString t11578 = v0;
  ApString t11579 = AP_STR("<=");
  bool t11580 = ap_equal(t11578,t11579);
  if (t11580) {
    bool t11581 = v1;
    if (t11581) {
      int64_t t11582 = ((int64_t)UINT64_C(9));
      return t11582;
    } else {
    }
    int64_t t11583 = ((int64_t)UINT64_C(13));
    return t11583;
  } else {
  }
  ApString t11584 = v0;
  ApString t11585 = AP_STR(">");
  bool t11586 = ap_equal(t11584,t11585);
  if (t11586) {
    int64_t t11587 = ((int64_t)UINT64_C(12));
    return t11587;
  } else {
  }
  int64_t t11588 = ((int64_t)UINT64_C(10));
  return t11588;
}
static void f_generate_expr(uintptr_t v0,uintptr_t v1) {
  int64_t v2;
  int64_t v3;
  ApString v4;
  uintptr_t v5;
  uintptr_t v6;
  uintptr_t v7;
  ApString v8;
  ApString v9;
  int64_t v10;
  uintptr_t v11;
  int64_t v12;
  int64_t v13;
  int64_t v14;
  int64_t v15;
  ApString v16;
  int64_t v17;
  ApString v18;
  int64_t v19;
  int64_t v20;
  uintptr_t t11589 = v1;
  int64_t t11590 = ((int64_t)UINT64_C(0));
  int64_t t11591 = f_get(t11589,t11590);
  v2 = t11591;
  uintptr_t t11592 = v1;
  int64_t t11593 = ((int64_t)UINT64_C(1));
  int64_t t11594 = f_get(t11592,t11593);
  v3 = t11594;
  int64_t t11595 = v2;
  int64_t t11596 = ((int64_t)UINT64_C(0));
  bool t11597 = (t11595 == t11596);
  bool t11598 = t11597;
  if (!t11598) {
    int64_t t11599 = v2;
    int64_t t11600 = ((int64_t)UINT64_C(2));
    bool t11601 = (t11599 == t11600);
    t11598 = t11601;
  }
  if (t11598) {
    uintptr_t t11602 = v0;
    int64_t t11603 = ((int64_t)UINT64_C(0));
    uintptr_t t11604 = v1;
    int64_t t11605 = ((int64_t)UINT64_C(3));
    int64_t t11606 = f_get(t11604,t11605);
    f_a_value(t11602,t11603,t11606);
    uintptr_t t11607 = v0;
    int64_t t11608 = ((int64_t)UINT64_C(1));
    int64_t t11609 = ((int64_t)UINT64_C(0));
    f_a_value(t11607,t11608,t11609);
    return;
  } else {
  }
  int64_t t11610 = v2;
  int64_t t11611 = ((int64_t)UINT64_C(1));
  bool t11612 = (t11610 == t11611);
  if (t11612) {
    uintptr_t t11613 = v1;
    int64_t t11614 = ((int64_t)UINT64_C(4));
    ApString t11615 = f_gets(t11613,t11614);
    v4 = t11615;
    uintptr_t t11616 = v0;
    int64_t t11617 = ((int64_t)UINT64_C(0));
    uintptr_t t11618 = v0;
    ApString t11619 = v4;
    int64_t t11620 = f_text_label(t11618,t11619);
    f_a_address(t11616,t11617,t11620);
    uintptr_t t11621 = v0;
    int64_t t11622 = ((int64_t)UINT64_C(1));
    ApString t11623 = v4;
    int64_t t11624 = ap_scale(ap_length_string(t11623));
    int64_t t11625 = ap_unscale(t11624);
    f_a_value(t11621,t11622,t11625);
    return;
  } else {
  }
  int64_t t11626 = v2;
  int64_t t11627 = ((int64_t)UINT64_C(7));
  bool t11628 = (t11626 == t11627);
  if (t11628) {
    uintptr_t t11629 = v0;
    int64_t t11630 = ((int64_t)UINT64_C(0));
    uintptr_t t11631 = v1;
    int64_t t11632 = ((int64_t)UINT64_C(12));
    uintptr_t t11633 = f_getp(t11631,t11632);
    int64_t t11634 = ((int64_t)UINT64_C(12));
    int64_t t11635 = f_get(t11633,t11634);
    f_a_address(t11629,t11630,t11635);
    uintptr_t t11636 = v0;
    int64_t t11637 = ((int64_t)UINT64_C(1));
    int64_t t11638 = ((int64_t)UINT64_C(0));
    f_a_value(t11636,t11637,t11638);
    return;
  } else {
  }
  int64_t t11639 = v2;
  int64_t t11640 = ((int64_t)UINT64_C(3));
  bool t11641 = (t11639 == t11640);
  if (t11641) {
    uintptr_t t11642 = v0;
    uintptr_t t11643 = v1;
    int64_t t11644 = ((int64_t)UINT64_C(6));
    int64_t t11645 = f_get(t11643,t11644);
    f_load_slot(t11642,t11645);
    return;
  } else {
  }
  int64_t t11646 = v2;
  int64_t t11647 = ((int64_t)UINT64_C(6));
  bool t11648 = (t11646 == t11647);
  if (t11648) {
    uintptr_t t11649 = v1;
    int64_t t11650 = ((int64_t)UINT64_C(9));
    uintptr_t t11651 = f_getp(t11649,t11650);
    v5 = t11651;
    uintptr_t t11652 = v5;
    uintptr_t t11653 = f_nil();
    bool t11654 = (t11652 != t11653);
    if (t11654) {
      uintptr_t t11655 = v5;
      int64_t t11656 = ((int64_t)UINT64_C(0));
      uintptr_t t11657 = f_getp(t11655,t11656);
      v6 = t11657;
      while (true) {
        uintptr_t t11658 = v6;
        uintptr_t t11659 = f_nil();
        bool t11660 = (t11658 != t11659);
        if (!t11660) break;
        uintptr_t t11661 = v0;
        uintptr_t t11662 = v6;
        int64_t t11663 = ((int64_t)UINT64_C(0));
        uintptr_t t11664 = f_getp(t11662,t11663);
        f_generate_expr(t11661,t11664);
        uintptr_t t11665 = v0;
        f_push_value(t11665);
        uintptr_t t11666 = v6;
        int64_t t11667 = ((int64_t)UINT64_C(1));
        uintptr_t t11668 = f_getp(t11666,t11667);
        v6 = t11668;
      }
    } else {
    }
    uintptr_t t11669 = v1;
    int64_t t11670 = ((int64_t)UINT64_C(12));
    uintptr_t t11671 = f_getp(t11669,t11670);
    v7 = t11671;
    uintptr_t t11672 = v7;
    uintptr_t t11673 = f_nil();
    bool t11674 = (t11672 != t11673);
    if (t11674) {
      uintptr_t t11675 = v0;
      int64_t t11676 = ((int64_t)UINT64_C(8));
      int64_t t11677 = ((int64_t)UINT64_C(31));
      int64_t t11678 = ((int64_t)UINT64_C(0));
      f_a_addi(t11675,t11676,t11677,t11678);
      uintptr_t t11679 = v0;
      uintptr_t t11680 = v7;
      int64_t t11681 = ((int64_t)UINT64_C(9));
      int64_t t11682 = f_get(t11680,t11681);
      bool t11683 = true;
      f_a_branch(t11679,t11682,t11683);
      uintptr_t t11684 = v0;
      uintptr_t t11685 = v1;
      int64_t t11686 = ((int64_t)UINT64_C(10));
      int64_t t11687 = f_get(t11685,t11686);
      int64_t t11688 = ((int64_t)UINT64_C(16));
      int64_t t11689 = ap_mul(t11687,t11688);
      bool t11690 = false;
      f_a_stack(t11684,t11689,t11690);
    } else {
      uintptr_t t11691 = v0;
      uintptr_t t11692 = v1;
      f_intrinsic(t11691,t11692);
    }
    return;
  } else {
  }
  uintptr_t t11693 = v1;
  int64_t t11694 = ((int64_t)UINT64_C(4));
  ApString t11695 = f_gets(t11693,t11694);
  v8 = t11695;
  int64_t t11696 = v2;
  int64_t t11697 = ((int64_t)UINT64_C(4));
  bool t11698 = (t11696 == t11697);
  if (t11698) {
    uintptr_t t11699 = v0;
    uintptr_t t11700 = v1;
    int64_t t11701 = ((int64_t)UINT64_C(7));
    uintptr_t t11702 = f_getp(t11700,t11701);
    f_generate_expr(t11699,t11702);
    ApString t11703 = v8;
    ApString t11704 = AP_STR("-");
    bool t11705 = ap_equal(t11703,t11704);
    if (t11705) {
      int64_t t11706 = v3;
      int64_t t11707 = ((int64_t)UINT64_C(7));
      bool t11708 = (t11706 == t11707);
      if (t11708) {
        uintptr_t t11709 = v0;
        int64_t t11710 = ((int64_t)UINT64_C(9));
        int64_t t11711 = ((int64_t)UINT64_C(9223372036854775808));
        f_a_value(t11709,t11710,t11711);
        uintptr_t t11712 = v0;
        int64_t t11713 = ((int64_t)UINT64_C(3388997632));
        int64_t t11714 = ((int64_t)UINT64_C(0));
        int64_t t11715 = ((int64_t)UINT64_C(0));
        int64_t t11716 = ((int64_t)UINT64_C(9));
        f_a_op3(t11712,t11713,t11714,t11715,t11716);
      } else {
        uintptr_t t11717 = v0;
        int64_t t11718 = ((int64_t)UINT64_C(0));
        int64_t t11719 = ((int64_t)UINT64_C(0));
        bool t11720 = true;
        f_a_neg(t11717,t11718,t11719,t11720);
        ApString t11721 = AP_STR("error.overflow");
        v9 = t11721;
        int64_t t11722 = v3;
        int64_t t11723 = ((int64_t)UINT64_C(3));
        bool t11724 = (t11722 == t11723);
        if (t11724) {
          ApString t11725 = AP_STR("error.int_overflow");
          v9 = t11725;
        } else {
        }
        uintptr_t t11726 = v0;
        int64_t t11727 = ((int64_t)UINT64_C(6));
        ApString t11728 = v9;
        f_rtcond(t11726,t11727,t11728);
      }
    } else {
    }
    ApString t11729 = v8;
    ApString t11730 = AP_STR("not");
    bool t11731 = ap_equal(t11729,t11730);
    if (t11731) {
      uintptr_t t11732 = v0;
      int64_t t11733 = ((int64_t)UINT64_C(0));
      int64_t t11734 = ((int64_t)UINT64_C(0));
      f_a_cmpi(t11732,t11733,t11734);
      uintptr_t t11735 = v0;
      int64_t t11736 = ((int64_t)UINT64_C(0));
      int64_t t11737 = ((int64_t)UINT64_C(0));
      f_a_cset(t11735,t11736,t11737);
    } else {
    }
    uintptr_t t11738 = v0;
    int64_t t11739 = ((int64_t)UINT64_C(1));
    int64_t t11740 = ((int64_t)UINT64_C(0));
    f_a_value(t11738,t11739,t11740);
    return;
  } else {
  }
  int64_t t11741 = v2;
  int64_t t11742 = ((int64_t)UINT64_C(5));
  bool t11743 = (t11741 == t11742);
  ApString t11744 = AP_STR("unknown AST expression");
  f_need(t11743,t11744);
  ApString t11745 = v8;
  ApString t11746 = AP_STR("and");
  bool t11747 = ap_equal(t11745,t11746);
  bool t11748 = t11747;
  if (!t11748) {
    ApString t11749 = v8;
    ApString t11750 = AP_STR("or");
    bool t11751 = ap_equal(t11749,t11750);
    t11748 = t11751;
  }
  if (t11748) {
    uintptr_t t11752 = v0;
    int64_t t11753 = f_fresh(t11752);
    v10 = t11753;
    uintptr_t t11754 = v0;
    uintptr_t t11755 = v1;
    int64_t t11756 = ((int64_t)UINT64_C(7));
    uintptr_t t11757 = f_getp(t11755,t11756);
    f_generate_expr(t11754,t11757);
    uintptr_t t11758 = v0;
    int64_t t11759 = ((int64_t)UINT64_C(0));
    int64_t t11760 = v10;
    ApString t11761 = v8;
    ApString t11762 = AP_STR("or");
    bool t11763 = ap_equal(t11761,t11762);
    f_a_zero(t11758,t11759,t11760,t11763);
    uintptr_t t11764 = v0;
    uintptr_t t11765 = v1;
    int64_t t11766 = ((int64_t)UINT64_C(8));
    uintptr_t t11767 = f_getp(t11765,t11766);
    f_generate_expr(t11764,t11767);
    uintptr_t t11768 = v0;
    int64_t t11769 = v10;
    f_label_here(t11768,t11769);
    uintptr_t t11770 = v0;
    int64_t t11771 = ((int64_t)UINT64_C(1));
    int64_t t11772 = ((int64_t)UINT64_C(0));
    f_a_value(t11770,t11771,t11772);
    return;
  } else {
  }
  uintptr_t t11773 = v1;
  int64_t t11774 = ((int64_t)UINT64_C(8));
  uintptr_t t11775 = f_getp(t11773,t11774);
  v11 = t11775;
  uintptr_t t11776 = v11;
  int64_t t11777 = ((int64_t)UINT64_C(0));
  int64_t t11778 = f_get(t11776,t11777);
  v12 = t11778;
  uintptr_t t11779 = v1;
  int64_t t11780 = ((int64_t)UINT64_C(7));
  uintptr_t t11781 = f_getp(t11779,t11780);
  int64_t t11782 = ((int64_t)UINT64_C(1));
  int64_t t11783 = f_get(t11781,t11782);
  v13 = t11783;
  uintptr_t t11784 = v0;
  int64_t t11785 = ((int64_t)UINT64_C(17));
  int64_t t11786 = f_get(t11784,t11785);
  int64_t t11787 = ((int64_t)UINT64_C(0));
  bool t11788 = (t11786 != t11787);
  bool t11789 = t11788;
  if (t11789) {
    int64_t t11790 = v12;
    int64_t t11791 = ((int64_t)UINT64_C(0));
    bool t11792 = (t11790 == t11791);
    bool t11793 = t11792;
    if (!t11793) {
      int64_t t11794 = v12;
      int64_t t11795 = ((int64_t)UINT64_C(2));
      bool t11796 = (t11794 == t11795);
      t11793 = t11796;
    }
    t11789 = t11793;
  }
  bool t11797 = t11789;
  if (t11797) {
    int64_t t11798 = v13;
    int64_t t11799 = ((int64_t)UINT64_C(7));
    bool t11800 = (t11798 != t11799);
    t11797 = t11800;
  }
  bool t11801 = t11797;
  if (t11801) {
    int64_t t11802 = v13;
    int64_t t11803 = ((int64_t)UINT64_C(1));
    bool t11804 = (t11802 != t11803);
    t11801 = t11804;
  }
  if (t11801) {
    uintptr_t t11805 = v11;
    int64_t t11806 = ((int64_t)UINT64_C(3));
    int64_t t11807 = f_get(t11805,t11806);
    v14 = t11807;
    int64_t t11808 = v14;
    int64_t t11809 = ((int64_t)UINT64_C(0));
    bool t11810 = (t11808 >= t11809);
    bool t11811 = t11810;
    if (t11811) {
      int64_t t11812 = v14;
      int64_t t11813 = ((int64_t)UINT64_C(4095));
      bool t11814 = (t11812 <= t11813);
      t11811 = t11814;
    }
    if (t11811) {
      ApString t11815 = v8;
      ApString t11816 = AP_STR("+");
      bool t11817 = ap_equal(t11815,t11816);
      bool t11818 = t11817;
      if (!t11818) {
        ApString t11819 = v8;
        ApString t11820 = AP_STR("-");
        bool t11821 = ap_equal(t11819,t11820);
        t11818 = t11821;
      }
      bool t11822 = t11818;
      if (!t11822) {
        ApString t11823 = v8;
        ApString t11824 = AP_STR("=");
        bool t11825 = ap_equal(t11823,t11824);
        t11822 = t11825;
      }
      bool t11826 = t11822;
      if (!t11826) {
        ApString t11827 = v8;
        ApString t11828 = AP_STR("!=");
        bool t11829 = ap_equal(t11827,t11828);
        t11826 = t11829;
      }
      bool t11830 = t11826;
      if (!t11830) {
        ApString t11831 = v8;
        ApString t11832 = AP_STR("<");
        bool t11833 = ap_equal(t11831,t11832);
        t11830 = t11833;
      }
      bool t11834 = t11830;
      if (!t11834) {
        ApString t11835 = v8;
        ApString t11836 = AP_STR("<=");
        bool t11837 = ap_equal(t11835,t11836);
        t11834 = t11837;
      }
      bool t11838 = t11834;
      if (!t11838) {
        ApString t11839 = v8;
        ApString t11840 = AP_STR(">");
        bool t11841 = ap_equal(t11839,t11840);
        t11838 = t11841;
      }
      bool t11842 = t11838;
      if (!t11842) {
        ApString t11843 = v8;
        ApString t11844 = AP_STR(">=");
        bool t11845 = ap_equal(t11843,t11844);
        t11842 = t11845;
      }
      if (t11842) {
        uintptr_t t11846 = v0;
        uintptr_t t11847 = v1;
        int64_t t11848 = ((int64_t)UINT64_C(7));
        uintptr_t t11849 = f_getp(t11847,t11848);
        f_generate_expr(t11846,t11849);
        ApString t11850 = v8;
        ApString t11851 = AP_STR("+");
        bool t11852 = ap_equal(t11850,t11851);
        bool t11853 = t11852;
        if (!t11853) {
          ApString t11854 = v8;
          ApString t11855 = AP_STR("-");
          bool t11856 = ap_equal(t11854,t11855);
          t11853 = t11856;
        }
        if (t11853) {
          int64_t t11857 = ((int64_t)UINT64_C(2969567232));
          v15 = t11857;
          ApString t11858 = v8;
          ApString t11859 = AP_STR("-");
          bool t11860 = ap_equal(t11858,t11859);
          if (t11860) {
            int64_t t11861 = ((int64_t)UINT64_C(4043309056));
            v15 = t11861;
          } else {
          }
          uintptr_t t11862 = v0;
          int64_t t11863 = v15;
          int64_t t11864 = v14;
          int64_t t11865 = ((int64_t)UINT64_C(10));
          int64_t t11866 = ap_shl(t11864,t11865);
          int64_t t11867 = (t11863 | t11866);
          f_emit(t11862,t11867);
          ApString t11868 = AP_STR("error.overflow");
          v16 = t11868;
          int64_t t11869 = v13;
          int64_t t11870 = ((int64_t)UINT64_C(3));
          bool t11871 = (t11869 == t11870);
          if (t11871) {
            ApString t11872 = AP_STR("error.int_overflow");
            v16 = t11872;
          } else {
          }
          uintptr_t t11873 = v0;
          int64_t t11874 = ((int64_t)UINT64_C(6));
          ApString t11875 = v16;
          f_rtcond(t11873,t11874,t11875);
        } else {
          uintptr_t t11876 = v0;
          int64_t t11877 = ((int64_t)UINT64_C(0));
          int64_t t11878 = v14;
          f_a_cmpi(t11876,t11877,t11878);
          uintptr_t t11879 = v0;
          int64_t t11880 = ((int64_t)UINT64_C(0));
          ApString t11881 = v8;
          bool t11882 = false;
          int64_t t11883 = f_compare_condition(t11881,t11882);
          f_a_cset(t11879,t11880,t11883);
        }
        uintptr_t t11884 = v0;
        int64_t t11885 = ((int64_t)UINT64_C(1));
        int64_t t11886 = ((int64_t)UINT64_C(0));
        f_a_value(t11884,t11885,t11886);
        return;
      } else {
      }
    } else {
    }
  } else {
  }
  uintptr_t t11887 = v0;
  uintptr_t t11888 = v1;
  int64_t t11889 = ((int64_t)UINT64_C(7));
  uintptr_t t11890 = f_getp(t11888,t11889);
  f_generate_expr(t11887,t11890);
  uintptr_t t11891 = v0;
  int64_t t11892 = ((int64_t)UINT64_C(17));
  int64_t t11893 = f_get(t11891,t11892);
  int64_t t11894 = ((int64_t)UINT64_C(0));
  bool t11895 = (t11893 != t11894);
  bool t11896 = t11895;
  if (t11896) {
    int64_t t11897 = v12;
    int64_t t11898 = ((int64_t)UINT64_C(0));
    bool t11899 = (t11897 == t11898);
    bool t11900 = t11899;
    if (!t11900) {
      int64_t t11901 = v12;
      int64_t t11902 = ((int64_t)UINT64_C(2));
      bool t11903 = (t11901 == t11902);
      t11900 = t11903;
    }
    bool t11904 = t11900;
    if (!t11904) {
      int64_t t11905 = v12;
      int64_t t11906 = ((int64_t)UINT64_C(3));
      bool t11907 = (t11905 == t11906);
      t11904 = t11907;
    }
    t11896 = t11904;
  }
  if (t11896) {
    uintptr_t t11908 = v0;
    int64_t t11909 = ((int64_t)UINT64_C(2));
    int64_t t11910 = ((int64_t)UINT64_C(0));
    f_a_mov(t11908,t11909,t11910);
    uintptr_t t11911 = v0;
    int64_t t11912 = ((int64_t)UINT64_C(3));
    int64_t t11913 = ((int64_t)UINT64_C(1));
    f_a_mov(t11911,t11912,t11913);
    uintptr_t t11914 = v0;
    uintptr_t t11915 = v11;
    f_generate_expr(t11914,t11915);
  } else {
    uintptr_t t11916 = v0;
    f_push_value(t11916);
    uintptr_t t11917 = v0;
    uintptr_t t11918 = v11;
    f_generate_expr(t11917,t11918);
    uintptr_t t11919 = v0;
    f_pop_left(t11919);
  }
  uintptr_t t11920 = v1;
  int64_t t11921 = ((int64_t)UINT64_C(7));
  uintptr_t t11922 = f_getp(t11920,t11921);
  int64_t t11923 = ((int64_t)UINT64_C(1));
  int64_t t11924 = f_get(t11922,t11923);
  v17 = t11924;
  int64_t t11925 = v17;
  int64_t t11926 = ((int64_t)UINT64_C(7));
  bool t11927 = (t11925 == t11926);
  if (t11927) {
    uintptr_t t11928 = v0;
    int64_t t11929 = ((int64_t)UINT64_C(0));
    int64_t t11930 = ((int64_t)UINT64_C(0));
    bool t11931 = true;
    f_a_fmov(t11928,t11929,t11930,t11931);
    uintptr_t t11932 = v0;
    int64_t t11933 = ((int64_t)UINT64_C(1));
    int64_t t11934 = ((int64_t)UINT64_C(2));
    bool t11935 = true;
    f_a_fmov(t11932,t11933,t11934,t11935);
    ApString t11936 = v8;
    ApString t11937 = AP_STR("+");
    bool t11938 = ap_equal(t11936,t11937);
    bool t11939 = t11938;
    if (!t11939) {
      ApString t11940 = v8;
      ApString t11941 = AP_STR("-");
      bool t11942 = ap_equal(t11940,t11941);
      t11939 = t11942;
    }
    bool t11943 = t11939;
    if (!t11943) {
      ApString t11944 = v8;
      ApString t11945 = AP_STR("*");
      bool t11946 = ap_equal(t11944,t11945);
      t11943 = t11946;
    }
    bool t11947 = t11943;
    if (!t11947) {
      ApString t11948 = v8;
      ApString t11949 = AP_STR("/");
      bool t11950 = ap_equal(t11948,t11949);
      t11947 = t11950;
    }
    if (t11947) {
      ApString t11951 = v8;
      ApString t11952 = AP_STR("/");
      bool t11953 = ap_equal(t11951,t11952);
      if (t11953) {
        uintptr_t t11954 = v0;
        int64_t t11955 = ((int64_t)UINT64_C(2));
        int64_t t11956 = ((int64_t)UINT64_C(0));
        f_a_fconstant(t11954,t11955,t11956);
        uintptr_t t11957 = v0;
        int64_t t11958 = ((int64_t)UINT64_C(0));
        int64_t t11959 = ((int64_t)UINT64_C(2));
        f_a_fcmp(t11957,t11958,t11959);
        uintptr_t t11960 = v0;
        int64_t t11961 = ((int64_t)UINT64_C(0));
        ApString t11962 = AP_STR("error.zero");
        f_rtcond(t11960,t11961,t11962);
      } else {
      }
      uintptr_t t11963 = v0;
      int64_t t11964 = ((int64_t)UINT64_C(0));
      int64_t t11965 = ((int64_t)UINT64_C(1));
      int64_t t11966 = ((int64_t)UINT64_C(0));
      ApString t11967 = v8;
      f_a_fbinary(t11963,t11964,t11965,t11966,t11967);
      uintptr_t t11968 = v0;
      int64_t t11969 = ((int64_t)UINT64_C(0));
      int64_t t11970 = ((int64_t)UINT64_C(0));
      bool t11971 = false;
      f_a_fmov(t11968,t11969,t11970,t11971);
      uintptr_t t11972 = v0;
      f_finite_value(t11972);
    } else {
      uintptr_t t11973 = v0;
      int64_t t11974 = ((int64_t)UINT64_C(1));
      int64_t t11975 = ((int64_t)UINT64_C(0));
      f_a_fcmp(t11973,t11974,t11975);
      uintptr_t t11976 = v0;
      int64_t t11977 = ((int64_t)UINT64_C(0));
      ApString t11978 = v8;
      bool t11979 = true;
      int64_t t11980 = f_compare_condition(t11978,t11979);
      f_a_cset(t11976,t11977,t11980);
    }
    uintptr_t t11981 = v0;
    int64_t t11982 = ((int64_t)UINT64_C(1));
    int64_t t11983 = ((int64_t)UINT64_C(0));
    f_a_value(t11981,t11982,t11983);
    return;
  } else {
  }
  ApString t11984 = AP_STR("error.overflow");
  v18 = t11984;
  int64_t t11985 = v3;
  int64_t t11986 = ((int64_t)UINT64_C(3));
  bool t11987 = (t11985 == t11986);
  if (t11987) {
    ApString t11988 = AP_STR("error.int_overflow");
    v18 = t11988;
  } else {
  }
  ApString t11989 = v8;
  ApString t11990 = AP_STR("+");
  bool t11991 = ap_equal(t11989,t11990);
  bool t11992 = t11991;
  if (!t11992) {
    ApString t11993 = v8;
    ApString t11994 = AP_STR("-");
    bool t11995 = ap_equal(t11993,t11994);
    t11992 = t11995;
  }
  if (t11992) {
    int64_t t11996 = ((int64_t)UINT64_C(2868903936));
    v19 = t11996;
    ApString t11997 = v8;
    ApString t11998 = AP_STR("-");
    bool t11999 = ap_equal(t11997,t11998);
    if (t11999) {
      int64_t t12000 = ((int64_t)UINT64_C(3942645760));
      v19 = t12000;
    } else {
    }
    uintptr_t t12001 = v0;
    int64_t t12002 = v19;
    int64_t t12003 = ((int64_t)UINT64_C(0));
    int64_t t12004 = ((int64_t)UINT64_C(2));
    int64_t t12005 = ((int64_t)UINT64_C(0));
    f_a_op3(t12001,t12002,t12003,t12004,t12005);
    uintptr_t t12006 = v0;
    int64_t t12007 = ((int64_t)UINT64_C(6));
    ApString t12008 = v18;
    f_rtcond(t12006,t12007,t12008);
  } else {
    ApString t12009 = v8;
    ApString t12010 = AP_STR("%");
    bool t12011 = ap_equal(t12009,t12010);
    if (t12011) {
      uintptr_t t12012 = v0;
      int64_t t12013 = ((int64_t)UINT64_C(0));
      ApString t12014 = AP_STR("error.zero");
      bool t12015 = false;
      f_rtzero(t12012,t12013,t12014,t12015);
      uintptr_t t12016 = v0;
      int64_t t12017 = ((int64_t)UINT64_C(2596277248));
      int64_t t12018 = ((int64_t)UINT64_C(9));
      int64_t t12019 = ((int64_t)UINT64_C(2));
      int64_t t12020 = ((int64_t)UINT64_C(0));
      f_a_op3(t12016,t12017,t12018,t12019,t12020);
      uintptr_t t12021 = v0;
      int64_t t12022 = ((int64_t)UINT64_C(0));
      int64_t t12023 = ((int64_t)UINT64_C(9));
      int64_t t12024 = ((int64_t)UINT64_C(0));
      int64_t t12025 = ((int64_t)UINT64_C(2));
      f_a_msub(t12021,t12022,t12023,t12024,t12025);
    } else {
      ApString t12026 = v8;
      ApString t12027 = AP_STR("*");
      bool t12028 = ap_equal(t12026,t12027);
      if (t12028) {
        int64_t t12029 = v3;
        int64_t t12030 = ((int64_t)UINT64_C(3));
        bool t12031 = (t12029 == t12030);
        if (t12031) {
          uintptr_t t12032 = v0;
          int64_t t12033 = ((int64_t)UINT64_C(2604694528));
          int64_t t12034 = ((int64_t)UINT64_C(9));
          int64_t t12035 = ((int64_t)UINT64_C(2));
          int64_t t12036 = ((int64_t)UINT64_C(0));
          f_a_op3(t12032,t12033,t12034,t12035,t12036);
          uintptr_t t12037 = v0;
          int64_t t12038 = ((int64_t)UINT64_C(2600500224));
          int64_t t12039 = ((int64_t)UINT64_C(0));
          int64_t t12040 = ((int64_t)UINT64_C(2));
          int64_t t12041 = ((int64_t)UINT64_C(0));
          f_a_op3(t12037,t12038,t12039,t12040,t12041);
          uintptr_t t12042 = v0;
          int64_t t12043 = ((int64_t)UINT64_C(10));
          int64_t t12044 = ((int64_t)UINT64_C(0));
          int64_t t12045 = ((int64_t)UINT64_C(63));
          bool t12046 = true;
          f_a_right(t12042,t12043,t12044,t12045,t12046);
          uintptr_t t12047 = v0;
          int64_t t12048 = ((int64_t)UINT64_C(9));
          int64_t t12049 = ((int64_t)UINT64_C(10));
          f_a_cmp(t12047,t12048,t12049);
          uintptr_t t12050 = v0;
          int64_t t12051 = ((int64_t)UINT64_C(1));
          ApString t12052 = v18;
          f_rtcond(t12050,t12051,t12052);
        } else {
          uintptr_t t12053 = v0;
          ApString t12054 = AP_STR("runtime.multiply");
          f_rtcall(t12053,t12054);
        }
      } else {
        ApString t12055 = v8;
        ApString t12056 = AP_STR("/");
        bool t12057 = ap_equal(t12055,t12056);
        if (t12057) {
          int64_t t12058 = v3;
          int64_t t12059 = ((int64_t)UINT64_C(3));
          bool t12060 = (t12058 == t12059);
          if (t12060) {
            uintptr_t t12061 = v0;
            int64_t t12062 = ((int64_t)UINT64_C(0));
            ApString t12063 = AP_STR("error.zero");
            bool t12064 = false;
            f_rtzero(t12061,t12062,t12063,t12064);
            uintptr_t t12065 = v0;
            int64_t t12066 = f_fresh(t12065);
            v20 = t12066;
            uintptr_t t12067 = v0;
            int64_t t12068 = ((int64_t)UINT64_C(9));
            int64_t t12069 = ((int64_t)UINT64_C(9223372036854775808));
            f_a_value(t12067,t12068,t12069);
            uintptr_t t12070 = v0;
            int64_t t12071 = ((int64_t)UINT64_C(2));
            int64_t t12072 = ((int64_t)UINT64_C(9));
            f_a_cmp(t12070,t12071,t12072);
            uintptr_t t12073 = v0;
            int64_t t12074 = ((int64_t)UINT64_C(1));
            int64_t t12075 = v20;
            f_a_condition(t12073,t12074,t12075);
            uintptr_t t12076 = v0;
            int64_t t12077 = ((int64_t)UINT64_C(9));
            int64_t t12078 = ((int64_t)UINT64_C(18446744073709551615));
            f_a_value(t12076,t12077,t12078);
            uintptr_t t12079 = v0;
            int64_t t12080 = ((int64_t)UINT64_C(0));
            int64_t t12081 = ((int64_t)UINT64_C(9));
            f_a_cmp(t12079,t12080,t12081);
            uintptr_t t12082 = v0;
            int64_t t12083 = ((int64_t)UINT64_C(0));
            ApString t12084 = v18;
            f_rtcond(t12082,t12083,t12084);
            uintptr_t t12085 = v0;
            int64_t t12086 = v20;
            f_label_here(t12085,t12086);
            uintptr_t t12087 = v0;
            int64_t t12088 = ((int64_t)UINT64_C(2596277248));
            int64_t t12089 = ((int64_t)UINT64_C(0));
            int64_t t12090 = ((int64_t)UINT64_C(2));
            int64_t t12091 = ((int64_t)UINT64_C(0));
            f_a_op3(t12087,t12088,t12089,t12090,t12091);
          } else {
            uintptr_t t12092 = v0;
            ApString t12093 = AP_STR("runtime.divide");
            f_rtcall(t12092,t12093);
          }
        } else {
          int64_t t12094 = v17;
          int64_t t12095 = ((int64_t)UINT64_C(1));
          bool t12096 = (t12094 == t12095);
          if (t12096) {
            uintptr_t t12097 = v0;
            ApString t12098 = AP_STR("runtime.string_equal");
            f_rtcall(t12097,t12098);
            ApString t12099 = v8;
            ApString t12100 = AP_STR("!=");
            bool t12101 = ap_equal(t12099,t12100);
            if (t12101) {
              uintptr_t t12102 = v0;
              int64_t t12103 = ((int64_t)UINT64_C(0));
              int64_t t12104 = ((int64_t)UINT64_C(0));
              f_a_cmpi(t12102,t12103,t12104);
              uintptr_t t12105 = v0;
              int64_t t12106 = ((int64_t)UINT64_C(0));
              int64_t t12107 = ((int64_t)UINT64_C(0));
              f_a_cset(t12105,t12106,t12107);
            } else {
            }
          } else {
            uintptr_t t12108 = v0;
            int64_t t12109 = ((int64_t)UINT64_C(2));
            int64_t t12110 = ((int64_t)UINT64_C(0));
            f_a_cmp(t12108,t12109,t12110);
            uintptr_t t12111 = v0;
            int64_t t12112 = ((int64_t)UINT64_C(0));
            ApString t12113 = v8;
            bool t12114 = false;
            int64_t t12115 = f_compare_condition(t12113,t12114);
            f_a_cset(t12111,t12112,t12115);
          }
        }
      }
    }
  }
  uintptr_t t12116 = v0;
  int64_t t12117 = ((int64_t)UINT64_C(1));
  int64_t t12118 = ((int64_t)UINT64_C(0));
  f_a_value(t12116,t12117,t12118);
}
static void f_exit_code(uintptr_t v0,int64_t v1) {
  uintptr_t t12119 = v0;
  int64_t t12120 = ((int64_t)UINT64_C(0));
  int64_t t12121 = v1;
  f_a_value(t12119,t12120,t12121);
  uintptr_t t12122 = v0;
  int64_t t12123 = ((int64_t)UINT64_C(16));
  int64_t t12124 = ((int64_t)UINT64_C(1));
  f_a_value(t12122,t12123,t12124);
  uintptr_t t12125 = v0;
  int64_t t12126 = ((int64_t)UINT64_C(3556773889));
  f_emit(t12125,t12126);
  uintptr_t t12127 = v0;
  int64_t t12128 = ((int64_t)UINT64_C(3558866944));
  f_emit(t12127,t12128);
}
static void f_generate_print(uintptr_t v0,uintptr_t v1) {
  int64_t v2;
  int64_t v3;
  int64_t v4;
  uintptr_t t12129 = v0;
  uintptr_t t12130 = v1;
  f_generate_expr(t12129,t12130);
  uintptr_t t12131 = v1;
  int64_t t12132 = ((int64_t)UINT64_C(1));
  int64_t t12133 = f_get(t12131,t12132);
  v2 = t12133;
  int64_t t12134 = v2;
  int64_t t12135 = ((int64_t)UINT64_C(0));
  bool t12136 = (t12134 == t12135);
  if (t12136) {
    uintptr_t t12137 = v0;
    ApString t12138 = AP_STR("runtime.number");
    f_rtcall(t12137,t12138);
  } else {
  }
  int64_t t12139 = v2;
  int64_t t12140 = ((int64_t)UINT64_C(3));
  bool t12141 = (t12139 == t12140);
  if (t12141) {
    uintptr_t t12142 = v0;
    ApString t12143 = AP_STR("runtime.integer_print");
    f_rtcall(t12142,t12143);
  } else {
  }
  int64_t t12144 = v2;
  int64_t t12145 = ((int64_t)UINT64_C(5));
  bool t12146 = (t12144 == t12145);
  if (t12146) {
    uintptr_t t12147 = v0;
    ApString t12148 = AP_STR("runtime.pointer_print");
    f_rtcall(t12147,t12148);
  } else {
  }
  int64_t t12149 = v2;
  int64_t t12150 = ((int64_t)UINT64_C(7));
  bool t12151 = (t12149 == t12150);
  if (t12151) {
    uintptr_t t12152 = v0;
    ApString t12153 = AP_STR("runtime.float_print");
    f_rtcall(t12152,t12153);
  } else {
  }
  int64_t t12154 = v2;
  int64_t t12155 = ((int64_t)UINT64_C(1));
  bool t12156 = (t12154 == t12155);
  if (t12156) {
    uintptr_t t12157 = v0;
    f_write_value(t12157);
  } else {
  }
  int64_t t12158 = v2;
  int64_t t12159 = ((int64_t)UINT64_C(2));
  bool t12160 = (t12158 == t12159);
  if (t12160) {
    uintptr_t t12161 = v0;
    int64_t t12162 = f_fresh(t12161);
    v3 = t12162;
    uintptr_t t12163 = v0;
    int64_t t12164 = f_fresh(t12163);
    v4 = t12164;
    uintptr_t t12165 = v0;
    int64_t t12166 = ((int64_t)UINT64_C(0));
    int64_t t12167 = v3;
    bool t12168 = false;
    f_a_zero(t12165,t12166,t12167,t12168);
    uintptr_t t12169 = v0;
    int64_t t12170 = ((int64_t)UINT64_C(0));
    uintptr_t t12171 = v0;
    ApString t12172 = AP_STR("true");
    int64_t t12173 = f_text_label(t12171,t12172);
    f_a_address(t12169,t12170,t12173);
    uintptr_t t12174 = v0;
    int64_t t12175 = ((int64_t)UINT64_C(1));
    int64_t t12176 = ((int64_t)UINT64_C(4));
    f_a_value(t12174,t12175,t12176);
    uintptr_t t12177 = v0;
    int64_t t12178 = v4;
    bool t12179 = false;
    f_a_branch(t12177,t12178,t12179);
    uintptr_t t12180 = v0;
    int64_t t12181 = v3;
    f_label_here(t12180,t12181);
    uintptr_t t12182 = v0;
    int64_t t12183 = ((int64_t)UINT64_C(0));
    uintptr_t t12184 = v0;
    ApString t12185 = AP_STR("false");
    int64_t t12186 = f_text_label(t12184,t12185);
    f_a_address(t12182,t12183,t12186);
    uintptr_t t12187 = v0;
    int64_t t12188 = ((int64_t)UINT64_C(1));
    int64_t t12189 = ((int64_t)UINT64_C(5));
    f_a_value(t12187,t12188,t12189);
    uintptr_t t12190 = v0;
    int64_t t12191 = v4;
    f_label_here(t12190,t12191);
    uintptr_t t12192 = v0;
    f_write_value(t12192);
  } else {
  }
}
static void f_loop_push(uintptr_t v0,int64_t v1,int64_t v2) {
  uintptr_t v3;
  uintptr_t t12193 = v0;
  int64_t t12194 = ((int64_t)UINT64_C(32));
  uintptr_t t12195 = f_arena(t12193,t12194);
  v3 = t12195;
  uintptr_t t12196 = v3;
  int64_t t12197 = ((int64_t)UINT64_C(0));
  int64_t t12198 = v1;
  f_put(t12196,t12197,t12198);
  uintptr_t t12199 = v3;
  int64_t t12200 = ((int64_t)UINT64_C(1));
  int64_t t12201 = v2;
  f_put(t12199,t12200,t12201);
  uintptr_t t12202 = v3;
  int64_t t12203 = ((int64_t)UINT64_C(2));
  uintptr_t t12204 = v0;
  int64_t t12205 = ((int64_t)UINT64_C(15));
  uintptr_t t12206 = f_getp(t12204,t12205);
  f_putp(t12202,t12203,t12206);
  uintptr_t t12207 = v0;
  int64_t t12208 = ((int64_t)UINT64_C(15));
  uintptr_t t12209 = v3;
  f_putp(t12207,t12208,t12209);
}
static void f_loop_pop(uintptr_t v0) {
  uintptr_t t12210 = v0;
  int64_t t12211 = ((int64_t)UINT64_C(15));
  uintptr_t t12212 = v0;
  int64_t t12213 = ((int64_t)UINT64_C(15));
  uintptr_t t12214 = f_getp(t12212,t12213);
  int64_t t12215 = ((int64_t)UINT64_C(2));
  uintptr_t t12216 = f_getp(t12214,t12215);
  f_putp(t12210,t12211,t12216);
}
static void f_generate_block(uintptr_t v0,uintptr_t v1) {
  uintptr_t v2;
  int64_t v3;
  uintptr_t v4;
  int64_t v5;
  int64_t v6;
  int64_t v7;
  int64_t v8;
  uintptr_t v9;
  int64_t v10;
  int64_t v11;
  int64_t v12;
  int64_t v13;
  uintptr_t v14;
  int64_t v15;
  uintptr_t t12217 = v1;
  v2 = t12217;
  while (true) {
    uintptr_t t12218 = v2;
    uintptr_t t12219 = f_nil();
    bool t12220 = (t12218 != t12219);
    if (!t12220) break;
    uintptr_t t12221 = v2;
    int64_t t12222 = ((int64_t)UINT64_C(0));
    int64_t t12223 = f_get(t12221,t12222);
    v3 = t12223;
    int64_t t12224 = v3;
    int64_t t12225 = ((int64_t)UINT64_C(0));
    bool t12226 = (t12224 == t12225);
    if (t12226) {
      uintptr_t t12227 = v0;
      uintptr_t t12228 = v2;
      int64_t t12229 = ((int64_t)UINT64_C(4));
      uintptr_t t12230 = f_getp(t12228,t12229);
      f_generate_expr(t12227,t12230);
      uintptr_t t12231 = v0;
      uintptr_t t12232 = v2;
      int64_t t12233 = ((int64_t)UINT64_C(2));
      int64_t t12234 = f_get(t12232,t12233);
      f_store_slot(t12231,t12234);
    } else {
    }
    int64_t t12235 = v3;
    int64_t t12236 = ((int64_t)UINT64_C(1));
    bool t12237 = (t12235 == t12236);
    if (t12237) {
      uintptr_t t12238 = v2;
      int64_t t12239 = ((int64_t)UINT64_C(5));
      uintptr_t t12240 = f_getp(t12238,t12239);
      int64_t t12241 = ((int64_t)UINT64_C(0));
      uintptr_t t12242 = f_getp(t12240,t12241);
      v4 = t12242;
      while (true) {
        uintptr_t t12243 = v4;
        uintptr_t t12244 = f_nil();
        bool t12245 = (t12243 != t12244);
        if (!t12245) break;
        uintptr_t t12246 = v0;
        uintptr_t t12247 = v4;
        int64_t t12248 = ((int64_t)UINT64_C(0));
        uintptr_t t12249 = f_getp(t12247,t12248);
        f_generate_print(t12246,t12249);
        uintptr_t t12250 = v4;
        int64_t t12251 = ((int64_t)UINT64_C(1));
        uintptr_t t12252 = f_getp(t12250,t12251);
        v4 = t12252;
      }
    } else {
    }
    int64_t t12253 = v3;
    int64_t t12254 = ((int64_t)UINT64_C(2));
    bool t12255 = (t12253 == t12254);
    if (t12255) {
      uintptr_t t12256 = v0;
      int64_t t12257 = f_fresh(t12256);
      v5 = t12257;
      uintptr_t t12258 = v0;
      int64_t t12259 = f_fresh(t12258);
      v6 = t12259;
      uintptr_t t12260 = v0;
      uintptr_t t12261 = v2;
      int64_t t12262 = ((int64_t)UINT64_C(4));
      uintptr_t t12263 = f_getp(t12261,t12262);
      f_generate_expr(t12260,t12263);
      uintptr_t t12264 = v0;
      int64_t t12265 = ((int64_t)UINT64_C(0));
      int64_t t12266 = v5;
      bool t12267 = false;
      f_a_zero(t12264,t12265,t12266,t12267);
      uintptr_t t12268 = v0;
      uintptr_t t12269 = v2;
      int64_t t12270 = ((int64_t)UINT64_C(7));
      uintptr_t t12271 = f_getp(t12269,t12270);
      f_generate_block(t12268,t12271);
      uintptr_t t12272 = v0;
      int64_t t12273 = v6;
      bool t12274 = false;
      f_a_branch(t12272,t12273,t12274);
      uintptr_t t12275 = v0;
      int64_t t12276 = v5;
      f_label_here(t12275,t12276);
      uintptr_t t12277 = v0;
      uintptr_t t12278 = v2;
      int64_t t12279 = ((int64_t)UINT64_C(8));
      uintptr_t t12280 = f_getp(t12278,t12279);
      f_generate_block(t12277,t12280);
      uintptr_t t12281 = v0;
      int64_t t12282 = v6;
      f_label_here(t12281,t12282);
    } else {
    }
    int64_t t12283 = v3;
    int64_t t12284 = ((int64_t)UINT64_C(4));
    bool t12285 = (t12283 == t12284);
    if (t12285) {
      uintptr_t t12286 = v0;
      int64_t t12287 = f_fresh(t12286);
      v7 = t12287;
      uintptr_t t12288 = v0;
      int64_t t12289 = f_fresh(t12288);
      v8 = t12289;
      uintptr_t t12290 = v0;
      int64_t t12291 = v7;
      f_label_here(t12290,t12291);
      uintptr_t t12292 = v0;
      uintptr_t t12293 = v2;
      int64_t t12294 = ((int64_t)UINT64_C(4));
      uintptr_t t12295 = f_getp(t12293,t12294);
      f_generate_expr(t12292,t12295);
      uintptr_t t12296 = v0;
      int64_t t12297 = ((int64_t)UINT64_C(0));
      int64_t t12298 = v8;
      bool t12299 = false;
      f_a_zero(t12296,t12297,t12298,t12299);
      uintptr_t t12300 = v0;
      int64_t t12301 = v7;
      int64_t t12302 = v8;
      f_loop_push(t12300,t12301,t12302);
      uintptr_t t12303 = v0;
      uintptr_t t12304 = v2;
      int64_t t12305 = ((int64_t)UINT64_C(7));
      uintptr_t t12306 = f_getp(t12304,t12305);
      f_generate_block(t12303,t12306);
      uintptr_t t12307 = v0;
      f_loop_pop(t12307);
      uintptr_t t12308 = v0;
      int64_t t12309 = v7;
      bool t12310 = false;
      f_a_branch(t12308,t12309,t12310);
      uintptr_t t12311 = v0;
      int64_t t12312 = v8;
      f_label_here(t12311,t12312);
    } else {
    }
    int64_t t12313 = v3;
    int64_t t12314 = ((int64_t)UINT64_C(3));
    bool t12315 = (t12313 == t12314);
    if (t12315) {
      uintptr_t t12316 = v2;
      int64_t t12317 = ((int64_t)UINT64_C(5));
      uintptr_t t12318 = f_getp(t12316,t12317);
      int64_t t12319 = ((int64_t)UINT64_C(0));
      uintptr_t t12320 = f_getp(t12318,t12319);
      v9 = t12320;
      int64_t t12321 = ((int64_t)UINT64_C(0));
      v10 = t12321;
      while (true) {
        uintptr_t t12322 = v9;
        uintptr_t t12323 = f_nil();
        bool t12324 = (t12322 != t12323);
        if (!t12324) break;
        uintptr_t t12325 = v0;
        uintptr_t t12326 = v9;
        int64_t t12327 = ((int64_t)UINT64_C(0));
        uintptr_t t12328 = f_getp(t12326,t12327);
        f_generate_expr(t12325,t12328);
        uintptr_t t12329 = v0;
        uintptr_t t12330 = v2;
        int64_t t12331 = ((int64_t)UINT64_C(10));
        int64_t t12332 = f_get(t12330,t12331);
        int64_t t12333 = v10;
        int64_t t12334 = ap_add(t12332,t12333);
        f_store_slot(t12329,t12334);
        uintptr_t t12335 = v9;
        int64_t t12336 = ((int64_t)UINT64_C(1));
        uintptr_t t12337 = f_getp(t12335,t12336);
        v9 = t12337;
        int64_t t12338 = v10;
        int64_t t12339 = ((int64_t)UINT64_C(1));
        int64_t t12340 = ap_add(t12338,t12339);
        v10 = t12340;
      }
      uintptr_t t12341 = v0;
      int64_t t12342 = ((int64_t)UINT64_C(0));
      int64_t t12343 = ((int64_t)UINT64_C(0));
      f_a_value(t12341,t12342,t12343);
      uintptr_t t12344 = v0;
      int64_t t12345 = ((int64_t)UINT64_C(1));
      int64_t t12346 = ((int64_t)UINT64_C(0));
      f_a_value(t12344,t12345,t12346);
      uintptr_t t12347 = v0;
      uintptr_t t12348 = v2;
      int64_t t12349 = ((int64_t)UINT64_C(9));
      int64_t t12350 = f_get(t12348,t12349);
      f_store_slot(t12347,t12350);
      uintptr_t t12351 = v0;
      int64_t t12352 = f_fresh(t12351);
      v11 = t12352;
      uintptr_t t12353 = v0;
      int64_t t12354 = f_fresh(t12353);
      v12 = t12354;
      uintptr_t t12355 = v0;
      int64_t t12356 = f_fresh(t12355);
      v13 = t12356;
      uintptr_t t12357 = v0;
      int64_t t12358 = v11;
      f_label_here(t12357,t12358);
      uintptr_t t12359 = v0;
      int64_t t12360 = ((int64_t)UINT64_C(9));
      int64_t t12361 = ((int64_t)UINT64_C(28));
      uintptr_t t12362 = v2;
      int64_t t12363 = ((int64_t)UINT64_C(9));
      int64_t t12364 = f_get(t12362,t12363);
      int64_t t12365 = ((int64_t)UINT64_C(16));
      int64_t t12366 = ap_mul(t12364,t12365);
      f_a_load(t12359,t12360,t12361,t12366);
      uintptr_t t12367 = v0;
      int64_t t12368 = ((int64_t)UINT64_C(10));
      uintptr_t t12369 = v2;
      int64_t t12370 = ((int64_t)UINT64_C(6));
      int64_t t12371 = f_get(t12369,t12370);
      f_a_value(t12367,t12368,t12371);
      uintptr_t t12372 = v0;
      int64_t t12373 = ((int64_t)UINT64_C(9));
      int64_t t12374 = ((int64_t)UINT64_C(10));
      f_a_cmp(t12372,t12373,t12374);
      uintptr_t t12375 = v0;
      int64_t t12376 = ((int64_t)UINT64_C(2));
      int64_t t12377 = v12;
      f_a_condition(t12375,t12376,t12377);
      uintptr_t t12378 = v0;
      int64_t t12379 = ((int64_t)UINT64_C(10));
      uintptr_t t12380 = v2;
      int64_t t12381 = ((int64_t)UINT64_C(10));
      int64_t t12382 = f_get(t12380,t12381);
      int64_t t12383 = ((int64_t)UINT64_C(16));
      int64_t t12384 = ap_mul(t12382,t12383);
      f_a_value(t12378,t12379,t12384);
      uintptr_t t12385 = v0;
      int64_t t12386 = ((int64_t)UINT64_C(10));
      int64_t t12387 = ((int64_t)UINT64_C(28));
      int64_t t12388 = ((int64_t)UINT64_C(10));
      f_a_add(t12385,t12386,t12387,t12388);
      uintptr_t t12389 = v0;
      int64_t t12390 = ((int64_t)UINT64_C(10));
      int64_t t12391 = ((int64_t)UINT64_C(10));
      int64_t t12392 = ((int64_t)UINT64_C(9));
      int64_t t12393 = ((int64_t)UINT64_C(4));
      f_a_addshift(t12389,t12390,t12391,t12392,t12393);
      uintptr_t t12394 = v0;
      int64_t t12395 = ((int64_t)UINT64_C(0));
      int64_t t12396 = ((int64_t)UINT64_C(10));
      int64_t t12397 = ((int64_t)UINT64_C(0));
      f_a_load(t12394,t12395,t12396,t12397);
      uintptr_t t12398 = v0;
      int64_t t12399 = ((int64_t)UINT64_C(1));
      int64_t t12400 = ((int64_t)UINT64_C(10));
      int64_t t12401 = ((int64_t)UINT64_C(8));
      f_a_load(t12398,t12399,t12400,t12401);
      uintptr_t t12402 = v0;
      uintptr_t t12403 = v2;
      int64_t t12404 = ((int64_t)UINT64_C(2));
      int64_t t12405 = f_get(t12403,t12404);
      f_store_slot(t12402,t12405);
      uintptr_t t12406 = v0;
      int64_t t12407 = v13;
      int64_t t12408 = v12;
      f_loop_push(t12406,t12407,t12408);
      uintptr_t t12409 = v0;
      uintptr_t t12410 = v2;
      int64_t t12411 = ((int64_t)UINT64_C(7));
      uintptr_t t12412 = f_getp(t12410,t12411);
      f_generate_block(t12409,t12412);
      uintptr_t t12413 = v0;
      f_loop_pop(t12413);
      uintptr_t t12414 = v0;
      int64_t t12415 = v13;
      f_label_here(t12414,t12415);
      uintptr_t t12416 = v0;
      int64_t t12417 = ((int64_t)UINT64_C(0));
      int64_t t12418 = ((int64_t)UINT64_C(28));
      uintptr_t t12419 = v2;
      int64_t t12420 = ((int64_t)UINT64_C(9));
      int64_t t12421 = f_get(t12419,t12420);
      int64_t t12422 = ((int64_t)UINT64_C(16));
      int64_t t12423 = ap_mul(t12421,t12422);
      f_a_load(t12416,t12417,t12418,t12423);
      uintptr_t t12424 = v0;
      int64_t t12425 = ((int64_t)UINT64_C(0));
      int64_t t12426 = ((int64_t)UINT64_C(0));
      int64_t t12427 = ((int64_t)UINT64_C(1));
      f_a_addi(t12424,t12425,t12426,t12427);
      uintptr_t t12428 = v0;
      int64_t t12429 = ((int64_t)UINT64_C(0));
      int64_t t12430 = ((int64_t)UINT64_C(28));
      uintptr_t t12431 = v2;
      int64_t t12432 = ((int64_t)UINT64_C(9));
      int64_t t12433 = f_get(t12431,t12432);
      int64_t t12434 = ((int64_t)UINT64_C(16));
      int64_t t12435 = ap_mul(t12433,t12434);
      f_a_store(t12428,t12429,t12430,t12435);
      uintptr_t t12436 = v0;
      int64_t t12437 = v11;
      bool t12438 = false;
      f_a_branch(t12436,t12437,t12438);
      uintptr_t t12439 = v0;
      int64_t t12440 = v12;
      f_label_here(t12439,t12440);
    } else {
    }
    int64_t t12441 = v3;
    int64_t t12442 = ((int64_t)UINT64_C(5));
    bool t12443 = (t12441 == t12442);
    if (t12443) {
      uintptr_t t12444 = v2;
      int64_t t12445 = ((int64_t)UINT64_C(4));
      uintptr_t t12446 = f_getp(t12444,t12445);
      v14 = t12446;
      uintptr_t t12447 = v0;
      uintptr_t t12448 = v14;
      f_generate_expr(t12447,t12448);
      uintptr_t t12449 = v0;
      int64_t t12450 = ((int64_t)UINT64_C(0));
      int64_t t12451 = ((int64_t)UINT64_C(0));
      f_a_cmpi(t12449,t12450,t12451);
      uintptr_t t12452 = v0;
      int64_t t12453 = ((int64_t)UINT64_C(11));
      ApString t12454 = AP_STR("error.exit");
      f_rtcond(t12452,t12453,t12454);
      int64_t t12455 = ((int64_t)UINT64_C(1000000));
      v15 = t12455;
      uintptr_t t12456 = v14;
      int64_t t12457 = ((int64_t)UINT64_C(1));
      int64_t t12458 = f_get(t12456,t12457);
      int64_t t12459 = ((int64_t)UINT64_C(3));
      bool t12460 = (t12458 == t12459);
      if (t12460) {
        int64_t t12461 = ((int64_t)UINT64_C(1));
        v15 = t12461;
      } else {
      }
      uintptr_t t12462 = v0;
      int64_t t12463 = ((int64_t)UINT64_C(9));
      int64_t t12464 = ((int64_t)UINT64_C(255));
      int64_t t12465 = v15;
      int64_t t12466 = ap_mul(t12464,t12465);
      f_a_value(t12462,t12463,t12466);
      uintptr_t t12467 = v0;
      int64_t t12468 = ((int64_t)UINT64_C(0));
      int64_t t12469 = ((int64_t)UINT64_C(9));
      f_a_cmp(t12467,t12468,t12469);
      uintptr_t t12470 = v0;
      int64_t t12471 = ((int64_t)UINT64_C(8));
      ApString t12472 = AP_STR("error.exit");
      f_rtcond(t12470,t12471,t12472);
      uintptr_t t12473 = v0;
      int64_t t12474 = ((int64_t)UINT64_C(9));
      int64_t t12475 = v15;
      f_a_value(t12473,t12474,t12475);
      uintptr_t t12476 = v0;
      int64_t t12477 = ((int64_t)UINT64_C(2596276224));
      int64_t t12478 = ((int64_t)UINT64_C(10));
      int64_t t12479 = ((int64_t)UINT64_C(0));
      int64_t t12480 = ((int64_t)UINT64_C(9));
      f_a_op3(t12476,t12477,t12478,t12479,t12480);
      uintptr_t t12481 = v0;
      int64_t t12482 = ((int64_t)UINT64_C(11));
      int64_t t12483 = ((int64_t)UINT64_C(10));
      int64_t t12484 = ((int64_t)UINT64_C(9));
      int64_t t12485 = ((int64_t)UINT64_C(0));
      f_a_msub(t12481,t12482,t12483,t12484,t12485);
      uintptr_t t12486 = v0;
      int64_t t12487 = ((int64_t)UINT64_C(11));
      ApString t12488 = AP_STR("error.exit");
      bool t12489 = true;
      f_rtzero(t12486,t12487,t12488,t12489);
      uintptr_t t12490 = v0;
      int64_t t12491 = ((int64_t)UINT64_C(0));
      int64_t t12492 = ((int64_t)UINT64_C(10));
      f_a_mov(t12490,t12491,t12492);
      uintptr_t t12493 = v0;
      int64_t t12494 = ((int64_t)UINT64_C(16));
      int64_t t12495 = ((int64_t)UINT64_C(1));
      f_a_value(t12493,t12494,t12495);
      uintptr_t t12496 = v0;
      int64_t t12497 = ((int64_t)UINT64_C(3556773889));
      f_emit(t12496,t12497);
      uintptr_t t12498 = v0;
      int64_t t12499 = ((int64_t)UINT64_C(3558866944));
      f_emit(t12498,t12499);
    } else {
    }
    int64_t t12500 = v3;
    int64_t t12501 = ((int64_t)UINT64_C(6));
    bool t12502 = (t12500 == t12501);
    if (t12502) {
      uintptr_t t12503 = v0;
      uintptr_t t12504 = v2;
      int64_t t12505 = ((int64_t)UINT64_C(4));
      uintptr_t t12506 = f_getp(t12504,t12505);
      f_generate_expr(t12503,t12506);
    } else {
    }
    int64_t t12507 = v3;
    int64_t t12508 = ((int64_t)UINT64_C(7));
    bool t12509 = (t12507 == t12508);
    if (t12509) {
      uintptr_t t12510 = v0;
      uintptr_t t12511 = v2;
      int64_t t12512 = ((int64_t)UINT64_C(7));
      uintptr_t t12513 = f_getp(t12511,t12512);
      f_generate_block(t12510,t12513);
    } else {
    }
    int64_t t12514 = v3;
    int64_t t12515 = ((int64_t)UINT64_C(8));
    bool t12516 = (t12514 == t12515);
    if (t12516) {
      uintptr_t t12517 = v2;
      int64_t t12518 = ((int64_t)UINT64_C(4));
      uintptr_t t12519 = f_getp(t12517,t12518);
      uintptr_t t12520 = f_nil();
      bool t12521 = (t12519 != t12520);
      if (t12521) {
        uintptr_t t12522 = v0;
        uintptr_t t12523 = v2;
        int64_t t12524 = ((int64_t)UINT64_C(4));
        uintptr_t t12525 = f_getp(t12523,t12524);
        f_generate_expr(t12522,t12525);
      } else {
        uintptr_t t12526 = v0;
        int64_t t12527 = ((int64_t)UINT64_C(0));
        int64_t t12528 = ((int64_t)UINT64_C(0));
        f_a_value(t12526,t12527,t12528);
        uintptr_t t12529 = v0;
        int64_t t12530 = ((int64_t)UINT64_C(1));
        int64_t t12531 = ((int64_t)UINT64_C(0));
        f_a_value(t12529,t12530,t12531);
      }
      uintptr_t t12532 = v0;
      uintptr_t t12533 = v0;
      int64_t t12534 = ((int64_t)UINT64_C(14));
      int64_t t12535 = f_get(t12533,t12534);
      bool t12536 = false;
      f_a_branch(t12532,t12535,t12536);
    } else {
    }
    int64_t t12537 = v3;
    int64_t t12538 = ((int64_t)UINT64_C(9));
    bool t12539 = (t12537 == t12538);
    if (t12539) {
      uintptr_t t12540 = v0;
      uintptr_t t12541 = v0;
      int64_t t12542 = ((int64_t)UINT64_C(15));
      uintptr_t t12543 = f_getp(t12541,t12542);
      int64_t t12544 = ((int64_t)UINT64_C(1));
      int64_t t12545 = f_get(t12543,t12544);
      bool t12546 = false;
      f_a_branch(t12540,t12545,t12546);
    } else {
    }
    int64_t t12547 = v3;
    int64_t t12548 = ((int64_t)UINT64_C(10));
    bool t12549 = (t12547 == t12548);
    if (t12549) {
      uintptr_t t12550 = v0;
      uintptr_t t12551 = v0;
      int64_t t12552 = ((int64_t)UINT64_C(15));
      uintptr_t t12553 = f_getp(t12551,t12552);
      int64_t t12554 = ((int64_t)UINT64_C(0));
      int64_t t12555 = f_get(t12553,t12554);
      bool t12556 = false;
      f_a_branch(t12550,t12555,t12556);
    } else {
    }
    uintptr_t t12557 = v2;
    int64_t t12558 = ((int64_t)UINT64_C(11));
    uintptr_t t12559 = f_getp(t12557,t12558);
    v2 = t12559;
  }
}
static void f_generate_function(uintptr_t v0,uintptr_t v1) {
  int64_t v2;
  int64_t v3;
  int64_t v4;
  uintptr_t t12560 = v0;
  uintptr_t t12561 = v1;
  int64_t t12562 = ((int64_t)UINT64_C(9));
  int64_t t12563 = f_get(t12561,t12562);
  f_label_here(t12560,t12563);
  uintptr_t t12564 = v0;
  int64_t t12565 = ((int64_t)UINT64_C(32));
  bool t12566 = true;
  f_a_stack(t12564,t12565,t12566);
  uintptr_t t12567 = v0;
  int64_t t12568 = ((int64_t)UINT64_C(29));
  int64_t t12569 = ((int64_t)UINT64_C(31));
  int64_t t12570 = ((int64_t)UINT64_C(0));
  f_a_store(t12567,t12568,t12569,t12570);
  uintptr_t t12571 = v0;
  int64_t t12572 = ((int64_t)UINT64_C(30));
  int64_t t12573 = ((int64_t)UINT64_C(31));
  int64_t t12574 = ((int64_t)UINT64_C(8));
  f_a_store(t12571,t12572,t12573,t12574);
  uintptr_t t12575 = v0;
  int64_t t12576 = ((int64_t)UINT64_C(28));
  int64_t t12577 = ((int64_t)UINT64_C(31));
  int64_t t12578 = ((int64_t)UINT64_C(16));
  f_a_store(t12575,t12576,t12577,t12578);
  uintptr_t t12579 = v0;
  int64_t t12580 = ((int64_t)UINT64_C(29));
  int64_t t12581 = ((int64_t)UINT64_C(31));
  int64_t t12582 = ((int64_t)UINT64_C(0));
  f_a_addi(t12579,t12580,t12581,t12582);
  uintptr_t t12583 = v0;
  uintptr_t t12584 = v1;
  int64_t t12585 = ((int64_t)UINT64_C(7));
  int64_t t12586 = f_get(t12584,t12585);
  int64_t t12587 = ((int64_t)UINT64_C(16));
  int64_t t12588 = ap_mul(t12586,t12587);
  bool t12589 = true;
  f_a_stack(t12583,t12588,t12589);
  uintptr_t t12590 = v0;
  int64_t t12591 = ((int64_t)UINT64_C(28));
  int64_t t12592 = ((int64_t)UINT64_C(31));
  int64_t t12593 = ((int64_t)UINT64_C(0));
  f_a_addi(t12590,t12591,t12592,t12593);
  uintptr_t t12594 = v0;
  int64_t t12595 = ((int64_t)UINT64_C(28));
  int64_t t12596 = ((int64_t)UINT64_C(22));
  f_a_cmp(t12594,t12595,t12596);
  uintptr_t t12597 = v0;
  int64_t t12598 = ((int64_t)UINT64_C(3));
  ApString t12599 = AP_STR("error.stack");
  f_rtcond(t12597,t12598,t12599);
  uintptr_t t12600 = v1;
  int64_t t12601 = ((int64_t)UINT64_C(5));
  int64_t t12602 = f_get(t12600,t12601);
  v2 = t12602;
  int64_t t12603 = ((int64_t)UINT64_C(0));
  v3 = t12603;
  while (true) {
    int64_t t12604 = v3;
    int64_t t12605 = v2;
    bool t12606 = (t12604 < t12605);
    if (!t12606) break;
    uintptr_t t12607 = v0;
    int64_t t12608 = ((int64_t)UINT64_C(0));
    int64_t t12609 = ((int64_t)UINT64_C(8));
    int64_t t12610 = v2;
    int64_t t12611 = v3;
    int64_t t12612 = ap_sub(t12610,t12611);
    int64_t t12613 = ((int64_t)UINT64_C(1));
    int64_t t12614 = ap_sub(t12612,t12613);
    int64_t t12615 = ((int64_t)UINT64_C(16));
    int64_t t12616 = ap_mul(t12614,t12615);
    f_a_load(t12607,t12608,t12609,t12616);
    uintptr_t t12617 = v0;
    int64_t t12618 = ((int64_t)UINT64_C(1));
    int64_t t12619 = ((int64_t)UINT64_C(8));
    int64_t t12620 = v2;
    int64_t t12621 = v3;
    int64_t t12622 = ap_sub(t12620,t12621);
    int64_t t12623 = ((int64_t)UINT64_C(1));
    int64_t t12624 = ap_sub(t12622,t12623);
    int64_t t12625 = ((int64_t)UINT64_C(16));
    int64_t t12626 = ap_mul(t12624,t12625);
    int64_t t12627 = ((int64_t)UINT64_C(8));
    int64_t t12628 = ap_add(t12626,t12627);
    f_a_load(t12617,t12618,t12619,t12628);
    uintptr_t t12629 = v0;
    uintptr_t t12630 = v1;
    int64_t t12631 = ((int64_t)UINT64_C(4));
    uintptr_t t12632 = f_getp(t12630,t12631);
    int64_t t12633 = v3;
    uintptr_t t12634 = f_list_get(t12632,t12633);
    int64_t t12635 = ((int64_t)UINT64_C(3));
    int64_t t12636 = f_get(t12634,t12635);
    f_store_slot(t12629,t12636);
    int64_t t12637 = v3;
    int64_t t12638 = ((int64_t)UINT64_C(1));
    int64_t t12639 = ap_add(t12637,t12638);
    v3 = t12639;
  }
  uintptr_t t12640 = v0;
  int64_t t12641 = f_fresh(t12640);
  v4 = t12641;
  uintptr_t t12642 = v0;
  int64_t t12643 = ((int64_t)UINT64_C(14));
  int64_t t12644 = v4;
  f_put(t12642,t12643,t12644);
  uintptr_t t12645 = v0;
  uintptr_t t12646 = v1;
  int64_t t12647 = ((int64_t)UINT64_C(6));
  uintptr_t t12648 = f_getp(t12646,t12647);
  f_generate_block(t12645,t12648);
  uintptr_t t12649 = v0;
  int64_t t12650 = ((int64_t)UINT64_C(0));
  int64_t t12651 = ((int64_t)UINT64_C(0));
  f_a_value(t12649,t12650,t12651);
  uintptr_t t12652 = v0;
  int64_t t12653 = ((int64_t)UINT64_C(1));
  int64_t t12654 = ((int64_t)UINT64_C(0));
  f_a_value(t12652,t12653,t12654);
  uintptr_t t12655 = v0;
  int64_t t12656 = v4;
  f_label_here(t12655,t12656);
  uintptr_t t12657 = v0;
  int64_t t12658 = ((int64_t)UINT64_C(31));
  int64_t t12659 = ((int64_t)UINT64_C(29));
  int64_t t12660 = ((int64_t)UINT64_C(0));
  f_a_addi(t12657,t12658,t12659,t12660);
  uintptr_t t12661 = v0;
  int64_t t12662 = ((int64_t)UINT64_C(28));
  int64_t t12663 = ((int64_t)UINT64_C(31));
  int64_t t12664 = ((int64_t)UINT64_C(16));
  f_a_load(t12661,t12662,t12663,t12664);
  uintptr_t t12665 = v0;
  int64_t t12666 = ((int64_t)UINT64_C(30));
  int64_t t12667 = ((int64_t)UINT64_C(31));
  int64_t t12668 = ((int64_t)UINT64_C(8));
  f_a_load(t12665,t12666,t12667,t12668);
  uintptr_t t12669 = v0;
  int64_t t12670 = ((int64_t)UINT64_C(29));
  int64_t t12671 = ((int64_t)UINT64_C(31));
  int64_t t12672 = ((int64_t)UINT64_C(0));
  f_a_load(t12669,t12670,t12671,t12672);
  uintptr_t t12673 = v0;
  int64_t t12674 = ((int64_t)UINT64_C(32));
  bool t12675 = false;
  f_a_stack(t12673,t12674,t12675);
  uintptr_t t12676 = v0;
  int64_t t12677 = ((int64_t)UINT64_C(3596551104));
  f_emit(t12676,t12677);
}
static void f_emit_time_init(uintptr_t v0) {
  uintptr_t t12678 = v0;
  int64_t t12679 = ((int64_t)UINT64_C(16));
  bool t12680 = true;
  f_a_stack(t12678,t12679,t12680);
  uintptr_t t12681 = v0;
  int64_t t12682 = ((int64_t)UINT64_C(0));
  int64_t t12683 = ((int64_t)UINT64_C(31));
  int64_t t12684 = ((int64_t)UINT64_C(0));
  f_a_addi(t12681,t12682,t12683,t12684);
  uintptr_t t12685 = v0;
  int64_t t12686 = ((int64_t)UINT64_C(16));
  int64_t t12687 = ((int64_t)UINT64_C(18446744073709551527));
  f_a_value(t12685,t12686,t12687);
  uintptr_t t12688 = v0;
  int64_t t12689 = ((int64_t)UINT64_C(3556773889));
  f_emit(t12688,t12689);
  uintptr_t t12690 = v0;
  int64_t t12691 = ((int64_t)UINT64_C(0));
  ApString t12692 = AP_STR("error.time");
  bool t12693 = true;
  f_rtzero(t12690,t12691,t12692,t12693);
  uintptr_t t12694 = v0;
  int64_t t12695 = ((int64_t)UINT64_C(25));
  int64_t t12696 = ((int64_t)UINT64_C(31));
  int64_t t12697 = ((int64_t)UINT64_C(4));
  bool t12698 = true;
  f_a_width(t12694,t12695,t12696,t12697,t12698);
  uintptr_t t12699 = v0;
  int64_t t12700 = ((int64_t)UINT64_C(9));
  int64_t t12701 = ((int64_t)UINT64_C(31));
  int64_t t12702 = ((int64_t)UINT64_C(4));
  f_a_addi(t12699,t12700,t12701,t12702);
  uintptr_t t12703 = v0;
  int64_t t12704 = ((int64_t)UINT64_C(24));
  int64_t t12705 = ((int64_t)UINT64_C(9));
  int64_t t12706 = ((int64_t)UINT64_C(4));
  bool t12707 = true;
  f_a_width(t12703,t12704,t12705,t12706,t12707);
  uintptr_t t12708 = v0;
  int64_t t12709 = ((int64_t)UINT64_C(16));
  bool t12710 = false;
  f_a_stack(t12708,t12709,t12710);
  uintptr_t t12711 = v0;
  int64_t t12712 = ((int64_t)UINT64_C(25));
  ApString t12713 = AP_STR("error.time");
  bool t12714 = false;
  f_rtzero(t12711,t12712,t12713,t12714);
  uintptr_t t12715 = v0;
  int64_t t12716 = ((int64_t)UINT64_C(24));
  ApString t12717 = AP_STR("error.time");
  bool t12718 = false;
  f_rtzero(t12715,t12716,t12717,t12718);
  uintptr_t t12719 = v0;
  int64_t t12720 = ((int64_t)UINT64_C(9));
  int64_t t12721 = ((int64_t)UINT64_C(1000));
  f_a_value(t12719,t12720,t12721);
  uintptr_t t12722 = v0;
  int64_t t12723 = ((int64_t)UINT64_C(2600500224));
  int64_t t12724 = ((int64_t)UINT64_C(24));
  int64_t t12725 = ((int64_t)UINT64_C(24));
  int64_t t12726 = ((int64_t)UINT64_C(9));
  f_a_op3(t12722,t12723,t12724,t12725,t12726);
  uintptr_t t12727 = v0;
  ApString t12728 = AP_STR("runtime.rawclock");
  f_rtcall(t12727,t12728);
  uintptr_t t12729 = v0;
  int64_t t12730 = ((int64_t)UINT64_C(23));
  int64_t t12731 = ((int64_t)UINT64_C(0));
  f_a_mov(t12729,t12730,t12731);
}
static void f_generate_task_adapter(uintptr_t v0,uintptr_t v1) {
  int64_t v2;
  int64_t v3;
  int64_t v4;
  uintptr_t t12732 = v0;
  uintptr_t t12733 = v1;
  int64_t t12734 = ((int64_t)UINT64_C(12));
  int64_t t12735 = f_get(t12733,t12734);
  f_label_here(t12732,t12735);
  uintptr_t t12736 = v0;
  int64_t t12737 = ((int64_t)UINT64_C(208));
  bool t12738 = true;
  f_a_stack(t12736,t12737,t12738);
  int64_t t12739 = ((int64_t)UINT64_C(19));
  v2 = t12739;
  while (true) {
    int64_t t12740 = v2;
    int64_t t12741 = ((int64_t)UINT64_C(30));
    bool t12742 = (t12740 <= t12741);
    if (!t12742) break;
    uintptr_t t12743 = v0;
    int64_t t12744 = v2;
    int64_t t12745 = ((int64_t)UINT64_C(31));
    int64_t t12746 = ((int64_t)UINT64_C(48));
    int64_t t12747 = v2;
    int64_t t12748 = ((int64_t)UINT64_C(19));
    int64_t t12749 = ap_sub(t12747,t12748);
    int64_t t12750 = ((int64_t)UINT64_C(8));
    int64_t t12751 = ap_mul(t12749,t12750);
    int64_t t12752 = ap_add(t12746,t12751);
    f_a_store(t12743,t12744,t12745,t12752);
    int64_t t12753 = v2;
    int64_t t12754 = ((int64_t)UINT64_C(1));
    int64_t t12755 = ap_add(t12753,t12754);
    v2 = t12755;
  }
  int64_t t12756 = ((int64_t)UINT64_C(8));
  v2 = t12756;
  while (true) {
    int64_t t12757 = v2;
    int64_t t12758 = ((int64_t)UINT64_C(15));
    bool t12759 = (t12757 <= t12758);
    if (!t12759) break;
    uintptr_t t12760 = v0;
    int64_t t12761 = ((int64_t)UINT64_C(4244635648));
    int64_t t12762 = ((int64_t)UINT64_C(144));
    int64_t t12763 = v2;
    int64_t t12764 = ((int64_t)UINT64_C(8));
    int64_t t12765 = ap_sub(t12763,t12764);
    int64_t t12766 = ((int64_t)UINT64_C(8));
    int64_t t12767 = ap_mul(t12765,t12766);
    int64_t t12768 = ap_add(t12762,t12767);
    int64_t t12769 = ((int64_t)UINT64_C(8));
    int64_t t12770 = ap_div(t12768,t12769);
    int64_t t12771 = ((int64_t)UINT64_C(1024));
    int64_t t12772 = ap_mul(t12770,t12771);
    int64_t t12773 = ap_add(t12761,t12772);
    int64_t t12774 = ((int64_t)UINT64_C(31));
    int64_t t12775 = ((int64_t)UINT64_C(32));
    int64_t t12776 = ap_mul(t12774,t12775);
    int64_t t12777 = ap_add(t12773,t12776);
    int64_t t12778 = v2;
    int64_t t12779 = ap_add(t12777,t12778);
    f_emit(t12760,t12779);
    int64_t t12780 = v2;
    int64_t t12781 = ((int64_t)UINT64_C(1));
    int64_t t12782 = ap_add(t12780,t12781);
    v2 = t12782;
  }
  uintptr_t t12783 = v0;
  int64_t t12784 = ((int64_t)UINT64_C(19));
  int64_t t12785 = ((int64_t)UINT64_C(0));
  f_a_mov(t12783,t12784,t12785);
  uintptr_t t12786 = v0;
  int64_t t12787 = ((int64_t)UINT64_C(20));
  int64_t t12788 = ((int64_t)UINT64_C(1));
  f_a_mov(t12786,t12787,t12788);
  uintptr_t t12789 = v0;
  int64_t t12790 = ((int64_t)UINT64_C(27));
  int64_t t12791 = ((int64_t)UINT64_C(19));
  int64_t t12792 = ((int64_t)UINT64_C(16));
  f_a_load(t12789,t12790,t12791,t12792);
  uintptr_t t12793 = v0;
  int64_t t12794 = ((int64_t)UINT64_C(10));
  int64_t t12795 = ((int64_t)UINT64_C(19));
  int64_t t12796 = ((int64_t)UINT64_C(24));
  f_a_load(t12793,t12794,t12795,t12796);
  uintptr_t t12797 = v0;
  int64_t t12798 = ((int64_t)UINT64_C(11));
  int64_t t12799 = ((int64_t)UINT64_C(19));
  int64_t t12800 = ((int64_t)UINT64_C(32));
  f_a_load(t12797,t12798,t12799,t12800);
  uintptr_t t12801 = v0;
  int64_t t12802 = ((int64_t)UINT64_C(2596276224));
  int64_t t12803 = ((int64_t)UINT64_C(12));
  int64_t t12804 = ((int64_t)UINT64_C(10));
  int64_t t12805 = ((int64_t)UINT64_C(11));
  f_a_op3(t12801,t12802,t12803,t12804,t12805);
  uintptr_t t12806 = v0;
  int64_t t12807 = ((int64_t)UINT64_C(13));
  int64_t t12808 = ((int64_t)UINT64_C(12));
  int64_t t12809 = ((int64_t)UINT64_C(11));
  int64_t t12810 = ((int64_t)UINT64_C(10));
  f_a_msub(t12806,t12807,t12808,t12809,t12810);
  uintptr_t t12811 = v0;
  int64_t t12812 = ((int64_t)UINT64_C(2600500224));
  int64_t t12813 = ((int64_t)UINT64_C(14));
  int64_t t12814 = ((int64_t)UINT64_C(20));
  int64_t t12815 = ((int64_t)UINT64_C(12));
  f_a_op3(t12811,t12812,t12813,t12814,t12815);
  uintptr_t t12816 = v0;
  int64_t t12817 = f_fresh(t12816);
  v3 = t12817;
  uintptr_t t12818 = v0;
  int64_t t12819 = f_fresh(t12818);
  v4 = t12819;
  uintptr_t t12820 = v0;
  int64_t t12821 = ((int64_t)UINT64_C(20));
  int64_t t12822 = ((int64_t)UINT64_C(13));
  f_a_cmp(t12820,t12821,t12822);
  uintptr_t t12823 = v0;
  int64_t t12824 = ((int64_t)UINT64_C(2));
  int64_t t12825 = v3;
  f_a_condition(t12823,t12824,t12825);
  uintptr_t t12826 = v0;
  int64_t t12827 = ((int64_t)UINT64_C(14));
  int64_t t12828 = ((int64_t)UINT64_C(14));
  int64_t t12829 = ((int64_t)UINT64_C(20));
  f_a_add(t12826,t12827,t12828,t12829);
  uintptr_t t12830 = v0;
  int64_t t12831 = ((int64_t)UINT64_C(15));
  int64_t t12832 = ((int64_t)UINT64_C(14));
  int64_t t12833 = ((int64_t)UINT64_C(12));
  f_a_add(t12830,t12831,t12832,t12833);
  uintptr_t t12834 = v0;
  int64_t t12835 = ((int64_t)UINT64_C(15));
  int64_t t12836 = ((int64_t)UINT64_C(15));
  int64_t t12837 = ((int64_t)UINT64_C(1));
  f_a_addi(t12834,t12835,t12836,t12837);
  uintptr_t t12838 = v0;
  int64_t t12839 = v4;
  bool t12840 = false;
  f_a_branch(t12838,t12839,t12840);
  uintptr_t t12841 = v0;
  int64_t t12842 = v3;
  f_label_here(t12841,t12842);
  uintptr_t t12843 = v0;
  int64_t t12844 = ((int64_t)UINT64_C(14));
  int64_t t12845 = ((int64_t)UINT64_C(14));
  int64_t t12846 = ((int64_t)UINT64_C(13));
  f_a_add(t12843,t12844,t12845,t12846);
  uintptr_t t12847 = v0;
  int64_t t12848 = ((int64_t)UINT64_C(15));
  int64_t t12849 = ((int64_t)UINT64_C(14));
  int64_t t12850 = ((int64_t)UINT64_C(12));
  f_a_add(t12847,t12848,t12849,t12850);
  uintptr_t t12851 = v0;
  int64_t t12852 = v4;
  f_label_here(t12851,t12852);
  uintptr_t t12853 = v0;
  int64_t t12854 = ((int64_t)UINT64_C(15));
  int64_t t12855 = ((int64_t)UINT64_C(31));
  int64_t t12856 = ((int64_t)UINT64_C(0));
  f_a_store(t12853,t12854,t12855,t12856);
  uintptr_t t12857 = v0;
  int64_t t12858 = ((int64_t)UINT64_C(31));
  int64_t t12859 = ((int64_t)UINT64_C(31));
  int64_t t12860 = ((int64_t)UINT64_C(8));
  f_a_store(t12857,t12858,t12859,t12860);
  uintptr_t t12861 = v0;
  int64_t t12862 = ((int64_t)UINT64_C(14));
  int64_t t12863 = ((int64_t)UINT64_C(31));
  int64_t t12864 = ((int64_t)UINT64_C(16));
  f_a_store(t12861,t12862,t12863,t12864);
  uintptr_t t12865 = v0;
  int64_t t12866 = ((int64_t)UINT64_C(31));
  int64_t t12867 = ((int64_t)UINT64_C(31));
  int64_t t12868 = ((int64_t)UINT64_C(24));
  f_a_store(t12865,t12866,t12867,t12868);
  uintptr_t t12869 = v0;
  int64_t t12870 = ((int64_t)UINT64_C(9));
  int64_t t12871 = ((int64_t)UINT64_C(19));
  int64_t t12872 = ((int64_t)UINT64_C(0));
  f_a_load(t12869,t12870,t12871,t12872);
  uintptr_t t12873 = v0;
  int64_t t12874 = ((int64_t)UINT64_C(9));
  int64_t t12875 = ((int64_t)UINT64_C(31));
  int64_t t12876 = ((int64_t)UINT64_C(32));
  f_a_store(t12873,t12874,t12875,t12876);
  uintptr_t t12877 = v0;
  int64_t t12878 = ((int64_t)UINT64_C(9));
  int64_t t12879 = ((int64_t)UINT64_C(19));
  int64_t t12880 = ((int64_t)UINT64_C(8));
  f_a_load(t12877,t12878,t12879,t12880);
  uintptr_t t12881 = v0;
  int64_t t12882 = ((int64_t)UINT64_C(9));
  int64_t t12883 = ((int64_t)UINT64_C(31));
  int64_t t12884 = ((int64_t)UINT64_C(40));
  f_a_store(t12881,t12882,t12883,t12884);
  uintptr_t t12885 = v0;
  int64_t t12886 = ((int64_t)UINT64_C(22));
  int64_t t12887 = ((int64_t)UINT64_C(31));
  int64_t t12888 = ((int64_t)UINT64_C(0));
  f_a_addi(t12885,t12886,t12887,t12888);
  uintptr_t t12889 = v0;
  int64_t t12890 = ((int64_t)UINT64_C(9));
  int64_t t12891 = ((int64_t)UINT64_C(131072));
  f_a_value(t12889,t12890,t12891);
  uintptr_t t12892 = v0;
  int64_t t12893 = ((int64_t)UINT64_C(22));
  int64_t t12894 = ((int64_t)UINT64_C(22));
  int64_t t12895 = ((int64_t)UINT64_C(9));
  f_a_sub(t12892,t12893,t12894,t12895);
  uintptr_t t12896 = v0;
  int64_t t12897 = ((int64_t)UINT64_C(8));
  int64_t t12898 = ((int64_t)UINT64_C(31));
  int64_t t12899 = ((int64_t)UINT64_C(0));
  f_a_addi(t12896,t12897,t12898,t12899);
  uintptr_t t12900 = v0;
  uintptr_t t12901 = v1;
  int64_t t12902 = ((int64_t)UINT64_C(9));
  int64_t t12903 = f_get(t12901,t12902);
  bool t12904 = true;
  f_a_branch(t12900,t12903,t12904);
  int64_t t12905 = ((int64_t)UINT64_C(8));
  v2 = t12905;
  while (true) {
    int64_t t12906 = v2;
    int64_t t12907 = ((int64_t)UINT64_C(15));
    bool t12908 = (t12906 <= t12907);
    if (!t12908) break;
    uintptr_t t12909 = v0;
    int64_t t12910 = ((int64_t)UINT64_C(4248829952));
    int64_t t12911 = ((int64_t)UINT64_C(144));
    int64_t t12912 = v2;
    int64_t t12913 = ((int64_t)UINT64_C(8));
    int64_t t12914 = ap_sub(t12912,t12913);
    int64_t t12915 = ((int64_t)UINT64_C(8));
    int64_t t12916 = ap_mul(t12914,t12915);
    int64_t t12917 = ap_add(t12911,t12916);
    int64_t t12918 = ((int64_t)UINT64_C(8));
    int64_t t12919 = ap_div(t12917,t12918);
    int64_t t12920 = ((int64_t)UINT64_C(1024));
    int64_t t12921 = ap_mul(t12919,t12920);
    int64_t t12922 = ap_add(t12910,t12921);
    int64_t t12923 = ((int64_t)UINT64_C(31));
    int64_t t12924 = ((int64_t)UINT64_C(32));
    int64_t t12925 = ap_mul(t12923,t12924);
    int64_t t12926 = ap_add(t12922,t12925);
    int64_t t12927 = v2;
    int64_t t12928 = ap_add(t12926,t12927);
    f_emit(t12909,t12928);
    int64_t t12929 = v2;
    int64_t t12930 = ((int64_t)UINT64_C(1));
    int64_t t12931 = ap_add(t12929,t12930);
    v2 = t12931;
  }
  int64_t t12932 = ((int64_t)UINT64_C(19));
  v2 = t12932;
  while (true) {
    int64_t t12933 = v2;
    int64_t t12934 = ((int64_t)UINT64_C(30));
    bool t12935 = (t12933 <= t12934);
    if (!t12935) break;
    uintptr_t t12936 = v0;
    int64_t t12937 = v2;
    int64_t t12938 = ((int64_t)UINT64_C(31));
    int64_t t12939 = ((int64_t)UINT64_C(48));
    int64_t t12940 = v2;
    int64_t t12941 = ((int64_t)UINT64_C(19));
    int64_t t12942 = ap_sub(t12940,t12941);
    int64_t t12943 = ((int64_t)UINT64_C(8));
    int64_t t12944 = ap_mul(t12942,t12943);
    int64_t t12945 = ap_add(t12939,t12944);
    f_a_load(t12936,t12937,t12938,t12945);
    int64_t t12946 = v2;
    int64_t t12947 = ((int64_t)UINT64_C(1));
    int64_t t12948 = ap_add(t12946,t12947);
    v2 = t12948;
  }
  uintptr_t t12949 = v0;
  int64_t t12950 = ((int64_t)UINT64_C(208));
  bool t12951 = false;
  f_a_stack(t12949,t12950,t12951);
  uintptr_t t12952 = v0;
  int64_t t12953 = ((int64_t)UINT64_C(3596551104));
  f_emit(t12952,t12953);
}
static uintptr_t f_generate(uintptr_t v0) {
  uintptr_t v1;
  uintptr_t v2;
  int64_t t12954 = ((int64_t)UINT64_C(33554432));
  int64_t t12955 = ((int64_t)UINT64_C(256));
  uintptr_t t12956 = f_new_arena(t12954,t12955);
  v1 = t12956;
  uintptr_t t12957 = v1;
  int64_t t12958 = ((int64_t)UINT64_C(17));
  int64_t t12959 = ((int64_t)UINT64_C(1));
  uintptr_t t12960 = v0;
  int64_t t12961 = ((int64_t)UINT64_C(24));
  int64_t t12962 = f_get(t12960,t12961);
  int64_t t12963 = ap_sub(t12959,t12962);
  f_put(t12957,t12958,t12963);
  uintptr_t t12964 = v1;
  int64_t t12965 = ((int64_t)UINT64_C(18));
  int64_t t12966 = ((int64_t)UINT64_C(8192));
  uintptr_t t12967 = f_raw(t12966);
  f_putp(t12964,t12965,t12967);
  uintptr_t t12968 = v1;
  int64_t t12969 = ((int64_t)UINT64_C(3));
  int64_t t12970 = ((int64_t)UINT64_C(33554432));
  uintptr_t t12971 = f_raw(t12970);
  f_putp(t12968,t12969,t12971);
  uintptr_t t12972 = v1;
  int64_t t12973 = ((int64_t)UINT64_C(6));
  int64_t t12974 = ((int64_t)UINT64_C(2097152));
  uintptr_t t12975 = f_raw(t12974);
  f_putp(t12972,t12973,t12975);
  uintptr_t t12976 = v1;
  f_emit_runtime(t12976);
  uintptr_t t12977 = v0;
  int64_t t12978 = ((int64_t)UINT64_C(8));
  uintptr_t t12979 = f_getp(t12977,t12978);
  v2 = t12979;
  while (true) {
    uintptr_t t12980 = v2;
    uintptr_t t12981 = f_nil();
    bool t12982 = (t12980 != t12981);
    if (!t12982) break;
    uintptr_t t12983 = v2;
    int64_t t12984 = ((int64_t)UINT64_C(9));
    uintptr_t t12985 = v1;
    int64_t t12986 = f_fresh(t12985);
    f_put(t12983,t12984,t12986);
    uintptr_t t12987 = v2;
    int64_t t12988 = ((int64_t)UINT64_C(11));
    int64_t t12989 = f_get(t12987,t12988);
    int64_t t12990 = ((int64_t)UINT64_C(1));
    bool t12991 = (t12989 == t12990);
    if (t12991) {
      uintptr_t t12992 = v2;
      int64_t t12993 = ((int64_t)UINT64_C(12));
      uintptr_t t12994 = v1;
      int64_t t12995 = f_fresh(t12994);
      f_put(t12992,t12993,t12995);
    } else {
    }
    uintptr_t t12996 = v2;
    int64_t t12997 = ((int64_t)UINT64_C(8));
    uintptr_t t12998 = f_getp(t12996,t12997);
    v2 = t12998;
  }
  uintptr_t t12999 = v1;
  ApString t13000 = AP_STR("program.entry");
  int64_t t13001 = f_runtime_id(t13000);
  f_label_here(t12999,t13001);
  uintptr_t t13002 = v1;
  int64_t t13003 = ((int64_t)UINT64_C(704644083));
  f_emit(t13002,t13003);
  uintptr_t t13004 = v1;
  int64_t t13005 = ((int64_t)UINT64_C(20));
  int64_t t13006 = ((int64_t)UINT64_C(1));
  f_a_mov(t13004,t13005,t13006);
  uintptr_t t13007 = v1;
  int64_t t13008 = ((int64_t)UINT64_C(21));
  int64_t t13009 = ((int64_t)UINT64_C(2));
  f_a_mov(t13007,t13008,t13009);
  uintptr_t t13010 = v1;
  int64_t t13011 = ((int64_t)UINT64_C(32));
  bool t13012 = true;
  f_a_stack(t13010,t13011,t13012);
  uintptr_t t13013 = v1;
  int64_t t13014 = ((int64_t)UINT64_C(29));
  int64_t t13015 = ((int64_t)UINT64_C(31));
  int64_t t13016 = ((int64_t)UINT64_C(0));
  f_a_store(t13013,t13014,t13015,t13016);
  uintptr_t t13017 = v1;
  int64_t t13018 = ((int64_t)UINT64_C(30));
  int64_t t13019 = ((int64_t)UINT64_C(31));
  int64_t t13020 = ((int64_t)UINT64_C(8));
  f_a_store(t13017,t13018,t13019,t13020);
  uintptr_t t13021 = v1;
  int64_t t13022 = ((int64_t)UINT64_C(28));
  int64_t t13023 = ((int64_t)UINT64_C(31));
  int64_t t13024 = ((int64_t)UINT64_C(16));
  f_a_store(t13021,t13022,t13023,t13024);
  uintptr_t t13025 = v1;
  int64_t t13026 = ((int64_t)UINT64_C(29));
  int64_t t13027 = ((int64_t)UINT64_C(31));
  int64_t t13028 = ((int64_t)UINT64_C(0));
  f_a_addi(t13025,t13026,t13027,t13028);
  uintptr_t t13029 = v1;
  int64_t t13030 = ((int64_t)UINT64_C(27));
  int64_t t13031 = ((int64_t)UINT64_C(0));
  f_a_value(t13029,t13030,t13031);
  uintptr_t t13032 = v1;
  int64_t t13033 = ((int64_t)UINT64_C(22));
  int64_t t13034 = ((int64_t)UINT64_C(31));
  int64_t t13035 = ((int64_t)UINT64_C(0));
  f_a_addi(t13032,t13033,t13034,t13035);
  uintptr_t t13036 = v1;
  int64_t t13037 = ((int64_t)UINT64_C(17));
  int64_t t13038 = ((int64_t)UINT64_C(1048576));
  f_a_value(t13036,t13037,t13038);
  uintptr_t t13039 = v1;
  int64_t t13040 = ((int64_t)UINT64_C(22));
  int64_t t13041 = ((int64_t)UINT64_C(22));
  int64_t t13042 = ((int64_t)UINT64_C(17));
  f_a_sub(t13039,t13040,t13041,t13042);
  uintptr_t t13043 = v0;
  int64_t t13044 = ((int64_t)UINT64_C(12));
  int64_t t13045 = f_get(t13043,t13044);
  int64_t t13046 = ((int64_t)UINT64_C(0));
  bool t13047 = (t13045 != t13046);
  if (t13047) {
    uintptr_t t13048 = v1;
    f_emit_time_init(t13048);
  } else {
  }
  uintptr_t t13049 = v1;
  uintptr_t t13050 = v0;
  int64_t t13051 = ((int64_t)UINT64_C(11));
  int64_t t13052 = f_get(t13050,t13051);
  int64_t t13053 = ((int64_t)UINT64_C(16));
  int64_t t13054 = ap_mul(t13052,t13053);
  bool t13055 = true;
  f_a_stack(t13049,t13054,t13055);
  uintptr_t t13056 = v1;
  int64_t t13057 = ((int64_t)UINT64_C(28));
  int64_t t13058 = ((int64_t)UINT64_C(31));
  int64_t t13059 = ((int64_t)UINT64_C(0));
  f_a_addi(t13056,t13057,t13058,t13059);
  uintptr_t t13060 = v1;
  uintptr_t t13061 = v0;
  int64_t t13062 = ((int64_t)UINT64_C(10));
  uintptr_t t13063 = f_getp(t13061,t13062);
  f_generate_block(t13060,t13063);
  uintptr_t t13064 = v1;
  int64_t t13065 = ((int64_t)UINT64_C(0));
  f_exit_code(t13064,t13065);
  uintptr_t t13066 = v0;
  int64_t t13067 = ((int64_t)UINT64_C(8));
  uintptr_t t13068 = f_getp(t13066,t13067);
  v2 = t13068;
  while (true) {
    uintptr_t t13069 = v2;
    uintptr_t t13070 = f_nil();
    bool t13071 = (t13069 != t13070);
    if (!t13071) break;
    uintptr_t t13072 = v1;
    uintptr_t t13073 = v2;
    f_generate_function(t13072,t13073);
    uintptr_t t13074 = v2;
    int64_t t13075 = ((int64_t)UINT64_C(11));
    int64_t t13076 = f_get(t13074,t13075);
    int64_t t13077 = ((int64_t)UINT64_C(1));
    bool t13078 = (t13076 == t13077);
    if (t13078) {
      uintptr_t t13079 = v1;
      uintptr_t t13080 = v2;
      f_generate_task_adapter(t13079,t13080);
    } else {
    }
    uintptr_t t13081 = v2;
    int64_t t13082 = ((int64_t)UINT64_C(8));
    uintptr_t t13083 = f_getp(t13081,t13082);
    v2 = t13083;
  }
  uintptr_t t13084 = v1;
  f_finish_code(t13084);
  uintptr_t t13085 = v1;
  return t13085;
}
static int64_t f_ror32(int64_t v0,int64_t v1) {
  int64_t t13086 = v0;
  int64_t t13087 = v1;
  int64_t t13088 = ap_shr(t13086,t13087);
  int64_t t13089 = v0;
  int64_t t13090 = ((int64_t)UINT64_C(32));
  int64_t t13091 = v1;
  int64_t t13092 = ap_sub(t13090,t13091);
  int64_t t13093 = ap_shl(t13089,t13092);
  int64_t t13094 = (t13088 | t13093);
  int64_t t13095 = ((int64_t)UINT64_C(4294967295));
  int64_t t13096 = (t13094 & t13095);
  return t13096;
}
static int64_t f_read_be32(uintptr_t v0,int64_t v1) {
  uintptr_t t13097 = v0;
  int64_t t13098 = v1;
  int64_t t13099 = f_getb(t13097,t13098);
  int64_t t13100 = ((int64_t)UINT64_C(24));
  int64_t t13101 = ap_shl(t13099,t13100);
  uintptr_t t13102 = v0;
  int64_t t13103 = v1;
  int64_t t13104 = ((int64_t)UINT64_C(1));
  int64_t t13105 = ap_add(t13103,t13104);
  int64_t t13106 = f_getb(t13102,t13105);
  int64_t t13107 = ((int64_t)UINT64_C(16));
  int64_t t13108 = ap_shl(t13106,t13107);
  int64_t t13109 = ap_add(t13101,t13108);
  uintptr_t t13110 = v0;
  int64_t t13111 = v1;
  int64_t t13112 = ((int64_t)UINT64_C(2));
  int64_t t13113 = ap_add(t13111,t13112);
  int64_t t13114 = f_getb(t13110,t13113);
  int64_t t13115 = ((int64_t)UINT64_C(8));
  int64_t t13116 = ap_shl(t13114,t13115);
  int64_t t13117 = ap_add(t13109,t13116);
  uintptr_t t13118 = v0;
  int64_t t13119 = v1;
  int64_t t13120 = ((int64_t)UINT64_C(3));
  int64_t t13121 = ap_add(t13119,t13120);
  int64_t t13122 = f_getb(t13118,t13121);
  int64_t t13123 = ap_add(t13117,t13122);
  return t13123;
}
static void f_write_be32(uintptr_t v0,int64_t v1,int64_t v2) {
  uintptr_t t13124 = v0;
  int64_t t13125 = v1;
  int64_t t13126 = v2;
  int64_t t13127 = ((int64_t)UINT64_C(24));
  int64_t t13128 = ap_shr(t13126,t13127);
  int64_t t13129 = ((int64_t)UINT64_C(255));
  int64_t t13130 = (t13128 & t13129);
  f_setb(t13124,t13125,t13130);
  uintptr_t t13131 = v0;
  int64_t t13132 = v1;
  int64_t t13133 = ((int64_t)UINT64_C(1));
  int64_t t13134 = ap_add(t13132,t13133);
  int64_t t13135 = v2;
  int64_t t13136 = ((int64_t)UINT64_C(16));
  int64_t t13137 = ap_shr(t13135,t13136);
  int64_t t13138 = ((int64_t)UINT64_C(255));
  int64_t t13139 = (t13137 & t13138);
  f_setb(t13131,t13134,t13139);
  uintptr_t t13140 = v0;
  int64_t t13141 = v1;
  int64_t t13142 = ((int64_t)UINT64_C(2));
  int64_t t13143 = ap_add(t13141,t13142);
  int64_t t13144 = v2;
  int64_t t13145 = ((int64_t)UINT64_C(8));
  int64_t t13146 = ap_shr(t13144,t13145);
  int64_t t13147 = ((int64_t)UINT64_C(255));
  int64_t t13148 = (t13146 & t13147);
  f_setb(t13140,t13143,t13148);
  uintptr_t t13149 = v0;
  int64_t t13150 = v1;
  int64_t t13151 = ((int64_t)UINT64_C(3));
  int64_t t13152 = ap_add(t13150,t13151);
  int64_t t13153 = v2;
  int64_t t13154 = ((int64_t)UINT64_C(255));
  int64_t t13155 = (t13153 & t13154);
  f_setb(t13149,t13152,t13155);
}
static uintptr_t f_sha_workspace() {
  uintptr_t v0;
  int64_t v1;
  int64_t v2;
  int64_t t13156 = ((int64_t)UINT64_C(1216));
  uintptr_t t13157 = f_raw(t13156);
  v0 = t13157;
  int64_t t13158 = ((int64_t)UINT64_C(0));
  v1 = t13158;
  int64_t t13159 = ((int64_t)UINT64_C(1116352408));
  int64_t t13160 = ((int64_t)UINT64_C(1899447441));
  int64_t t13161 = ((int64_t)UINT64_C(3049323471));
  int64_t t13162 = ((int64_t)UINT64_C(3921009573));
  int64_t t13163 = ((int64_t)UINT64_C(961987163));
  int64_t t13164 = ((int64_t)UINT64_C(1508970993));
  int64_t t13165 = ((int64_t)UINT64_C(2453635748));
  int64_t t13166 = ((int64_t)UINT64_C(2870763221));
  int64_t t13167 = ((int64_t)UINT64_C(3624381080));
  int64_t t13168 = ((int64_t)UINT64_C(310598401));
  int64_t t13169 = ((int64_t)UINT64_C(607225278));
  int64_t t13170 = ((int64_t)UINT64_C(1426881987));
  int64_t t13171 = ((int64_t)UINT64_C(1925078388));
  int64_t t13172 = ((int64_t)UINT64_C(2162078206));
  int64_t t13173 = ((int64_t)UINT64_C(2614888103));
  int64_t t13174 = ((int64_t)UINT64_C(3248222580));
  int64_t t13175 = ((int64_t)UINT64_C(3835390401));
  int64_t t13176 = ((int64_t)UINT64_C(4022224774));
  int64_t t13177 = ((int64_t)UINT64_C(264347078));
  int64_t t13178 = ((int64_t)UINT64_C(604807628));
  int64_t t13179 = ((int64_t)UINT64_C(770255983));
  int64_t t13180 = ((int64_t)UINT64_C(1249150122));
  int64_t t13181 = ((int64_t)UINT64_C(1555081692));
  int64_t t13182 = ((int64_t)UINT64_C(1996064986));
  int64_t t13183 = ((int64_t)UINT64_C(2554220882));
  int64_t t13184 = ((int64_t)UINT64_C(2821834349));
  int64_t t13185 = ((int64_t)UINT64_C(2952996808));
  int64_t t13186 = ((int64_t)UINT64_C(3210313671));
  int64_t t13187 = ((int64_t)UINT64_C(3336571891));
  int64_t t13188 = ((int64_t)UINT64_C(3584528711));
  int64_t t13189 = ((int64_t)UINT64_C(113926993));
  int64_t t13190 = ((int64_t)UINT64_C(338241895));
  int64_t t13191 = ((int64_t)UINT64_C(666307205));
  int64_t t13192 = ((int64_t)UINT64_C(773529912));
  int64_t t13193 = ((int64_t)UINT64_C(1294757372));
  int64_t t13194 = ((int64_t)UINT64_C(1396182291));
  int64_t t13195 = ((int64_t)UINT64_C(1695183700));
  int64_t t13196 = ((int64_t)UINT64_C(1986661051));
  int64_t t13197 = ((int64_t)UINT64_C(2177026350));
  int64_t t13198 = ((int64_t)UINT64_C(2456956037));
  int64_t t13199 = ((int64_t)UINT64_C(2730485921));
  int64_t t13200 = ((int64_t)UINT64_C(2820302411));
  int64_t t13201 = ((int64_t)UINT64_C(3259730800));
  int64_t t13202 = ((int64_t)UINT64_C(3345764771));
  int64_t t13203 = ((int64_t)UINT64_C(3516065817));
  int64_t t13204 = ((int64_t)UINT64_C(3600352804));
  int64_t t13205 = ((int64_t)UINT64_C(4094571909));
  int64_t t13206 = ((int64_t)UINT64_C(275423344));
  int64_t t13207 = ((int64_t)UINT64_C(430227734));
  int64_t t13208 = ((int64_t)UINT64_C(506948616));
  int64_t t13209 = ((int64_t)UINT64_C(659060556));
  int64_t t13210 = ((int64_t)UINT64_C(883997877));
  int64_t t13211 = ((int64_t)UINT64_C(958139571));
  int64_t t13212 = ((int64_t)UINT64_C(1322822218));
  int64_t t13213 = ((int64_t)UINT64_C(1537002063));
  int64_t t13214 = ((int64_t)UINT64_C(1747873779));
  int64_t t13215 = ((int64_t)UINT64_C(1955562222));
  int64_t t13216 = ((int64_t)UINT64_C(2024104815));
  int64_t t13217 = ((int64_t)UINT64_C(2227730452));
  int64_t t13218 = ((int64_t)UINT64_C(2361852424));
  int64_t t13219 = ((int64_t)UINT64_C(2428436474));
  int64_t t13220 = ((int64_t)UINT64_C(2756734187));
  int64_t t13221 = ((int64_t)UINT64_C(3204031479));
  int64_t t13222 = ((int64_t)UINT64_C(3329325298));
  int64_t items13223[] = {t13159,t13160,t13161,t13162,t13163,t13164,t13165,t13166,t13167,t13168,t13169,t13170,t13171,t13172,t13173,t13174,t13175,t13176,t13177,t13178,t13179,t13180,t13181,t13182,t13183,t13184,t13185,t13186,t13187,t13188,t13189,t13190,t13191,t13192,t13193,t13194,t13195,t13196,t13197,t13198,t13199,t13200,t13201,t13202,t13203,t13204,t13205,t13206,t13207,t13208,t13209,t13210,t13211,t13212,t13213,t13214,t13215,t13216,t13217,t13218,t13219,t13220,t13221,t13222};
  for (int64_t i13223=0; i13223<64; ++i13223) {
    v2 = items13223[i13223];
    uintptr_t t13224 = v0;
    int64_t t13225 = ((int64_t)UINT64_C(576));
    uintptr_t t13226 = f_at(t13224,t13225);
    int64_t t13227 = v1;
    int64_t t13228 = v2;
    f_put(t13226,t13227,t13228);
    int64_t t13229 = v1;
    int64_t t13230 = ((int64_t)UINT64_C(1));
    int64_t t13231 = ap_add(t13229,t13230);
    v1 = t13231;
  }
  uintptr_t t13232 = v0;
  return t13232;
}
static void f_sha_block(uintptr_t v0,uintptr_t v1) {
  uintptr_t v2;
  uintptr_t v3;
  int64_t v4;
  int64_t v5;
  int64_t v6;
  int64_t v7;
  int64_t v8;
  int64_t v9;
  int64_t v10;
  int64_t v11;
  int64_t v12;
  int64_t v13;
  int64_t v14;
  int64_t v15;
  int64_t v16;
  int64_t v17;
  int64_t v18;
  int64_t v19;
  int64_t v20;
  int64_t v21;
  int64_t v22;
  uintptr_t t13233 = v0;
  int64_t t13234 = ((int64_t)UINT64_C(64));
  uintptr_t t13235 = f_at(t13233,t13234);
  v2 = t13235;
  uintptr_t t13236 = v0;
  int64_t t13237 = ((int64_t)UINT64_C(576));
  uintptr_t t13238 = f_at(t13236,t13237);
  v3 = t13238;
  int64_t t13239 = ((int64_t)UINT64_C(0));
  v4 = t13239;
  while (true) {
    int64_t t13240 = v4;
    int64_t t13241 = ((int64_t)UINT64_C(16));
    bool t13242 = (t13240 < t13241);
    if (!t13242) break;
    uintptr_t t13243 = v2;
    int64_t t13244 = v4;
    uintptr_t t13245 = v1;
    int64_t t13246 = v4;
    int64_t t13247 = ((int64_t)UINT64_C(4));
    int64_t t13248 = ap_mul(t13246,t13247);
    int64_t t13249 = f_read_be32(t13245,t13248);
    f_put(t13243,t13244,t13249);
    int64_t t13250 = v4;
    int64_t t13251 = ((int64_t)UINT64_C(1));
    int64_t t13252 = ap_add(t13250,t13251);
    v4 = t13252;
  }
  while (true) {
    int64_t t13253 = v4;
    int64_t t13254 = ((int64_t)UINT64_C(64));
    bool t13255 = (t13253 < t13254);
    if (!t13255) break;
    uintptr_t t13256 = v2;
    int64_t t13257 = v4;
    int64_t t13258 = ((int64_t)UINT64_C(15));
    int64_t t13259 = ap_sub(t13257,t13258);
    int64_t t13260 = f_get(t13256,t13259);
    v5 = t13260;
    uintptr_t t13261 = v2;
    int64_t t13262 = v4;
    int64_t t13263 = ((int64_t)UINT64_C(2));
    int64_t t13264 = ap_sub(t13262,t13263);
    int64_t t13265 = f_get(t13261,t13264);
    v6 = t13265;
    int64_t t13266 = v5;
    int64_t t13267 = ((int64_t)UINT64_C(7));
    int64_t t13268 = f_ror32(t13266,t13267);
    int64_t t13269 = v5;
    int64_t t13270 = ((int64_t)UINT64_C(18));
    int64_t t13271 = f_ror32(t13269,t13270);
    int64_t t13272 = (t13268 ^ t13271);
    int64_t t13273 = v5;
    int64_t t13274 = ((int64_t)UINT64_C(3));
    int64_t t13275 = ap_shr(t13273,t13274);
    int64_t t13276 = (t13272 ^ t13275);
    v7 = t13276;
    int64_t t13277 = v6;
    int64_t t13278 = ((int64_t)UINT64_C(17));
    int64_t t13279 = f_ror32(t13277,t13278);
    int64_t t13280 = v6;
    int64_t t13281 = ((int64_t)UINT64_C(19));
    int64_t t13282 = f_ror32(t13280,t13281);
    int64_t t13283 = (t13279 ^ t13282);
    int64_t t13284 = v6;
    int64_t t13285 = ((int64_t)UINT64_C(10));
    int64_t t13286 = ap_shr(t13284,t13285);
    int64_t t13287 = (t13283 ^ t13286);
    v8 = t13287;
    uintptr_t t13288 = v2;
    int64_t t13289 = v4;
    uintptr_t t13290 = v2;
    int64_t t13291 = v4;
    int64_t t13292 = ((int64_t)UINT64_C(16));
    int64_t t13293 = ap_sub(t13291,t13292);
    int64_t t13294 = f_get(t13290,t13293);
    int64_t t13295 = v7;
    int64_t t13296 = ap_add(t13294,t13295);
    uintptr_t t13297 = v2;
    int64_t t13298 = v4;
    int64_t t13299 = ((int64_t)UINT64_C(7));
    int64_t t13300 = ap_sub(t13298,t13299);
    int64_t t13301 = f_get(t13297,t13300);
    int64_t t13302 = ap_add(t13296,t13301);
    int64_t t13303 = v8;
    int64_t t13304 = ap_add(t13302,t13303);
    int64_t t13305 = ((int64_t)UINT64_C(4294967295));
    int64_t t13306 = (t13304 & t13305);
    f_put(t13288,t13289,t13306);
    int64_t t13307 = v4;
    int64_t t13308 = ((int64_t)UINT64_C(1));
    int64_t t13309 = ap_add(t13307,t13308);
    v4 = t13309;
  }
  uintptr_t t13310 = v0;
  int64_t t13311 = ((int64_t)UINT64_C(0));
  int64_t t13312 = f_get(t13310,t13311);
  v9 = t13312;
  uintptr_t t13313 = v0;
  int64_t t13314 = ((int64_t)UINT64_C(1));
  int64_t t13315 = f_get(t13313,t13314);
  v10 = t13315;
  uintptr_t t13316 = v0;
  int64_t t13317 = ((int64_t)UINT64_C(2));
  int64_t t13318 = f_get(t13316,t13317);
  v11 = t13318;
  uintptr_t t13319 = v0;
  int64_t t13320 = ((int64_t)UINT64_C(3));
  int64_t t13321 = f_get(t13319,t13320);
  v12 = t13321;
  uintptr_t t13322 = v0;
  int64_t t13323 = ((int64_t)UINT64_C(4));
  int64_t t13324 = f_get(t13322,t13323);
  v13 = t13324;
  uintptr_t t13325 = v0;
  int64_t t13326 = ((int64_t)UINT64_C(5));
  int64_t t13327 = f_get(t13325,t13326);
  v14 = t13327;
  uintptr_t t13328 = v0;
  int64_t t13329 = ((int64_t)UINT64_C(6));
  int64_t t13330 = f_get(t13328,t13329);
  v15 = t13330;
  uintptr_t t13331 = v0;
  int64_t t13332 = ((int64_t)UINT64_C(7));
  int64_t t13333 = f_get(t13331,t13332);
  v16 = t13333;
  int64_t t13334 = ((int64_t)UINT64_C(0));
  v4 = t13334;
  while (true) {
    int64_t t13335 = v4;
    int64_t t13336 = ((int64_t)UINT64_C(64));
    bool t13337 = (t13335 < t13336);
    if (!t13337) break;
    int64_t t13338 = v13;
    int64_t t13339 = ((int64_t)UINT64_C(6));
    int64_t t13340 = f_ror32(t13338,t13339);
    int64_t t13341 = v13;
    int64_t t13342 = ((int64_t)UINT64_C(11));
    int64_t t13343 = f_ror32(t13341,t13342);
    int64_t t13344 = (t13340 ^ t13343);
    int64_t t13345 = v13;
    int64_t t13346 = ((int64_t)UINT64_C(25));
    int64_t t13347 = f_ror32(t13345,t13346);
    int64_t t13348 = (t13344 ^ t13347);
    v17 = t13348;
    int64_t t13349 = v13;
    int64_t t13350 = v14;
    int64_t t13351 = (t13349 & t13350);
    int64_t t13352 = v13;
    int64_t t13353 = ~t13352;
    int64_t t13354 = v15;
    int64_t t13355 = (t13353 & t13354);
    int64_t t13356 = (t13351 ^ t13355);
    v18 = t13356;
    int64_t t13357 = v16;
    int64_t t13358 = v17;
    int64_t t13359 = ap_add(t13357,t13358);
    int64_t t13360 = v18;
    int64_t t13361 = ap_add(t13359,t13360);
    uintptr_t t13362 = v3;
    int64_t t13363 = v4;
    int64_t t13364 = f_get(t13362,t13363);
    int64_t t13365 = ap_add(t13361,t13364);
    uintptr_t t13366 = v2;
    int64_t t13367 = v4;
    int64_t t13368 = f_get(t13366,t13367);
    int64_t t13369 = ap_add(t13365,t13368);
    v19 = t13369;
    int64_t t13370 = v9;
    int64_t t13371 = ((int64_t)UINT64_C(2));
    int64_t t13372 = f_ror32(t13370,t13371);
    int64_t t13373 = v9;
    int64_t t13374 = ((int64_t)UINT64_C(13));
    int64_t t13375 = f_ror32(t13373,t13374);
    int64_t t13376 = (t13372 ^ t13375);
    int64_t t13377 = v9;
    int64_t t13378 = ((int64_t)UINT64_C(22));
    int64_t t13379 = f_ror32(t13377,t13378);
    int64_t t13380 = (t13376 ^ t13379);
    v20 = t13380;
    int64_t t13381 = v9;
    int64_t t13382 = v10;
    int64_t t13383 = (t13381 & t13382);
    int64_t t13384 = v9;
    int64_t t13385 = v11;
    int64_t t13386 = (t13384 & t13385);
    int64_t t13387 = (t13383 ^ t13386);
    int64_t t13388 = v10;
    int64_t t13389 = v11;
    int64_t t13390 = (t13388 & t13389);
    int64_t t13391 = (t13387 ^ t13390);
    v21 = t13391;
    int64_t t13392 = v20;
    int64_t t13393 = v21;
    int64_t t13394 = ap_add(t13392,t13393);
    v22 = t13394;
    int64_t t13395 = v15;
    v16 = t13395;
    int64_t t13396 = v14;
    v15 = t13396;
    int64_t t13397 = v13;
    v14 = t13397;
    int64_t t13398 = v12;
    int64_t t13399 = v19;
    int64_t t13400 = ap_add(t13398,t13399);
    int64_t t13401 = ((int64_t)UINT64_C(4294967295));
    int64_t t13402 = (t13400 & t13401);
    v13 = t13402;
    int64_t t13403 = v11;
    v12 = t13403;
    int64_t t13404 = v10;
    v11 = t13404;
    int64_t t13405 = v9;
    v10 = t13405;
    int64_t t13406 = v19;
    int64_t t13407 = v22;
    int64_t t13408 = ap_add(t13406,t13407);
    int64_t t13409 = ((int64_t)UINT64_C(4294967295));
    int64_t t13410 = (t13408 & t13409);
    v9 = t13410;
    int64_t t13411 = v4;
    int64_t t13412 = ((int64_t)UINT64_C(1));
    int64_t t13413 = ap_add(t13411,t13412);
    v4 = t13413;
  }
  uintptr_t t13414 = v0;
  int64_t t13415 = ((int64_t)UINT64_C(0));
  uintptr_t t13416 = v0;
  int64_t t13417 = ((int64_t)UINT64_C(0));
  int64_t t13418 = f_get(t13416,t13417);
  int64_t t13419 = v9;
  int64_t t13420 = ap_add(t13418,t13419);
  int64_t t13421 = ((int64_t)UINT64_C(4294967295));
  int64_t t13422 = (t13420 & t13421);
  f_put(t13414,t13415,t13422);
  uintptr_t t13423 = v0;
  int64_t t13424 = ((int64_t)UINT64_C(1));
  uintptr_t t13425 = v0;
  int64_t t13426 = ((int64_t)UINT64_C(1));
  int64_t t13427 = f_get(t13425,t13426);
  int64_t t13428 = v10;
  int64_t t13429 = ap_add(t13427,t13428);
  int64_t t13430 = ((int64_t)UINT64_C(4294967295));
  int64_t t13431 = (t13429 & t13430);
  f_put(t13423,t13424,t13431);
  uintptr_t t13432 = v0;
  int64_t t13433 = ((int64_t)UINT64_C(2));
  uintptr_t t13434 = v0;
  int64_t t13435 = ((int64_t)UINT64_C(2));
  int64_t t13436 = f_get(t13434,t13435);
  int64_t t13437 = v11;
  int64_t t13438 = ap_add(t13436,t13437);
  int64_t t13439 = ((int64_t)UINT64_C(4294967295));
  int64_t t13440 = (t13438 & t13439);
  f_put(t13432,t13433,t13440);
  uintptr_t t13441 = v0;
  int64_t t13442 = ((int64_t)UINT64_C(3));
  uintptr_t t13443 = v0;
  int64_t t13444 = ((int64_t)UINT64_C(3));
  int64_t t13445 = f_get(t13443,t13444);
  int64_t t13446 = v12;
  int64_t t13447 = ap_add(t13445,t13446);
  int64_t t13448 = ((int64_t)UINT64_C(4294967295));
  int64_t t13449 = (t13447 & t13448);
  f_put(t13441,t13442,t13449);
  uintptr_t t13450 = v0;
  int64_t t13451 = ((int64_t)UINT64_C(4));
  uintptr_t t13452 = v0;
  int64_t t13453 = ((int64_t)UINT64_C(4));
  int64_t t13454 = f_get(t13452,t13453);
  int64_t t13455 = v13;
  int64_t t13456 = ap_add(t13454,t13455);
  int64_t t13457 = ((int64_t)UINT64_C(4294967295));
  int64_t t13458 = (t13456 & t13457);
  f_put(t13450,t13451,t13458);
  uintptr_t t13459 = v0;
  int64_t t13460 = ((int64_t)UINT64_C(5));
  uintptr_t t13461 = v0;
  int64_t t13462 = ((int64_t)UINT64_C(5));
  int64_t t13463 = f_get(t13461,t13462);
  int64_t t13464 = v14;
  int64_t t13465 = ap_add(t13463,t13464);
  int64_t t13466 = ((int64_t)UINT64_C(4294967295));
  int64_t t13467 = (t13465 & t13466);
  f_put(t13459,t13460,t13467);
  uintptr_t t13468 = v0;
  int64_t t13469 = ((int64_t)UINT64_C(6));
  uintptr_t t13470 = v0;
  int64_t t13471 = ((int64_t)UINT64_C(6));
  int64_t t13472 = f_get(t13470,t13471);
  int64_t t13473 = v15;
  int64_t t13474 = ap_add(t13472,t13473);
  int64_t t13475 = ((int64_t)UINT64_C(4294967295));
  int64_t t13476 = (t13474 & t13475);
  f_put(t13468,t13469,t13476);
  uintptr_t t13477 = v0;
  int64_t t13478 = ((int64_t)UINT64_C(7));
  uintptr_t t13479 = v0;
  int64_t t13480 = ((int64_t)UINT64_C(7));
  int64_t t13481 = f_get(t13479,t13480);
  int64_t t13482 = v16;
  int64_t t13483 = ap_add(t13481,t13482);
  int64_t t13484 = ((int64_t)UINT64_C(4294967295));
  int64_t t13485 = (t13483 & t13484);
  f_put(t13477,t13478,t13485);
}
static void f_sha256(uintptr_t v0,uintptr_t v1,int64_t v2,uintptr_t v3) {
  int64_t v4;
  int64_t v5;
  int64_t v15;
  uintptr_t v16;
  int64_t v17;
  int64_t v18;
  int64_t t13486 = v2;
  int64_t t13487 = ((int64_t)UINT64_C(0));
  bool t13488 = (t13486 >= t13487);
  bool t13489 = t13488;
  if (t13489) {
    int64_t t13490 = v2;
    int64_t t13491 = ((int64_t)UINT64_C(33554432));
    bool t13492 = (t13490 <= t13491);
    t13489 = t13492;
  }
  ApString t13493 = AP_STR("SHA-256 input limit");
  f_need(t13489,t13493);
  int64_t t13494 = ((int64_t)UINT64_C(0));
  v4 = t13494;
  int64_t t13495 = ((int64_t)UINT64_C(1779033703));
  int64_t t13496 = ((int64_t)UINT64_C(3144134277));
  int64_t t13497 = ((int64_t)UINT64_C(1013904242));
  int64_t t13498 = ((int64_t)UINT64_C(2773480762));
  int64_t t13499 = ((int64_t)UINT64_C(1359893119));
  int64_t t13500 = ((int64_t)UINT64_C(2600822924));
  int64_t t13501 = ((int64_t)UINT64_C(528734635));
  int64_t t13502 = ((int64_t)UINT64_C(1541459225));
  int64_t items13503[] = {t13495,t13496,t13497,t13498,t13499,t13500,t13501,t13502};
  for (int64_t i13503=0; i13503<8; ++i13503) {
    v5 = items13503[i13503];
    uintptr_t t13504 = v0;
    int64_t t13505 = v4;
    int64_t t13506 = v5;
    f_put(t13504,t13505,t13506);
    int64_t t13507 = v4;
    int64_t t13508 = ((int64_t)UINT64_C(1));
    int64_t t13509 = ap_add(t13507,t13508);
    v4 = t13509;
  }
  int64_t t13510 = ((int64_t)UINT64_C(0));
  v15 = t13510;
  while (true) {
    int64_t t13511 = v2;
    int64_t t13512 = v15;
    int64_t t13513 = ap_sub(t13511,t13512);
    int64_t t13514 = ((int64_t)UINT64_C(64));
    bool t13515 = (t13513 >= t13514);
    if (!t13515) break;
    uintptr_t t13516 = v0;
    uintptr_t t13517 = v1;
    int64_t t13518 = v15;
    uintptr_t t13519 = f_at(t13517,t13518);
    f_sha_block(t13516,t13519);
    int64_t t13520 = v15;
    int64_t t13521 = ((int64_t)UINT64_C(64));
    int64_t t13522 = ap_add(t13520,t13521);
    v15 = t13522;
  }
  uintptr_t t13523 = v0;
  int64_t t13524 = ((int64_t)UINT64_C(1088));
  uintptr_t t13525 = f_at(t13523,t13524);
  v16 = t13525;
  int64_t t13526 = ((int64_t)UINT64_C(0));
  v4 = t13526;
  while (true) {
    int64_t t13527 = v4;
    int64_t t13528 = ((int64_t)UINT64_C(16));
    bool t13529 = (t13527 < t13528);
    if (!t13529) break;
    uintptr_t t13530 = v16;
    int64_t t13531 = v4;
    int64_t t13532 = ((int64_t)UINT64_C(0));
    f_put(t13530,t13531,t13532);
    int64_t t13533 = v4;
    int64_t t13534 = ((int64_t)UINT64_C(1));
    int64_t t13535 = ap_add(t13533,t13534);
    v4 = t13535;
  }
  int64_t t13536 = v2;
  int64_t t13537 = v15;
  int64_t t13538 = ap_sub(t13536,t13537);
  v17 = t13538;
  uintptr_t t13539 = v16;
  uintptr_t t13540 = v1;
  int64_t t13541 = v15;
  uintptr_t t13542 = f_at(t13540,t13541);
  int64_t t13543 = v17;
  f_raw_copy(t13539,t13542,t13543);
  uintptr_t t13544 = v16;
  int64_t t13545 = v17;
  int64_t t13546 = ((int64_t)UINT64_C(128));
  f_setb(t13544,t13545,t13546);
  int64_t t13547 = ((int64_t)UINT64_C(64));
  v18 = t13547;
  int64_t t13548 = v17;
  int64_t t13549 = ((int64_t)UINT64_C(56));
  bool t13550 = (t13548 >= t13549);
  if (t13550) {
    int64_t t13551 = ((int64_t)UINT64_C(128));
    v18 = t13551;
  } else {
  }
  uintptr_t t13552 = v16;
  int64_t t13553 = v18;
  int64_t t13554 = ((int64_t)UINT64_C(8));
  int64_t t13555 = ap_sub(t13553,t13554);
  int64_t t13556 = v2;
  int64_t t13557 = ((int64_t)UINT64_C(8));
  int64_t t13558 = ap_mul(t13556,t13557);
  int64_t t13559 = ((int64_t)UINT64_C(32));
  int64_t t13560 = ap_shr(t13558,t13559);
  f_write_be32(t13552,t13555,t13560);
  uintptr_t t13561 = v16;
  int64_t t13562 = v18;
  int64_t t13563 = ((int64_t)UINT64_C(4));
  int64_t t13564 = ap_sub(t13562,t13563);
  int64_t t13565 = v2;
  int64_t t13566 = ((int64_t)UINT64_C(8));
  int64_t t13567 = ap_mul(t13565,t13566);
  int64_t t13568 = ((int64_t)UINT64_C(4294967295));
  int64_t t13569 = (t13567 & t13568);
  f_write_be32(t13561,t13564,t13569);
  uintptr_t t13570 = v0;
  uintptr_t t13571 = v16;
  f_sha_block(t13570,t13571);
  int64_t t13572 = v18;
  int64_t t13573 = ((int64_t)UINT64_C(128));
  bool t13574 = (t13572 == t13573);
  if (t13574) {
    uintptr_t t13575 = v0;
    uintptr_t t13576 = v16;
    int64_t t13577 = ((int64_t)UINT64_C(64));
    uintptr_t t13578 = f_at(t13576,t13577);
    f_sha_block(t13575,t13578);
  } else {
  }
  int64_t t13579 = ((int64_t)UINT64_C(0));
  v4 = t13579;
  while (true) {
    int64_t t13580 = v4;
    int64_t t13581 = ((int64_t)UINT64_C(8));
    bool t13582 = (t13580 < t13581);
    if (!t13582) break;
    uintptr_t t13583 = v3;
    int64_t t13584 = v4;
    int64_t t13585 = ((int64_t)UINT64_C(4));
    int64_t t13586 = ap_mul(t13584,t13585);
    uintptr_t t13587 = v0;
    int64_t t13588 = v4;
    int64_t t13589 = f_get(t13587,t13588);
    f_write_be32(t13583,t13586,t13589);
    int64_t t13590 = v4;
    int64_t t13591 = ((int64_t)UINT64_C(1));
    int64_t t13592 = ap_add(t13590,t13591);
    v4 = t13592;
  }
}
static int64_t f_aligned(int64_t v0,int64_t v1) {
  int64_t t13593 = v0;
  int64_t t13594 = v1;
  int64_t t13595 = ap_add(t13593,t13594);
  int64_t t13596 = ((int64_t)UINT64_C(1));
  int64_t t13597 = ap_sub(t13595,t13596);
  int64_t t13598 = v1;
  int64_t t13599 = ((int64_t)UINT64_C(1));
  int64_t t13600 = ap_sub(t13598,t13599);
  int64_t t13601 = ~t13600;
  int64_t t13602 = (t13597 & t13601);
  return t13602;
}
static uintptr_t f_writer(uintptr_t v0,int64_t v1,int64_t v2) {
  uintptr_t v3;
  int64_t t13603 = ((int64_t)UINT64_C(32));
  uintptr_t t13604 = f_raw(t13603);
  v3 = t13604;
  uintptr_t t13605 = v3;
  int64_t t13606 = ((int64_t)UINT64_C(0));
  uintptr_t t13607 = v0;
  f_putp(t13605,t13606,t13607);
  uintptr_t t13608 = v3;
  int64_t t13609 = ((int64_t)UINT64_C(1));
  int64_t t13610 = v1;
  f_put(t13608,t13609,t13610);
  uintptr_t t13611 = v3;
  int64_t t13612 = ((int64_t)UINT64_C(2));
  int64_t t13613 = v2;
  f_put(t13611,t13612,t13613);
  uintptr_t t13614 = v3;
  return t13614;
}
static uintptr_t f_wreserve(uintptr_t v0,int64_t v1) {
  int64_t v2;
  uintptr_t t13615 = v0;
  int64_t t13616 = ((int64_t)UINT64_C(2));
  int64_t t13617 = f_get(t13615,t13616);
  v2 = t13617;
  int64_t t13618 = v2;
  int64_t t13619 = ((int64_t)UINT64_C(0));
  bool t13620 = (t13618 >= t13619);
  bool t13621 = t13620;
  if (t13621) {
    int64_t t13622 = v1;
    int64_t t13623 = ((int64_t)UINT64_C(0));
    bool t13624 = (t13622 >= t13623);
    t13621 = t13624;
  }
  bool t13625 = t13621;
  if (t13625) {
    int64_t t13626 = v2;
    uintptr_t t13627 = v0;
    int64_t t13628 = ((int64_t)UINT64_C(1));
    int64_t t13629 = f_get(t13627,t13628);
    int64_t t13630 = v1;
    int64_t t13631 = ap_sub(t13629,t13630);
    bool t13632 = (t13626 <= t13631);
    t13625 = t13632;
  }
  ApString t13633 = AP_STR("binary writer overflow");
  f_need(t13625,t13633);
  uintptr_t t13634 = v0;
  int64_t t13635 = ((int64_t)UINT64_C(2));
  int64_t t13636 = v2;
  int64_t t13637 = v1;
  int64_t t13638 = ap_add(t13636,t13637);
  f_put(t13634,t13635,t13638);
  uintptr_t t13639 = v0;
  int64_t t13640 = ((int64_t)UINT64_C(0));
  uintptr_t t13641 = f_getp(t13639,t13640);
  int64_t t13642 = v2;
  uintptr_t t13643 = f_at(t13641,t13642);
  return t13643;
}
static void f_w32(uintptr_t v0,int64_t v1) {
  {
    uintptr_t t13644 = v0;
    int64_t t13645 = ((int64_t)UINT64_C(4));
    uintptr_t t13646 = f_wreserve(t13644,t13645);
    int64_t t13647 = v1;
    ap_poke(t13646,4,t13647);
  }
}
static void f_w64(uintptr_t v0,int64_t v1) {
  {
    uintptr_t t13648 = v0;
    int64_t t13649 = ((int64_t)UINT64_C(8));
    uintptr_t t13650 = f_wreserve(t13648,t13649);
    int64_t t13651 = v1;
    ap_poke(t13650,8,t13651);
  }
}
static void f_wb32(uintptr_t v0,int64_t v1) {
  uintptr_t t13652 = v0;
  int64_t t13653 = ((int64_t)UINT64_C(4));
  uintptr_t t13654 = f_wreserve(t13652,t13653);
  int64_t t13655 = ((int64_t)UINT64_C(0));
  int64_t t13656 = v1;
  f_write_be32(t13654,t13655,t13656);
}
static void f_wb64(uintptr_t v0,int64_t v1) {
  uintptr_t t13657 = v0;
  int64_t t13658 = v1;
  int64_t t13659 = ((int64_t)UINT64_C(32));
  int64_t t13660 = ap_shr(t13658,t13659);
  f_wb32(t13657,t13660);
  uintptr_t t13661 = v0;
  int64_t t13662 = v1;
  int64_t t13663 = ((int64_t)UINT64_C(4294967295));
  int64_t t13664 = (t13662 & t13663);
  f_wb32(t13661,t13664);
}
static void f_wtext(uintptr_t v0,ApString v1) {
  {
    uintptr_t t13665 = v0;
    ApString t13666 = v1;
    int64_t t13667 = ap_scale(ap_length_string(t13666));
    int64_t t13668 = ap_unscale(t13667);
    uintptr_t t13669 = f_wreserve(t13665,t13668);
    ApString t13670 = v1;
    uintptr_t t13671 = ap_address_string(t13670);
    ApString t13672 = v1;
    int64_t t13673 = ap_scale(ap_length_string(t13672));
    int64_t t13674 = ap_unscale(t13673);
    f_raw_copy(t13669,t13671,t13674);
  }
}
static void f_wname(uintptr_t v0,ApString v1) {
  uintptr_t v2;
  ApString t13675 = v1;
  int64_t t13676 = ap_scale(ap_length_string(t13675));
  int64_t t13677 = ap_unscale(t13676);
  int64_t t13678 = ((int64_t)UINT64_C(16));
  bool t13679 = (t13677 <= t13678);
  ApString t13680 = AP_STR("Mach-O name too long");
  f_need(t13679,t13680);
  uintptr_t t13681 = v0;
  int64_t t13682 = ((int64_t)UINT64_C(16));
  uintptr_t t13683 = f_wreserve(t13681,t13682);
  v2 = t13683;
  {
    uintptr_t t13684 = v2;
    ApString t13685 = v1;
    uintptr_t t13686 = ap_address_string(t13685);
    ApString t13687 = v1;
    int64_t t13688 = ap_scale(ap_length_string(t13687));
    int64_t t13689 = ap_unscale(t13688);
    f_raw_copy(t13684,t13686,t13689);
  }
}
static void f_segment(uintptr_t v0,ApString v1,int64_t v2,int64_t v3,int64_t v4,int64_t v5,int64_t v6,int64_t v7) {
  uintptr_t t13690 = v0;
  int64_t t13691 = ((int64_t)UINT64_C(25));
  f_w32(t13690,t13691);
  uintptr_t t13692 = v0;
  int64_t t13693 = ((int64_t)UINT64_C(72));
  int64_t t13694 = v7;
  int64_t t13695 = ((int64_t)UINT64_C(80));
  int64_t t13696 = ap_mul(t13694,t13695);
  int64_t t13697 = ap_add(t13693,t13696);
  f_w32(t13692,t13697);
  uintptr_t t13698 = v0;
  ApString t13699 = v1;
  f_wname(t13698,t13699);
  uintptr_t t13700 = v0;
  int64_t t13701 = v2;
  f_w64(t13700,t13701);
  uintptr_t t13702 = v0;
  int64_t t13703 = v3;
  f_w64(t13702,t13703);
  uintptr_t t13704 = v0;
  int64_t t13705 = v4;
  f_w64(t13704,t13705);
  uintptr_t t13706 = v0;
  int64_t t13707 = v5;
  f_w64(t13706,t13707);
  uintptr_t t13708 = v0;
  int64_t t13709 = v6;
  f_w32(t13708,t13709);
  uintptr_t t13710 = v0;
  int64_t t13711 = v6;
  f_w32(t13710,t13711);
  uintptr_t t13712 = v0;
  int64_t t13713 = v7;
  f_w32(t13712,t13713);
  uintptr_t t13714 = v0;
  int64_t t13715 = ((int64_t)UINT64_C(0));
  f_w32(t13714,t13715);
}
static void f_section(uintptr_t v0,ApString v1,int64_t v2,int64_t v3,int64_t v4,int64_t v5) {
  uintptr_t t13716 = v0;
  ApString t13717 = v1;
  f_wname(t13716,t13717);
  uintptr_t t13718 = v0;
  ApString t13719 = AP_STR("__TEXT");
  f_wname(t13718,t13719);
  uintptr_t t13720 = v0;
  int64_t t13721 = ((int64_t)UINT64_C(4294967296));
  int64_t t13722 = v2;
  int64_t t13723 = ap_add(t13721,t13722);
  f_w64(t13720,t13723);
  uintptr_t t13724 = v0;
  int64_t t13725 = v3;
  f_w64(t13724,t13725);
  uintptr_t t13726 = v0;
  int64_t t13727 = v2;
  f_w32(t13726,t13727);
  uintptr_t t13728 = v0;
  int64_t t13729 = v4;
  f_w32(t13728,t13729);
  uintptr_t t13730 = v0;
  int64_t t13731 = ((int64_t)UINT64_C(0));
  f_w32(t13730,t13731);
  uintptr_t t13732 = v0;
  int64_t t13733 = ((int64_t)UINT64_C(0));
  f_w32(t13732,t13733);
  uintptr_t t13734 = v0;
  int64_t t13735 = v5;
  f_w32(t13734,t13735);
  uintptr_t t13736 = v0;
  int64_t t13737 = ((int64_t)UINT64_C(0));
  f_w32(t13736,t13737);
  uintptr_t t13738 = v0;
  int64_t t13739 = ((int64_t)UINT64_C(0));
  f_w32(t13738,t13739);
  uintptr_t t13740 = v0;
  int64_t t13741 = ((int64_t)UINT64_C(0));
  f_w32(t13740,t13741);
}
static void f_path_command(uintptr_t v0,int64_t v1,ApString v2,bool v3) {
  int64_t v4;
  int64_t v5;
  int64_t v6;
  int64_t t13742 = ((int64_t)UINT64_C(12));
  v4 = t13742;
  bool t13743 = v3;
  if (t13743) {
    int64_t t13744 = ((int64_t)UINT64_C(24));
    v4 = t13744;
  } else {
  }
  int64_t t13745 = v4;
  ApString t13746 = v2;
  int64_t t13747 = ap_scale(ap_length_string(t13746));
  int64_t t13748 = ap_unscale(t13747);
  int64_t t13749 = ap_add(t13745,t13748);
  int64_t t13750 = ((int64_t)UINT64_C(1));
  int64_t t13751 = ap_add(t13749,t13750);
  int64_t t13752 = ((int64_t)UINT64_C(8));
  int64_t t13753 = f_aligned(t13751,t13752);
  v5 = t13753;
  uintptr_t t13754 = v0;
  int64_t t13755 = ((int64_t)UINT64_C(2));
  int64_t t13756 = f_get(t13754,t13755);
  v6 = t13756;
  uintptr_t t13757 = v0;
  int64_t t13758 = v1;
  f_w32(t13757,t13758);
  uintptr_t t13759 = v0;
  int64_t t13760 = v5;
  f_w32(t13759,t13760);
  uintptr_t t13761 = v0;
  int64_t t13762 = v4;
  f_w32(t13761,t13762);
  bool t13763 = v3;
  if (t13763) {
    uintptr_t t13764 = v0;
    int64_t t13765 = ((int64_t)UINT64_C(0));
    f_w32(t13764,t13765);
    uintptr_t t13766 = v0;
    int64_t t13767 = ((int64_t)UINT64_C(65536));
    f_w32(t13766,t13767);
    uintptr_t t13768 = v0;
    int64_t t13769 = ((int64_t)UINT64_C(65536));
    f_w32(t13768,t13769);
  } else {
  }
  uintptr_t t13770 = v0;
  ApString t13771 = v2;
  f_wtext(t13770,t13771);
  uintptr_t t13772 = v0;
  int64_t t13773 = v6;
  int64_t t13774 = v5;
  int64_t t13775 = ap_add(t13773,t13774);
  uintptr_t t13776 = v0;
  int64_t t13777 = ((int64_t)UINT64_C(2));
  int64_t t13778 = f_get(t13776,t13777);
  int64_t t13779 = ap_sub(t13775,t13778);
  uintptr_t t13780 = f_wreserve(t13772,t13779);
}
static uintptr_t f_macho(uintptr_t v0) {
  int64_t v1;
  int64_t v2;
  int64_t v3;
  int64_t v4;
  bool v5;
  int64_t v6;
  uintptr_t v7;
  int64_t v8;
  int64_t v9;
  ApString v10;
  int64_t v11;
  int64_t v12;
  int64_t v13;
  int64_t v14;
  uintptr_t v15;
  uintptr_t v16;
  int64_t v17;
  int64_t v18;
  int64_t v19;
  uintptr_t v20;
  uintptr_t v21;
  int64_t v22;
  int64_t v23;
  uintptr_t t13781 = v0;
  int64_t t13782 = ((int64_t)UINT64_C(13));
  int64_t t13783 = f_get(t13781,t13782);
  v1 = t13783;
  uintptr_t t13784 = v0;
  int64_t t13785 = ((int64_t)UINT64_C(11));
  int64_t t13786 = f_get(t13784,t13785);
  v2 = t13786;
  uintptr_t t13787 = v0;
  int64_t t13788 = ((int64_t)UINT64_C(12));
  int64_t t13789 = f_get(t13787,t13788);
  v3 = t13789;
  int64_t t13790 = v2;
  int64_t t13791 = ((int64_t)UINT64_C(0));
  bool t13792 = (t13790 > t13791);
  bool t13793 = t13792;
  if (t13793) {
    int64_t t13794 = v2;
    int64_t t13795 = ((int64_t)UINT64_C(4));
    int64_t t13796 = ap_rem(t13794,t13795);
    int64_t t13797 = ((int64_t)UINT64_C(0));
    bool t13798 = (t13796 == t13797);
    t13793 = t13798;
  }
  bool t13799 = t13793;
  if (t13799) {
    int64_t t13800 = v3;
    int64_t t13801 = v2;
    int64_t t13802 = ((int64_t)UINT64_C(16));
    int64_t t13803 = f_aligned(t13801,t13802);
    bool t13804 = (t13800 == t13803);
    t13799 = t13804;
  }
  bool t13805 = t13799;
  if (t13805) {
    int64_t t13806 = v1;
    int64_t t13807 = v3;
    bool t13808 = (t13806 >= t13807);
    t13805 = t13808;
  }
  ApString t13809 = AP_STR("invalid native payload");
  f_need(t13805,t13809);
  int64_t t13810 = ((int64_t)UINT64_C(4096));
  int64_t t13811 = v1;
  int64_t t13812 = ap_add(t13810,t13811);
  int64_t t13813 = ((int64_t)UINT64_C(16384));
  int64_t t13814 = f_aligned(t13812,t13813);
  v4 = t13814;
  uintptr_t t13815 = v0;
  int64_t t13816 = ((int64_t)UINT64_C(25));
  int64_t t13817 = f_get(t13815,t13816);
  int64_t t13818 = ((int64_t)UINT64_C(0));
  bool t13819 = (t13817 != t13818);
  bool t13820 = t13819;
  if (!t13820) {
    uintptr_t t13821 = v0;
    int64_t t13822 = ((int64_t)UINT64_C(26));
    int64_t t13823 = f_get(t13821,t13822);
    int64_t t13824 = ((int64_t)UINT64_C(0));
    bool t13825 = (t13823 != t13824);
    t13820 = t13825;
  }
  v5 = t13820;
  int64_t t13826 = v4;
  v6 = t13826;
  bool t13827 = v5;
  if (t13827) {
    int64_t t13828 = v6;
    int64_t t13829 = ((int64_t)UINT64_C(16384));
    int64_t t13830 = ap_add(t13828,t13829);
    v6 = t13830;
  } else {
  }
  int64_t t13831 = ((int64_t)UINT64_C(32));
  uintptr_t t13832 = f_raw(t13831);
  v7 = t13832;
  bool t13833 = v5;
  if (t13833) {
    uintptr_t t13834 = v7;
    int64_t t13835 = ((int64_t)UINT64_C(0));
    int64_t t13836 = ((int64_t)UINT64_C(17));
    f_setb(t13834,t13835,t13836);
    uintptr_t t13837 = v7;
    int64_t t13838 = ((int64_t)UINT64_C(1));
    int64_t t13839 = ((int64_t)UINT64_C(81));
    f_setb(t13837,t13838,t13839);
    uintptr_t t13840 = v7;
    int64_t t13841 = ((int64_t)UINT64_C(2));
    int64_t t13842 = ((int64_t)UINT64_C(64));
    f_setb(t13840,t13841,t13842);
    {
      uintptr_t t13843 = v7;
      int64_t t13844 = ((int64_t)UINT64_C(3));
      uintptr_t t13845 = f_at(t13843,t13844);
      ApString t13846 = AP_STR("_dlopen\000");
      uintptr_t t13847 = ap_address_string(t13846);
      int64_t t13848 = ((int64_t)UINT64_C(8));
      f_raw_copy(t13845,t13847,t13848);
    }
    uintptr_t t13849 = v7;
    int64_t t13850 = ((int64_t)UINT64_C(11));
    int64_t t13851 = ((int64_t)UINT64_C(114));
    f_setb(t13849,t13850,t13851);
    uintptr_t t13852 = v7;
    int64_t t13853 = ((int64_t)UINT64_C(12));
    int64_t t13854 = ((int64_t)UINT64_C(0));
    f_setb(t13852,t13853,t13854);
    uintptr_t t13855 = v7;
    int64_t t13856 = ((int64_t)UINT64_C(13));
    int64_t t13857 = ((int64_t)UINT64_C(144));
    f_setb(t13855,t13856,t13857);
    uintptr_t t13858 = v7;
    int64_t t13859 = ((int64_t)UINT64_C(14));
    int64_t t13860 = ((int64_t)UINT64_C(64));
    f_setb(t13858,t13859,t13860);
    {
      uintptr_t t13861 = v7;
      int64_t t13862 = ((int64_t)UINT64_C(15));
      uintptr_t t13863 = f_at(t13861,t13862);
      ApString t13864 = AP_STR("_dlsym\000");
      uintptr_t t13865 = ap_address_string(t13864);
      int64_t t13866 = ((int64_t)UINT64_C(7));
      f_raw_copy(t13863,t13865,t13866);
    }
    uintptr_t t13867 = v7;
    int64_t t13868 = ((int64_t)UINT64_C(22));
    int64_t t13869 = ((int64_t)UINT64_C(144));
    f_setb(t13867,t13868,t13869);
    uintptr_t t13870 = v7;
    int64_t t13871 = ((int64_t)UINT64_C(23));
    int64_t t13872 = ((int64_t)UINT64_C(0));
    f_setb(t13870,t13871,t13872);
  } else {
  }
  int64_t t13873 = v6;
  int64_t t13874 = ((int64_t)UINT64_C(16));
  int64_t t13875 = ap_add(t13873,t13874);
  v8 = t13875;
  bool t13876 = v5;
  if (t13876) {
    int64_t t13877 = v6;
    int64_t t13878 = ((int64_t)UINT64_C(128));
    int64_t t13879 = ap_add(t13877,t13878);
    v8 = t13879;
  } else {
  }
  int64_t t13880 = v8;
  int64_t t13881 = ((int64_t)UINT64_C(4095));
  int64_t t13882 = ap_add(t13880,t13881);
  int64_t t13883 = ((int64_t)UINT64_C(4096));
  int64_t t13884 = ap_div(t13882,t13883);
  v9 = t13884;
  ApString t13885 = AP_STR("apo.executable\000");
  v10 = t13885;
  int64_t t13886 = ((int64_t)UINT64_C(88));
  ApString t13887 = v10;
  int64_t t13888 = ap_scale(ap_length_string(t13887));
  int64_t t13889 = ap_unscale(t13888);
  int64_t t13890 = ap_add(t13886,t13889);
  v11 = t13890;
  int64_t t13891 = v11;
  int64_t t13892 = v9;
  int64_t t13893 = ((int64_t)UINT64_C(32));
  int64_t t13894 = ap_mul(t13892,t13893);
  int64_t t13895 = ap_add(t13891,t13894);
  v12 = t13895;
  int64_t t13896 = ((int64_t)UINT64_C(20));
  int64_t t13897 = v12;
  int64_t t13898 = ap_add(t13896,t13897);
  int64_t t13899 = ((int64_t)UINT64_C(16));
  int64_t t13900 = f_aligned(t13898,t13899);
  v13 = t13900;
  int64_t t13901 = v8;
  int64_t t13902 = v13;
  int64_t t13903 = ap_add(t13901,t13902);
  v14 = t13903;
  int64_t t13904 = v14;
  int64_t t13905 = ((int64_t)UINT64_C(67108864));
  bool t13906 = (t13904 < t13905);
  ApString t13907 = AP_STR("executable limit exceeded");
  f_need(t13906,t13907);
  int64_t t13908 = v14;
  uintptr_t t13909 = f_raw(t13908);
  v15 = t13909;
  uintptr_t t13910 = v15;
  int64_t t13911 = ((int64_t)UINT64_C(4096));
  int64_t t13912 = ((int64_t)UINT64_C(32));
  uintptr_t t13913 = f_writer(t13910,t13911,t13912);
  v16 = t13913;
  uintptr_t t13914 = v16;
  ApString t13915 = AP_STR("__PAGEZERO");
  int64_t t13916 = ((int64_t)UINT64_C(0));
  int64_t t13917 = ((int64_t)UINT64_C(4294967296));
  int64_t t13918 = ((int64_t)UINT64_C(0));
  int64_t t13919 = ((int64_t)UINT64_C(0));
  int64_t t13920 = ((int64_t)UINT64_C(0));
  int64_t t13921 = ((int64_t)UINT64_C(0));
  f_segment(t13914,t13915,t13916,t13917,t13918,t13919,t13920,t13921);
  uintptr_t t13922 = v16;
  ApString t13923 = AP_STR("__TEXT");
  int64_t t13924 = ((int64_t)UINT64_C(4294967296));
  int64_t t13925 = v4;
  int64_t t13926 = ((int64_t)UINT64_C(0));
  int64_t t13927 = v4;
  int64_t t13928 = ((int64_t)UINT64_C(5));
  int64_t t13929 = ((int64_t)UINT64_C(2));
  f_segment(t13922,t13923,t13924,t13925,t13926,t13927,t13928,t13929);
  uintptr_t t13930 = v16;
  ApString t13931 = AP_STR("__text");
  int64_t t13932 = ((int64_t)UINT64_C(4096));
  int64_t t13933 = v2;
  int64_t t13934 = ((int64_t)UINT64_C(2));
  int64_t t13935 = ((int64_t)UINT64_C(2147484672));
  f_section(t13930,t13931,t13932,t13933,t13934,t13935);
  uintptr_t t13936 = v16;
  ApString t13937 = AP_STR("__cstring");
  int64_t t13938 = ((int64_t)UINT64_C(4096));
  int64_t t13939 = v3;
  int64_t t13940 = ap_add(t13938,t13939);
  int64_t t13941 = v1;
  int64_t t13942 = v3;
  int64_t t13943 = ap_sub(t13941,t13942);
  int64_t t13944 = ((int64_t)UINT64_C(4));
  int64_t t13945 = ((int64_t)UINT64_C(2));
  f_section(t13936,t13937,t13940,t13943,t13944,t13945);
  bool t13946 = v5;
  if (t13946) {
    uintptr_t t13947 = v16;
    ApString t13948 = AP_STR("__DATA");
    int64_t t13949 = ((int64_t)UINT64_C(4294967296));
    int64_t t13950 = v4;
    int64_t t13951 = ap_add(t13949,t13950);
    int64_t t13952 = ((int64_t)UINT64_C(16384));
    int64_t t13953 = v4;
    int64_t t13954 = ((int64_t)UINT64_C(16384));
    int64_t t13955 = ((int64_t)UINT64_C(3));
    int64_t t13956 = ((int64_t)UINT64_C(1));
    f_segment(t13947,t13948,t13951,t13952,t13953,t13954,t13955,t13956);
    uintptr_t t13957 = v16;
    ApString t13958 = AP_STR("__got");
    f_wname(t13957,t13958);
    uintptr_t t13959 = v16;
    ApString t13960 = AP_STR("__DATA");
    f_wname(t13959,t13960);
    uintptr_t t13961 = v16;
    int64_t t13962 = ((int64_t)UINT64_C(4294967296));
    int64_t t13963 = v4;
    int64_t t13964 = ap_add(t13962,t13963);
    f_w64(t13961,t13964);
    uintptr_t t13965 = v16;
    int64_t t13966 = ((int64_t)UINT64_C(16));
    f_w64(t13965,t13966);
    uintptr_t t13967 = v16;
    int64_t t13968 = v4;
    f_w32(t13967,t13968);
    uintptr_t t13969 = v16;
    int64_t t13970 = ((int64_t)UINT64_C(3));
    f_w32(t13969,t13970);
    uintptr_t t13971 = v16;
    int64_t t13972 = ((int64_t)UINT64_C(0));
    f_w32(t13971,t13972);
    uintptr_t t13973 = v16;
    int64_t t13974 = ((int64_t)UINT64_C(0));
    f_w32(t13973,t13974);
    uintptr_t t13975 = v16;
    int64_t t13976 = ((int64_t)UINT64_C(6));
    f_w32(t13975,t13976);
    uintptr_t t13977 = v16;
    int64_t t13978 = ((int64_t)UINT64_C(0));
    f_w32(t13977,t13978);
    uintptr_t t13979 = v16;
    int64_t t13980 = ((int64_t)UINT64_C(0));
    f_w32(t13979,t13980);
    uintptr_t t13981 = v16;
    int64_t t13982 = ((int64_t)UINT64_C(0));
    f_w32(t13981,t13982);
  } else {
  }
  uintptr_t t13983 = v16;
  ApString t13984 = AP_STR("__LINKEDIT");
  int64_t t13985 = ((int64_t)UINT64_C(4294967296));
  int64_t t13986 = v6;
  int64_t t13987 = ap_add(t13985,t13986);
  int64_t t13988 = v14;
  int64_t t13989 = v6;
  int64_t t13990 = ap_sub(t13988,t13989);
  int64_t t13991 = ((int64_t)UINT64_C(16384));
  int64_t t13992 = f_aligned(t13990,t13991);
  int64_t t13993 = v6;
  int64_t t13994 = v14;
  int64_t t13995 = v6;
  int64_t t13996 = ap_sub(t13994,t13995);
  int64_t t13997 = ((int64_t)UINT64_C(1));
  int64_t t13998 = ((int64_t)UINT64_C(0));
  f_segment(t13983,t13984,t13987,t13992,t13993,t13996,t13997,t13998);
  uintptr_t t13999 = v16;
  int64_t t14000 = ((int64_t)UINT64_C(2147483682));
  f_w32(t13999,t14000);
  uintptr_t t14001 = v16;
  int64_t t14002 = ((int64_t)UINT64_C(48));
  f_w32(t14001,t14002);
  int64_t t14003 = ((int64_t)UINT64_C(0));
  v17 = t14003;
  while (true) {
    int64_t t14004 = v17;
    int64_t t14005 = ((int64_t)UINT64_C(10));
    bool t14006 = (t14004 < t14005);
    if (!t14006) break;
    int64_t t14007 = ((int64_t)UINT64_C(0));
    v18 = t14007;
    bool t14008 = v5;
    bool t14009 = t14008;
    if (t14009) {
      int64_t t14010 = v17;
      int64_t t14011 = ((int64_t)UINT64_C(2));
      bool t14012 = (t14010 == t14011);
      t14009 = t14012;
    }
    if (t14009) {
      int64_t t14013 = v6;
      v18 = t14013;
    } else {
    }
    bool t14014 = v5;
    bool t14015 = t14014;
    if (t14015) {
      int64_t t14016 = v17;
      int64_t t14017 = ((int64_t)UINT64_C(3));
      bool t14018 = (t14016 == t14017);
      t14015 = t14018;
    }
    if (t14015) {
      int64_t t14019 = ((int64_t)UINT64_C(24));
      v18 = t14019;
    } else {
    }
    uintptr_t t14020 = v16;
    int64_t t14021 = v18;
    f_w32(t14020,t14021);
    int64_t t14022 = v17;
    int64_t t14023 = ((int64_t)UINT64_C(1));
    int64_t t14024 = ap_add(t14022,t14023);
    v17 = t14024;
  }
  uintptr_t t14025 = v16;
  int64_t t14026 = ((int64_t)UINT64_C(2));
  f_w32(t14025,t14026);
  uintptr_t t14027 = v16;
  int64_t t14028 = ((int64_t)UINT64_C(24));
  f_w32(t14027,t14028);
  bool t14029 = v5;
  if (t14029) {
    uintptr_t t14030 = v16;
    int64_t t14031 = v6;
    int64_t t14032 = ((int64_t)UINT64_C(32));
    int64_t t14033 = ap_add(t14031,t14032);
    f_w32(t14030,t14033);
    uintptr_t t14034 = v16;
    int64_t t14035 = ((int64_t)UINT64_C(2));
    f_w32(t14034,t14035);
    uintptr_t t14036 = v16;
    int64_t t14037 = v6;
    int64_t t14038 = ((int64_t)UINT64_C(80));
    int64_t t14039 = ap_add(t14037,t14038);
    f_w32(t14036,t14039);
    uintptr_t t14040 = v16;
    int64_t t14041 = ((int64_t)UINT64_C(16));
    f_w32(t14040,t14041);
  } else {
    uintptr_t t14042 = v16;
    int64_t t14043 = v6;
    f_w32(t14042,t14043);
    uintptr_t t14044 = v16;
    int64_t t14045 = ((int64_t)UINT64_C(0));
    f_w32(t14044,t14045);
    uintptr_t t14046 = v16;
    int64_t t14047 = v6;
    f_w32(t14046,t14047);
    uintptr_t t14048 = v16;
    int64_t t14049 = ((int64_t)UINT64_C(1));
    f_w32(t14048,t14049);
  }
  uintptr_t t14050 = v16;
  int64_t t14051 = ((int64_t)UINT64_C(11));
  f_w32(t14050,t14051);
  uintptr_t t14052 = v16;
  int64_t t14053 = ((int64_t)UINT64_C(80));
  f_w32(t14052,t14053);
  int64_t t14054 = ((int64_t)UINT64_C(0));
  v17 = t14054;
  while (true) {
    int64_t t14055 = v17;
    int64_t t14056 = ((int64_t)UINT64_C(18));
    bool t14057 = (t14055 < t14056);
    if (!t14057) break;
    int64_t t14058 = ((int64_t)UINT64_C(0));
    v19 = t14058;
    bool t14059 = v5;
    bool t14060 = t14059;
    if (t14060) {
      int64_t t14061 = v17;
      int64_t t14062 = ((int64_t)UINT64_C(5));
      bool t14063 = (t14061 == t14062);
      t14060 = t14063;
    }
    if (t14060) {
      int64_t t14064 = ((int64_t)UINT64_C(2));
      v19 = t14064;
    } else {
    }
    bool t14065 = v5;
    bool t14066 = t14065;
    if (t14066) {
      int64_t t14067 = v17;
      int64_t t14068 = ((int64_t)UINT64_C(12));
      bool t14069 = (t14067 == t14068);
      t14066 = t14069;
    }
    if (t14066) {
      int64_t t14070 = v6;
      int64_t t14071 = ((int64_t)UINT64_C(64));
      int64_t t14072 = ap_add(t14070,t14071);
      v19 = t14072;
    } else {
    }
    bool t14073 = v5;
    bool t14074 = t14073;
    if (t14074) {
      int64_t t14075 = v17;
      int64_t t14076 = ((int64_t)UINT64_C(13));
      bool t14077 = (t14075 == t14076);
      t14074 = t14077;
    }
    if (t14074) {
      int64_t t14078 = ((int64_t)UINT64_C(2));
      v19 = t14078;
    } else {
    }
    uintptr_t t14079 = v16;
    int64_t t14080 = v19;
    f_w32(t14079,t14080);
    int64_t t14081 = v17;
    int64_t t14082 = ((int64_t)UINT64_C(1));
    int64_t t14083 = ap_add(t14081,t14082);
    v17 = t14083;
  }
  uintptr_t t14084 = v16;
  int64_t t14085 = ((int64_t)UINT64_C(14));
  ApString t14086 = AP_STR("/usr/lib/dyld");
  bool t14087 = false;
  f_path_command(t14084,t14085,t14086,t14087);
  uintptr_t t14088 = f_sha_workspace();
  v20 = t14088;
  int64_t t14089 = ((int64_t)UINT64_C(32));
  uintptr_t t14090 = f_raw(t14089);
  v21 = t14090;
  uintptr_t t14091 = v20;
  uintptr_t t14092 = v0;
  int64_t t14093 = ((int64_t)UINT64_C(3));
  uintptr_t t14094 = f_getp(t14092,t14093);
  int64_t t14095 = v1;
  uintptr_t t14096 = v21;
  f_sha256(t14091,t14094,t14095,t14096);
  uintptr_t t14097 = v16;
  int64_t t14098 = ((int64_t)UINT64_C(27));
  f_w32(t14097,t14098);
  uintptr_t t14099 = v16;
  int64_t t14100 = ((int64_t)UINT64_C(24));
  f_w32(t14099,t14100);
  uintptr_t t14101 = v16;
  int64_t t14102 = ((int64_t)UINT64_C(16));
  uintptr_t t14103 = f_wreserve(t14101,t14102);
  uintptr_t t14104 = v21;
  int64_t t14105 = ((int64_t)UINT64_C(16));
  f_raw_copy(t14103,t14104,t14105);
  uintptr_t t14106 = v16;
  int64_t t14107 = ((int64_t)UINT64_C(50));
  f_w32(t14106,t14107);
  uintptr_t t14108 = v16;
  int64_t t14109 = ((int64_t)UINT64_C(24));
  f_w32(t14108,t14109);
  uintptr_t t14110 = v16;
  int64_t t14111 = ((int64_t)UINT64_C(1));
  f_w32(t14110,t14111);
  uintptr_t t14112 = v16;
  int64_t t14113 = ((int64_t)UINT64_C(720896));
  f_w32(t14112,t14113);
  uintptr_t t14114 = v16;
  int64_t t14115 = ((int64_t)UINT64_C(720896));
  f_w32(t14114,t14115);
  uintptr_t t14116 = v16;
  int64_t t14117 = ((int64_t)UINT64_C(0));
  f_w32(t14116,t14117);
  uintptr_t t14118 = v16;
  int64_t t14119 = ((int64_t)UINT64_C(2147483688));
  f_w32(t14118,t14119);
  uintptr_t t14120 = v16;
  int64_t t14121 = ((int64_t)UINT64_C(24));
  f_w32(t14120,t14121);
  uintptr_t t14122 = v16;
  int64_t t14123 = ((int64_t)UINT64_C(4096));
  f_w64(t14122,t14123);
  uintptr_t t14124 = v16;
  int64_t t14125 = ((int64_t)UINT64_C(8388608));
  f_w64(t14124,t14125);
  uintptr_t t14126 = v16;
  int64_t t14127 = ((int64_t)UINT64_C(12));
  ApString t14128 = AP_STR("/usr/lib/libSystem.B.dylib");
  bool t14129 = true;
  f_path_command(t14126,t14127,t14128,t14129);
  uintptr_t t14130 = v16;
  int64_t t14131 = ((int64_t)UINT64_C(29));
  f_w32(t14130,t14131);
  uintptr_t t14132 = v16;
  int64_t t14133 = ((int64_t)UINT64_C(16));
  f_w32(t14132,t14133);
  uintptr_t t14134 = v16;
  int64_t t14135 = v8;
  f_w32(t14134,t14135);
  uintptr_t t14136 = v16;
  int64_t t14137 = v13;
  f_w32(t14136,t14137);
  uintptr_t t14138 = v16;
  int64_t t14139 = ((int64_t)UINT64_C(2));
  int64_t t14140 = f_get(t14138,t14139);
  int64_t t14141 = ((int64_t)UINT64_C(32));
  int64_t t14142 = ap_sub(t14140,t14141);
  v22 = t14142;
  uintptr_t t14143 = v16;
  int64_t t14144 = ((int64_t)UINT64_C(2));
  int64_t t14145 = ((int64_t)UINT64_C(0));
  f_put(t14143,t14144,t14145);
  uintptr_t t14146 = v16;
  int64_t t14147 = ((int64_t)UINT64_C(4277009103));
  f_w32(t14146,t14147);
  uintptr_t t14148 = v16;
  int64_t t14149 = ((int64_t)UINT64_C(16777228));
  f_w32(t14148,t14149);
  uintptr_t t14150 = v16;
  int64_t t14151 = ((int64_t)UINT64_C(0));
  f_w32(t14150,t14151);
  uintptr_t t14152 = v16;
  int64_t t14153 = ((int64_t)UINT64_C(2));
  f_w32(t14152,t14153);
  bool t14154 = v5;
  if (t14154) {
    uintptr_t t14155 = v16;
    int64_t t14156 = ((int64_t)UINT64_C(13));
    f_w32(t14155,t14156);
  } else {
    uintptr_t t14157 = v16;
    int64_t t14158 = ((int64_t)UINT64_C(12));
    f_w32(t14157,t14158);
  }
  uintptr_t t14159 = v16;
  int64_t t14160 = v22;
  f_w32(t14159,t14160);
  uintptr_t t14161 = v16;
  int64_t t14162 = ((int64_t)UINT64_C(2097285));
  f_w32(t14161,t14162);
  uintptr_t t14163 = v16;
  int64_t t14164 = ((int64_t)UINT64_C(0));
  f_w32(t14163,t14164);
  uintptr_t t14165 = v15;
  int64_t t14166 = ((int64_t)UINT64_C(4096));
  uintptr_t t14167 = f_at(t14165,t14166);
  uintptr_t t14168 = v0;
  int64_t t14169 = ((int64_t)UINT64_C(3));
  uintptr_t t14170 = f_getp(t14168,t14169);
  int64_t t14171 = v1;
  f_raw_copy(t14167,t14170,t14171);
  bool t14172 = v5;
  if (t14172) {
    uintptr_t t14173 = v15;
    int64_t t14174 = v6;
    uintptr_t t14175 = f_at(t14173,t14174);
    uintptr_t t14176 = v7;
    int64_t t14177 = ((int64_t)UINT64_C(24));
    f_raw_copy(t14175,t14176,t14177);
    {
      uintptr_t t14178 = v15;
      int64_t t14179 = v6;
      int64_t t14180 = ((int64_t)UINT64_C(32));
      int64_t t14181 = ap_add(t14179,t14180);
      uintptr_t t14182 = f_at(t14178,t14181);
      int64_t t14183 = ((int64_t)UINT64_C(1));
      ap_poke(t14182,4,t14183);
      uintptr_t t14184 = v15;
      int64_t t14185 = v6;
      int64_t t14186 = ((int64_t)UINT64_C(36));
      int64_t t14187 = ap_add(t14185,t14186);
      uintptr_t t14188 = f_at(t14184,t14187);
      int64_t t14189 = ((int64_t)UINT64_C(16777217));
      ap_poke(t14188,4,t14189);
      uintptr_t t14190 = v15;
      int64_t t14191 = v6;
      int64_t t14192 = ((int64_t)UINT64_C(48));
      int64_t t14193 = ap_add(t14191,t14192);
      uintptr_t t14194 = f_at(t14190,t14193);
      int64_t t14195 = ((int64_t)UINT64_C(9));
      ap_poke(t14194,4,t14195);
      uintptr_t t14196 = v15;
      int64_t t14197 = v6;
      int64_t t14198 = ((int64_t)UINT64_C(52));
      int64_t t14199 = ap_add(t14197,t14198);
      uintptr_t t14200 = f_at(t14196,t14199);
      int64_t t14201 = ((int64_t)UINT64_C(16777217));
      ap_poke(t14200,4,t14201);
      uintptr_t t14202 = v15;
      int64_t t14203 = v6;
      int64_t t14204 = ((int64_t)UINT64_C(64));
      int64_t t14205 = ap_add(t14203,t14204);
      uintptr_t t14206 = f_at(t14202,t14205);
      int64_t t14207 = ((int64_t)UINT64_C(0));
      ap_poke(t14206,4,t14207);
      uintptr_t t14208 = v15;
      int64_t t14209 = v6;
      int64_t t14210 = ((int64_t)UINT64_C(68));
      int64_t t14211 = ap_add(t14209,t14210);
      uintptr_t t14212 = f_at(t14208,t14211);
      int64_t t14213 = ((int64_t)UINT64_C(1));
      ap_poke(t14212,4,t14213);
      uintptr_t t14214 = v15;
      int64_t t14215 = v6;
      int64_t t14216 = ((int64_t)UINT64_C(80));
      int64_t t14217 = ap_add(t14215,t14216);
      uintptr_t t14218 = f_at(t14214,t14217);
      ApString t14219 = AP_STR("\000_dlopen\000_dlsym\000");
      uintptr_t t14220 = ap_address_string(t14219);
      int64_t t14221 = ((int64_t)UINT64_C(16));
      f_raw_copy(t14218,t14220,t14221);
    }
  } else {
  }
  uintptr_t t14222 = v16;
  int64_t t14223 = ((int64_t)UINT64_C(1));
  int64_t t14224 = v14;
  f_put(t14222,t14223,t14224);
  uintptr_t t14225 = v16;
  int64_t t14226 = ((int64_t)UINT64_C(2));
  int64_t t14227 = v8;
  f_put(t14225,t14226,t14227);
  uintptr_t t14228 = v16;
  int64_t t14229 = ((int64_t)UINT64_C(4208856256));
  f_wb32(t14228,t14229);
  uintptr_t t14230 = v16;
  int64_t t14231 = ((int64_t)UINT64_C(20));
  int64_t t14232 = v12;
  int64_t t14233 = ap_add(t14231,t14232);
  f_wb32(t14230,t14233);
  uintptr_t t14234 = v16;
  int64_t t14235 = ((int64_t)UINT64_C(1));
  f_wb32(t14234,t14235);
  uintptr_t t14236 = v16;
  int64_t t14237 = ((int64_t)UINT64_C(0));
  f_wb32(t14236,t14237);
  uintptr_t t14238 = v16;
  int64_t t14239 = ((int64_t)UINT64_C(20));
  f_wb32(t14238,t14239);
  uintptr_t t14240 = v16;
  int64_t t14241 = ((int64_t)UINT64_C(4208856066));
  f_wb32(t14240,t14241);
  uintptr_t t14242 = v16;
  int64_t t14243 = v12;
  f_wb32(t14242,t14243);
  uintptr_t t14244 = v16;
  int64_t t14245 = ((int64_t)UINT64_C(132096));
  f_wb32(t14244,t14245);
  uintptr_t t14246 = v16;
  int64_t t14247 = ((int64_t)UINT64_C(131074));
  f_wb32(t14246,t14247);
  uintptr_t t14248 = v16;
  int64_t t14249 = v11;
  f_wb32(t14248,t14249);
  uintptr_t t14250 = v16;
  int64_t t14251 = ((int64_t)UINT64_C(88));
  f_wb32(t14250,t14251);
  uintptr_t t14252 = v16;
  int64_t t14253 = ((int64_t)UINT64_C(0));
  f_wb32(t14252,t14253);
  uintptr_t t14254 = v16;
  int64_t t14255 = v9;
  f_wb32(t14254,t14255);
  uintptr_t t14256 = v16;
  int64_t t14257 = v8;
  f_wb32(t14256,t14257);
  uintptr_t t14258 = v16;
  int64_t t14259 = ((int64_t)UINT64_C(537001996));
  f_wb32(t14258,t14259);
  uintptr_t t14260 = v16;
  int64_t t14261 = ((int64_t)UINT64_C(0));
  f_wb32(t14260,t14261);
  uintptr_t t14262 = v16;
  int64_t t14263 = ((int64_t)UINT64_C(0));
  f_wb32(t14262,t14263);
  uintptr_t t14264 = v16;
  int64_t t14265 = ((int64_t)UINT64_C(0));
  f_wb32(t14264,t14265);
  uintptr_t t14266 = v16;
  int64_t t14267 = ((int64_t)UINT64_C(0));
  f_wb32(t14266,t14267);
  uintptr_t t14268 = v16;
  int64_t t14269 = ((int64_t)UINT64_C(0));
  f_wb64(t14268,t14269);
  uintptr_t t14270 = v16;
  int64_t t14271 = ((int64_t)UINT64_C(0));
  f_wb64(t14270,t14271);
  uintptr_t t14272 = v16;
  int64_t t14273 = v4;
  f_wb64(t14272,t14273);
  uintptr_t t14274 = v16;
  int64_t t14275 = ((int64_t)UINT64_C(1));
  f_wb64(t14274,t14275);
  uintptr_t t14276 = v16;
  ApString t14277 = v10;
  f_wtext(t14276,t14277);
  int64_t t14278 = ((int64_t)UINT64_C(0));
  v23 = t14278;
  while (true) {
    int64_t t14279 = v23;
    int64_t t14280 = v8;
    bool t14281 = (t14279 < t14280);
    if (!t14281) break;
    uintptr_t t14282 = v20;
    uintptr_t t14283 = v15;
    int64_t t14284 = v23;
    uintptr_t t14285 = f_at(t14283,t14284);
    int64_t t14286 = ((int64_t)UINT64_C(4096));
    int64_t t14287 = v8;
    int64_t t14288 = v23;
    int64_t t14289 = ap_sub(t14287,t14288);
    int64_t t14290 = f_minint(t14286,t14289);
    uintptr_t t14291 = v16;
    int64_t t14292 = ((int64_t)UINT64_C(32));
    uintptr_t t14293 = f_wreserve(t14291,t14292);
    f_sha256(t14282,t14285,t14290,t14293);
    int64_t t14294 = v23;
    int64_t t14295 = ((int64_t)UINT64_C(4096));
    int64_t t14296 = ap_add(t14294,t14295);
    v23 = t14296;
  }
  uintptr_t t14297 = v0;
  int64_t t14298 = ((int64_t)UINT64_C(16));
  int64_t t14299 = v14;
  f_put(t14297,t14298,t14299);
  uintptr_t t14300 = v15;
  return t14300;
}
static void f_usage() {
  ApString t14301 = AP_STR("APO 2.1.5 - self-hosted native macOS ARM64 compiler\012");
  ap_print_string(t14301);
  ApString t14302 = AP_STR("  apo build source.apo [-o executable] [--dump] [--no-opt]\012");
  ap_print_string(t14302);
  ApString t14303 = AP_STR("  apo check source.apo\012");
  ap_print_string(t14303);
  ApString t14304 = AP_STR("  apo run source.apo [-- program arguments...]\012");
  ap_print_string(t14304);
  ApString t14305 = AP_STR("  apo --version\012");
  ap_print_string(t14305);
  ApString t14306 = AP_STR("Named imports: use window. Override library root with --lib-dir or APO_LIB.\012");
  ap_print_string(t14306);
  ApString t14307 = AP_STR("Default output: out/<source basename>. No external compiler is invoked.\012");
  ap_print_string(t14307);
}
static ApString f_default_output(ApString v0) {
  int64_t v1;
  int64_t v2;
  ApString v3;
  int64_t t14308 = ((int64_t)UINT64_C(0));
  v1 = t14308;
  int64_t t14309 = ((int64_t)UINT64_C(0));
  v2 = t14309;
  while (true) {
    int64_t t14310 = v1;
    ApString t14311 = v0;
    int64_t t14312 = ap_scale(ap_length_string(t14311));
    int64_t t14313 = ap_unscale(t14312);
    bool t14314 = (t14310 < t14313);
    if (!t14314) break;
    ApString t14315 = v0;
    int64_t t14316 = v1;
    int64_t t14317 = ap_byte(t14315,t14316);
    int64_t t14318 = ((int64_t)UINT64_C(47));
    bool t14319 = (t14317 == t14318);
    if (t14319) {
      int64_t t14320 = v1;
      int64_t t14321 = ((int64_t)UINT64_C(1));
      int64_t t14322 = ap_add(t14320,t14321);
      v2 = t14322;
    } else {
    }
    int64_t t14323 = v1;
    int64_t t14324 = ((int64_t)UINT64_C(1));
    int64_t t14325 = ap_add(t14323,t14324);
    v1 = t14325;
  }
  ApString t14326 = v0;
  int64_t t14327 = v2;
  ApString t14328 = v0;
  int64_t t14329 = ap_scale(ap_length_string(t14328));
  int64_t t14330 = ap_unscale(t14329);
  int64_t t14331 = v2;
  int64_t t14332 = ap_sub(t14330,t14331);
  int64_t t14333 = ((int64_t)UINT64_C(4));
  int64_t t14334 = ap_sub(t14332,t14333);
  ApString t14335 = ap_slice(t14326,t14327,t14334);
  v3 = t14335;
  ApString t14336 = v3;
  int64_t t14337 = ap_scale(ap_length_string(t14336));
  int64_t t14338 = ap_unscale(t14337);
  int64_t t14339 = ((int64_t)UINT64_C(0));
  bool t14340 = (t14338 == t14339);
  if (t14340) {
    ApString t14341 = AP_STR("source must have a basename before .apo");
    int64_t t14342 = ((int64_t)UINT64_C(64));
    f_die(t14341,t14342);
  } else {
  }
  ApString t14343 = AP_STR("out/");
  ApString t14344 = v3;
  ApString t14345 = f_concat(t14343,t14344);
  return t14345;
}
static void f_dump_code(uintptr_t v0) {
  int64_t v1;
  int64_t t14346 = ((int64_t)UINT64_C(0));
  v1 = t14346;
  while (true) {
    int64_t t14347 = v1;
    uintptr_t t14348 = v0;
    int64_t t14349 = ((int64_t)UINT64_C(11));
    int64_t t14350 = f_get(t14348,t14349);
    bool t14351 = (t14347 < t14350);
    if (!t14351) break;
    {
      int64_t t14352 = v1;
      uintptr_t t14353 = ((uintptr_t)t14352);
      ap_print_pointer(t14353);
      ApString t14354 = AP_STR("  ");
      ap_print_string(t14354);
      uintptr_t t14355 = v0;
      int64_t t14356 = ((int64_t)UINT64_C(3));
      uintptr_t t14357 = f_getp(t14355,t14356);
      int64_t t14358 = v1;
      uintptr_t t14359 = f_at(t14357,t14358);
      int64_t t14360 = ap_scale(ap_peek(t14359,4));
      int64_t t14361 = ap_unscale(t14360);
      uintptr_t t14362 = ((uintptr_t)t14361);
      ap_print_pointer(t14362);
      ApString t14363 = AP_STR("\012");
      ap_print_string(t14363);
    }
    int64_t t14364 = v1;
    int64_t t14365 = ((int64_t)UINT64_C(4));
    int64_t t14366 = ap_add(t14364,t14365);
    v1 = t14366;
  }
}
static void f_launch(ApString v0,int64_t v1) {
  int64_t v2;
  uintptr_t v3;
  ApBuffer v4;
  int64_t v5;
  ApBuffer v6;
  int64_t v7;
  int64_t t14367 = ((int64_t)ap_argc);
  int64_t t14368 = v1;
  int64_t t14369 = ap_sub(t14367,t14368);
  v2 = t14369;
  int64_t t14370 = v2;
  int64_t t14371 = ((int64_t)UINT64_C(0));
  bool t14372 = (t14370 >= t14371);
  bool t14373 = t14372;
  if (t14373) {
    int64_t t14374 = v2;
    int64_t t14375 = ((int64_t)UINT64_C(512));
    bool t14376 = (t14374 <= t14375);
    t14373 = t14376;
  }
  ApString t14377 = AP_STR("too many program arguments");
  f_need(t14373,t14377);
  int64_t t14378 = v2;
  int64_t t14379 = ((int64_t)UINT64_C(2));
  int64_t t14380 = ap_add(t14378,t14379);
  int64_t t14381 = ((int64_t)UINT64_C(8));
  int64_t t14382 = ap_mul(t14380,t14381);
  uintptr_t t14383 = f_raw(t14382);
  v3 = t14383;
  ApString t14384 = v0;
  ApBuffer t14385 = f_cstring(t14384);
  v4 = t14385;
  {
    uintptr_t t14386 = v3;
    int64_t t14387 = ((int64_t)UINT64_C(0));
    ApBuffer t14388 = v4;
    uintptr_t t14389 = ap_address_buffer(t14388);
    f_putp(t14386,t14387,t14389);
    int64_t t14390 = ((int64_t)UINT64_C(0));
    v5 = t14390;
    while (true) {
      int64_t t14391 = v5;
      int64_t t14392 = v2;
      bool t14393 = (t14391 < t14392);
      if (!t14393) break;
      int64_t t14394 = v1;
      int64_t t14395 = v5;
      int64_t t14396 = ap_add(t14394,t14395);
      ApString t14397 = ap_arg(t14396);
      ApBuffer t14398 = f_cstring(t14397);
      v6 = t14398;
      uintptr_t t14399 = v3;
      int64_t t14400 = v5;
      int64_t t14401 = ((int64_t)UINT64_C(1));
      int64_t t14402 = ap_add(t14400,t14401);
      ApBuffer t14403 = v6;
      uintptr_t t14404 = ap_address_buffer(t14403);
      f_putp(t14399,t14402,t14404);
      int64_t t14405 = v5;
      int64_t t14406 = ((int64_t)UINT64_C(1));
      int64_t t14407 = ap_add(t14405,t14406);
      v5 = t14407;
    }
    int64_t t14408 = ((int64_t)UINT64_C(59));
    ApBuffer t14409 = v4;
    uintptr_t t14410 = ap_address_buffer(t14409);
    uintptr_t t14411 = v3;
    uintptr_t t14412 = ((uintptr_t)environ);
    int64_t t14413 = ((int64_t)UINT64_C(0));
    int64_t t14414 = ((int64_t)UINT64_C(0));
    int64_t t14415 = ((int64_t)UINT64_C(0));
    int64_t t14416 = ap_syscall((uintptr_t)t14408,(uintptr_t)t14410,(uintptr_t)t14411,(uintptr_t)t14412,(uintptr_t)t14413,(uintptr_t)t14414,(uintptr_t)t14415);
    v7 = t14416;
    int64_t t14417 = ((int64_t)UINT64_C(2));
    ApString t14418 = AP_STR("execve failed, errno ");
    int64_t t14419 = v7;
    int64_t t14420 = ap_neg(t14419);
    ApString t14421 = f_strint(t14420);
    ApString t14422 = f_concat(t14418,t14421);
    f_write_fd(t14417,t14422);
    ApString t14423 = AP_STR("cannot launch executable");
    int64_t t14424 = ((int64_t)UINT64_C(74));
    f_die(t14423,t14424);
  }
}
static void f_driver() {
  ApString v0;
  ApString v1;
  ApString v2;
  bool v3;
  bool v4;
  ApString v5;
  int64_t v6;
  int64_t v7;
  ApString v8;
  ApString v9;
  uintptr_t v10;
  uintptr_t v11;
  uintptr_t v12;
  int64_t t14425 = ((int64_t)ap_argc);
  int64_t t14426 = ((int64_t)UINT64_C(2));
  bool t14427 = (t14425 < t14426);
  if (t14427) {
    f_usage();
    return;
  } else {
  }
  int64_t t14428 = ((int64_t)UINT64_C(1));
  ApString t14429 = ap_arg(t14428);
  v0 = t14429;
  ApString t14430 = v0;
  ApString t14431 = AP_STR("--version");
  bool t14432 = ap_equal(t14430,t14431);
  if (t14432) {
    ApString t14433 = AP_STR("APO 2.1.5 (self-hosted, macOS arm64)");
    ap_print_string(t14433);
    ApString t14434 = AP_STR("\012");
    ap_print_string(t14434);
    return;
  } else {
  }
  ApString t14435 = v0;
  ApString t14436 = AP_STR("--help");
  bool t14437 = ap_equal(t14435,t14436);
  bool t14438 = t14437;
  if (!t14438) {
    ApString t14439 = v0;
    ApString t14440 = AP_STR("help");
    bool t14441 = ap_equal(t14439,t14440);
    t14438 = t14441;
  }
  if (t14438) {
    f_usage();
    return;
  } else {
  }
  ApString t14442 = v0;
  ApString t14443 = AP_STR("build");
  bool t14444 = !ap_equal(t14442,t14443);
  bool t14445 = t14444;
  if (t14445) {
    ApString t14446 = v0;
    ApString t14447 = AP_STR("check");
    bool t14448 = !ap_equal(t14446,t14447);
    t14445 = t14448;
  }
  bool t14449 = t14445;
  if (t14449) {
    ApString t14450 = v0;
    ApString t14451 = AP_STR("run");
    bool t14452 = !ap_equal(t14450,t14451);
    t14449 = t14452;
  }
  if (t14449) {
    ApString t14453 = AP_STR("expected build, check, run, or --help");
    int64_t t14454 = ((int64_t)UINT64_C(64));
    f_die(t14453,t14454);
  } else {
  }
  int64_t t14455 = ((int64_t)ap_argc);
  int64_t t14456 = ((int64_t)UINT64_C(3));
  bool t14457 = (t14455 < t14456);
  if (t14457) {
    ApString t14458 = AP_STR("missing .apo source path");
    int64_t t14459 = ((int64_t)UINT64_C(64));
    f_die(t14458,t14459);
  } else {
  }
  int64_t t14460 = ((int64_t)UINT64_C(2));
  ApString t14461 = ap_arg(t14460);
  v1 = t14461;
  ApString t14462 = v1;
  bool t14463 = f_apo_suffix(t14462);
  bool t14464 = !t14463;
  if (t14464) {
    ApString t14465 = AP_STR("source filename must end in .apo");
    int64_t t14466 = ((int64_t)UINT64_C(64));
    f_die(t14465,t14466);
  } else {
  }
  ApString t14467 = v1;
  ApString t14468 = f_default_output(t14467);
  v2 = t14468;
  bool t14469 = false;
  v3 = t14469;
  bool t14470 = false;
  v4 = t14470;
  ApString t14471 = f_library_root();
  v5 = t14471;
  int64_t t14472 = ((int64_t)ap_argc);
  v6 = t14472;
  int64_t t14473 = ((int64_t)UINT64_C(3));
  v7 = t14473;
  while (true) {
    int64_t t14474 = v7;
    int64_t t14475 = ((int64_t)ap_argc);
    bool t14476 = (t14474 < t14475);
    if (!t14476) break;
    int64_t t14477 = v7;
    ApString t14478 = ap_arg(t14477);
    v8 = t14478;
    ApString t14479 = v8;
    ApString t14480 = AP_STR("--");
    bool t14481 = ap_equal(t14479,t14480);
    bool t14482 = t14481;
    if (t14482) {
      ApString t14483 = v0;
      ApString t14484 = AP_STR("run");
      bool t14485 = ap_equal(t14483,t14484);
      t14482 = t14485;
    }
    if (t14482) {
      int64_t t14486 = v7;
      int64_t t14487 = ((int64_t)UINT64_C(1));
      int64_t t14488 = ap_add(t14486,t14487);
      v6 = t14488;
      break;
    } else {
    }
    ApString t14489 = v8;
    ApString t14490 = AP_STR("--lib-dir");
    bool t14491 = ap_equal(t14489,t14490);
    if (t14491) {
      int64_t t14492 = v7;
      int64_t t14493 = ((int64_t)UINT64_C(1));
      int64_t t14494 = ap_add(t14492,t14493);
      v7 = t14494;
      int64_t t14495 = v7;
      int64_t t14496 = ((int64_t)ap_argc);
      bool t14497 = (t14495 >= t14496);
      bool t14498 = t14497;
      if (!t14498) {
        int64_t t14499 = v7;
        ApString t14500 = ap_arg(t14499);
        ApString t14501 = AP_STR("");
        bool t14502 = ap_equal(t14500,t14501);
        t14498 = t14502;
      }
      if (t14498) {
        ApString t14503 = AP_STR("--lib-dir requires a directory");
        int64_t t14504 = ((int64_t)UINT64_C(64));
        f_die(t14503,t14504);
      } else {
      }
      int64_t t14505 = v7;
      ApString t14506 = ap_arg(t14505);
      ApString t14507 = f_path_normal(t14506);
      v5 = t14507;
      int64_t t14508 = v7;
      int64_t t14509 = ((int64_t)UINT64_C(1));
      int64_t t14510 = ap_add(t14508,t14509);
      v7 = t14510;
      continue;
    } else {
    }
    ApString t14511 = v8;
    ApString t14512 = AP_STR("--no-opt");
    bool t14513 = ap_equal(t14511,t14512);
    if (t14513) {
      bool t14514 = true;
      v4 = t14514;
      int64_t t14515 = v7;
      int64_t t14516 = ((int64_t)UINT64_C(1));
      int64_t t14517 = ap_add(t14515,t14516);
      v7 = t14517;
      continue;
    } else {
    }
    ApString t14518 = v8;
    ApString t14519 = AP_STR("-o");
    bool t14520 = ap_equal(t14518,t14519);
    bool t14521 = t14520;
    if (t14521) {
      ApString t14522 = v0;
      ApString t14523 = AP_STR("build");
      bool t14524 = ap_equal(t14522,t14523);
      t14521 = t14524;
    }
    if (t14521) {
      int64_t t14525 = v7;
      int64_t t14526 = ((int64_t)UINT64_C(1));
      int64_t t14527 = ap_add(t14525,t14526);
      v7 = t14527;
      int64_t t14528 = v7;
      int64_t t14529 = ((int64_t)ap_argc);
      bool t14530 = (t14528 >= t14529);
      if (t14530) {
        ApString t14531 = AP_STR("missing output path after -o");
        int64_t t14532 = ((int64_t)UINT64_C(64));
        f_die(t14531,t14532);
      } else {
      }
      int64_t t14533 = v7;
      ApString t14534 = ap_arg(t14533);
      v2 = t14534;
    } else {
      ApString t14535 = v8;
      ApString t14536 = AP_STR("--dump");
      bool t14537 = ap_equal(t14535,t14536);
      bool t14538 = t14537;
      if (t14538) {
        ApString t14539 = v0;
        ApString t14540 = AP_STR("build");
        bool t14541 = ap_equal(t14539,t14540);
        t14538 = t14541;
      }
      if (t14538) {
        bool t14542 = true;
        v3 = t14542;
      } else {
        ApString t14543 = AP_STR("unexpected option: ");
        ApString t14544 = v8;
        ApString t14545 = f_concat(t14543,t14544);
        int64_t t14546 = ((int64_t)UINT64_C(64));
        f_die(t14545,t14546);
      }
    }
    int64_t t14547 = v7;
    int64_t t14548 = ((int64_t)UINT64_C(1));
    int64_t t14549 = ap_add(t14547,t14548);
    v7 = t14549;
  }
  ApString t14550 = v2;
  int64_t t14551 = ap_scale(ap_length_string(t14550));
  int64_t t14552 = ap_unscale(t14551);
  int64_t t14553 = ((int64_t)UINT64_C(0));
  bool t14554 = (t14552 == t14553);
  bool t14555 = t14554;
  if (!t14555) {
    ApString t14556 = v2;
    int64_t t14557 = ap_scale(ap_length_string(t14556));
    int64_t t14558 = ap_unscale(t14557);
    int64_t t14559 = ((int64_t)UINT64_C(4096));
    bool t14560 = (t14558 >= t14559);
    t14555 = t14560;
  }
  if (t14555) {
    ApString t14561 = AP_STR("output path must contain 1..4095 bytes");
    int64_t t14562 = ((int64_t)UINT64_C(64));
    f_die(t14561,t14562);
  } else {
  }
  ApString t14563 = v2;
  ApString t14564 = f_path_normal(t14563);
  v9 = t14564;
  ApString t14565 = v9;
  ApString t14566 = AP_STR(".");
  bool t14567 = ap_equal(t14565,t14566);
  bool t14568 = t14567;
  if (!t14568) {
    ApString t14569 = v9;
    ApString t14570 = AP_STR("..");
    bool t14571 = ap_equal(t14569,t14570);
    t14568 = t14571;
  }
  bool t14572 = t14568;
  if (!t14572) {
    ApString t14573 = v9;
    ApString t14574 = AP_STR("/");
    bool t14575 = ap_equal(t14573,t14574);
    t14572 = t14575;
  }
  if (t14572) {
    ApString t14576 = AP_STR("output must name a file, not a directory");
    int64_t t14577 = ((int64_t)UINT64_C(64));
    f_die(t14576,t14577);
  } else {
  }
  ApString t14578 = v2;
  bool t14579 = f_apo_suffix(t14578);
  bool t14580 = t14579;
  if (!t14580) {
    ApString t14581 = v9;
    ApString t14582 = v1;
    ApString t14583 = f_path_normal(t14582);
    bool t14584 = ap_equal(t14581,t14583);
    t14580 = t14584;
  }
  bool t14585 = t14580;
  if (!t14585) {
    ApString t14586 = v9;
    int64_t t14587 = ((int64_t)UINT64_C(0));
    ApString t14588 = ap_arg(t14587);
    ApString t14589 = f_path_normal(t14588);
    bool t14590 = ap_equal(t14586,t14589);
    t14585 = t14590;
  }
  if (t14585) {
    ApString t14591 = AP_STR("refusing to overwrite a source file or the running compiler");
    int64_t t14592 = ((int64_t)UINT64_C(64));
    f_die(t14591,t14592);
  } else {
  }
  ApString t14593 = v1;
  ApString t14594 = v5;
  ApString t14595 = f_load_program(t14593,t14594);
  ApString t14596 = v1;
  uintptr_t t14597 = f_parse(t14595,t14596);
  v10 = t14597;
  bool t14598 = v4;
  if (t14598) {
    uintptr_t t14599 = v10;
    int64_t t14600 = ((int64_t)UINT64_C(24));
    int64_t t14601 = ((int64_t)UINT64_C(1));
    f_put(t14599,t14600,t14601);
  } else {
  }
  ApString t14602 = v0;
  ApString t14603 = AP_STR("check");
  bool t14604 = ap_equal(t14602,t14603);
  if (t14604) {
    ApString t14605 = AP_STR("Checked ");
    ap_print_string(t14605);
    ApString t14606 = v1;
    ap_print_string(t14606);
    ApString t14607 = AP_STR("\012");
    ap_print_string(t14607);
    return;
  } else {
  }
  uintptr_t t14608 = v10;
  uintptr_t t14609 = f_generate(t14608);
  v11 = t14609;
  uintptr_t t14610 = v11;
  uintptr_t t14611 = f_macho(t14610);
  v12 = t14611;
  ApString t14612 = v2;
  uintptr_t t14613 = v12;
  uintptr_t t14614 = v11;
  int64_t t14615 = ((int64_t)UINT64_C(16));
  int64_t t14616 = f_get(t14614,t14615);
  bool t14617 = true;
  f_save_file(t14612,t14613,t14616,t14617);
  bool t14618 = v3;
  if (t14618) {
    uintptr_t t14619 = v11;
    f_dump_code(t14619);
  } else {
  }
  ApString t14620 = v0;
  ApString t14621 = AP_STR("build");
  bool t14622 = ap_equal(t14620,t14621);
  if (t14622) {
    ApString t14623 = AP_STR("Built ");
    ap_print_string(t14623);
    ApString t14624 = v2;
    ap_print_string(t14624);
    ApString t14625 = AP_STR(" (macOS ARM64, ");
    ap_print_string(t14625);
    uintptr_t t14626 = v11;
    int64_t t14627 = ((int64_t)UINT64_C(16));
    int64_t t14628 = f_get(t14626,t14627);
    ap_print_int(t14628);
    ApString t14629 = AP_STR(" bytes)");
    ap_print_string(t14629);
    ApString t14630 = AP_STR("\012");
    ap_print_string(t14630);
  } else {
    ApString t14631 = v2;
    int64_t t14632 = v6;
    f_launch(t14631,t14632);
  }
}
int main(int argc, char **argv) {
  ap_host_check(); ap_argc=argc; ap_argv=argv;
  f_driver();
  return 0;
}
