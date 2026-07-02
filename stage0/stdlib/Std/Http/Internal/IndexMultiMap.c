// Lean compiler output
// Module: Std.Http.Internal.IndexMultiMap
// Imports: public import Init.Grind public import Init.Data.Int.OfNat public import Std.Data.HashMap
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_instReprTupleOfRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
lean_object* l_instReprNat___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Array_instRepr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_repr___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_mapFinIdxM_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__0 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__0_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__1 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__1_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__2 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__2_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__3 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__3_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__4 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__4_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__5 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__5_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__6 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__6_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__0_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__7 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__7_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__7_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__2_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__3_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__4_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__8 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__8_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__6_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entries"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__10 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__11 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__11_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__11_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__12 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__12_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__13 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__14 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__14_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__12_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__14_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__15 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__15_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprNat___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__16 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__16_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_instRepr___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__16_value)} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__17 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__17_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__18 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__18_value;
static lean_once_cell_t l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__19;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__20 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__20_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__20_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__21 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__21_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "indexes"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__22 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__22_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__22_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__23 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__23_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprTupleOfRepr___redArg___lam__0, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__17_value)} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__24 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__24_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.HashMap.ofList "};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__25 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__25_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__25_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__26 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__26_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "validity"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__27 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__27_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__27_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__28 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__28_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__29 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__29_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__29_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__30 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__30_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__31 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__31_value;
static lean_once_cell_t l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__32;
static lean_once_cell_t l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__33;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__18_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__34 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__34_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__31_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__35 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__35_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_instReprIndexMultiMap_repr___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__36 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__36_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_instReprIndexMultiMap_repr___redArg___lam__1, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__36_value)} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__37 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__37_value;
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_Internal_instInhabitedIndexMultiMap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Internal_instInhabitedIndexMultiMap___closed__0 = (const lean_object*)&l_Std_Internal_instInhabitedIndexMultiMap___closed__0_value;
static lean_once_cell_t l_Std_Internal_instInhabitedIndexMultiMap___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instInhabitedIndexMultiMap___closed__1;
static lean_once_cell_t l_Std_Internal_instInhabitedIndexMultiMap___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instInhabitedIndexMultiMap___closed__2;
static lean_once_cell_t l_Std_Internal_instInhabitedIndexMultiMap___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instInhabitedIndexMultiMap___closed__3;
LEAN_EXPORT lean_object* l_Std_Internal_instInhabitedIndexMultiMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instInhabitedIndexMultiMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instMembership(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instMembership___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instDecidableMem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_instDecidableMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instDecidableMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Internal_IndexMultiMap_hasEntry___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IndexMultiMap_hasEntry___redArg___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_hasEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_hasEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getLast_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getLast_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__0_value;
static const lean_string_object l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__1 = (const lean_object*)&l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__1_value;
static const lean_string_object l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__2 = (const lean_object*)&l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__2_value;
static lean_once_cell_t l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3;
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insert___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insertMany___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insertMany___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insertMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_contains___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_contains(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_update___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_update___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_update(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_replaceLast___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_replaceLast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_isEmpty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_isEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instUnionOfEquivBEqOfLawfulHashable___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instUnionOfEquivBEqOfLawfulHashable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___lam__0(lean_object* v_a_1_, lean_object* v_b_2_, lean_object* v_d_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4_, 0, v_a_1_);
lean_ctor_set(v___x_4_, 1, v_b_2_);
v___x_5_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v_d_3_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___lam__1(lean_object* v___x_6_, lean_object* v___f_7_, lean_object* v_l_8_, lean_object* v_acc_9_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Std_DHashMap_Internal_AssocList_foldrM___redArg(v___x_6_, v___f_7_, v_acc_9_, v_l_8_);
return v___x_10_;
}
}
static lean_object* _init_l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = lean_unsigned_to_nat(11u);
v___x_47_ = lean_nat_to_int(v___x_46_);
return v___x_47_;
}
}
static lean_object* _init_l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__32(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__18));
v___x_67_ = lean_string_length(v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__33(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_obj_once(&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__32, &l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__32_once, _init_l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__32);
v___x_69_ = lean_nat_to_int(v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg(lean_object* v_inst_78_, lean_object* v_inst_79_, lean_object* v_x_80_){
_start:
{
lean_object* v_entries_81_; lean_object* v_indexes_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_147_; 
v_entries_81_ = lean_ctor_get(v_x_80_, 0);
v_indexes_82_ = lean_ctor_get(v_x_80_, 1);
v_isSharedCheck_147_ = !lean_is_exclusive(v_x_80_);
if (v_isSharedCheck_147_ == 0)
{
v___x_84_ = v_x_80_;
v_isShared_85_ = v_isSharedCheck_147_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_indexes_82_);
lean_inc(v_entries_81_);
lean_dec(v_x_80_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_147_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_86_; lean_object* v_buckets_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_145_; 
v___x_86_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v_buckets_87_ = lean_ctor_get(v_indexes_82_, 1);
v_isSharedCheck_145_ = !lean_is_exclusive(v_indexes_82_);
if (v_isSharedCheck_145_ == 0)
{
lean_object* v_unused_146_; 
v_unused_146_ = lean_ctor_get(v_indexes_82_, 0);
lean_dec(v_unused_146_);
v___x_89_ = v_indexes_82_;
v_isShared_90_ = v_isSharedCheck_145_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_buckets_87_);
lean_dec(v_indexes_82_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_145_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___f_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_91_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__14));
v___x_92_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__15));
v___f_93_ = lean_alloc_closure((void*)(l_instReprTupleOfRepr___redArg___lam__0), 3, 1);
lean_closure_set(v___f_93_, 0, v_inst_79_);
lean_inc_ref(v_inst_78_);
v___x_94_ = lean_alloc_closure((void*)(l_Prod_repr___boxed), 6, 4);
lean_closure_set(v___x_94_, 0, lean_box(0));
lean_closure_set(v___x_94_, 1, lean_box(0));
lean_closure_set(v___x_94_, 2, v_inst_78_);
lean_closure_set(v___x_94_, 3, v___f_93_);
v___x_95_ = lean_obj_once(&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__19, &l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__19_once, _init_l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__19);
v___x_96_ = l_Array_repr___redArg(v___x_94_, v_entries_81_);
if (v_isShared_90_ == 0)
{
lean_ctor_set_tag(v___x_89_, 4);
lean_ctor_set(v___x_89_, 1, v___x_96_);
lean_ctor_set(v___x_89_, 0, v___x_95_);
v___x_98_ = v___x_89_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_95_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v___x_96_);
v___x_98_ = v_reuseFailAlloc_144_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_102_; 
v___x_99_ = 0;
v___x_100_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_100_, 0, v___x_98_);
lean_ctor_set_uint8(v___x_100_, sizeof(void*)*1, v___x_99_);
if (v_isShared_85_ == 0)
{
lean_ctor_set_tag(v___x_84_, 5);
lean_ctor_set(v___x_84_, 1, v___x_100_);
lean_ctor_set(v___x_84_, 0, v___x_92_);
v___x_102_ = v___x_84_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_143_, 1, v___x_100_);
v___x_102_ = v_reuseFailAlloc_143_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___f_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___y_115_; lean_object* v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; 
v___x_103_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__21));
v___x_104_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_102_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = lean_box(1);
v___x_106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_104_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
v___x_107_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__23));
v___x_108_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v___x_91_);
v___f_110_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__24));
v___x_111_ = lean_alloc_closure((void*)(l_Prod_repr___boxed), 6, 4);
lean_closure_set(v___x_111_, 0, lean_box(0));
lean_closure_set(v___x_111_, 1, lean_box(0));
lean_closure_set(v___x_111_, 2, v_inst_78_);
lean_closure_set(v___x_111_, 3, v___f_110_);
v___x_112_ = lean_unsigned_to_nat(0u);
v___x_113_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__26));
v___x_136_ = lean_box(0);
v___x_137_ = lean_array_get_size(v_buckets_87_);
v___x_138_ = lean_nat_dec_lt(v___x_112_, v___x_137_);
if (v___x_138_ == 0)
{
lean_dec_ref(v_buckets_87_);
v___y_115_ = v___x_136_;
goto v___jp_114_;
}
else
{
lean_object* v___f_139_; size_t v___x_140_; size_t v___x_141_; lean_object* v___x_142_; 
v___f_139_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__37));
v___x_140_ = lean_usize_of_nat(v___x_137_);
v___x_141_ = ((size_t)0ULL);
v___x_142_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_86_, v___f_139_, v_buckets_87_, v___x_140_, v___x_141_, v___x_136_);
v___y_115_ = v___x_142_;
goto v___jp_114_;
}
v___jp_114_:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_116_ = l_List_repr___redArg(v___x_111_, v___y_115_);
v___x_117_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_113_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = l_Repr_addAppParen(v___x_117_, v___x_112_);
v___x_119_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_95_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
v___x_120_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set_uint8(v___x_120_, sizeof(void*)*1, v___x_99_);
v___x_121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_109_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v___x_103_);
v___x_123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
lean_ctor_set(v___x_123_, 1, v___x_105_);
v___x_124_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__28));
v___x_125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v___x_126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___x_91_);
v___x_127_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__30));
v___x_128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_126_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
v___x_129_ = lean_obj_once(&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__33, &l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__33_once, _init_l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__33);
v___x_130_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__34));
v___x_131_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set(v___x_131_, 1, v___x_128_);
v___x_132_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__35));
v___x_133_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_131_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_129_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
v___x_135_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*1, v___x_99_);
return v___x_135_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr(lean_object* v_00_u03b1_148_, lean_object* v_00_u03b2_149_, lean_object* v_inst_150_, lean_object* v_inst_151_, lean_object* v_inst_152_, lean_object* v_inst_153_, lean_object* v_x_154_, lean_object* v_prec_155_){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = l_Std_Internal_instReprIndexMultiMap_repr___redArg(v_inst_152_, v_inst_153_, v_x_154_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___boxed(lean_object* v_00_u03b1_157_, lean_object* v_00_u03b2_158_, lean_object* v_inst_159_, lean_object* v_inst_160_, lean_object* v_inst_161_, lean_object* v_inst_162_, lean_object* v_x_163_, lean_object* v_prec_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Std_Internal_instReprIndexMultiMap_repr(v_00_u03b1_157_, v_00_u03b2_158_, v_inst_159_, v_inst_160_, v_inst_161_, v_inst_162_, v_x_163_, v_prec_164_);
lean_dec(v_prec_164_);
lean_dec_ref(v_inst_160_);
lean_dec_ref(v_inst_159_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap___redArg(lean_object* v_inst_166_, lean_object* v_inst_167_, lean_object* v_inst_168_, lean_object* v_inst_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_alloc_closure((void*)(l_Std_Internal_instReprIndexMultiMap_repr___boxed), 8, 6);
lean_closure_set(v___x_170_, 0, lean_box(0));
lean_closure_set(v___x_170_, 1, lean_box(0));
lean_closure_set(v___x_170_, 2, v_inst_166_);
lean_closure_set(v___x_170_, 3, v_inst_167_);
lean_closure_set(v___x_170_, 4, v_inst_168_);
lean_closure_set(v___x_170_, 5, v_inst_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap(lean_object* v_00_u03b1_171_, lean_object* v_00_u03b2_172_, lean_object* v_inst_173_, lean_object* v_inst_174_, lean_object* v_inst_175_, lean_object* v_inst_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lean_alloc_closure((void*)(l_Std_Internal_instReprIndexMultiMap_repr___boxed), 8, 6);
lean_closure_set(v___x_177_, 0, lean_box(0));
lean_closure_set(v___x_177_, 1, lean_box(0));
lean_closure_set(v___x_177_, 2, v_inst_173_);
lean_closure_set(v___x_177_, 3, v_inst_174_);
lean_closure_set(v___x_177_, 4, v_inst_175_);
lean_closure_set(v___x_177_, 5, v_inst_176_);
return v___x_177_;
}
}
static lean_object* _init_l_Std_Internal_instInhabitedIndexMultiMap___closed__1(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_180_ = lean_box(0);
v___x_181_ = lean_unsigned_to_nat(16u);
v___x_182_ = lean_mk_array(v___x_181_, v___x_180_);
return v___x_182_;
}
}
static lean_object* _init_l_Std_Internal_instInhabitedIndexMultiMap___closed__2(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_183_ = lean_obj_once(&l_Std_Internal_instInhabitedIndexMultiMap___closed__1, &l_Std_Internal_instInhabitedIndexMultiMap___closed__1_once, _init_l_Std_Internal_instInhabitedIndexMultiMap___closed__1);
v___x_184_ = lean_unsigned_to_nat(0u);
v___x_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v___x_183_);
return v___x_185_;
}
}
static lean_object* _init_l_Std_Internal_instInhabitedIndexMultiMap___closed__3(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_186_ = lean_obj_once(&l_Std_Internal_instInhabitedIndexMultiMap___closed__2, &l_Std_Internal_instInhabitedIndexMultiMap___closed__2_once, _init_l_Std_Internal_instInhabitedIndexMultiMap___closed__2);
v___x_187_ = ((lean_object*)(l_Std_Internal_instInhabitedIndexMultiMap___closed__0));
v___x_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
lean_ctor_set(v___x_188_, 1, v___x_186_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instInhabitedIndexMultiMap(lean_object* v_00_u03b1_189_, lean_object* v_00_u03b2_190_, lean_object* v_inst_191_, lean_object* v_inst_192_, lean_object* v_inst_193_, lean_object* v_inst_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lean_obj_once(&l_Std_Internal_instInhabitedIndexMultiMap___closed__3, &l_Std_Internal_instInhabitedIndexMultiMap___closed__3_once, _init_l_Std_Internal_instInhabitedIndexMultiMap___closed__3);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instInhabitedIndexMultiMap___boxed(lean_object* v_00_u03b1_196_, lean_object* v_00_u03b2_197_, lean_object* v_inst_198_, lean_object* v_inst_199_, lean_object* v_inst_200_, lean_object* v_inst_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Std_Internal_instInhabitedIndexMultiMap(v_00_u03b1_196_, v_00_u03b2_197_, v_inst_198_, v_inst_199_, v_inst_200_, v_inst_201_);
lean_dec(v_inst_201_);
lean_dec(v_inst_200_);
lean_dec_ref(v_inst_199_);
lean_dec_ref(v_inst_198_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instMembership(lean_object* v_00_u03b1_203_, lean_object* v_00_u03b2_204_, lean_object* v_inst_205_, lean_object* v_inst_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = lean_box(0);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instMembership___boxed(lean_object* v_00_u03b1_208_, lean_object* v_00_u03b2_209_, lean_object* v_inst_210_, lean_object* v_inst_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Std_Internal_IndexMultiMap_instMembership(v_00_u03b1_208_, v_00_u03b2_209_, v_inst_210_, v_inst_211_);
lean_dec_ref(v_inst_211_);
lean_dec_ref(v_inst_210_);
return v_res_212_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(lean_object* v_inst_213_, lean_object* v_inst_214_, lean_object* v_key_215_, lean_object* v_map_216_){
_start:
{
lean_object* v_indexes_217_; uint8_t v___x_218_; 
v_indexes_217_ = lean_ctor_get(v_map_216_, 1);
v___x_218_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_213_, v_inst_214_, v_indexes_217_, v_key_215_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instDecidableMem___redArg___boxed(lean_object* v_inst_219_, lean_object* v_inst_220_, lean_object* v_key_221_, lean_object* v_map_222_){
_start:
{
uint8_t v_res_223_; lean_object* v_r_224_; 
v_res_223_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_219_, v_inst_220_, v_key_221_, v_map_222_);
lean_dec_ref(v_map_222_);
v_r_224_ = lean_box(v_res_223_);
return v_r_224_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_instDecidableMem(lean_object* v_00_u03b1_225_, lean_object* v_00_u03b2_226_, lean_object* v_inst_227_, lean_object* v_inst_228_, lean_object* v_key_229_, lean_object* v_map_230_){
_start:
{
uint8_t v___x_231_; 
v___x_231_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_227_, v_inst_228_, v_key_229_, v_map_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instDecidableMem___boxed(lean_object* v_00_u03b1_232_, lean_object* v_00_u03b2_233_, lean_object* v_inst_234_, lean_object* v_inst_235_, lean_object* v_key_236_, lean_object* v_map_237_){
_start:
{
uint8_t v_res_238_; lean_object* v_r_239_; 
v_res_238_ = l_Std_Internal_IndexMultiMap_instDecidableMem(v_00_u03b1_232_, v_00_u03b2_233_, v_inst_234_, v_inst_235_, v_key_236_, v_map_237_);
lean_dec_ref(v_map_237_);
v_r_239_ = lean_box(v_res_238_);
return v_r_239_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0(lean_object* v___x_240_, lean_object* v_entries_241_, lean_object* v_x1_242_, lean_object* v_x2_243_, lean_object* v_x3_244_){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v_snd_247_; 
v___x_245_ = lean_array_fget_borrowed(v___x_240_, v_x1_242_);
v___x_246_ = lean_array_fget_borrowed(v_entries_241_, v___x_245_);
v_snd_247_ = lean_ctor_get(v___x_246_, 1);
lean_inc(v_snd_247_);
return v_snd_247_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed(lean_object* v___x_248_, lean_object* v_entries_249_, lean_object* v_x1_250_, lean_object* v_x2_251_, lean_object* v_x3_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0(v___x_248_, v_entries_249_, v_x1_250_, v_x2_251_, v_x3_252_);
lean_dec(v_x2_251_);
lean_dec(v_x1_250_);
lean_dec_ref(v_entries_249_);
lean_dec_ref(v___x_248_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll___redArg(lean_object* v_inst_254_, lean_object* v_inst_255_, lean_object* v_map_256_, lean_object* v_key_257_){
_start:
{
lean_object* v_entries_258_; lean_object* v_indexes_259_; lean_object* v___x_260_; lean_object* v___f_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v_entries_266_; 
v_entries_258_ = lean_ctor_get(v_map_256_, 0);
lean_inc_ref(v_entries_258_);
v_indexes_259_ = lean_ctor_get(v_map_256_, 1);
lean_inc_ref(v_indexes_259_);
lean_dec_ref(v_map_256_);
v___x_260_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_254_, v_inst_255_, v_indexes_259_, v_key_257_);
lean_dec_ref(v_indexes_259_);
lean_inc(v___x_260_);
v___f_261_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_261_, 0, v___x_260_);
lean_closure_set(v___f_261_, 1, v_entries_258_);
v___x_262_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_263_ = lean_array_get_size(v___x_260_);
v___x_264_ = lean_unsigned_to_nat(0u);
v___x_265_ = lean_mk_empty_array_with_capacity(v___x_263_);
v_entries_266_ = l_Array_mapFinIdxM_map___redArg(v___x_262_, v___x_260_, v___f_261_, v___x_263_, v___x_264_, v___x_265_);
return v_entries_266_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll(lean_object* v_00_u03b1_267_, lean_object* v_00_u03b2_268_, lean_object* v_inst_269_, lean_object* v_inst_270_, lean_object* v_map_271_, lean_object* v_key_272_, lean_object* v_h_273_){
_start:
{
lean_object* v_entries_274_; lean_object* v_indexes_275_; lean_object* v___x_276_; lean_object* v___f_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v_entries_282_; 
v_entries_274_ = lean_ctor_get(v_map_271_, 0);
lean_inc_ref(v_entries_274_);
v_indexes_275_ = lean_ctor_get(v_map_271_, 1);
lean_inc_ref(v_indexes_275_);
lean_dec_ref(v_map_271_);
v___x_276_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_269_, v_inst_270_, v_indexes_275_, v_key_272_);
lean_dec_ref(v_indexes_275_);
lean_inc(v___x_276_);
v___f_277_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_277_, 0, v___x_276_);
lean_closure_set(v___f_277_, 1, v_entries_274_);
v___x_278_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_279_ = lean_array_get_size(v___x_276_);
v___x_280_ = lean_unsigned_to_nat(0u);
v___x_281_ = lean_mk_empty_array_with_capacity(v___x_279_);
v_entries_282_ = l_Array_mapFinIdxM_map___redArg(v___x_278_, v___x_276_, v___f_277_, v___x_279_, v___x_280_, v___x_281_);
return v_entries_282_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get___redArg(lean_object* v_inst_283_, lean_object* v_inst_284_, lean_object* v_map_285_, lean_object* v_key_286_){
_start:
{
lean_object* v_entries_287_; lean_object* v_indexes_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v_entry_291_; lean_object* v___x_292_; lean_object* v_snd_293_; 
v_entries_287_ = lean_ctor_get(v_map_285_, 0);
v_indexes_288_ = lean_ctor_get(v_map_285_, 1);
v___x_289_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_283_, v_inst_284_, v_indexes_288_, v_key_286_);
v___x_290_ = lean_unsigned_to_nat(0u);
v_entry_291_ = lean_array_fget(v___x_289_, v___x_290_);
lean_dec(v___x_289_);
v___x_292_ = lean_array_fget_borrowed(v_entries_287_, v_entry_291_);
lean_dec(v_entry_291_);
v_snd_293_ = lean_ctor_get(v___x_292_, 1);
lean_inc(v_snd_293_);
return v_snd_293_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get___redArg___boxed(lean_object* v_inst_294_, lean_object* v_inst_295_, lean_object* v_map_296_, lean_object* v_key_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Std_Internal_IndexMultiMap_get___redArg(v_inst_294_, v_inst_295_, v_map_296_, v_key_297_);
lean_dec_ref(v_map_296_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get(lean_object* v_00_u03b1_299_, lean_object* v_00_u03b2_300_, lean_object* v_inst_301_, lean_object* v_inst_302_, lean_object* v_map_303_, lean_object* v_key_304_, lean_object* v_h_305_){
_start:
{
lean_object* v_entries_306_; lean_object* v_indexes_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v_entry_310_; lean_object* v___x_311_; lean_object* v_snd_312_; 
v_entries_306_ = lean_ctor_get(v_map_303_, 0);
v_indexes_307_ = lean_ctor_get(v_map_303_, 1);
v___x_308_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_301_, v_inst_302_, v_indexes_307_, v_key_304_);
v___x_309_ = lean_unsigned_to_nat(0u);
v_entry_310_ = lean_array_fget(v___x_308_, v___x_309_);
lean_dec(v___x_308_);
v___x_311_ = lean_array_fget_borrowed(v_entries_306_, v_entry_310_);
lean_dec(v_entry_310_);
v_snd_312_ = lean_ctor_get(v___x_311_, 1);
lean_inc(v_snd_312_);
return v_snd_312_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get___boxed(lean_object* v_00_u03b1_313_, lean_object* v_00_u03b2_314_, lean_object* v_inst_315_, lean_object* v_inst_316_, lean_object* v_map_317_, lean_object* v_key_318_, lean_object* v_h_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Std_Internal_IndexMultiMap_get(v_00_u03b1_313_, v_00_u03b2_314_, v_inst_315_, v_inst_316_, v_map_317_, v_key_318_, v_h_319_);
lean_dec_ref(v_map_317_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll_x3f___redArg(lean_object* v_inst_321_, lean_object* v_inst_322_, lean_object* v_map_323_, lean_object* v_key_324_){
_start:
{
uint8_t v___x_325_; 
lean_inc(v_key_324_);
lean_inc_ref(v_inst_322_);
lean_inc_ref(v_inst_321_);
v___x_325_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_321_, v_inst_322_, v_key_324_, v_map_323_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; 
lean_dec(v_key_324_);
lean_dec_ref(v_map_323_);
lean_dec_ref(v_inst_322_);
lean_dec_ref(v_inst_321_);
v___x_326_ = lean_box(0);
return v___x_326_;
}
else
{
lean_object* v_entries_327_; lean_object* v_indexes_328_; lean_object* v___x_329_; lean_object* v___f_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v_entries_335_; lean_object* v___x_336_; 
v_entries_327_ = lean_ctor_get(v_map_323_, 0);
lean_inc_ref(v_entries_327_);
v_indexes_328_ = lean_ctor_get(v_map_323_, 1);
lean_inc_ref(v_indexes_328_);
lean_dec_ref(v_map_323_);
v___x_329_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_321_, v_inst_322_, v_indexes_328_, v_key_324_);
lean_dec_ref(v_indexes_328_);
lean_inc(v___x_329_);
v___f_330_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_330_, 0, v___x_329_);
lean_closure_set(v___f_330_, 1, v_entries_327_);
v___x_331_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_332_ = lean_array_get_size(v___x_329_);
v___x_333_ = lean_unsigned_to_nat(0u);
v___x_334_ = lean_mk_empty_array_with_capacity(v___x_332_);
v_entries_335_ = l_Array_mapFinIdxM_map___redArg(v___x_331_, v___x_329_, v___f_330_, v___x_332_, v___x_333_, v___x_334_);
v___x_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_336_, 0, v_entries_335_);
return v___x_336_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll_x3f(lean_object* v_00_u03b1_337_, lean_object* v_00_u03b2_338_, lean_object* v_inst_339_, lean_object* v_inst_340_, lean_object* v_map_341_, lean_object* v_key_342_){
_start:
{
uint8_t v___x_343_; 
lean_inc(v_key_342_);
lean_inc_ref(v_inst_340_);
lean_inc_ref(v_inst_339_);
v___x_343_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_339_, v_inst_340_, v_key_342_, v_map_341_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; 
lean_dec(v_key_342_);
lean_dec_ref(v_map_341_);
lean_dec_ref(v_inst_340_);
lean_dec_ref(v_inst_339_);
v___x_344_ = lean_box(0);
return v___x_344_;
}
else
{
lean_object* v_entries_345_; lean_object* v_indexes_346_; lean_object* v___x_347_; lean_object* v___f_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v_entries_353_; lean_object* v___x_354_; 
v_entries_345_ = lean_ctor_get(v_map_341_, 0);
lean_inc_ref(v_entries_345_);
v_indexes_346_ = lean_ctor_get(v_map_341_, 1);
lean_inc_ref(v_indexes_346_);
lean_dec_ref(v_map_341_);
v___x_347_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_339_, v_inst_340_, v_indexes_346_, v_key_342_);
lean_dec_ref(v_indexes_346_);
lean_inc(v___x_347_);
v___f_348_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_348_, 0, v___x_347_);
lean_closure_set(v___f_348_, 1, v_entries_345_);
v___x_349_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_350_ = lean_array_get_size(v___x_347_);
v___x_351_ = lean_unsigned_to_nat(0u);
v___x_352_ = lean_mk_empty_array_with_capacity(v___x_350_);
v_entries_353_ = l_Array_mapFinIdxM_map___redArg(v___x_349_, v___x_347_, v___f_348_, v___x_350_, v___x_351_, v___x_352_);
v___x_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_354_, 0, v_entries_353_);
return v___x_354_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f___redArg(lean_object* v_inst_355_, lean_object* v_inst_356_, lean_object* v_map_357_, lean_object* v_key_358_){
_start:
{
uint8_t v___x_359_; 
lean_inc(v_key_358_);
lean_inc_ref(v_inst_356_);
lean_inc_ref(v_inst_355_);
v___x_359_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_355_, v_inst_356_, v_key_358_, v_map_357_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; 
lean_dec(v_key_358_);
lean_dec_ref(v_inst_356_);
lean_dec_ref(v_inst_355_);
v___x_360_ = lean_box(0);
return v___x_360_;
}
else
{
lean_object* v_entries_361_; lean_object* v_indexes_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v_entry_365_; lean_object* v___x_366_; lean_object* v_snd_367_; lean_object* v___x_368_; 
v_entries_361_ = lean_ctor_get(v_map_357_, 0);
v_indexes_362_ = lean_ctor_get(v_map_357_, 1);
v___x_363_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_355_, v_inst_356_, v_indexes_362_, v_key_358_);
v___x_364_ = lean_unsigned_to_nat(0u);
v_entry_365_ = lean_array_fget(v___x_363_, v___x_364_);
lean_dec(v___x_363_);
v___x_366_ = lean_array_fget_borrowed(v_entries_361_, v_entry_365_);
lean_dec(v_entry_365_);
v_snd_367_ = lean_ctor_get(v___x_366_, 1);
lean_inc(v_snd_367_);
v___x_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_368_, 0, v_snd_367_);
return v___x_368_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f___redArg___boxed(lean_object* v_inst_369_, lean_object* v_inst_370_, lean_object* v_map_371_, lean_object* v_key_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Std_Internal_IndexMultiMap_get_x3f___redArg(v_inst_369_, v_inst_370_, v_map_371_, v_key_372_);
lean_dec_ref(v_map_371_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f(lean_object* v_00_u03b1_374_, lean_object* v_00_u03b2_375_, lean_object* v_inst_376_, lean_object* v_inst_377_, lean_object* v_map_378_, lean_object* v_key_379_){
_start:
{
uint8_t v___x_380_; 
lean_inc(v_key_379_);
lean_inc_ref(v_inst_377_);
lean_inc_ref(v_inst_376_);
v___x_380_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_376_, v_inst_377_, v_key_379_, v_map_378_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; 
lean_dec(v_key_379_);
lean_dec_ref(v_inst_377_);
lean_dec_ref(v_inst_376_);
v___x_381_ = lean_box(0);
return v___x_381_;
}
else
{
lean_object* v_entries_382_; lean_object* v_indexes_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v_entry_386_; lean_object* v___x_387_; lean_object* v_snd_388_; lean_object* v___x_389_; 
v_entries_382_ = lean_ctor_get(v_map_378_, 0);
v_indexes_383_ = lean_ctor_get(v_map_378_, 1);
v___x_384_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_376_, v_inst_377_, v_indexes_383_, v_key_379_);
v___x_385_ = lean_unsigned_to_nat(0u);
v_entry_386_ = lean_array_fget(v___x_384_, v___x_385_);
lean_dec(v___x_384_);
v___x_387_ = lean_array_fget_borrowed(v_entries_382_, v_entry_386_);
lean_dec(v_entry_386_);
v_snd_388_ = lean_ctor_get(v___x_387_, 1);
lean_inc(v_snd_388_);
v___x_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_389_, 0, v_snd_388_);
return v___x_389_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f___boxed(lean_object* v_00_u03b1_390_, lean_object* v_00_u03b2_391_, lean_object* v_inst_392_, lean_object* v_inst_393_, lean_object* v_map_394_, lean_object* v_key_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Std_Internal_IndexMultiMap_get_x3f(v_00_u03b1_390_, v_00_u03b2_391_, v_inst_392_, v_inst_393_, v_map_394_, v_key_395_);
lean_dec_ref(v_map_394_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1(lean_object* v_inst_397_, lean_object* v_value_398_, lean_object* v___x_399_, lean_object* v___x_400_, lean_object* v_a_401_, lean_object* v_x_402_, lean_object* v___y_403_){
_start:
{
lean_object* v___x_404_; uint8_t v___x_405_; 
lean_inc(v_a_401_);
v___x_404_ = lean_apply_2(v_inst_397_, v_a_401_, v_value_398_);
v___x_405_ = lean_unbox(v___x_404_);
if (v___x_405_ == 0)
{
lean_object* v___x_406_; 
lean_dec(v_a_401_);
v___x_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_399_);
return v___x_406_;
}
else
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
lean_dec_ref(v___x_399_);
v___x_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_407_, 0, v_a_401_);
v___x_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
v___x_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
lean_ctor_set(v___x_409_, 1, v___x_400_);
v___x_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_410_, 0, v___x_409_);
return v___x_410_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1___boxed(lean_object* v_inst_411_, lean_object* v_value_412_, lean_object* v___x_413_, lean_object* v___x_414_, lean_object* v_a_415_, lean_object* v_x_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1(v_inst_411_, v_value_412_, v___x_413_, v___x_414_, v_a_415_, v_x_416_, v___y_417_);
lean_dec_ref(v___y_417_);
return v_res_418_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_hasEntry___redArg(lean_object* v_inst_422_, lean_object* v_inst_423_, lean_object* v_map_424_, lean_object* v_inst_425_, lean_object* v_key_426_, lean_object* v_value_427_){
_start:
{
uint8_t v___x_428_; 
lean_inc(v_key_426_);
lean_inc_ref(v_inst_423_);
lean_inc_ref(v_inst_422_);
v___x_428_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_422_, v_inst_423_, v_key_426_, v_map_424_);
if (v___x_428_ == 0)
{
lean_dec(v_value_427_);
lean_dec(v_key_426_);
lean_dec_ref(v_inst_425_);
lean_dec_ref(v_map_424_);
lean_dec_ref(v_inst_423_);
lean_dec_ref(v_inst_422_);
return v___x_428_;
}
else
{
lean_object* v_entries_429_; lean_object* v_indexes_430_; lean_object* v___x_431_; lean_object* v___f_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v_entries_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___f_440_; size_t v_sz_441_; size_t v___x_442_; lean_object* v___x_443_; lean_object* v_fst_444_; 
v_entries_429_ = lean_ctor_get(v_map_424_, 0);
lean_inc_ref(v_entries_429_);
v_indexes_430_ = lean_ctor_get(v_map_424_, 1);
lean_inc_ref(v_indexes_430_);
lean_dec_ref(v_map_424_);
v___x_431_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_422_, v_inst_423_, v_indexes_430_, v_key_426_);
lean_dec_ref(v_indexes_430_);
lean_inc(v___x_431_);
v___f_432_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_432_, 0, v___x_431_);
lean_closure_set(v___f_432_, 1, v_entries_429_);
v___x_433_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_434_ = lean_array_get_size(v___x_431_);
v___x_435_ = lean_unsigned_to_nat(0u);
v___x_436_ = lean_mk_empty_array_with_capacity(v___x_434_);
v_entries_437_ = l_Array_mapFinIdxM_map___redArg(v___x_433_, v___x_431_, v___f_432_, v___x_434_, v___x_435_, v___x_436_);
v___x_438_ = lean_box(0);
v___x_439_ = ((lean_object*)(l_Std_Internal_IndexMultiMap_hasEntry___redArg___closed__0));
v___f_440_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1___boxed), 7, 4);
lean_closure_set(v___f_440_, 0, v_inst_425_);
lean_closure_set(v___f_440_, 1, v_value_427_);
lean_closure_set(v___f_440_, 2, v___x_439_);
lean_closure_set(v___f_440_, 3, v___x_438_);
v_sz_441_ = lean_array_size(v_entries_437_);
v___x_442_ = ((size_t)0ULL);
v___x_443_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_433_, v_entries_437_, v___f_440_, v_sz_441_, v___x_442_, v___x_439_);
v_fst_444_ = lean_ctor_get(v___x_443_, 0);
lean_inc(v_fst_444_);
lean_dec(v___x_443_);
if (lean_obj_tag(v_fst_444_) == 0)
{
uint8_t v___x_445_; 
v___x_445_ = 0;
return v___x_445_;
}
else
{
lean_object* v_val_446_; 
v_val_446_ = lean_ctor_get(v_fst_444_, 0);
lean_inc(v_val_446_);
lean_dec_ref_known(v_fst_444_, 1);
if (lean_obj_tag(v_val_446_) == 0)
{
uint8_t v___x_447_; 
v___x_447_ = 0;
return v___x_447_;
}
else
{
lean_dec_ref_known(v_val_446_, 1);
return v___x_428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___boxed(lean_object* v_inst_448_, lean_object* v_inst_449_, lean_object* v_map_450_, lean_object* v_inst_451_, lean_object* v_key_452_, lean_object* v_value_453_){
_start:
{
uint8_t v_res_454_; lean_object* v_r_455_; 
v_res_454_ = l_Std_Internal_IndexMultiMap_hasEntry___redArg(v_inst_448_, v_inst_449_, v_map_450_, v_inst_451_, v_key_452_, v_value_453_);
v_r_455_ = lean_box(v_res_454_);
return v_r_455_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_hasEntry(lean_object* v_00_u03b1_456_, lean_object* v_00_u03b2_457_, lean_object* v_inst_458_, lean_object* v_inst_459_, lean_object* v_map_460_, lean_object* v_inst_461_, lean_object* v_key_462_, lean_object* v_value_463_){
_start:
{
uint8_t v___x_464_; 
lean_inc(v_key_462_);
lean_inc_ref(v_inst_459_);
lean_inc_ref(v_inst_458_);
v___x_464_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_458_, v_inst_459_, v_key_462_, v_map_460_);
if (v___x_464_ == 0)
{
lean_dec(v_value_463_);
lean_dec(v_key_462_);
lean_dec_ref(v_inst_461_);
lean_dec_ref(v_map_460_);
lean_dec_ref(v_inst_459_);
lean_dec_ref(v_inst_458_);
return v___x_464_;
}
else
{
lean_object* v_entries_465_; lean_object* v_indexes_466_; lean_object* v___x_467_; lean_object* v___f_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v_entries_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___f_476_; size_t v_sz_477_; size_t v___x_478_; lean_object* v___x_479_; lean_object* v_fst_480_; 
v_entries_465_ = lean_ctor_get(v_map_460_, 0);
lean_inc_ref(v_entries_465_);
v_indexes_466_ = lean_ctor_get(v_map_460_, 1);
lean_inc_ref(v_indexes_466_);
lean_dec_ref(v_map_460_);
v___x_467_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_458_, v_inst_459_, v_indexes_466_, v_key_462_);
lean_dec_ref(v_indexes_466_);
lean_inc(v___x_467_);
v___f_468_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_468_, 0, v___x_467_);
lean_closure_set(v___f_468_, 1, v_entries_465_);
v___x_469_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_470_ = lean_array_get_size(v___x_467_);
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = lean_mk_empty_array_with_capacity(v___x_470_);
v_entries_473_ = l_Array_mapFinIdxM_map___redArg(v___x_469_, v___x_467_, v___f_468_, v___x_470_, v___x_471_, v___x_472_);
v___x_474_ = lean_box(0);
v___x_475_ = ((lean_object*)(l_Std_Internal_IndexMultiMap_hasEntry___redArg___closed__0));
v___f_476_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1___boxed), 7, 4);
lean_closure_set(v___f_476_, 0, v_inst_461_);
lean_closure_set(v___f_476_, 1, v_value_463_);
lean_closure_set(v___f_476_, 2, v___x_475_);
lean_closure_set(v___f_476_, 3, v___x_474_);
v_sz_477_ = lean_array_size(v_entries_473_);
v___x_478_ = ((size_t)0ULL);
v___x_479_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_469_, v_entries_473_, v___f_476_, v_sz_477_, v___x_478_, v___x_475_);
v_fst_480_ = lean_ctor_get(v___x_479_, 0);
lean_inc(v_fst_480_);
lean_dec(v___x_479_);
if (lean_obj_tag(v_fst_480_) == 0)
{
uint8_t v___x_481_; 
v___x_481_ = 0;
return v___x_481_;
}
else
{
lean_object* v_val_482_; 
v_val_482_ = lean_ctor_get(v_fst_480_, 0);
lean_inc(v_val_482_);
lean_dec_ref_known(v_fst_480_, 1);
if (lean_obj_tag(v_val_482_) == 0)
{
uint8_t v___x_483_; 
v___x_483_ = 0;
return v___x_483_;
}
else
{
lean_dec_ref_known(v_val_482_, 1);
return v___x_464_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___boxed(lean_object* v_00_u03b1_484_, lean_object* v_00_u03b2_485_, lean_object* v_inst_486_, lean_object* v_inst_487_, lean_object* v_map_488_, lean_object* v_inst_489_, lean_object* v_key_490_, lean_object* v_value_491_){
_start:
{
uint8_t v_res_492_; lean_object* v_r_493_; 
v_res_492_ = l_Std_Internal_IndexMultiMap_hasEntry(v_00_u03b1_484_, v_00_u03b2_485_, v_inst_486_, v_inst_487_, v_map_488_, v_inst_489_, v_key_490_, v_value_491_);
v_r_493_ = lean_box(v_res_492_);
return v_r_493_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getLast_x3f___redArg(lean_object* v_inst_494_, lean_object* v_inst_495_, lean_object* v_map_496_, lean_object* v_key_497_){
_start:
{
uint8_t v___x_498_; 
lean_inc(v_key_497_);
lean_inc_ref(v_inst_495_);
lean_inc_ref(v_inst_494_);
v___x_498_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_494_, v_inst_495_, v_key_497_, v_map_496_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; 
lean_dec(v_key_497_);
lean_dec_ref(v_map_496_);
lean_dec_ref(v_inst_495_);
lean_dec_ref(v_inst_494_);
v___x_499_ = lean_box(0);
return v___x_499_;
}
else
{
lean_object* v_entries_500_; lean_object* v_indexes_501_; lean_object* v___x_502_; lean_object* v___f_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v_entries_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; uint8_t v___x_512_; 
v_entries_500_ = lean_ctor_get(v_map_496_, 0);
lean_inc_ref(v_entries_500_);
v_indexes_501_ = lean_ctor_get(v_map_496_, 1);
lean_inc_ref(v_indexes_501_);
lean_dec_ref(v_map_496_);
v___x_502_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_494_, v_inst_495_, v_indexes_501_, v_key_497_);
lean_dec_ref(v_indexes_501_);
lean_inc(v___x_502_);
v___f_503_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_503_, 0, v___x_502_);
lean_closure_set(v___f_503_, 1, v_entries_500_);
v___x_504_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_505_ = lean_array_get_size(v___x_502_);
v___x_506_ = lean_unsigned_to_nat(0u);
v___x_507_ = lean_mk_empty_array_with_capacity(v___x_505_);
v_entries_508_ = l_Array_mapFinIdxM_map___redArg(v___x_504_, v___x_502_, v___f_503_, v___x_505_, v___x_506_, v___x_507_);
v___x_509_ = lean_array_get_size(v_entries_508_);
v___x_510_ = lean_unsigned_to_nat(1u);
v___x_511_ = lean_nat_sub(v___x_509_, v___x_510_);
v___x_512_ = lean_nat_dec_lt(v___x_511_, v___x_509_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; 
lean_dec(v___x_511_);
lean_dec(v_entries_508_);
v___x_513_ = lean_box(0);
return v___x_513_;
}
else
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = lean_array_fget(v_entries_508_, v___x_511_);
lean_dec(v___x_511_);
lean_dec(v_entries_508_);
v___x_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
return v___x_515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getLast_x3f(lean_object* v_00_u03b1_516_, lean_object* v_00_u03b2_517_, lean_object* v_inst_518_, lean_object* v_inst_519_, lean_object* v_map_520_, lean_object* v_key_521_){
_start:
{
uint8_t v___x_522_; 
lean_inc(v_key_521_);
lean_inc_ref(v_inst_519_);
lean_inc_ref(v_inst_518_);
v___x_522_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_518_, v_inst_519_, v_key_521_, v_map_520_);
if (v___x_522_ == 0)
{
lean_object* v___x_523_; 
lean_dec(v_key_521_);
lean_dec_ref(v_map_520_);
lean_dec_ref(v_inst_519_);
lean_dec_ref(v_inst_518_);
v___x_523_ = lean_box(0);
return v___x_523_;
}
else
{
lean_object* v_entries_524_; lean_object* v_indexes_525_; lean_object* v___x_526_; lean_object* v___f_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v_entries_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; 
v_entries_524_ = lean_ctor_get(v_map_520_, 0);
lean_inc_ref(v_entries_524_);
v_indexes_525_ = lean_ctor_get(v_map_520_, 1);
lean_inc_ref(v_indexes_525_);
lean_dec_ref(v_map_520_);
v___x_526_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_518_, v_inst_519_, v_indexes_525_, v_key_521_);
lean_dec_ref(v_indexes_525_);
lean_inc(v___x_526_);
v___f_527_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_527_, 0, v___x_526_);
lean_closure_set(v___f_527_, 1, v_entries_524_);
v___x_528_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_529_ = lean_array_get_size(v___x_526_);
v___x_530_ = lean_unsigned_to_nat(0u);
v___x_531_ = lean_mk_empty_array_with_capacity(v___x_529_);
v_entries_532_ = l_Array_mapFinIdxM_map___redArg(v___x_528_, v___x_526_, v___f_527_, v___x_529_, v___x_530_, v___x_531_);
v___x_533_ = lean_array_get_size(v_entries_532_);
v___x_534_ = lean_unsigned_to_nat(1u);
v___x_535_ = lean_nat_sub(v___x_533_, v___x_534_);
v___x_536_ = lean_nat_dec_lt(v___x_535_, v___x_533_);
if (v___x_536_ == 0)
{
lean_object* v___x_537_; 
lean_dec(v___x_535_);
lean_dec(v_entries_532_);
v___x_537_ = lean_box(0);
return v___x_537_;
}
else
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = lean_array_fget(v_entries_532_, v___x_535_);
lean_dec(v___x_535_);
lean_dec(v_entries_532_);
v___x_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
return v___x_539_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD___redArg(lean_object* v_inst_540_, lean_object* v_inst_541_, lean_object* v_map_542_, lean_object* v_key_543_, lean_object* v_d_544_){
_start:
{
uint8_t v___x_545_; 
lean_inc(v_key_543_);
lean_inc_ref(v_inst_541_);
lean_inc_ref(v_inst_540_);
v___x_545_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_540_, v_inst_541_, v_key_543_, v_map_542_);
if (v___x_545_ == 0)
{
lean_dec(v_key_543_);
lean_dec_ref(v_inst_541_);
lean_dec_ref(v_inst_540_);
lean_inc(v_d_544_);
return v_d_544_;
}
else
{
lean_object* v_entries_546_; lean_object* v_indexes_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v_entry_550_; lean_object* v___x_551_; lean_object* v_snd_552_; 
v_entries_546_ = lean_ctor_get(v_map_542_, 0);
v_indexes_547_ = lean_ctor_get(v_map_542_, 1);
v___x_548_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_540_, v_inst_541_, v_indexes_547_, v_key_543_);
v___x_549_ = lean_unsigned_to_nat(0u);
v_entry_550_ = lean_array_fget(v___x_548_, v___x_549_);
lean_dec(v___x_548_);
v___x_551_ = lean_array_fget_borrowed(v_entries_546_, v_entry_550_);
lean_dec(v_entry_550_);
v_snd_552_ = lean_ctor_get(v___x_551_, 1);
lean_inc(v_snd_552_);
return v_snd_552_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD___redArg___boxed(lean_object* v_inst_553_, lean_object* v_inst_554_, lean_object* v_map_555_, lean_object* v_key_556_, lean_object* v_d_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Std_Internal_IndexMultiMap_getD___redArg(v_inst_553_, v_inst_554_, v_map_555_, v_key_556_, v_d_557_);
lean_dec(v_d_557_);
lean_dec_ref(v_map_555_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD(lean_object* v_00_u03b1_559_, lean_object* v_00_u03b2_560_, lean_object* v_inst_561_, lean_object* v_inst_562_, lean_object* v_map_563_, lean_object* v_key_564_, lean_object* v_d_565_){
_start:
{
uint8_t v___x_566_; 
lean_inc(v_key_564_);
lean_inc_ref(v_inst_562_);
lean_inc_ref(v_inst_561_);
v___x_566_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_561_, v_inst_562_, v_key_564_, v_map_563_);
if (v___x_566_ == 0)
{
lean_dec(v_key_564_);
lean_dec_ref(v_inst_562_);
lean_dec_ref(v_inst_561_);
lean_inc(v_d_565_);
return v_d_565_;
}
else
{
lean_object* v_entries_567_; lean_object* v_indexes_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v_entry_571_; lean_object* v___x_572_; lean_object* v_snd_573_; 
v_entries_567_ = lean_ctor_get(v_map_563_, 0);
v_indexes_568_ = lean_ctor_get(v_map_563_, 1);
v___x_569_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_561_, v_inst_562_, v_indexes_568_, v_key_564_);
v___x_570_ = lean_unsigned_to_nat(0u);
v_entry_571_ = lean_array_fget(v___x_569_, v___x_570_);
lean_dec(v___x_569_);
v___x_572_ = lean_array_fget_borrowed(v_entries_567_, v_entry_571_);
lean_dec(v_entry_571_);
v_snd_573_ = lean_ctor_get(v___x_572_, 1);
lean_inc(v_snd_573_);
return v_snd_573_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD___boxed(lean_object* v_00_u03b1_574_, lean_object* v_00_u03b2_575_, lean_object* v_inst_576_, lean_object* v_inst_577_, lean_object* v_map_578_, lean_object* v_key_579_, lean_object* v_d_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Std_Internal_IndexMultiMap_getD(v_00_u03b1_574_, v_00_u03b2_575_, v_inst_576_, v_inst_577_, v_map_578_, v_key_579_, v_d_580_);
lean_dec(v_d_580_);
lean_dec_ref(v_map_578_);
return v_res_581_;
}
}
static lean_object* _init_l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3(void){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_585_ = ((lean_object*)(l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__2));
v___x_586_ = lean_unsigned_to_nat(14u);
v___x_587_ = lean_unsigned_to_nat(22u);
v___x_588_ = ((lean_object*)(l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__1));
v___x_589_ = ((lean_object*)(l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__0));
v___x_590_ = l_mkPanicMessageWithDecl(v___x_589_, v___x_588_, v___x_587_, v___x_586_, v___x_585_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg(lean_object* v_inst_591_, lean_object* v_inst_592_, lean_object* v_inst_593_, lean_object* v_map_594_, lean_object* v_key_595_){
_start:
{
uint8_t v___x_596_; 
lean_inc(v_key_595_);
lean_inc_ref(v_inst_592_);
lean_inc_ref(v_inst_591_);
v___x_596_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_591_, v_inst_592_, v_key_595_, v_map_594_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; lean_object* v___x_598_; 
lean_dec(v_key_595_);
lean_dec_ref(v_inst_592_);
lean_dec_ref(v_inst_591_);
v___x_597_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3, &l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3_once, _init_l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3);
v___x_598_ = l_panic___redArg(v_inst_593_, v___x_597_);
return v___x_598_;
}
else
{
lean_object* v_entries_599_; lean_object* v_indexes_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v_entry_603_; lean_object* v___x_604_; lean_object* v_snd_605_; 
v_entries_599_ = lean_ctor_get(v_map_594_, 0);
v_indexes_600_ = lean_ctor_get(v_map_594_, 1);
v___x_601_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_591_, v_inst_592_, v_indexes_600_, v_key_595_);
v___x_602_ = lean_unsigned_to_nat(0u);
v_entry_603_ = lean_array_fget(v___x_601_, v___x_602_);
lean_dec(v___x_601_);
v___x_604_ = lean_array_fget_borrowed(v_entries_599_, v_entry_603_);
lean_dec(v_entry_603_);
v_snd_605_ = lean_ctor_get(v___x_604_, 1);
lean_inc(v_snd_605_);
return v_snd_605_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg___boxed(lean_object* v_inst_606_, lean_object* v_inst_607_, lean_object* v_inst_608_, lean_object* v_map_609_, lean_object* v_key_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Std_Internal_IndexMultiMap_get_x21___redArg(v_inst_606_, v_inst_607_, v_inst_608_, v_map_609_, v_key_610_);
lean_dec_ref(v_map_609_);
lean_dec(v_inst_608_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21(lean_object* v_00_u03b1_612_, lean_object* v_00_u03b2_613_, lean_object* v_inst_614_, lean_object* v_inst_615_, lean_object* v_inst_616_, lean_object* v_map_617_, lean_object* v_key_618_){
_start:
{
uint8_t v___x_619_; 
lean_inc(v_key_618_);
lean_inc_ref(v_inst_615_);
lean_inc_ref(v_inst_614_);
v___x_619_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_614_, v_inst_615_, v_key_618_, v_map_617_);
if (v___x_619_ == 0)
{
lean_object* v___x_620_; lean_object* v___x_621_; 
lean_dec(v_key_618_);
lean_dec_ref(v_inst_615_);
lean_dec_ref(v_inst_614_);
v___x_620_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3, &l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3_once, _init_l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3);
v___x_621_ = l_panic___redArg(v_inst_616_, v___x_620_);
return v___x_621_;
}
else
{
lean_object* v_entries_622_; lean_object* v_indexes_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v_entry_626_; lean_object* v___x_627_; lean_object* v_snd_628_; 
v_entries_622_ = lean_ctor_get(v_map_617_, 0);
v_indexes_623_ = lean_ctor_get(v_map_617_, 1);
v___x_624_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_614_, v_inst_615_, v_indexes_623_, v_key_618_);
v___x_625_ = lean_unsigned_to_nat(0u);
v_entry_626_ = lean_array_fget(v___x_624_, v___x_625_);
lean_dec(v___x_624_);
v___x_627_ = lean_array_fget_borrowed(v_entries_622_, v_entry_626_);
lean_dec(v_entry_626_);
v_snd_628_ = lean_ctor_get(v___x_627_, 1);
lean_inc(v_snd_628_);
return v_snd_628_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21___boxed(lean_object* v_00_u03b1_629_, lean_object* v_00_u03b2_630_, lean_object* v_inst_631_, lean_object* v_inst_632_, lean_object* v_inst_633_, lean_object* v_map_634_, lean_object* v_key_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Std_Internal_IndexMultiMap_get_x21(v_00_u03b1_629_, v_00_u03b2_630_, v_inst_631_, v_inst_632_, v_inst_633_, v_map_634_, v_key_635_);
lean_dec_ref(v_map_634_);
lean_dec(v_inst_633_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insert___redArg___lam__0(lean_object* v_i_637_, lean_object* v_x_638_){
_start:
{
if (lean_obj_tag(v_x_638_) == 0)
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_639_ = lean_unsigned_to_nat(1u);
v___x_640_ = lean_mk_empty_array_with_capacity(v___x_639_);
v___x_641_ = lean_array_push(v___x_640_, v_i_637_);
v___x_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
return v___x_642_;
}
else
{
lean_object* v_val_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_651_; 
v_val_643_ = lean_ctor_get(v_x_638_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v_x_638_);
if (v_isSharedCheck_651_ == 0)
{
v___x_645_ = v_x_638_;
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_val_643_);
lean_dec(v_x_638_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_647_; lean_object* v___x_649_; 
v___x_647_ = lean_array_push(v_val_643_, v_i_637_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v___x_647_);
v___x_649_ = v___x_645_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v___x_647_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insert___redArg(lean_object* v_inst_652_, lean_object* v_inst_653_, lean_object* v_map_654_, lean_object* v_key_655_, lean_object* v_value_656_){
_start:
{
lean_object* v_entries_657_; lean_object* v_indexes_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_670_; 
v_entries_657_ = lean_ctor_get(v_map_654_, 0);
v_indexes_658_ = lean_ctor_get(v_map_654_, 1);
v_isSharedCheck_670_ = !lean_is_exclusive(v_map_654_);
if (v_isSharedCheck_670_ == 0)
{
v___x_660_ = v_map_654_;
v_isShared_661_ = v_isSharedCheck_670_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_indexes_658_);
lean_inc(v_entries_657_);
lean_dec(v_map_654_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_670_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v_i_662_; lean_object* v_f_663_; lean_object* v___x_664_; lean_object* v_entries_665_; lean_object* v_indexes_666_; lean_object* v___x_668_; 
v_i_662_ = lean_array_get_size(v_entries_657_);
v_f_663_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_663_, 0, v_i_662_);
lean_inc(v_key_655_);
v___x_664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_664_, 0, v_key_655_);
lean_ctor_set(v___x_664_, 1, v_value_656_);
v_entries_665_ = lean_array_push(v_entries_657_, v___x_664_);
v_indexes_666_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_652_, v_inst_653_, v_indexes_658_, v_key_655_, v_f_663_);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 1, v_indexes_666_);
lean_ctor_set(v___x_660_, 0, v_entries_665_);
v___x_668_ = v___x_660_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_entries_665_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_indexes_666_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insert(lean_object* v_00_u03b1_671_, lean_object* v_00_u03b2_672_, lean_object* v_inst_673_, lean_object* v_inst_674_, lean_object* v_inst_675_, lean_object* v_inst_676_, lean_object* v_map_677_, lean_object* v_key_678_, lean_object* v_value_679_){
_start:
{
lean_object* v_entries_680_; lean_object* v_indexes_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_693_; 
v_entries_680_ = lean_ctor_get(v_map_677_, 0);
v_indexes_681_ = lean_ctor_get(v_map_677_, 1);
v_isSharedCheck_693_ = !lean_is_exclusive(v_map_677_);
if (v_isSharedCheck_693_ == 0)
{
v___x_683_ = v_map_677_;
v_isShared_684_ = v_isSharedCheck_693_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_indexes_681_);
lean_inc(v_entries_680_);
lean_dec(v_map_677_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_693_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v_i_685_; lean_object* v_f_686_; lean_object* v___x_687_; lean_object* v_entries_688_; lean_object* v_indexes_689_; lean_object* v___x_691_; 
v_i_685_ = lean_array_get_size(v_entries_680_);
v_f_686_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_686_, 0, v_i_685_);
lean_inc(v_key_678_);
v___x_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_687_, 0, v_key_678_);
lean_ctor_set(v___x_687_, 1, v_value_679_);
v_entries_688_ = lean_array_push(v_entries_680_, v___x_687_);
v_indexes_689_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_673_, v_inst_674_, v_indexes_681_, v_key_678_, v_f_686_);
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 1, v_indexes_689_);
lean_ctor_set(v___x_683_, 0, v_entries_688_);
v___x_691_ = v___x_683_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_entries_688_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_indexes_689_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insertMany___redArg___lam__1(lean_object* v_key_694_, lean_object* v_inst_695_, lean_object* v_inst_696_, lean_object* v_x1_697_, lean_object* v_x2_698_){
_start:
{
lean_object* v_entries_699_; lean_object* v_indexes_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_712_; 
v_entries_699_ = lean_ctor_get(v_x1_697_, 0);
v_indexes_700_ = lean_ctor_get(v_x1_697_, 1);
v_isSharedCheck_712_ = !lean_is_exclusive(v_x1_697_);
if (v_isSharedCheck_712_ == 0)
{
v___x_702_ = v_x1_697_;
v_isShared_703_ = v_isSharedCheck_712_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_indexes_700_);
lean_inc(v_entries_699_);
lean_dec(v_x1_697_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_712_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v_i_704_; lean_object* v_f_705_; lean_object* v___x_706_; lean_object* v_entries_707_; lean_object* v_indexes_708_; lean_object* v___x_710_; 
v_i_704_ = lean_array_get_size(v_entries_699_);
v_f_705_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_705_, 0, v_i_704_);
lean_inc(v_key_694_);
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v_key_694_);
lean_ctor_set(v___x_706_, 1, v_x2_698_);
v_entries_707_ = lean_array_push(v_entries_699_, v___x_706_);
v_indexes_708_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_695_, v_inst_696_, v_indexes_700_, v_key_694_, v_f_705_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 1, v_indexes_708_);
lean_ctor_set(v___x_702_, 0, v_entries_707_);
v___x_710_ = v___x_702_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_entries_707_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v_indexes_708_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insertMany___redArg(lean_object* v_inst_713_, lean_object* v_inst_714_, lean_object* v_map_715_, lean_object* v_key_716_, lean_object* v_values_717_){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_718_ = lean_unsigned_to_nat(0u);
v___x_719_ = lean_array_get_size(v_values_717_);
v___x_720_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_721_ = lean_nat_dec_lt(v___x_718_, v___x_719_);
if (v___x_721_ == 0)
{
lean_dec_ref(v_values_717_);
lean_dec(v_key_716_);
lean_dec_ref(v_inst_714_);
lean_dec_ref(v_inst_713_);
return v_map_715_;
}
else
{
lean_object* v___f_722_; uint8_t v___x_723_; 
v___f_722_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insertMany___redArg___lam__1), 5, 3);
lean_closure_set(v___f_722_, 0, v_key_716_);
lean_closure_set(v___f_722_, 1, v_inst_713_);
lean_closure_set(v___f_722_, 2, v_inst_714_);
v___x_723_ = lean_nat_dec_le(v___x_719_, v___x_719_);
if (v___x_723_ == 0)
{
if (v___x_721_ == 0)
{
lean_dec_ref(v___f_722_);
lean_dec_ref(v_values_717_);
return v_map_715_;
}
else
{
size_t v___x_724_; size_t v___x_725_; lean_object* v___x_726_; 
v___x_724_ = ((size_t)0ULL);
v___x_725_ = lean_usize_of_nat(v___x_719_);
v___x_726_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_720_, v___f_722_, v_values_717_, v___x_724_, v___x_725_, v_map_715_);
return v___x_726_;
}
}
else
{
size_t v___x_727_; size_t v___x_728_; lean_object* v___x_729_; 
v___x_727_ = ((size_t)0ULL);
v___x_728_ = lean_usize_of_nat(v___x_719_);
v___x_729_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_720_, v___f_722_, v_values_717_, v___x_727_, v___x_728_, v_map_715_);
return v___x_729_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insertMany(lean_object* v_00_u03b1_730_, lean_object* v_00_u03b2_731_, lean_object* v_inst_732_, lean_object* v_inst_733_, lean_object* v_inst_734_, lean_object* v_inst_735_, lean_object* v_map_736_, lean_object* v_key_737_, lean_object* v_values_738_){
_start:
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_739_ = lean_unsigned_to_nat(0u);
v___x_740_ = lean_array_get_size(v_values_738_);
v___x_741_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_742_ = lean_nat_dec_lt(v___x_739_, v___x_740_);
if (v___x_742_ == 0)
{
lean_dec_ref(v_values_738_);
lean_dec(v_key_737_);
lean_dec_ref(v_inst_733_);
lean_dec_ref(v_inst_732_);
return v_map_736_;
}
else
{
lean_object* v___f_743_; uint8_t v___x_744_; 
v___f_743_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insertMany___redArg___lam__1), 5, 3);
lean_closure_set(v___f_743_, 0, v_key_737_);
lean_closure_set(v___f_743_, 1, v_inst_732_);
lean_closure_set(v___f_743_, 2, v_inst_733_);
v___x_744_ = lean_nat_dec_le(v___x_740_, v___x_740_);
if (v___x_744_ == 0)
{
if (v___x_742_ == 0)
{
lean_dec_ref(v___f_743_);
lean_dec_ref(v_values_738_);
return v_map_736_;
}
else
{
size_t v___x_745_; size_t v___x_746_; lean_object* v___x_747_; 
v___x_745_ = ((size_t)0ULL);
v___x_746_ = lean_usize_of_nat(v___x_740_);
v___x_747_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_741_, v___f_743_, v_values_738_, v___x_745_, v___x_746_, v_map_736_);
return v___x_747_;
}
}
else
{
size_t v___x_748_; size_t v___x_749_; lean_object* v___x_750_; 
v___x_748_ = ((size_t)0ULL);
v___x_749_ = lean_usize_of_nat(v___x_740_);
v___x_750_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_741_, v___f_743_, v_values_738_, v___x_748_, v___x_749_, v_map_736_);
return v___x_750_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty(lean_object* v_00_u03b1_751_, lean_object* v_00_u03b2_752_, lean_object* v_inst_753_, lean_object* v_inst_754_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = lean_obj_once(&l_Std_Internal_instInhabitedIndexMultiMap___closed__3, &l_Std_Internal_instInhabitedIndexMultiMap___closed__3_once, _init_l_Std_Internal_instInhabitedIndexMultiMap___closed__3);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___boxed(lean_object* v_00_u03b1_756_, lean_object* v_00_u03b2_757_, lean_object* v_inst_758_, lean_object* v_inst_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = l_Std_Internal_IndexMultiMap_empty(v_00_u03b1_756_, v_00_u03b2_757_, v_inst_758_, v_inst_759_);
lean_dec_ref(v_inst_759_);
lean_dec_ref(v_inst_758_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList___redArg___lam__1(lean_object* v_inst_761_, lean_object* v_inst_762_, lean_object* v_acc_763_, lean_object* v_x_764_){
_start:
{
lean_object* v_fst_765_; lean_object* v_entries_766_; lean_object* v_indexes_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_778_; 
v_fst_765_ = lean_ctor_get(v_x_764_, 0);
lean_inc(v_fst_765_);
v_entries_766_ = lean_ctor_get(v_acc_763_, 0);
v_indexes_767_ = lean_ctor_get(v_acc_763_, 1);
v_isSharedCheck_778_ = !lean_is_exclusive(v_acc_763_);
if (v_isSharedCheck_778_ == 0)
{
v___x_769_ = v_acc_763_;
v_isShared_770_ = v_isSharedCheck_778_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_indexes_767_);
lean_inc(v_entries_766_);
lean_dec(v_acc_763_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_778_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v_i_771_; lean_object* v_f_772_; lean_object* v_entries_773_; lean_object* v_indexes_774_; lean_object* v___x_776_; 
v_i_771_ = lean_array_get_size(v_entries_766_);
v_f_772_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_772_, 0, v_i_771_);
v_entries_773_ = lean_array_push(v_entries_766_, v_x_764_);
v_indexes_774_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_761_, v_inst_762_, v_indexes_767_, v_fst_765_, v_f_772_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 1, v_indexes_774_);
lean_ctor_set(v___x_769_, 0, v_entries_773_);
v___x_776_ = v___x_769_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_entries_773_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v_indexes_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList___redArg(lean_object* v_inst_779_, lean_object* v_inst_780_, lean_object* v_pairs_781_){
_start:
{
lean_object* v___f_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
lean_inc_ref(v_inst_780_);
lean_inc_ref(v_inst_779_);
v___f_782_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_ofList___redArg___lam__1), 4, 2);
lean_closure_set(v___f_782_, 0, v_inst_779_);
lean_closure_set(v___f_782_, 1, v_inst_780_);
v___x_783_ = l_Std_Internal_IndexMultiMap_empty(lean_box(0), lean_box(0), v_inst_779_, v_inst_780_);
lean_dec_ref(v_inst_780_);
lean_dec_ref(v_inst_779_);
v___x_784_ = l_List_foldl___redArg(v___f_782_, v___x_783_, v_pairs_781_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList(lean_object* v_00_u03b1_785_, lean_object* v_00_u03b2_786_, lean_object* v_inst_787_, lean_object* v_inst_788_, lean_object* v_inst_789_, lean_object* v_inst_790_, lean_object* v_pairs_791_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Std_Internal_IndexMultiMap_ofList___redArg(v_inst_787_, v_inst_788_, v_pairs_791_);
return v___x_792_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_contains___redArg(lean_object* v_inst_793_, lean_object* v_inst_794_, lean_object* v_map_795_, lean_object* v_key_796_){
_start:
{
lean_object* v_indexes_797_; uint8_t v___x_798_; 
v_indexes_797_ = lean_ctor_get(v_map_795_, 1);
v___x_798_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_793_, v_inst_794_, v_indexes_797_, v_key_796_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_contains___redArg___boxed(lean_object* v_inst_799_, lean_object* v_inst_800_, lean_object* v_map_801_, lean_object* v_key_802_){
_start:
{
uint8_t v_res_803_; lean_object* v_r_804_; 
v_res_803_ = l_Std_Internal_IndexMultiMap_contains___redArg(v_inst_799_, v_inst_800_, v_map_801_, v_key_802_);
lean_dec_ref(v_map_801_);
v_r_804_ = lean_box(v_res_803_);
return v_r_804_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_contains(lean_object* v_00_u03b1_805_, lean_object* v_00_u03b2_806_, lean_object* v_inst_807_, lean_object* v_inst_808_, lean_object* v_map_809_, lean_object* v_key_810_){
_start:
{
lean_object* v_indexes_811_; uint8_t v___x_812_; 
v_indexes_811_ = lean_ctor_get(v_map_809_, 1);
v___x_812_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_807_, v_inst_808_, v_indexes_811_, v_key_810_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_contains___boxed(lean_object* v_00_u03b1_813_, lean_object* v_00_u03b2_814_, lean_object* v_inst_815_, lean_object* v_inst_816_, lean_object* v_map_817_, lean_object* v_key_818_){
_start:
{
uint8_t v_res_819_; lean_object* v_r_820_; 
v_res_819_ = l_Std_Internal_IndexMultiMap_contains(v_00_u03b1_813_, v_00_u03b2_814_, v_inst_815_, v_inst_816_, v_map_817_, v_key_818_);
lean_dec_ref(v_map_817_);
v_r_820_ = lean_box(v_res_819_);
return v_r_820_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_update___redArg___lam__1(lean_object* v_inst_821_, lean_object* v_inst_822_, lean_object* v_key_823_, lean_object* v_f_824_, lean_object* v_x1_825_, lean_object* v_x2_826_){
_start:
{
lean_object* v_fst_827_; lean_object* v_snd_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_853_; 
v_fst_827_ = lean_ctor_get(v_x2_826_, 0);
v_snd_828_ = lean_ctor_get(v_x2_826_, 1);
v_isSharedCheck_853_ = !lean_is_exclusive(v_x2_826_);
if (v_isSharedCheck_853_ == 0)
{
v___x_830_ = v_x2_826_;
v_isShared_831_ = v_isSharedCheck_853_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_snd_828_);
lean_inc(v_fst_827_);
lean_dec(v_x2_826_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_853_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___y_833_; lean_object* v___x_850_; uint8_t v___x_851_; 
lean_inc_ref(v_inst_821_);
lean_inc(v_fst_827_);
v___x_850_ = lean_apply_2(v_inst_821_, v_fst_827_, v_key_823_);
v___x_851_ = lean_unbox(v___x_850_);
if (v___x_851_ == 0)
{
lean_dec(v_f_824_);
v___y_833_ = v_snd_828_;
goto v___jp_832_;
}
else
{
lean_object* v___x_852_; 
v___x_852_ = lean_apply_1(v_f_824_, v_snd_828_);
v___y_833_ = v___x_852_;
goto v___jp_832_;
}
v___jp_832_:
{
lean_object* v_entries_834_; lean_object* v_indexes_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_849_; 
v_entries_834_ = lean_ctor_get(v_x1_825_, 0);
v_indexes_835_ = lean_ctor_get(v_x1_825_, 1);
v_isSharedCheck_849_ = !lean_is_exclusive(v_x1_825_);
if (v_isSharedCheck_849_ == 0)
{
v___x_837_ = v_x1_825_;
v_isShared_838_ = v_isSharedCheck_849_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_indexes_835_);
lean_inc(v_entries_834_);
lean_dec(v_x1_825_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_849_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v_i_839_; lean_object* v_f_840_; lean_object* v___x_842_; 
v_i_839_ = lean_array_get_size(v_entries_834_);
v_f_840_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_840_, 0, v_i_839_);
lean_inc(v_fst_827_);
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 1, v___y_833_);
v___x_842_ = v___x_830_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_fst_827_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v___y_833_);
v___x_842_ = v_reuseFailAlloc_848_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v_entries_843_; lean_object* v_indexes_844_; lean_object* v___x_846_; 
v_entries_843_ = lean_array_push(v_entries_834_, v___x_842_);
v_indexes_844_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_821_, v_inst_822_, v_indexes_835_, v_fst_827_, v_f_840_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 1, v_indexes_844_);
lean_ctor_set(v___x_837_, 0, v_entries_843_);
v___x_846_ = v___x_837_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_entries_843_);
lean_ctor_set(v_reuseFailAlloc_847_, 1, v_indexes_844_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_update___redArg(lean_object* v_inst_854_, lean_object* v_inst_855_, lean_object* v_map_856_, lean_object* v_key_857_, lean_object* v_f_858_){
_start:
{
uint8_t v___x_859_; 
lean_inc(v_key_857_);
lean_inc_ref(v_inst_855_);
lean_inc_ref(v_inst_854_);
v___x_859_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_854_, v_inst_855_, v_key_857_, v_map_856_);
if (v___x_859_ == 0)
{
lean_dec(v_f_858_);
lean_dec(v_key_857_);
lean_dec_ref(v_inst_855_);
lean_dec_ref(v_inst_854_);
return v_map_856_;
}
else
{
lean_object* v_entries_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; uint8_t v___x_865_; 
v_entries_860_ = lean_ctor_get(v_map_856_, 0);
lean_inc_ref(v_entries_860_);
lean_dec_ref(v_map_856_);
v___x_861_ = l_Std_Internal_IndexMultiMap_empty(lean_box(0), lean_box(0), v_inst_854_, v_inst_855_);
v___x_862_ = lean_unsigned_to_nat(0u);
v___x_863_ = lean_array_get_size(v_entries_860_);
v___x_864_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_865_ = lean_nat_dec_lt(v___x_862_, v___x_863_);
if (v___x_865_ == 0)
{
lean_dec_ref(v_entries_860_);
lean_dec(v_f_858_);
lean_dec(v_key_857_);
lean_dec_ref(v_inst_855_);
lean_dec_ref(v_inst_854_);
return v___x_861_;
}
else
{
lean_object* v___f_866_; uint8_t v___x_867_; 
v___f_866_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_update___redArg___lam__1), 6, 4);
lean_closure_set(v___f_866_, 0, v_inst_854_);
lean_closure_set(v___f_866_, 1, v_inst_855_);
lean_closure_set(v___f_866_, 2, v_key_857_);
lean_closure_set(v___f_866_, 3, v_f_858_);
v___x_867_ = lean_nat_dec_le(v___x_863_, v___x_863_);
if (v___x_867_ == 0)
{
if (v___x_865_ == 0)
{
lean_dec_ref(v___f_866_);
lean_dec_ref(v_entries_860_);
return v___x_861_;
}
else
{
size_t v___x_868_; size_t v___x_869_; lean_object* v___x_870_; 
v___x_868_ = ((size_t)0ULL);
v___x_869_ = lean_usize_of_nat(v___x_863_);
v___x_870_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_864_, v___f_866_, v_entries_860_, v___x_868_, v___x_869_, v___x_861_);
return v___x_870_;
}
}
else
{
size_t v___x_871_; size_t v___x_872_; lean_object* v___x_873_; 
v___x_871_ = ((size_t)0ULL);
v___x_872_ = lean_usize_of_nat(v___x_863_);
v___x_873_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_864_, v___f_866_, v_entries_860_, v___x_871_, v___x_872_, v___x_861_);
return v___x_873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_update(lean_object* v_00_u03b1_874_, lean_object* v_00_u03b2_875_, lean_object* v_inst_876_, lean_object* v_inst_877_, lean_object* v_inst_878_, lean_object* v_inst_879_, lean_object* v_map_880_, lean_object* v_key_881_, lean_object* v_f_882_){
_start:
{
uint8_t v___x_883_; 
lean_inc(v_key_881_);
lean_inc_ref(v_inst_877_);
lean_inc_ref(v_inst_876_);
v___x_883_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_876_, v_inst_877_, v_key_881_, v_map_880_);
if (v___x_883_ == 0)
{
lean_dec(v_f_882_);
lean_dec(v_key_881_);
lean_dec_ref(v_inst_877_);
lean_dec_ref(v_inst_876_);
return v_map_880_;
}
else
{
lean_object* v_entries_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; uint8_t v___x_889_; 
v_entries_884_ = lean_ctor_get(v_map_880_, 0);
lean_inc_ref(v_entries_884_);
lean_dec_ref(v_map_880_);
v___x_885_ = l_Std_Internal_IndexMultiMap_empty(lean_box(0), lean_box(0), v_inst_876_, v_inst_877_);
v___x_886_ = lean_unsigned_to_nat(0u);
v___x_887_ = lean_array_get_size(v_entries_884_);
v___x_888_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_889_ = lean_nat_dec_lt(v___x_886_, v___x_887_);
if (v___x_889_ == 0)
{
lean_dec_ref(v_entries_884_);
lean_dec(v_f_882_);
lean_dec(v_key_881_);
lean_dec_ref(v_inst_877_);
lean_dec_ref(v_inst_876_);
return v___x_885_;
}
else
{
lean_object* v___f_890_; uint8_t v___x_891_; 
v___f_890_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_update___redArg___lam__1), 6, 4);
lean_closure_set(v___f_890_, 0, v_inst_876_);
lean_closure_set(v___f_890_, 1, v_inst_877_);
lean_closure_set(v___f_890_, 2, v_key_881_);
lean_closure_set(v___f_890_, 3, v_f_882_);
v___x_891_ = lean_nat_dec_le(v___x_887_, v___x_887_);
if (v___x_891_ == 0)
{
if (v___x_889_ == 0)
{
lean_dec_ref(v___f_890_);
lean_dec_ref(v_entries_884_);
return v___x_885_;
}
else
{
size_t v___x_892_; size_t v___x_893_; lean_object* v___x_894_; 
v___x_892_ = ((size_t)0ULL);
v___x_893_ = lean_usize_of_nat(v___x_887_);
v___x_894_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_888_, v___f_890_, v_entries_884_, v___x_892_, v___x_893_, v___x_885_);
return v___x_894_;
}
}
else
{
size_t v___x_895_; size_t v___x_896_; lean_object* v___x_897_; 
v___x_895_ = ((size_t)0ULL);
v___x_896_ = lean_usize_of_nat(v___x_887_);
v___x_897_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_888_, v___f_890_, v_entries_884_, v___x_895_, v___x_896_, v___x_885_);
return v___x_897_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_replaceLast___redArg(lean_object* v_inst_898_, lean_object* v_inst_899_, lean_object* v_map_900_, lean_object* v_key_901_, lean_object* v_value_902_){
_start:
{
uint8_t v___x_903_; 
lean_inc(v_key_901_);
lean_inc_ref(v_inst_899_);
lean_inc_ref(v_inst_898_);
v___x_903_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_898_, v_inst_899_, v_key_901_, v_map_900_);
if (v___x_903_ == 0)
{
lean_dec(v_value_902_);
lean_dec(v_key_901_);
lean_dec_ref(v_inst_899_);
lean_dec_ref(v_inst_898_);
return v_map_900_;
}
else
{
lean_object* v_entries_904_; lean_object* v_indexes_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_919_; 
v_entries_904_ = lean_ctor_get(v_map_900_, 0);
v_indexes_905_ = lean_ctor_get(v_map_900_, 1);
v_isSharedCheck_919_ = !lean_is_exclusive(v_map_900_);
if (v_isSharedCheck_919_ == 0)
{
v___x_907_ = v_map_900_;
v_isShared_908_ = v_isSharedCheck_919_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_indexes_905_);
lean_inc(v_entries_904_);
lean_dec(v_map_900_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_919_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v_idxs_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v_lastIdx_913_; lean_object* v___x_914_; lean_object* v_entries_915_; lean_object* v___x_917_; 
lean_inc(v_key_901_);
v_idxs_909_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_898_, v_inst_899_, v_indexes_905_, v_key_901_);
v___x_910_ = lean_array_get_size(v_idxs_909_);
v___x_911_ = lean_unsigned_to_nat(1u);
v___x_912_ = lean_nat_sub(v___x_910_, v___x_911_);
v_lastIdx_913_ = lean_array_fget(v_idxs_909_, v___x_912_);
lean_dec(v___x_912_);
lean_dec(v_idxs_909_);
v___x_914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_914_, 0, v_key_901_);
lean_ctor_set(v___x_914_, 1, v_value_902_);
v_entries_915_ = lean_array_fset(v_entries_904_, v_lastIdx_913_, v___x_914_);
lean_dec(v_lastIdx_913_);
if (v_isShared_908_ == 0)
{
lean_ctor_set(v___x_907_, 0, v_entries_915_);
v___x_917_ = v___x_907_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_entries_915_);
lean_ctor_set(v_reuseFailAlloc_918_, 1, v_indexes_905_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_replaceLast(lean_object* v_00_u03b1_920_, lean_object* v_00_u03b2_921_, lean_object* v_inst_922_, lean_object* v_inst_923_, lean_object* v_map_924_, lean_object* v_key_925_, lean_object* v_value_926_){
_start:
{
uint8_t v___x_927_; 
lean_inc(v_key_925_);
lean_inc_ref(v_inst_923_);
lean_inc_ref(v_inst_922_);
v___x_927_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_922_, v_inst_923_, v_key_925_, v_map_924_);
if (v___x_927_ == 0)
{
lean_dec(v_value_926_);
lean_dec(v_key_925_);
lean_dec_ref(v_inst_923_);
lean_dec_ref(v_inst_922_);
return v_map_924_;
}
else
{
lean_object* v_entries_928_; lean_object* v_indexes_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_943_; 
v_entries_928_ = lean_ctor_get(v_map_924_, 0);
v_indexes_929_ = lean_ctor_get(v_map_924_, 1);
v_isSharedCheck_943_ = !lean_is_exclusive(v_map_924_);
if (v_isSharedCheck_943_ == 0)
{
v___x_931_ = v_map_924_;
v_isShared_932_ = v_isSharedCheck_943_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_indexes_929_);
lean_inc(v_entries_928_);
lean_dec(v_map_924_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_943_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v_idxs_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v_lastIdx_937_; lean_object* v___x_938_; lean_object* v_entries_939_; lean_object* v___x_941_; 
lean_inc(v_key_925_);
v_idxs_933_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_922_, v_inst_923_, v_indexes_929_, v_key_925_);
v___x_934_ = lean_array_get_size(v_idxs_933_);
v___x_935_ = lean_unsigned_to_nat(1u);
v___x_936_ = lean_nat_sub(v___x_934_, v___x_935_);
v_lastIdx_937_ = lean_array_fget(v_idxs_933_, v___x_936_);
lean_dec(v___x_936_);
lean_dec(v_idxs_933_);
v___x_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_938_, 0, v_key_925_);
lean_ctor_set(v___x_938_, 1, v_value_926_);
v_entries_939_ = lean_array_fset(v_entries_928_, v_lastIdx_937_, v___x_938_);
lean_dec(v_lastIdx_937_);
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 0, v_entries_939_);
v___x_941_ = v___x_931_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_entries_939_);
lean_ctor_set(v_reuseFailAlloc_942_, 1, v_indexes_929_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase___redArg___lam__1(lean_object* v_inst_944_, lean_object* v_inst_945_, lean_object* v_x1_946_, lean_object* v_x2_947_){
_start:
{
lean_object* v_fst_948_; lean_object* v_entries_949_; lean_object* v_indexes_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_961_; 
v_fst_948_ = lean_ctor_get(v_x2_947_, 0);
lean_inc(v_fst_948_);
v_entries_949_ = lean_ctor_get(v_x1_946_, 0);
v_indexes_950_ = lean_ctor_get(v_x1_946_, 1);
v_isSharedCheck_961_ = !lean_is_exclusive(v_x1_946_);
if (v_isSharedCheck_961_ == 0)
{
v___x_952_ = v_x1_946_;
v_isShared_953_ = v_isSharedCheck_961_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_indexes_950_);
lean_inc(v_entries_949_);
lean_dec(v_x1_946_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_961_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v_i_954_; lean_object* v_f_955_; lean_object* v_entries_956_; lean_object* v_indexes_957_; lean_object* v___x_959_; 
v_i_954_ = lean_array_get_size(v_entries_949_);
v_f_955_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_955_, 0, v_i_954_);
v_entries_956_ = lean_array_push(v_entries_949_, v_x2_947_);
v_indexes_957_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_944_, v_inst_945_, v_indexes_950_, v_fst_948_, v_f_955_);
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 1, v_indexes_957_);
lean_ctor_set(v___x_952_, 0, v_entries_956_);
v___x_959_ = v___x_952_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_entries_956_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v_indexes_957_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase___redArg___lam__0(lean_object* v_inst_962_, lean_object* v_key_963_, lean_object* v_x1_964_, lean_object* v_x2_965_){
_start:
{
lean_object* v_fst_966_; lean_object* v___x_967_; uint8_t v___x_968_; 
v_fst_966_ = lean_ctor_get(v_x2_965_, 0);
lean_inc(v_fst_966_);
v___x_967_ = lean_apply_2(v_inst_962_, v_fst_966_, v_key_963_);
v___x_968_ = lean_unbox(v___x_967_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; 
v___x_969_ = lean_array_push(v_x1_964_, v_x2_965_);
return v___x_969_;
}
else
{
lean_dec_ref(v_x2_965_);
return v_x1_964_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase___redArg(lean_object* v_inst_970_, lean_object* v_inst_971_, lean_object* v_map_972_, lean_object* v_key_973_){
_start:
{
uint8_t v___x_974_; 
lean_inc(v_key_973_);
lean_inc_ref(v_inst_971_);
lean_inc_ref(v_inst_970_);
v___x_974_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_970_, v_inst_971_, v_key_973_, v_map_972_);
if (v___x_974_ == 0)
{
lean_dec(v_key_973_);
lean_dec_ref(v_inst_971_);
lean_dec_ref(v_inst_970_);
return v_map_972_;
}
else
{
lean_object* v_entries_975_; lean_object* v___f_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___y_980_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; uint8_t v___x_994_; 
v_entries_975_ = lean_ctor_get(v_map_972_, 0);
lean_inc_ref(v_entries_975_);
lean_dec_ref(v_map_972_);
lean_inc_ref(v_inst_971_);
lean_inc_ref(v_inst_970_);
v___f_976_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_erase___redArg___lam__1), 4, 2);
lean_closure_set(v___f_976_, 0, v_inst_970_);
lean_closure_set(v___f_976_, 1, v_inst_971_);
v___x_977_ = l_Std_Internal_IndexMultiMap_empty(lean_box(0), lean_box(0), v_inst_970_, v_inst_971_);
lean_dec_ref(v_inst_971_);
v___x_978_ = lean_unsigned_to_nat(0u);
v___x_991_ = lean_array_get_size(v_entries_975_);
v___x_992_ = ((lean_object*)(l_Std_Internal_instInhabitedIndexMultiMap___closed__0));
v___x_993_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_994_ = lean_nat_dec_lt(v___x_978_, v___x_991_);
if (v___x_994_ == 0)
{
lean_dec_ref(v_entries_975_);
lean_dec(v_key_973_);
lean_dec_ref(v_inst_970_);
v___y_980_ = v___x_992_;
goto v___jp_979_;
}
else
{
lean_object* v___f_995_; uint8_t v___x_996_; 
v___f_995_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_erase___redArg___lam__0), 4, 2);
lean_closure_set(v___f_995_, 0, v_inst_970_);
lean_closure_set(v___f_995_, 1, v_key_973_);
v___x_996_ = lean_nat_dec_le(v___x_991_, v___x_991_);
if (v___x_996_ == 0)
{
if (v___x_994_ == 0)
{
lean_dec_ref(v___f_995_);
lean_dec_ref(v_entries_975_);
v___y_980_ = v___x_992_;
goto v___jp_979_;
}
else
{
size_t v___x_997_; size_t v___x_998_; lean_object* v___x_999_; 
v___x_997_ = ((size_t)0ULL);
v___x_998_ = lean_usize_of_nat(v___x_991_);
v___x_999_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_993_, v___f_995_, v_entries_975_, v___x_997_, v___x_998_, v___x_992_);
v___y_980_ = v___x_999_;
goto v___jp_979_;
}
}
else
{
size_t v___x_1000_; size_t v___x_1001_; lean_object* v___x_1002_; 
v___x_1000_ = ((size_t)0ULL);
v___x_1001_ = lean_usize_of_nat(v___x_991_);
v___x_1002_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_993_, v___f_995_, v_entries_975_, v___x_1000_, v___x_1001_, v___x_992_);
v___y_980_ = v___x_1002_;
goto v___jp_979_;
}
}
v___jp_979_:
{
lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; 
v___x_981_ = lean_array_get_size(v___y_980_);
v___x_982_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_983_ = lean_nat_dec_lt(v___x_978_, v___x_981_);
if (v___x_983_ == 0)
{
lean_dec_ref(v___y_980_);
lean_dec_ref(v___f_976_);
return v___x_977_;
}
else
{
uint8_t v___x_984_; 
v___x_984_ = lean_nat_dec_le(v___x_981_, v___x_981_);
if (v___x_984_ == 0)
{
if (v___x_983_ == 0)
{
lean_dec_ref(v___y_980_);
lean_dec_ref(v___f_976_);
return v___x_977_;
}
else
{
size_t v___x_985_; size_t v___x_986_; lean_object* v___x_987_; 
v___x_985_ = ((size_t)0ULL);
v___x_986_ = lean_usize_of_nat(v___x_981_);
v___x_987_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_982_, v___f_976_, v___y_980_, v___x_985_, v___x_986_, v___x_977_);
return v___x_987_;
}
}
else
{
size_t v___x_988_; size_t v___x_989_; lean_object* v___x_990_; 
v___x_988_ = ((size_t)0ULL);
v___x_989_ = lean_usize_of_nat(v___x_981_);
v___x_990_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_982_, v___f_976_, v___y_980_, v___x_988_, v___x_989_, v___x_977_);
return v___x_990_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase(lean_object* v_00_u03b1_1003_, lean_object* v_00_u03b2_1004_, lean_object* v_inst_1005_, lean_object* v_inst_1006_, lean_object* v_inst_1007_, lean_object* v_inst_1008_, lean_object* v_map_1009_, lean_object* v_key_1010_){
_start:
{
uint8_t v___x_1011_; 
lean_inc(v_key_1010_);
lean_inc_ref(v_inst_1006_);
lean_inc_ref(v_inst_1005_);
v___x_1011_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_1005_, v_inst_1006_, v_key_1010_, v_map_1009_);
if (v___x_1011_ == 0)
{
lean_dec(v_key_1010_);
lean_dec_ref(v_inst_1006_);
lean_dec_ref(v_inst_1005_);
return v_map_1009_;
}
else
{
lean_object* v_entries_1012_; lean_object* v___f_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___y_1017_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; uint8_t v___x_1031_; 
v_entries_1012_ = lean_ctor_get(v_map_1009_, 0);
lean_inc_ref(v_entries_1012_);
lean_dec_ref(v_map_1009_);
lean_inc_ref(v_inst_1006_);
lean_inc_ref(v_inst_1005_);
v___f_1013_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_erase___redArg___lam__1), 4, 2);
lean_closure_set(v___f_1013_, 0, v_inst_1005_);
lean_closure_set(v___f_1013_, 1, v_inst_1006_);
v___x_1014_ = l_Std_Internal_IndexMultiMap_empty(lean_box(0), lean_box(0), v_inst_1005_, v_inst_1006_);
lean_dec_ref(v_inst_1006_);
v___x_1015_ = lean_unsigned_to_nat(0u);
v___x_1028_ = lean_array_get_size(v_entries_1012_);
v___x_1029_ = ((lean_object*)(l_Std_Internal_instInhabitedIndexMultiMap___closed__0));
v___x_1030_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_1031_ = lean_nat_dec_lt(v___x_1015_, v___x_1028_);
if (v___x_1031_ == 0)
{
lean_dec_ref(v_entries_1012_);
lean_dec(v_key_1010_);
lean_dec_ref(v_inst_1005_);
v___y_1017_ = v___x_1029_;
goto v___jp_1016_;
}
else
{
lean_object* v___f_1032_; uint8_t v___x_1033_; 
v___f_1032_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_erase___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1032_, 0, v_inst_1005_);
lean_closure_set(v___f_1032_, 1, v_key_1010_);
v___x_1033_ = lean_nat_dec_le(v___x_1028_, v___x_1028_);
if (v___x_1033_ == 0)
{
if (v___x_1031_ == 0)
{
lean_dec_ref(v___f_1032_);
lean_dec_ref(v_entries_1012_);
v___y_1017_ = v___x_1029_;
goto v___jp_1016_;
}
else
{
size_t v___x_1034_; size_t v___x_1035_; lean_object* v___x_1036_; 
v___x_1034_ = ((size_t)0ULL);
v___x_1035_ = lean_usize_of_nat(v___x_1028_);
v___x_1036_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1030_, v___f_1032_, v_entries_1012_, v___x_1034_, v___x_1035_, v___x_1029_);
v___y_1017_ = v___x_1036_;
goto v___jp_1016_;
}
}
else
{
size_t v___x_1037_; size_t v___x_1038_; lean_object* v___x_1039_; 
v___x_1037_ = ((size_t)0ULL);
v___x_1038_ = lean_usize_of_nat(v___x_1028_);
v___x_1039_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1030_, v___f_1032_, v_entries_1012_, v___x_1037_, v___x_1038_, v___x_1029_);
v___y_1017_ = v___x_1039_;
goto v___jp_1016_;
}
}
v___jp_1016_:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; uint8_t v___x_1020_; 
v___x_1018_ = lean_array_get_size(v___y_1017_);
v___x_1019_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_1020_ = lean_nat_dec_lt(v___x_1015_, v___x_1018_);
if (v___x_1020_ == 0)
{
lean_dec_ref(v___y_1017_);
lean_dec_ref(v___f_1013_);
return v___x_1014_;
}
else
{
uint8_t v___x_1021_; 
v___x_1021_ = lean_nat_dec_le(v___x_1018_, v___x_1018_);
if (v___x_1021_ == 0)
{
if (v___x_1020_ == 0)
{
lean_dec_ref(v___y_1017_);
lean_dec_ref(v___f_1013_);
return v___x_1014_;
}
else
{
size_t v___x_1022_; size_t v___x_1023_; lean_object* v___x_1024_; 
v___x_1022_ = ((size_t)0ULL);
v___x_1023_ = lean_usize_of_nat(v___x_1018_);
v___x_1024_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1019_, v___f_1013_, v___y_1017_, v___x_1022_, v___x_1023_, v___x_1014_);
return v___x_1024_;
}
}
else
{
size_t v___x_1025_; size_t v___x_1026_; lean_object* v___x_1027_; 
v___x_1025_ = ((size_t)0ULL);
v___x_1026_ = lean_usize_of_nat(v___x_1018_);
v___x_1027_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1019_, v___f_1013_, v___y_1017_, v___x_1025_, v___x_1026_, v___x_1014_);
return v___x_1027_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size___redArg(lean_object* v_map_1040_){
_start:
{
lean_object* v_entries_1041_; lean_object* v___x_1042_; 
v_entries_1041_ = lean_ctor_get(v_map_1040_, 0);
v___x_1042_ = lean_array_get_size(v_entries_1041_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size___redArg___boxed(lean_object* v_map_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_Std_Internal_IndexMultiMap_size___redArg(v_map_1043_);
lean_dec_ref(v_map_1043_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size(lean_object* v_00_u03b1_1045_, lean_object* v_00_u03b2_1046_, lean_object* v_inst_1047_, lean_object* v_inst_1048_, lean_object* v_map_1049_){
_start:
{
lean_object* v_entries_1050_; lean_object* v___x_1051_; 
v_entries_1050_ = lean_ctor_get(v_map_1049_, 0);
v___x_1051_ = lean_array_get_size(v_entries_1050_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size___boxed(lean_object* v_00_u03b1_1052_, lean_object* v_00_u03b2_1053_, lean_object* v_inst_1054_, lean_object* v_inst_1055_, lean_object* v_map_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Std_Internal_IndexMultiMap_size(v_00_u03b1_1052_, v_00_u03b2_1053_, v_inst_1054_, v_inst_1055_, v_map_1056_);
lean_dec_ref(v_map_1056_);
lean_dec_ref(v_inst_1055_);
lean_dec_ref(v_inst_1054_);
return v_res_1057_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_isEmpty___redArg(lean_object* v_map_1058_){
_start:
{
lean_object* v_entries_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; uint8_t v___x_1062_; 
v_entries_1059_ = lean_ctor_get(v_map_1058_, 0);
v___x_1060_ = lean_array_get_size(v_entries_1059_);
v___x_1061_ = lean_unsigned_to_nat(0u);
v___x_1062_ = lean_nat_dec_eq(v___x_1060_, v___x_1061_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_isEmpty___redArg___boxed(lean_object* v_map_1063_){
_start:
{
uint8_t v_res_1064_; lean_object* v_r_1065_; 
v_res_1064_ = l_Std_Internal_IndexMultiMap_isEmpty___redArg(v_map_1063_);
lean_dec_ref(v_map_1063_);
v_r_1065_ = lean_box(v_res_1064_);
return v_r_1065_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_isEmpty(lean_object* v_00_u03b1_1066_, lean_object* v_00_u03b2_1067_, lean_object* v_inst_1068_, lean_object* v_inst_1069_, lean_object* v_map_1070_){
_start:
{
lean_object* v_entries_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; uint8_t v___x_1074_; 
v_entries_1071_ = lean_ctor_get(v_map_1070_, 0);
v___x_1072_ = lean_array_get_size(v_entries_1071_);
v___x_1073_ = lean_unsigned_to_nat(0u);
v___x_1074_ = lean_nat_dec_eq(v___x_1072_, v___x_1073_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_isEmpty___boxed(lean_object* v_00_u03b1_1075_, lean_object* v_00_u03b2_1076_, lean_object* v_inst_1077_, lean_object* v_inst_1078_, lean_object* v_map_1079_){
_start:
{
uint8_t v_res_1080_; lean_object* v_r_1081_; 
v_res_1080_ = l_Std_Internal_IndexMultiMap_isEmpty(v_00_u03b1_1075_, v_00_u03b2_1076_, v_inst_1077_, v_inst_1078_, v_map_1079_);
lean_dec_ref(v_map_1079_);
lean_dec_ref(v_inst_1078_);
lean_dec_ref(v_inst_1077_);
v_r_1081_ = lean_box(v_res_1080_);
return v_r_1081_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray___redArg(lean_object* v_map_1082_){
_start:
{
lean_object* v_entries_1083_; 
v_entries_1083_ = lean_ctor_get(v_map_1082_, 0);
lean_inc_ref(v_entries_1083_);
return v_entries_1083_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray___redArg___boxed(lean_object* v_map_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Std_Internal_IndexMultiMap_toArray___redArg(v_map_1084_);
lean_dec_ref(v_map_1084_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray(lean_object* v_00_u03b1_1086_, lean_object* v_00_u03b2_1087_, lean_object* v_inst_1088_, lean_object* v_inst_1089_, lean_object* v_map_1090_){
_start:
{
lean_object* v_entries_1091_; 
v_entries_1091_ = lean_ctor_get(v_map_1090_, 0);
lean_inc_ref(v_entries_1091_);
return v_entries_1091_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray___boxed(lean_object* v_00_u03b1_1092_, lean_object* v_00_u03b2_1093_, lean_object* v_inst_1094_, lean_object* v_inst_1095_, lean_object* v_map_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l_Std_Internal_IndexMultiMap_toArray(v_00_u03b1_1092_, v_00_u03b2_1093_, v_inst_1094_, v_inst_1095_, v_map_1096_);
lean_dec_ref(v_map_1096_);
lean_dec_ref(v_inst_1095_);
lean_dec_ref(v_inst_1094_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList___redArg(lean_object* v_map_1098_){
_start:
{
lean_object* v_entries_1099_; lean_object* v___x_1100_; 
v_entries_1099_ = lean_ctor_get(v_map_1098_, 0);
lean_inc_ref(v_entries_1099_);
lean_dec_ref(v_map_1098_);
v___x_1100_ = lean_array_to_list(v_entries_1099_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList(lean_object* v_00_u03b1_1101_, lean_object* v_00_u03b2_1102_, lean_object* v_inst_1103_, lean_object* v_inst_1104_, lean_object* v_map_1105_){
_start:
{
lean_object* v___x_1106_; 
v___x_1106_ = l_Std_Internal_IndexMultiMap_toList___redArg(v_map_1105_);
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList___boxed(lean_object* v_00_u03b1_1107_, lean_object* v_00_u03b2_1108_, lean_object* v_inst_1109_, lean_object* v_inst_1110_, lean_object* v_map_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Std_Internal_IndexMultiMap_toList(v_00_u03b1_1107_, v_00_u03b2_1108_, v_inst_1109_, v_inst_1110_, v_map_1111_);
lean_dec_ref(v_inst_1110_);
lean_dec_ref(v_inst_1109_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___redArg(lean_object* v_inst_1113_, lean_object* v_inst_1114_, lean_object* v_m1_1115_, lean_object* v_m2_1116_){
_start:
{
lean_object* v_entries_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; uint8_t v___x_1121_; 
v_entries_1117_ = lean_ctor_get(v_m2_1116_, 0);
lean_inc_ref(v_entries_1117_);
lean_dec_ref(v_m2_1116_);
v___x_1118_ = lean_unsigned_to_nat(0u);
v___x_1119_ = lean_array_get_size(v_entries_1117_);
v___x_1120_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_1121_ = lean_nat_dec_lt(v___x_1118_, v___x_1119_);
if (v___x_1121_ == 0)
{
lean_dec_ref(v_entries_1117_);
lean_dec_ref(v_inst_1114_);
lean_dec_ref(v_inst_1113_);
return v_m1_1115_;
}
else
{
lean_object* v___f_1122_; uint8_t v___x_1123_; 
v___f_1122_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_erase___redArg___lam__1), 4, 2);
lean_closure_set(v___f_1122_, 0, v_inst_1113_);
lean_closure_set(v___f_1122_, 1, v_inst_1114_);
v___x_1123_ = lean_nat_dec_le(v___x_1119_, v___x_1119_);
if (v___x_1123_ == 0)
{
if (v___x_1121_ == 0)
{
lean_dec_ref(v___f_1122_);
lean_dec_ref(v_entries_1117_);
return v_m1_1115_;
}
else
{
size_t v___x_1124_; size_t v___x_1125_; lean_object* v___x_1126_; 
v___x_1124_ = ((size_t)0ULL);
v___x_1125_ = lean_usize_of_nat(v___x_1119_);
v___x_1126_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1120_, v___f_1122_, v_entries_1117_, v___x_1124_, v___x_1125_, v_m1_1115_);
return v___x_1126_;
}
}
else
{
size_t v___x_1127_; size_t v___x_1128_; lean_object* v___x_1129_; 
v___x_1127_ = ((size_t)0ULL);
v___x_1128_ = lean_usize_of_nat(v___x_1119_);
v___x_1129_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1120_, v___f_1122_, v_entries_1117_, v___x_1127_, v___x_1128_, v_m1_1115_);
return v___x_1129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge(lean_object* v_00_u03b1_1130_, lean_object* v_00_u03b2_1131_, lean_object* v_inst_1132_, lean_object* v_inst_1133_, lean_object* v_inst_1134_, lean_object* v_inst_1135_, lean_object* v_m1_1136_, lean_object* v_m2_1137_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Std_Internal_IndexMultiMap_merge___redArg(v_inst_1132_, v_inst_1133_, v_m1_1136_, v_m2_1137_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection___redArg(lean_object* v_inst_1139_, lean_object* v_inst_1140_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Std_Internal_IndexMultiMap_empty(lean_box(0), lean_box(0), v_inst_1139_, v_inst_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection___redArg___boxed(lean_object* v_inst_1142_, lean_object* v_inst_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Std_Internal_IndexMultiMap_instEmptyCollection___redArg(v_inst_1142_, v_inst_1143_);
lean_dec_ref(v_inst_1143_);
lean_dec_ref(v_inst_1142_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection(lean_object* v_00_u03b1_1145_, lean_object* v_00_u03b2_1146_, lean_object* v_inst_1147_, lean_object* v_inst_1148_){
_start:
{
lean_object* v___x_1149_; 
v___x_1149_ = l_Std_Internal_IndexMultiMap_empty(lean_box(0), lean_box(0), v_inst_1147_, v_inst_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection___boxed(lean_object* v_00_u03b1_1150_, lean_object* v_00_u03b2_1151_, lean_object* v_inst_1152_, lean_object* v_inst_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_Std_Internal_IndexMultiMap_instEmptyCollection(v_00_u03b1_1150_, v_00_u03b2_1151_, v_inst_1152_, v_inst_1153_);
lean_dec_ref(v_inst_1153_);
lean_dec_ref(v_inst_1152_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable___redArg___lam__1(lean_object* v_inst_1155_, lean_object* v_inst_1156_, lean_object* v_x_1157_){
_start:
{
lean_object* v_fst_1158_; lean_object* v___x_1159_; lean_object* v_entries_1160_; lean_object* v_indexes_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1172_; 
v_fst_1158_ = lean_ctor_get(v_x_1157_, 0);
lean_inc(v_fst_1158_);
v___x_1159_ = l_Std_Internal_IndexMultiMap_empty(lean_box(0), lean_box(0), v_inst_1155_, v_inst_1156_);
v_entries_1160_ = lean_ctor_get(v___x_1159_, 0);
v_indexes_1161_ = lean_ctor_get(v___x_1159_, 1);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1163_ = v___x_1159_;
v_isShared_1164_ = v_isSharedCheck_1172_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_indexes_1161_);
lean_inc(v_entries_1160_);
lean_dec(v___x_1159_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1172_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v_i_1165_; lean_object* v_f_1166_; lean_object* v_entries_1167_; lean_object* v_indexes_1168_; lean_object* v___x_1170_; 
v_i_1165_ = lean_array_get_size(v_entries_1160_);
v_f_1166_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_1166_, 0, v_i_1165_);
v_entries_1167_ = lean_array_push(v_entries_1160_, v_x_1157_);
v_indexes_1168_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_1155_, v_inst_1156_, v_indexes_1161_, v_fst_1158_, v_f_1166_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 1, v_indexes_1168_);
lean_ctor_set(v___x_1163_, 0, v_entries_1167_);
v___x_1170_ = v___x_1163_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_entries_1167_);
lean_ctor_set(v_reuseFailAlloc_1171_, 1, v_indexes_1168_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable___redArg(lean_object* v_inst_1173_, lean_object* v_inst_1174_){
_start:
{
lean_object* v___f_1175_; 
v___f_1175_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1175_, 0, v_inst_1173_);
lean_closure_set(v___f_1175_, 1, v_inst_1174_);
return v___f_1175_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable(lean_object* v_00_u03b1_1176_, lean_object* v_00_u03b2_1177_, lean_object* v_inst_1178_, lean_object* v_inst_1179_, lean_object* v_inst_1180_, lean_object* v_inst_1181_){
_start:
{
lean_object* v___f_1182_; 
v___f_1182_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1182_, 0, v_inst_1178_);
lean_closure_set(v___f_1182_, 1, v_inst_1179_);
return v___f_1182_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable___redArg___lam__1(lean_object* v_inst_1183_, lean_object* v_inst_1184_, lean_object* v_x_1185_, lean_object* v_m_1186_){
_start:
{
lean_object* v_fst_1187_; lean_object* v_entries_1188_; lean_object* v_indexes_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1200_; 
v_fst_1187_ = lean_ctor_get(v_x_1185_, 0);
lean_inc(v_fst_1187_);
v_entries_1188_ = lean_ctor_get(v_m_1186_, 0);
v_indexes_1189_ = lean_ctor_get(v_m_1186_, 1);
v_isSharedCheck_1200_ = !lean_is_exclusive(v_m_1186_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1191_ = v_m_1186_;
v_isShared_1192_ = v_isSharedCheck_1200_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_indexes_1189_);
lean_inc(v_entries_1188_);
lean_dec(v_m_1186_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1200_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v_i_1193_; lean_object* v_f_1194_; lean_object* v_entries_1195_; lean_object* v_indexes_1196_; lean_object* v___x_1198_; 
v_i_1193_ = lean_array_get_size(v_entries_1188_);
v_f_1194_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_1194_, 0, v_i_1193_);
v_entries_1195_ = lean_array_push(v_entries_1188_, v_x_1185_);
v_indexes_1196_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_1183_, v_inst_1184_, v_indexes_1189_, v_fst_1187_, v_f_1194_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v_indexes_1196_);
lean_ctor_set(v___x_1191_, 0, v_entries_1195_);
v___x_1198_ = v___x_1191_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_entries_1195_);
lean_ctor_set(v_reuseFailAlloc_1199_, 1, v_indexes_1196_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable___redArg(lean_object* v_inst_1201_, lean_object* v_inst_1202_){
_start:
{
lean_object* v___f_1203_; 
v___f_1203_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable___redArg___lam__1), 4, 2);
lean_closure_set(v___f_1203_, 0, v_inst_1201_);
lean_closure_set(v___f_1203_, 1, v_inst_1202_);
return v___f_1203_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable(lean_object* v_00_u03b1_1204_, lean_object* v_00_u03b2_1205_, lean_object* v_inst_1206_, lean_object* v_inst_1207_, lean_object* v_inst_1208_, lean_object* v_inst_1209_){
_start:
{
lean_object* v___f_1210_; 
v___f_1210_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable___redArg___lam__1), 4, 2);
lean_closure_set(v___f_1210_, 0, v_inst_1206_);
lean_closure_set(v___f_1210_, 1, v_inst_1207_);
return v___f_1210_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instUnionOfEquivBEqOfLawfulHashable___redArg(lean_object* v_inst_1211_, lean_object* v_inst_1212_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_merge), 8, 6);
lean_closure_set(v___x_1213_, 0, lean_box(0));
lean_closure_set(v___x_1213_, 1, lean_box(0));
lean_closure_set(v___x_1213_, 2, v_inst_1211_);
lean_closure_set(v___x_1213_, 3, v_inst_1212_);
lean_closure_set(v___x_1213_, 4, lean_box(0));
lean_closure_set(v___x_1213_, 5, lean_box(0));
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instUnionOfEquivBEqOfLawfulHashable(lean_object* v_00_u03b1_1214_, lean_object* v_00_u03b2_1215_, lean_object* v_inst_1216_, lean_object* v_inst_1217_, lean_object* v_inst_1218_, lean_object* v_inst_1219_){
_start:
{
lean_object* v___x_1220_; 
v___x_1220_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_merge), 8, 6);
lean_closure_set(v___x_1220_, 0, lean_box(0));
lean_closure_set(v___x_1220_, 1, lean_box(0));
lean_closure_set(v___x_1220_, 2, v_inst_1216_);
lean_closure_set(v___x_1220_, 3, v_inst_1217_);
lean_closure_set(v___x_1220_, 4, lean_box(0));
lean_closure_set(v___x_1220_, 5, lean_box(0));
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__0(lean_object* v_f_1221_, lean_object* v_a_1222_, lean_object* v_x_1223_, lean_object* v___y_1224_){
_start:
{
lean_object* v___x_1225_; 
v___x_1225_ = lean_apply_2(v_f_1221_, v_a_1222_, v___y_1224_);
return v___x_1225_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__1(lean_object* v_inst_1226_, lean_object* v_00_u03b2_1227_, lean_object* v_map_1228_, lean_object* v_b_1229_, lean_object* v_f_1230_){
_start:
{
lean_object* v_entries_1231_; lean_object* v___f_1232_; size_t v_sz_1233_; size_t v___x_1234_; lean_object* v___x_1235_; 
v_entries_1231_ = lean_ctor_get(v_map_1228_, 0);
lean_inc_ref(v_entries_1231_);
lean_dec_ref(v_map_1228_);
v___f_1232_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1232_, 0, v_f_1230_);
v_sz_1233_ = lean_array_size(v_entries_1231_);
v___x_1234_ = ((size_t)0ULL);
v___x_1235_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1226_, v_entries_1231_, v___f_1232_, v_sz_1233_, v___x_1234_, v_b_1229_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg(lean_object* v_inst_1236_){
_start:
{
lean_object* v___f_1237_; 
v___f_1237_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_1237_, 0, v_inst_1236_);
return v___f_1237_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad(lean_object* v_00_u03b1_1238_, lean_object* v_00_u03b2_1239_, lean_object* v_inst_1240_, lean_object* v_inst_1241_, lean_object* v_m_1242_, lean_object* v_inst_1243_){
_start:
{
lean_object* v___f_1244_; 
v___f_1244_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_1244_, 0, v_inst_1243_);
return v___f_1244_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___boxed(lean_object* v_00_u03b1_1245_, lean_object* v_00_u03b2_1246_, lean_object* v_inst_1247_, lean_object* v_inst_1248_, lean_object* v_m_1249_, lean_object* v_inst_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_Std_Internal_IndexMultiMap_instForInProdOfMonad(v_00_u03b1_1245_, v_00_u03b2_1246_, v_inst_1247_, v_inst_1248_, v_m_1249_, v_inst_1250_);
lean_dec_ref(v_inst_1248_);
lean_dec_ref(v_inst_1247_);
return v_res_1251_;
}
}
lean_object* runtime_initialize_Init_Grind(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_OfNat(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashMap(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Internal_IndexMultiMap(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_OfNat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Internal_IndexMultiMap(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind(uint8_t builtin);
lean_object* initialize_Init_Data_Int_OfNat(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Internal_IndexMultiMap(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_OfNat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Internal_IndexMultiMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Internal_IndexMultiMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Internal_IndexMultiMap(builtin);
}
#ifdef __cplusplus
}
#endif
