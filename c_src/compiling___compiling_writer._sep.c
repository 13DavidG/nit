/* This C file is generated by NIT to compile module compiling___compiling_writer. */
#include "compiling___compiling_writer._sep.h"
val_t compiling___compiling_writer___Writer___add(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 23;
  fra.me.meth = LOCATE_compiling___compiling_writer___Writer___add;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* compiling/compiling_writer.nit:26 */
  REGB0 = CALL_compiling___compiling_writer___Writer___is_frozen(fra.me.REG[0])(fra.me.REG[0]);
  REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Assert failed", NULL, LOCATE_compiling___compiling_writer, 26);
  }
  /* compiling/compiling_writer.nit:27 */
  fra.me.REG[2] = ATTR_compiling___compiling_writer___Writer____last_string(fra.me.REG[0]);
  /* compiling/compiling_writer.nit:28 */
  fra.me.REG[1] = NEW_WriterStrings_compiling___compiling_writer___WriterStrings___init(fra.me.REG[1]);
  /* compiling/compiling_writer.nit:29 */
  REGB0 = TAG_Bool(fra.me.REG[2]==NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    REGB1 = TAG_Bool(fra.me.REG[2]==NIT_NULL);
    if (UNTAG_Bool(REGB1)) {
      REGB1 = TAG_Bool(false);
      REGB0 = REGB1;
    } else {
      REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[2])(fra.me.REG[2], NIT_NULL);
      REGB0 = REGB1;
    }
  }
  if (UNTAG_Bool(REGB0)) {
    /* compiling/compiling_writer.nit:30 */
    CALL_compiling___compiling_writer___Writer___internal_append(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  } else {
    /* compiling/compiling_writer.nit:32 */
    ATTR_compiling___compiling_writer___WriterStrings____next(fra.me.REG[2]) = fra.me.REG[1];
  }
  /* compiling/compiling_writer.nit:34 */
  ATTR_compiling___compiling_writer___Writer____last_string(fra.me.REG[0]) = fra.me.REG[1];
  /* compiling/compiling_writer.nit:35 */
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
val_t compiling___compiling_writer___Writer___add_all(val_t p0, val_t p1, val_t p2){
  struct {struct stack_frame_t me; val_t MORE_REG[4];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t REGB2;
  val_t REGB3;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 38;
  fra.me.meth = LOCATE_compiling___compiling_writer___Writer___add_all;
  fra.me.has_broke = 0;
  fra.me.REG_size = 5;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[4] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  fra.me.REG[2] = p2;
  /* compiling/compiling_writer.nit:41 */
  REGB0 = CALL_compiling___compiling_writer___Writer___is_frozen(fra.me.REG[0])(fra.me.REG[0]);
  REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Assert failed", NULL, LOCATE_compiling___compiling_writer, 41);
  }
  /* compiling/compiling_writer.nit:42 */
  REGB0 = TAG_Bool(true);
  /* ../lib/standard/collection/array.nit:269 */
  REGB1 = TAG_Int(0);
  /* ../lib/standard/collection/array.nit:270 */
  REGB2 = TAG_Bool(ATTR_standard___collection___array___AbstractArrayRead____length(fra.me.REG[1])!=NIT_NULL);
  if (UNTAG_Bool(REGB2)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_length", LOCATE_standard___collection___array, 270);
  }
  REGB2 = ATTR_standard___collection___array___AbstractArrayRead____length(fra.me.REG[1]);
  /* ../lib/standard/collection/array.nit:271 */
  fra.me.REG[3] = ATTR_standard___collection___array___Array____items(fra.me.REG[1]);
  /* ../lib/standard/collection/array.nit:272 */
  while(1) {
    /* ../lib/standard/collection/array.nit:24 */
    REGB2 = TAG_Bool(ATTR_standard___collection___array___AbstractArrayRead____length(fra.me.REG[1])!=NIT_NULL);
    if (UNTAG_Bool(REGB2)) {
    } else {
      nit_abort("Uninitialized attribute %s", "_length", LOCATE_standard___collection___array, 24);
    }
    REGB2 = ATTR_standard___collection___array___AbstractArrayRead____length(fra.me.REG[1]);
    REGB3 = TAG_Bool(VAL_ISA(REGB2, VTCOLOR_standard___kernel___Comparable___OTHER(REGB1), VTID_standard___kernel___Comparable___OTHER(REGB1))) /*cast OTHER*/;
    if (UNTAG_Bool(REGB3)) {
    } else {
      nit_abort("Cast failed", NULL, LOCATE_standard___kernel, 0);
    }
    /* ../lib/standard/kernel.nit:232 */
    REGB2 = TAG_Bool(UNTAG_Int(REGB1)<UNTAG_Int(REGB2));
    /* ../lib/standard/collection/array.nit:272 */
    if (UNTAG_Bool(REGB2)) {
      /* ../lib/standard/collection/array.nit:273 */
      REGB2 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
      if (UNTAG_Bool(REGB2)) {
        nit_abort("Reciever is null", NULL, LOCATE_standard___collection___array, 273);
      }
      /* ../lib/standard/collection/array.nit:718 */
      fra.me.REG[4] = ((Nit_NativeArray)fra.me.REG[3])->val[UNTAG_Int(REGB1)];
      /* compiling/compiling_writer.nit:44 */
      if (UNTAG_Bool(REGB0)) {
        REGB2 = TAG_Bool(false);
        REGB0 = REGB2;
      } else {
        CALL_compiling___compiling_writer___Writer___add(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[2]);
      }
      /* compiling/compiling_writer.nit:45 */
      CALL_compiling___compiling_writer___Writer___add(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[4]);
      /* ../lib/standard/collection/array.nit:274 */
      REGB2 = TAG_Int(1);
      /* ../lib/standard/kernel.nit:235 */
      REGB2 = TAG_Int(UNTAG_Int(REGB1)+UNTAG_Int(REGB2));
      /* ../lib/standard/collection/array.nit:274 */
      REGB1 = REGB2;
    } else {
      /* ../lib/standard/collection/array.nit:272 */
      goto label1;
    }
  }
  label1: while(0);
  /* compiling/compiling_writer.nit:47 */
  goto label2;
  label2: while(0);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
val_t compiling___compiling_writer___Writer___append(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 56;
  fra.me.meth = LOCATE_compiling___compiling_writer___Writer___append;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* compiling/compiling_writer.nit:59 */
  REGB0 = CALL_compiling___compiling_writer___Writer___is_frozen(fra.me.REG[0])(fra.me.REG[0]);
  REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Assert failed", NULL, LOCATE_compiling___compiling_writer, 59);
  }
  /* compiling/compiling_writer.nit:60 */
  fra.me.REG[1] = NEW_WriterCoreNode_compiling___compiling_writer___WriterCoreNode___init(fra.me.REG[1]);
  CALL_compiling___compiling_writer___Writer___internal_append(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  /* compiling/compiling_writer.nit:61 */
  ATTR_compiling___compiling_writer___Writer____last_string(fra.me.REG[0]) = NIT_NULL;
  /* compiling/compiling_writer.nit:62 */
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
void compiling___compiling_writer___Writer___internal_append(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 65;
  fra.me.meth = LOCATE_compiling___compiling_writer___Writer___internal_append;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* compiling/compiling_writer.nit:68 */
  fra.me.REG[2] = ATTR_compiling___compiling_writer___Writer____first_sub_writer(fra.me.REG[0]);
  REGB0 = TAG_Bool(fra.me.REG[2]==NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    REGB1 = TAG_Bool(fra.me.REG[2]==NIT_NULL);
    if (UNTAG_Bool(REGB1)) {
      REGB1 = TAG_Bool(false);
      REGB0 = REGB1;
    } else {
      REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[2])(fra.me.REG[2], NIT_NULL);
      REGB0 = REGB1;
    }
  }
  if (UNTAG_Bool(REGB0)) {
    ATTR_compiling___compiling_writer___Writer____first_sub_writer(fra.me.REG[0]) = fra.me.REG[1];
  }
  /* compiling/compiling_writer.nit:69 */
  fra.me.REG[2] = ATTR_compiling___compiling_writer___Writer____last_sub_writer(fra.me.REG[0]);
  /* compiling/compiling_writer.nit:70 */
  REGB0 = TAG_Bool(fra.me.REG[2]==NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    REGB1 = TAG_Bool(fra.me.REG[2]==NIT_NULL);
    if (UNTAG_Bool(REGB1)) {
      REGB1 = TAG_Bool(false);
      REGB0 = REGB1;
    } else {
      REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[2])(fra.me.REG[2], NIT_NULL);
      REGB0 = REGB1;
    }
  }
  REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
  if (UNTAG_Bool(REGB0)) {
    ATTR_compiling___compiling_writer___WriterNode____next_writer(fra.me.REG[2]) = fra.me.REG[1];
  }
  /* compiling/compiling_writer.nit:71 */
  ATTR_compiling___compiling_writer___Writer____last_sub_writer(fra.me.REG[0]) = fra.me.REG[1];
  stack_frame_head = fra.me.prev;
  return;
}
val_t compiling___compiling_writer___Writer___sub(val_t p0){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 74;
  fra.me.meth = LOCATE_compiling___compiling_writer___Writer___sub;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* compiling/compiling_writer.nit:77 */
  fra.me.REG[1] = NEW_Writer_compiling___compiling_writer___Writer___init();
  /* compiling/compiling_writer.nit:78 */
  CALL_compiling___compiling_writer___Writer___append(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  /* compiling/compiling_writer.nit:79 */
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[1];
}
void compiling___compiling_writer___Writer___write_to_stream(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[3];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 84;
  fra.me.meth = LOCATE_compiling___compiling_writer___Writer___write_to_stream;
  fra.me.has_broke = 0;
  fra.me.REG_size = 4;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* compiling/compiling_writer.nit:87 */
  REGB0 = TAG_Bool(ATTR_compiling___compiling_writer___Writer____is_writing(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_is_writing", LOCATE_compiling___compiling_writer, 87);
  }
  REGB0 = ATTR_compiling___compiling_writer___Writer____is_writing(fra.me.REG[0]);
  REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Assert failed", NULL, LOCATE_compiling___compiling_writer, 87);
  }
  /* compiling/compiling_writer.nit:88 */
  REGB0 = TAG_Bool(true);
  ATTR_compiling___compiling_writer___Writer____is_writing(fra.me.REG[0]) = REGB0;
  /* compiling/compiling_writer.nit:89 */
  fra.me.REG[2] = ATTR_compiling___compiling_writer___Writer____first_sub_writer(fra.me.REG[0]);
  /* compiling/compiling_writer.nit:90 */
  while(1) {
    REGB0 = TAG_Bool(fra.me.REG[2]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
    } else {
      REGB1 = TAG_Bool(fra.me.REG[2]==NIT_NULL);
      if (UNTAG_Bool(REGB1)) {
        REGB1 = TAG_Bool(false);
        REGB0 = REGB1;
      } else {
        REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[2])(fra.me.REG[2], NIT_NULL);
        REGB0 = REGB1;
      }
    }
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
    if (UNTAG_Bool(REGB0)) {
      /* compiling/compiling_writer.nit:91 */
      REGB0 = TAG_Bool(fra.me.REG[2]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
        nit_abort("Reciever is null", NULL, LOCATE_compiling___compiling_writer, 91);
      }
      CALL_compiling___compiling_writer___WriterNode___internal_write_to_stream(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
      /* compiling/compiling_writer.nit:92 */
      fra.me.REG[3] = ATTR_compiling___compiling_writer___WriterNode____next_writer(fra.me.REG[2]);
      fra.me.REG[2] = fra.me.REG[3];
    } else {
      /* compiling/compiling_writer.nit:90 */
      goto label1;
    }
  }
  label1: while(0);
  /* compiling/compiling_writer.nit:94 */
  REGB0 = TAG_Bool(false);
  ATTR_compiling___compiling_writer___Writer____is_writing(fra.me.REG[0]) = REGB0;
  stack_frame_head = fra.me.prev;
  return;
}
val_t compiling___compiling_writer___Writer___is_frozen(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 97;
  fra.me.meth = LOCATE_compiling___compiling_writer___Writer___is_frozen;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* compiling/compiling_writer.nit:97 */
  REGB0 = TAG_Bool(ATTR_compiling___compiling_writer___Writer____is_frozen(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_is_frozen", LOCATE_compiling___compiling_writer, 97);
  }
  REGB0 = ATTR_compiling___compiling_writer___Writer____is_frozen(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
void compiling___compiling_writer___Writer___freeze(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 100;
  fra.me.meth = LOCATE_compiling___compiling_writer___Writer___freeze;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* compiling/compiling_writer.nit:103 */
  REGB0 = CALL_compiling___compiling_writer___Writer___is_frozen(fra.me.REG[0])(fra.me.REG[0]);
  if (UNTAG_Bool(REGB0)) {
    goto label1;
  }
  /* compiling/compiling_writer.nit:104 */
  REGB0 = TAG_Bool(true);
  ATTR_compiling___compiling_writer___Writer____is_frozen(fra.me.REG[0]) = REGB0;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return;
}
void compiling___compiling_writer___Writer___init(val_t p0, int* init_table){
  int itpos0 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_compiling___compiling_writer___Writer].i;
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  if (init_table[itpos0]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 107;
  fra.me.meth = LOCATE_compiling___compiling_writer___Writer___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  stack_frame_head = fra.me.prev;
  init_table[itpos0] = 1;
  return;
}
void compiling___compiling_writer___WriterNode___internal_write_to_stream(val_t p0, val_t p1){
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 115;
  fra.me.meth = LOCATE_compiling___compiling_writer___WriterNode___internal_write_to_stream;
  fra.me.has_broke = 0;
  fra.me.REG_size = 0;
  fra.me.nitni_local_ref_head = NULL;
  /* compiling/compiling_writer.nit:115 */
  nit_abort("Deferred method called", NULL, LOCATE_compiling___compiling_writer, 115);
  stack_frame_head = fra.me.prev;
  return;
}
void compiling___compiling_writer___WriterNode___init(val_t p0, int* init_table){
  int itpos1 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_compiling___compiling_writer___WriterNode].i;
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  if (init_table[itpos1]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 0;
  fra.me.meth = LOCATE_compiling___compiling_writer___WriterNode___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 0;
  fra.me.nitni_local_ref_head = NULL;
  stack_frame_head = fra.me.prev;
  init_table[itpos1] = 1;
  return;
}
void compiling___compiling_writer___WriterCoreNode___internal_write_to_stream(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 124;
  fra.me.meth = LOCATE_compiling___compiling_writer___WriterCoreNode___internal_write_to_stream;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* compiling/compiling_writer.nit:124 */
  REGB0 = TAG_Bool(ATTR_compiling___compiling_writer___WriterCoreNode____writer(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_writer", LOCATE_compiling___compiling_writer, 124);
  }
  fra.me.REG[0] = ATTR_compiling___compiling_writer___WriterCoreNode____writer(fra.me.REG[0]);
  CALL_compiling___compiling_writer___Writer___write_to_stream(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  stack_frame_head = fra.me.prev;
  return;
}
void compiling___compiling_writer___WriterCoreNode___init(val_t p0, val_t p1, int* init_table){
  int itpos2 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_compiling___compiling_writer___WriterCoreNode].i;
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t tmp;
  if (init_table[itpos2]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 126;
  fra.me.meth = LOCATE_compiling___compiling_writer___WriterCoreNode___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* compiling/compiling_writer.nit:126 */
  fra.me.REG[2] = fra.me.REG[0];
  CALL_compiling___compiling_writer___WriterNode___init(fra.me.REG[0])(fra.me.REG[0], init_table);
  ATTR_compiling___compiling_writer___WriterCoreNode____writer(fra.me.REG[2]) = fra.me.REG[1];
  stack_frame_head = fra.me.prev;
  init_table[itpos2] = 1;
  return;
}
void compiling___compiling_writer___WriterStrings___init(val_t p0, val_t p1, int* init_table){
  int itpos3 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_compiling___compiling_writer___WriterStrings].i;
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t tmp;
  if (init_table[itpos3]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 138;
  fra.me.meth = LOCATE_compiling___compiling_writer___WriterStrings___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* compiling/compiling_writer.nit:138 */
  fra.me.REG[2] = fra.me.REG[0];
  CALL_compiling___compiling_writer___WriterNode___init(fra.me.REG[0])(fra.me.REG[0], init_table);
  /* compiling/compiling_writer.nit:140 */
  ATTR_compiling___compiling_writer___WriterStrings____string(fra.me.REG[2]) = fra.me.REG[1];
  stack_frame_head = fra.me.prev;
  init_table[itpos3] = 1;
  return;
}
void compiling___compiling_writer___WriterStrings___internal_write_to_stream(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_compiling___compiling_writer;
  fra.me.line = 143;
  fra.me.meth = LOCATE_compiling___compiling_writer___WriterStrings___internal_write_to_stream;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* compiling/compiling_writer.nit:146 */
  while(1) {
    REGB0 = TAG_Bool(fra.me.REG[0]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
    } else {
      REGB1 = TAG_Bool(fra.me.REG[0]==NIT_NULL);
      if (UNTAG_Bool(REGB1)) {
        REGB1 = TAG_Bool(false);
        REGB0 = REGB1;
      } else {
        REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[0])(fra.me.REG[0], NIT_NULL);
        REGB0 = REGB1;
      }
    }
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
    if (UNTAG_Bool(REGB0)) {
      /* compiling/compiling_writer.nit:147 */
      REGB0 = TAG_Bool(ATTR_compiling___compiling_writer___WriterStrings____string(fra.me.REG[0])!=NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
      } else {
        nit_abort("Uninitialized attribute %s", "_string", LOCATE_compiling___compiling_writer, 147);
      }
      fra.me.REG[2] = ATTR_compiling___compiling_writer___WriterStrings____string(fra.me.REG[0]);
      CALL_standard___stream___OStream___write(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[2]);
      /* compiling/compiling_writer.nit:148 */
      fra.me.REG[2] = ATTR_compiling___compiling_writer___WriterStrings____next(fra.me.REG[0]);
      fra.me.REG[0] = fra.me.REG[2];
    } else {
      /* compiling/compiling_writer.nit:146 */
      goto label1;
    }
  }
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return;
}
