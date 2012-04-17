/* This C header file is generated by NIT to compile modules and programs that requires ./program. */
#ifndef program_sep
#define program_sep
#include "icode._sep.h"
#include "primitive_info._sep.h"
#include "mmloader._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_program___Program[];
extern const char *LOCATE_program;
extern const int SFT_program[];
#define ATTR_program___ToolContext____global(recv) ATTR(recv, (SFT_program[0] + 0))
#define ATTR_program___ToolContext____use_SFT_optimization(recv) ATTR(recv, (SFT_program[0] + 1))
#define CALL_program___ToolContext___global(recv) ((program___ToolContext___global_t)CALL((recv), (SFT_program[1] + 0)))
#define CALL_program___ToolContext___global__eq(recv) ((program___ToolContext___global__eq_t)CALL((recv), (SFT_program[1] + 1)))
#define CALL_program___ToolContext___use_SFT_optimization__eq(recv) ((program___ToolContext___use_SFT_optimization__eq_t)CALL((recv), (SFT_program[1] + 2)))
#define CALL_program___ToolContext___use_SFT_optimization(recv) ((program___ToolContext___use_SFT_optimization_t)CALL((recv), (SFT_program[1] + 3)))
#define ID_program___Program (SFT_program[2])
#define COLOR_program___Program (SFT_program[3])
#define ATTR_program___Program____tc(recv) ATTR(recv, (SFT_program[4] + 0))
#define ATTR_program___Program____main_module(recv) ATTR(recv, (SFT_program[4] + 1))
#define ATTR_program___Program____main_method(recv) ATTR(recv, (SFT_program[4] + 2))
#define ATTR_program___Program____main_class(recv) ATTR(recv, (SFT_program[4] + 3))
#define INIT_TABLE_POS_program___Program (SFT_program[5] + 0)
#define CALL_program___Program___tc(recv) ((program___Program___tc_t)CALL((recv), (SFT_program[5] + 1)))
#define CALL_program___Program___main_module(recv) ((program___Program___main_module_t)CALL((recv), (SFT_program[5] + 2)))
#define CALL_program___Program___main_method(recv) ((program___Program___main_method_t)CALL((recv), (SFT_program[5] + 3)))
#define CALL_program___Program___main_class(recv) ((program___Program___main_class_t)CALL((recv), (SFT_program[5] + 4)))
#define CALL_program___Program___finish_processing_classes(recv) ((program___Program___finish_processing_classes_t)CALL((recv), (SFT_program[5] + 5)))
#define CALL_program___Program___compute_main_method(recv) ((program___Program___compute_main_method_t)CALL((recv), (SFT_program[5] + 6)))
#define CALL_program___Program___generate_allocation_iroutines(recv) ((program___Program___generate_allocation_iroutines_t)CALL((recv), (SFT_program[5] + 7)))
#define CALL_program___Program___with_each_iroutines(recv) ((program___Program___with_each_iroutines_t)CALL((recv), (SFT_program[5] + 8)))
#define CALL_program___Program___with_each_methods(recv) ((program___Program___with_each_methods_t)CALL((recv), (SFT_program[5] + 9)))
#define CALL_program___Program___with_each_live_local_classes(recv) ((program___Program___with_each_live_local_classes_t)CALL((recv), (SFT_program[5] + 10)))
#define CALL_program___Program___init(recv) ((program___Program___init_t)CALL((recv), (SFT_program[5] + 11)))
#define ATTR_program___MMLocalClass____init_var_iroutine(recv) ATTR(recv, (SFT_program[6] + 0))
#define ATTR_program___MMLocalClass____checknew_iroutine(recv) ATTR(recv, (SFT_program[6] + 1))
#define ATTR_program___MMLocalClass____new_instance_iroutine(recv) ATTR(recv, (SFT_program[6] + 2))
#define CALL_program___MMLocalClass___init_var_iroutine(recv) ((program___MMLocalClass___init_var_iroutine_t)CALL((recv), (SFT_program[7] + 0)))
#define CALL_program___MMLocalClass___init_var_iroutine__eq(recv) ((program___MMLocalClass___init_var_iroutine__eq_t)CALL((recv), (SFT_program[7] + 1)))
#define CALL_program___MMLocalClass___checknew_iroutine(recv) ((program___MMLocalClass___checknew_iroutine_t)CALL((recv), (SFT_program[7] + 2)))
#define CALL_program___MMLocalClass___checknew_iroutine__eq(recv) ((program___MMLocalClass___checknew_iroutine__eq_t)CALL((recv), (SFT_program[7] + 3)))
#define CALL_program___MMLocalClass___new_instance_iroutine(recv) ((program___MMLocalClass___new_instance_iroutine_t)CALL((recv), (SFT_program[7] + 4)))
static const char * const LOCATE_program___ToolContext___global = "program::ToolContext::global";
val_t program___ToolContext___global(val_t p0);
typedef val_t (*program___ToolContext___global_t)(val_t p0);
static const char * const LOCATE_program___ToolContext___global__eq = "program::ToolContext::global=";
void program___ToolContext___global__eq(val_t p0, val_t p1);
typedef void (*program___ToolContext___global__eq_t)(val_t p0, val_t p1);
static const char * const LOCATE_program___ToolContext___use_SFT_optimization__eq = "program::ToolContext::use_SFT_optimization=";
void program___ToolContext___use_SFT_optimization__eq(val_t p0, val_t p1);
typedef void (*program___ToolContext___use_SFT_optimization__eq_t)(val_t p0, val_t p1);
static const char * const LOCATE_program___ToolContext___use_SFT_optimization = "program::ToolContext::use_SFT_optimization";
val_t program___ToolContext___use_SFT_optimization(val_t p0);
typedef val_t (*program___ToolContext___use_SFT_optimization_t)(val_t p0);
val_t NEW_ToolContext_toolcontext___ToolContext___init();
static const char * const LOCATE_program___Program___tc = "program::Program::tc";
val_t program___Program___tc(val_t p0);
typedef val_t (*program___Program___tc_t)(val_t p0);
static const char * const LOCATE_program___Program___main_module = "program::Program::main_module";
val_t program___Program___main_module(val_t p0);
typedef val_t (*program___Program___main_module_t)(val_t p0);
static const char * const LOCATE_program___Program___main_method = "program::Program::main_method";
val_t program___Program___main_method(val_t p0);
typedef val_t (*program___Program___main_method_t)(val_t p0);
static const char * const LOCATE_program___Program___main_class = "program::Program::main_class";
val_t program___Program___main_class(val_t p0);
typedef val_t (*program___Program___main_class_t)(val_t p0);
static const char * const LOCATE_program___Program___finish_processing_classes = "program::Program::finish_processing_classes";
void program___Program___finish_processing_classes(val_t p0);
typedef void (*program___Program___finish_processing_classes_t)(val_t p0);
  typedef void (*CLOS_OC_program___Program___finish_processing_classes_1_0)(struct stack_frame_t *);
  void OC_program___Program___finish_processing_classes_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_program___Program___finish_processing_classes_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
