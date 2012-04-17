/* This C header file is generated by NIT to compile modules and programs that requires ../lib/standard/string. */
#ifndef standard___string_sep
#define standard___string_sep
#include "standard___collection._sep.h"
#include <nit_common.h>
#include "string._nitni.h"

extern const classtable_elt_t VFT_standard___string___AbstractString[];

extern const classtable_elt_t VFT_standard___string___String[];

extern const classtable_elt_t VFT_standard___string___Buffer[];

extern const classtable_elt_t VFT_standard___string___NativeString[];
struct TBOX_NativeString { const classtable_elt_t * vft; bigint object_id; char * val;};
val_t BOX_NativeString(char * val);
#define UNBOX_NativeString(x) (((struct TBOX_NativeString *)(VAL2OBJ(x)))->val)

extern const classtable_elt_t VFT_standard___string___StringCapable[];
extern const char *LOCATE_standard___string;
extern const int SFT_standard___string[];
#define ID_standard___string___AbstractString (SFT_standard___string[0])
#define COLOR_standard___string___AbstractString (SFT_standard___string[1])
#define ATTR_standard___string___AbstractString____items(recv) ATTR(recv, (SFT_standard___string[2] + 0))
#define INIT_TABLE_POS_standard___string___AbstractString (SFT_standard___string[3] + 0)
#define CALL_standard___string___AbstractString___items(recv) ((standard___string___AbstractString___items_t)CALL((recv), (SFT_standard___string[3] + 1)))
#define CALL_standard___string___AbstractString___substring(recv) ((standard___string___AbstractString___substring_t)CALL((recv), (SFT_standard___string[3] + 2)))
#define CALL_standard___string___AbstractString___substring_from(recv) ((standard___string___AbstractString___substring_from_t)CALL((recv), (SFT_standard___string[3] + 3)))
#define CALL_standard___string___AbstractString___has_substring(recv) ((standard___string___AbstractString___has_substring_t)CALL((recv), (SFT_standard___string[3] + 4)))
#define CALL_standard___string___AbstractString___has_prefix(recv) ((standard___string___AbstractString___has_prefix_t)CALL((recv), (SFT_standard___string[3] + 5)))
#define CALL_standard___string___AbstractString___has_suffix(recv) ((standard___string___AbstractString___has_suffix_t)CALL((recv), (SFT_standard___string[3] + 6)))
#define CALL_standard___string___AbstractString___to_i(recv) ((standard___string___AbstractString___to_i_t)CALL((recv), (SFT_standard___string[3] + 7)))
#define CALL_standard___string___AbstractString___to_hex(recv) ((standard___string___AbstractString___to_hex_t)CALL((recv), (SFT_standard___string[3] + 8)))
#define CALL_standard___string___AbstractString___a_to(recv) ((standard___string___AbstractString___a_to_t)CALL((recv), (SFT_standard___string[3] + 9)))
#define CALL_standard___string___AbstractString___to_upper(recv) ((standard___string___AbstractString___to_upper_t)CALL((recv), (SFT_standard___string[3] + 10)))
#define CALL_standard___string___AbstractString___to_lower(recv) ((standard___string___AbstractString___to_lower_t)CALL((recv), (SFT_standard___string[3] + 11)))
#define ID_standard___string___String (SFT_standard___string[4])
#define COLOR_standard___string___String (SFT_standard___string[5])
#define INIT_TABLE_POS_standard___string___String (SFT_standard___string[6] + 0)
#define CALL_standard___string___String___with_native(recv) ((standard___string___String___with_native_t)CALL((recv), (SFT_standard___string[6] + 1)))
#define CALL_standard___string___String___from_cstring(recv) ((standard___string___String___from_cstring_t)CALL((recv), (SFT_standard___string[6] + 2)))
#define CALL_standard___string___String___to_cstring(recv) ((standard___string___String___to_cstring_t)CALL((recv), (SFT_standard___string[6] + 3)))
#define CALL_standard___string___String_____plus(recv) ((standard___string___String_____plus_t)CALL((recv), (SFT_standard___string[6] + 4)))
#define CALL_standard___string___String_____star(recv) ((standard___string___String_____star_t)CALL((recv), (SFT_standard___string[6] + 5)))
#define CALL_standard___string___String___to_f(recv) ((standard___string___String___to_f_t)CALL((recv), (SFT_standard___string[6] + 6)))
#define ID_standard___string___Buffer (SFT_standard___string[7])
#define COLOR_standard___string___Buffer (SFT_standard___string[8])
#define ATTR_standard___string___Buffer____capacity(recv) ATTR(recv, (SFT_standard___string[9] + 0))
#define INIT_TABLE_POS_standard___string___Buffer (SFT_standard___string[10] + 0)
#define CALL_SUPER_standard___string___Buffer___append(recv) ((standard___string___Buffer___append_t)CALL((recv), (SFT_standard___string[10] + 1)))
#define CALL_standard___string___Buffer___init(recv) ((standard___string___Buffer___init_t)CALL((recv), (SFT_standard___string[10] + 2)))
#define CALL_standard___string___Buffer___from(recv) ((standard___string___Buffer___from_t)CALL((recv), (SFT_standard___string[10] + 3)))
#define CALL_standard___string___Buffer___with_capacity(recv) ((standard___string___Buffer___with_capacity_t)CALL((recv), (SFT_standard___string[10] + 4)))
#define CALL_standard___string___Buffer___capacity(recv) ((standard___string___Buffer___capacity_t)CALL((recv), (SFT_standard___string[10] + 5)))
#define CALL_standard___string___Object___to_s(recv) ((standard___string___Object___to_s_t)CALL((recv), (SFT_standard___string[11] + 0)))
#define CALL_standard___string___Object___native_class_name(recv) ((standard___string___Object___native_class_name_t)CALL((recv), (SFT_standard___string[11] + 1)))
#define CALL_standard___string___Object___class_name(recv) ((standard___string___Object___class_name_t)CALL((recv), (SFT_standard___string[11] + 2)))
#define CALL_standard___string___Object___inspect(recv) ((standard___string___Object___inspect_t)CALL((recv), (SFT_standard___string[11] + 3)))
#define CALL_standard___string___Object___inspect_head(recv) ((standard___string___Object___inspect_head_t)CALL((recv), (SFT_standard___string[11] + 4)))
#define CALL_standard___string___Object___args(recv) ((standard___string___Object___args_t)CALL((recv), (SFT_standard___string[11] + 5)))
#define CALL_standard___string___Int___fill_buffer(recv) ((standard___string___Int___fill_buffer_t)CALL((recv), (SFT_standard___string[12] + 0)))
#define CALL_standard___string___Int___to_hex(recv) ((standard___string___Int___to_hex_t)CALL((recv), (SFT_standard___string[12] + 1)))
#define CALL_standard___string___Int___to_base(recv) ((standard___string___Int___to_base_t)CALL((recv), (SFT_standard___string[12] + 2)))
#define CALL_standard___string___Float___to_precision(recv) ((standard___string___Float___to_precision_t)CALL((recv), (SFT_standard___string[13] + 0)))
#define CALL_standard___string___Collection___join(recv) ((standard___string___Collection___join_t)CALL((recv), (SFT_standard___string[14] + 0)))
#define CALL_standard___string___Map___join(recv) ((standard___string___Map___join_t)CALL((recv), (SFT_standard___string[15] + 0)))
#define ID_standard___string___NativeString (SFT_standard___string[16])
#define COLOR_standard___string___NativeString (SFT_standard___string[17])
#define INIT_TABLE_POS_standard___string___NativeString (SFT_standard___string[18] + 0)
#define CALL_standard___string___NativeString_____bra(recv) ((standard___string___NativeString_____bra_t)CALL((recv), (SFT_standard___string[18] + 1)))
#define CALL_standard___string___NativeString_____braeq(recv) ((standard___string___NativeString_____braeq_t)CALL((recv), (SFT_standard___string[18] + 2)))
#define CALL_standard___string___NativeString___copy_to(recv) ((standard___string___NativeString___copy_to_t)CALL((recv), (SFT_standard___string[18] + 3)))
#define CALL_standard___string___NativeString___cstring_length(recv) ((standard___string___NativeString___cstring_length_t)CALL((recv), (SFT_standard___string[18] + 4)))
#define CALL_standard___string___NativeString___atoi(recv) ((standard___string___NativeString___atoi_t)CALL((recv), (SFT_standard___string[18] + 5)))
#define CALL_standard___string___NativeString___init(recv) ((standard___string___NativeString___init_t)CALL((recv), (SFT_standard___string[18] + 6)))
#define ID_standard___string___StringCapable (SFT_standard___string[19])
#define COLOR_standard___string___StringCapable (SFT_standard___string[20])
#define INIT_TABLE_POS_standard___string___StringCapable (SFT_standard___string[21] + 0)
#define CALL_standard___string___StringCapable___calloc_string(recv) ((standard___string___StringCapable___calloc_string_t)CALL((recv), (SFT_standard___string[21] + 1)))
#define ATTR_standard___string___Sys____args_cache(recv) ATTR(recv, (SFT_standard___string[22] + 0))
#define CALL_standard___string___Sys___program_name(recv) ((standard___string___Sys___program_name_t)CALL((recv), (SFT_standard___string[23] + 0)))
#define CALL_standard___string___Sys___init_args(recv) ((standard___string___Sys___init_args_t)CALL((recv), (SFT_standard___string[23] + 1)))
#define CALL_standard___string___Sys___native_argc(recv) ((standard___string___Sys___native_argc_t)CALL((recv), (SFT_standard___string[23] + 2)))
#define CALL_standard___string___Sys___native_argv(recv) ((standard___string___Sys___native_argv_t)CALL((recv), (SFT_standard___string[23] + 3)))
static const char * const LOCATE_standard___string___AbstractString___items = "string::AbstractString::items";
val_t standard___string___AbstractString___items(val_t p0);
typedef val_t (*standard___string___AbstractString___items_t)(val_t p0);
static const char * const LOCATE_standard___string___AbstractString_____bra = "string::AbstractString::(abstract_collection::SequenceRead::[])";
val_t standard___string___AbstractString_____bra(val_t p0, val_t p1);
typedef val_t (*standard___string___AbstractString_____bra_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___AbstractString___substring = "string::AbstractString::substring";
val_t standard___string___AbstractString___substring(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___string___AbstractString___substring_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string___AbstractString___substring_from = "string::AbstractString::substring_from";
val_t standard___string___AbstractString___substring_from(val_t p0, val_t p1);
typedef val_t (*standard___string___AbstractString___substring_from_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___AbstractString___has_substring = "string::AbstractString::has_substring";
val_t standard___string___AbstractString___has_substring(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___string___AbstractString___has_substring_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string___AbstractString___has_prefix = "string::AbstractString::has_prefix";
val_t standard___string___AbstractString___has_prefix(val_t p0, val_t p1);
typedef val_t (*standard___string___AbstractString___has_prefix_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___AbstractString___has_suffix = "string::AbstractString::has_suffix";
val_t standard___string___AbstractString___has_suffix(val_t p0, val_t p1);
typedef val_t (*standard___string___AbstractString___has_suffix_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___AbstractString___to_i = "string::AbstractString::to_i";
val_t standard___string___AbstractString___to_i(val_t p0);
typedef val_t (*standard___string___AbstractString___to_i_t)(val_t p0);
static const char * const LOCATE_standard___string___AbstractString___to_hex = "string::AbstractString::to_hex";
val_t standard___string___AbstractString___to_hex(val_t p0);
typedef val_t (*standard___string___AbstractString___to_hex_t)(val_t p0);
static const char * const LOCATE_standard___string___AbstractString___a_to = "string::AbstractString::a_to";
val_t standard___string___AbstractString___a_to(val_t p0, val_t p1);
typedef val_t (*standard___string___AbstractString___a_to_t)(val_t p0, val_t p1);
  typedef void (*CLOS_OC_standard___string___AbstractString___a_to_1_0)(struct stack_frame_t *);
  void OC_standard___string___AbstractString___a_to_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_standard___string___AbstractString___a_to_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
static const char * const LOCATE_standard___string___AbstractString___to_upper = "string::AbstractString::to_upper";
val_t standard___string___AbstractString___to_upper(val_t p0);
typedef val_t (*standard___string___AbstractString___to_upper_t)(val_t p0);
  typedef void (*CLOS_OC_standard___string___AbstractString___to_upper_1_0)(struct stack_frame_t *);
  void OC_standard___string___AbstractString___to_upper_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_standard___string___AbstractString___to_upper_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
static const char * const LOCATE_standard___string___AbstractString___to_lower = "string::AbstractString::to_lower";
val_t standard___string___AbstractString___to_lower(val_t p0);
typedef val_t (*standard___string___AbstractString___to_lower_t)(val_t p0);
  typedef void (*CLOS_OC_standard___string___AbstractString___to_lower_1_0)(struct stack_frame_t *);
  void OC_standard___string___AbstractString___to_lower_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_standard___string___AbstractString___to_lower_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
static const char * const LOCATE_standard___string___AbstractString___output = "string::AbstractString::(kernel::Object::output)";
void standard___string___AbstractString___output(val_t p0);
typedef void (*standard___string___AbstractString___output_t)(val_t p0);
val_t NEW_AbstractString_standard___collection___array___AbstractArrayRead___init();
static const char * const LOCATE_standard___string___String___with_native = "string::String::with_native";
void standard___string___String___with_native(val_t p0, val_t p1, val_t p2, int* init_table);
typedef void (*standard___string___String___with_native_t)(val_t p0, val_t p1, val_t p2, int* init_table);
val_t NEW_String_standard___string___String___with_native(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___String___from_cstring = "string::String::from_cstring";
void standard___string___String___from_cstring(val_t p0, val_t p1, int* init_table);
typedef void (*standard___string___String___from_cstring_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_String_standard___string___String___from_cstring(val_t p0);
static const char * const LOCATE_standard___string___String___to_cstring = "string::String::to_cstring";
val_t standard___string___String___to_cstring(val_t p0);
typedef val_t (*standard___string___String___to_cstring_t)(val_t p0);
static const char * const LOCATE_standard___string___String_____eqeq = "string::String::(kernel::Object::==)";
val_t standard___string___String_____eqeq(val_t p0, val_t p1);
typedef val_t (*standard___string___String_____eqeq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___String_____l = "string::String::(kernel::Comparable::<)";
val_t standard___string___String_____l(val_t p0, val_t p1);
typedef val_t (*standard___string___String_____l_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___String_____plus = "string::String::+";
val_t standard___string___String_____plus(val_t p0, val_t p1);
typedef val_t (*standard___string___String_____plus_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___String_____star = "string::String::*";
val_t standard___string___String_____star(val_t p0, val_t p1);
typedef val_t (*standard___string___String_____star_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___String___to_s = "string::String::(string::Object::to_s)";
val_t standard___string___String___to_s(val_t p0);
typedef val_t (*standard___string___String___to_s_t)(val_t p0);
static const char * const LOCATE_standard___string___String___hash = "string::String::(hash::Object::hash)";
val_t standard___string___String___hash(val_t p0);
typedef val_t (*standard___string___String___hash_t)(val_t p0);
static const char * const LOCATE_standard___string___String___to_f = "string::String::to_f";
val_t standard___string___String___to_f(val_t p0);
typedef val_t (*standard___string___String___to_f_t)(val_t p0);
static const char * const LOCATE_standard___string___Buffer_____braeq = "string::Buffer::(abstract_collection::Sequence::[]=)";
void standard___string___Buffer_____braeq(val_t p0, val_t p1, val_t p2);
typedef void (*standard___string___Buffer_____braeq_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string___Buffer___add = "string::Buffer::(abstract_collection::SimpleCollection::add)";
void standard___string___Buffer___add(val_t p0, val_t p1);
typedef void (*standard___string___Buffer___add_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___Buffer___enlarge = "string::Buffer::(array::AbstractArray::enlarge)";
void standard___string___Buffer___enlarge(val_t p0, val_t p1);
typedef void (*standard___string___Buffer___enlarge_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___Buffer___append = "string::Buffer::(abstract_collection::Sequence::append)";
void standard___string___Buffer___append(val_t p0, val_t p1);
typedef void (*standard___string___Buffer___append_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___Buffer___to_s = "string::Buffer::(string::Object::to_s)";
val_t standard___string___Buffer___to_s(val_t p0);
typedef val_t (*standard___string___Buffer___to_s_t)(val_t p0);
static const char * const LOCATE_standard___string___Buffer_____l = "string::Buffer::(kernel::Comparable::<)";
val_t standard___string___Buffer_____l(val_t p0, val_t p1);
typedef val_t (*standard___string___Buffer_____l_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___Buffer___init = "string::Buffer::init";
void standard___string___Buffer___init(val_t p0, int* init_table);
typedef void (*standard___string___Buffer___init_t)(val_t p0, int* init_table);
val_t NEW_Buffer_standard___string___Buffer___init();
static const char * const LOCATE_standard___string___Buffer___from = "string::Buffer::from";
void standard___string___Buffer___from(val_t p0, val_t p1, int* init_table);
typedef void (*standard___string___Buffer___from_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_Buffer_standard___string___Buffer___from(val_t p0);
static const char * const LOCATE_standard___string___Buffer___with_capacity = "string::Buffer::with_capacity";
void standard___string___Buffer___with_capacity(val_t p0, val_t p1, int* init_table);
typedef void (*standard___string___Buffer___with_capacity_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_Buffer_standard___string___Buffer___with_capacity(val_t p0);
static const char * const LOCATE_standard___string___Buffer_____eqeq = "string::Buffer::(kernel::Object::==)";
val_t standard___string___Buffer_____eqeq(val_t p0, val_t p1);
typedef val_t (*standard___string___Buffer_____eqeq_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___Buffer___capacity = "string::Buffer::capacity";
val_t standard___string___Buffer___capacity(val_t p0);
typedef val_t (*standard___string___Buffer___capacity_t)(val_t p0);
static const char * const LOCATE_standard___string___Object___to_s = "string::Object::to_s";
val_t standard___string___Object___to_s(val_t p0);
typedef val_t (*standard___string___Object___to_s_t)(val_t p0);
static const char * const LOCATE_standard___string___Object___native_class_name = "string::Object::native_class_name";
val_t standard___string___Object___native_class_name(val_t p0);
typedef val_t (*standard___string___Object___native_class_name_t)(val_t p0);
static const char * const LOCATE_standard___string___Object___class_name = "string::Object::class_name";
val_t standard___string___Object___class_name(val_t p0);
typedef val_t (*standard___string___Object___class_name_t)(val_t p0);
static const char * const LOCATE_standard___string___Object___inspect = "string::Object::inspect";
val_t standard___string___Object___inspect(val_t p0);
typedef val_t (*standard___string___Object___inspect_t)(val_t p0);
static const char * const LOCATE_standard___string___Object___inspect_head = "string::Object::inspect_head";
val_t standard___string___Object___inspect_head(val_t p0);
typedef val_t (*standard___string___Object___inspect_head_t)(val_t p0);
static const char * const LOCATE_standard___string___Object___args = "string::Object::args";
val_t standard___string___Object___args(val_t p0);
typedef val_t (*standard___string___Object___args_t)(val_t p0);
static const char * const LOCATE_standard___string___Bool___to_s = "string::Bool::(string::Object::to_s)";
val_t standard___string___Bool___to_s(val_t p0);
typedef val_t (*standard___string___Bool___to_s_t)(val_t p0);
static const char * const LOCATE_standard___string___Int___fill_buffer = "string::Int::fill_buffer";
void standard___string___Int___fill_buffer(val_t p0, val_t p1, val_t p2, val_t p3);
typedef void (*standard___string___Int___fill_buffer_t)(val_t p0, val_t p1, val_t p2, val_t p3);
static const char * const LOCATE_standard___string___Int___to_s = "string::Int::(string::Object::to_s)";
val_t standard___string___Int___to_s(val_t p0);
typedef val_t (*standard___string___Int___to_s_t)(val_t p0);
static const char * const LOCATE_standard___string___Int___to_hex = "string::Int::to_hex";
val_t standard___string___Int___to_hex(val_t p0);
typedef val_t (*standard___string___Int___to_hex_t)(val_t p0);
static const char * const LOCATE_standard___string___Int___to_base = "string::Int::to_base";
val_t standard___string___Int___to_base(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___string___Int___to_base_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string___Float___to_s = "string::Float::(string::Object::to_s)";
val_t standard___string___Float___to_s(val_t p0);
typedef val_t (*standard___string___Float___to_s_t)(val_t p0);
static const char * const LOCATE_standard___string___Float___to_precision = "string::Float::to_precision";
val_t standard___string___Float___to_precision(val_t p0, val_t p1);
typedef val_t (*standard___string___Float___to_precision_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___Char___to_s = "string::Char::(string::Object::to_s)";
val_t standard___string___Char___to_s(val_t p0);
typedef val_t (*standard___string___Char___to_s_t)(val_t p0);
static const char * const LOCATE_standard___string___Collection___to_s = "string::Collection::(string::Object::to_s)";
val_t standard___string___Collection___to_s(val_t p0);
typedef val_t (*standard___string___Collection___to_s_t)(val_t p0);
  typedef void (*CLOS_OC_standard___string___Collection___to_s_1_0)(struct stack_frame_t *);
  void OC_standard___string___Collection___to_s_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_standard___string___Collection___to_s_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
static const char * const LOCATE_standard___string___Collection___join = "string::Collection::join";
val_t standard___string___Collection___join(val_t p0, val_t p1);
typedef val_t (*standard___string___Collection___join_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___Array___to_s = "string::Array::(string::Object::to_s)";
val_t standard___string___Array___to_s(val_t p0);
typedef val_t (*standard___string___Array___to_s_t)(val_t p0);
val_t NEW_Array_standard___collection___array___Array___with_capacity(val_t p0);
val_t NEW_Array_standard___collection___array___Array___init();
val_t NEW_Array_standard___collection___array___Array___filled_with(val_t p0, val_t p1);
val_t NEW_Array_standard___collection___array___Array___with_items(val_t p0);
val_t NEW_Array_standard___collection___array___Array___with_native(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___Map___join = "string::Map::join";
val_t standard___string___Map___join(val_t p0, val_t p1, val_t p2);
typedef val_t (*standard___string___Map___join_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string___NativeString_____bra = "string::NativeString::[]";
val_t standard___string___NativeString_____bra(val_t p0, val_t p1);
typedef val_t (*standard___string___NativeString_____bra_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___NativeString_____braeq = "string::NativeString::[]=";
void standard___string___NativeString_____braeq(val_t p0, val_t p1, val_t p2);
typedef void (*standard___string___NativeString_____braeq_t)(val_t p0, val_t p1, val_t p2);
static const char * const LOCATE_standard___string___NativeString___copy_to = "string::NativeString::copy_to";
void standard___string___NativeString___copy_to(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4);
typedef void (*standard___string___NativeString___copy_to_t)(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4);
static const char * const LOCATE_standard___string___NativeString___cstring_length = "string::NativeString::cstring_length";
val_t standard___string___NativeString___cstring_length(val_t p0);
typedef val_t (*standard___string___NativeString___cstring_length_t)(val_t p0);
static const char * const LOCATE_standard___string___NativeString___atoi = "string::NativeString::atoi";
val_t standard___string___NativeString___atoi(val_t p0);
typedef val_t (*standard___string___NativeString___atoi_t)(val_t p0);
static const char * const LOCATE_standard___string___NativeString___init = "string::NativeString::init";
void standard___string___NativeString___init(val_t p0, int* init_table);
typedef void (*standard___string___NativeString___init_t)(val_t p0, int* init_table);
val_t NEW_NativeString_standard___string___NativeString___init();
static const char * const LOCATE_standard___string___StringCapable___calloc_string = "string::StringCapable::calloc_string";
val_t standard___string___StringCapable___calloc_string(val_t p0, val_t p1);
typedef val_t (*standard___string___StringCapable___calloc_string_t)(val_t p0, val_t p1);
static const char * const LOCATE_standard___string___Sys___args = "string::Sys::(string::Object::args)";
val_t standard___string___Sys___args(val_t p0);
typedef val_t (*standard___string___Sys___args_t)(val_t p0);
static const char * const LOCATE_standard___string___Sys___program_name = "string::Sys::program_name";
val_t standard___string___Sys___program_name(val_t p0);
typedef val_t (*standard___string___Sys___program_name_t)(val_t p0);
static const char * const LOCATE_standard___string___Sys___init_args = "string::Sys::init_args";
void standard___string___Sys___init_args(val_t p0);
typedef void (*standard___string___Sys___init_args_t)(val_t p0);
static const char * const LOCATE_standard___string___Sys___native_argc = "string::Sys::native_argc";
val_t standard___string___Sys___native_argc(val_t p0);
typedef val_t (*standard___string___Sys___native_argc_t)(val_t p0);
static const char * const LOCATE_standard___string___Sys___native_argv = "string::Sys::native_argv";
val_t standard___string___Sys___native_argv(val_t p0, val_t p1);
typedef val_t (*standard___string___Sys___native_argv_t)(val_t p0, val_t p1);
val_t NEW_Sys_standard___kernel___Sys___init();
#endif