static const char * const LOCATE_program___Program___compute_main_method = "program::Program::compute_main_method";
void program___Program___compute_main_method(val_t p0);
typedef void (*program___Program___compute_main_method_t)(val_t p0);
static const char * const LOCATE_program___Program___generate_allocation_iroutines = "program::Program::generate_allocation_iroutines";
void program___Program___generate_allocation_iroutines(val_t p0);
typedef void (*program___Program___generate_allocation_iroutines_t)(val_t p0);
  typedef void (*CLOS_OC_program___Program___generate_allocation_iroutines_1_0)(struct stack_frame_t *);
  void OC_program___Program___generate_allocation_iroutines_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_program___Program___generate_allocation_iroutines_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*CLOS_OC_program___Program___generate_allocation_iroutines_3_0)(struct stack_frame_t *);
      void OC_program___Program___generate_allocation_iroutines_3(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*OC_program___Program___generate_allocation_iroutines_3_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*CLOS_OC_program___Program___generate_allocation_iroutines_5_0)(struct stack_frame_t *);
      void OC_program___Program___generate_allocation_iroutines_5(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*OC_program___Program___generate_allocation_iroutines_5_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*CLOS_OC_program___Program___generate_allocation_iroutines_7_0)(struct stack_frame_t *);
      void OC_program___Program___generate_allocation_iroutines_7(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*OC_program___Program___generate_allocation_iroutines_7_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
typedef void (*CLOS_program___Program___with_each_iroutines_0)(struct stack_frame_t *, val_t, val_t);
static const char * const LOCATE_program___Program___with_each_iroutines = "program::Program::with_each_iroutines";
void program___Program___with_each_iroutines(val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
typedef void (*program___Program___with_each_iroutines_t)(val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*CLOS_OC_program___Program___with_each_iroutines_1_0)(struct stack_frame_t *);
  void OC_program___Program___with_each_iroutines_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_program___Program___with_each_iroutines_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
    typedef void (*CLOS_OC_program___Program___with_each_iroutines_2_0)(struct stack_frame_t *);
    void OC_program___Program___with_each_iroutines_2(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
    typedef void (*OC_program___Program___with_each_iroutines_2_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*CLOS_OC_program___Program___with_each_iroutines_3_0)(struct stack_frame_t *);
      void OC_program___Program___with_each_iroutines_3(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*OC_program___Program___with_each_iroutines_3_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*CLOS_OC_program___Program___with_each_iroutines_6_0)(struct stack_frame_t *);
      void OC_program___Program___with_each_iroutines_6(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*OC_program___Program___with_each_iroutines_6_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
typedef void (*CLOS_program___Program___with_each_methods_0)(struct stack_frame_t *, val_t);
static const char * const LOCATE_program___Program___with_each_methods = "program::Program::with_each_methods";
void program___Program___with_each_methods(val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
typedef void (*program___Program___with_each_methods_t)(val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*CLOS_OC_program___Program___with_each_methods_1_0)(struct stack_frame_t *);
  void OC_program___Program___with_each_methods_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_program___Program___with_each_methods_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
    typedef void (*CLOS_OC_program___Program___with_each_methods_2_0)(struct stack_frame_t *);
    void OC_program___Program___with_each_methods_2(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
    typedef void (*OC_program___Program___with_each_methods_2_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*CLOS_OC_program___Program___with_each_methods_3_0)(struct stack_frame_t *);
      void OC_program___Program___with_each_methods_3(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*OC_program___Program___with_each_methods_3_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
typedef void (*CLOS_program___Program___with_each_live_local_classes_0)(struct stack_frame_t *, val_t);
static const char * const LOCATE_program___Program___with_each_live_local_classes = "program::Program::with_each_live_local_classes";
void program___Program___with_each_live_local_classes(val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
typedef void (*program___Program___with_each_live_local_classes_t)(val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*CLOS_OC_program___Program___with_each_live_local_classes_1_0)(struct stack_frame_t *);
  void OC_program___Program___with_each_live_local_classes_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_program___Program___with_each_live_local_classes_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
static const char * const LOCATE_program___Program___init = "program::Program::init";
void program___Program___init(val_t p0, val_t p1, val_t p2, int* init_table);
typedef void (*program___Program___init_t)(val_t p0, val_t p1, val_t p2, int* init_table);
val_t NEW_Program_program___Program___init(val_t p0, val_t p1);
static const char * const LOCATE_program___MMLocalClass___init_var_iroutine = "program::MMLocalClass::init_var_iroutine";
val_t program___MMLocalClass___init_var_iroutine(val_t p0);
typedef val_t (*program___MMLocalClass___init_var_iroutine_t)(val_t p0);
static const char * const LOCATE_program___MMLocalClass___init_var_iroutine__eq = "program::MMLocalClass::init_var_iroutine=";
void program___MMLocalClass___init_var_iroutine__eq(val_t p0, val_t p1);
typedef void (*program___MMLocalClass___init_var_iroutine__eq_t)(val_t p0, val_t p1);
static const char * const LOCATE_program___MMLocalClass___checknew_iroutine = "program::MMLocalClass::checknew_iroutine";
val_t program___MMLocalClass___checknew_iroutine(val_t p0);
typedef val_t (*program___MMLocalClass___checknew_iroutine_t)(val_t p0);
static const char * const LOCATE_program___MMLocalClass___checknew_iroutine__eq = "program::MMLocalClass::checknew_iroutine=";
void program___MMLocalClass___checknew_iroutine__eq(val_t p0, val_t p1);
typedef void (*program___MMLocalClass___checknew_iroutine__eq_t)(val_t p0, val_t p1);
static const char * const LOCATE_program___MMLocalClass___new_instance_iroutine = "program::MMLocalClass::new_instance_iroutine";
val_t program___MMLocalClass___new_instance_iroutine(val_t p0);
typedef val_t (*program___MMLocalClass___new_instance_iroutine_t)(val_t p0);
val_t NEW_MMLocalClass_metamodel___abstractmetamodel___MMLocalClass___init(val_t p0, val_t p1, val_t p2);
#endif
