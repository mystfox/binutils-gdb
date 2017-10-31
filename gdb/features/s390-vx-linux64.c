/* THIS FILE IS GENERATED.  -*- buffer-read-only: t -*- vi:set ro:
  Original: s390-vx-linux64.xml */

#include "defs.h"
#include "osabi.h"
#include "target-descriptions.h"

struct target_desc *tdesc_s390_vx_linux64;
static void
initialize_tdesc_s390_vx_linux64 (void)
{
  struct target_desc *result = allocate_target_description ();
  set_tdesc_architecture (result, bfd_scan_arch ("s390:31-bit"));

  struct tdesc_feature *feature;

  feature = tdesc_create_feature (result, "org.gnu.gdb.s390.core");
  tdesc_create_reg (feature, "pswm", 0, 1, "psw", 32, "uint32");
  tdesc_create_reg (feature, "pswa", 1, 1, "psw", 32, "uint32");
  tdesc_create_reg (feature, "r0h", 2, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r0l", 3, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r1h", 4, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r1l", 5, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r2h", 6, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r2l", 7, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r3h", 8, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r3l", 9, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r4h", 10, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r4l", 11, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r5h", 12, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r5l", 13, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r6h", 14, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r6l", 15, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r7h", 16, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r7l", 17, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r8h", 18, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r8l", 19, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r9h", 20, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r9l", 21, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r10h", 22, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r10l", 23, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r11h", 24, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r11l", 25, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r12h", 26, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r12l", 27, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r13h", 28, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r13l", 29, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r14h", 30, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r14l", 31, 1, "lower", 32, "uint32");
  tdesc_create_reg (feature, "r15h", 32, 1, "upper", 32, "uint32");
  tdesc_create_reg (feature, "r15l", 33, 1, "lower", 32, "uint32");

  feature = tdesc_create_feature (result, "org.gnu.gdb.s390.acr");
  tdesc_create_reg (feature, "acr0", 34, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr1", 35, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr2", 36, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr3", 37, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr4", 38, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr5", 39, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr6", 40, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr7", 41, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr8", 42, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr9", 43, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr10", 44, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr11", 45, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr12", 46, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr13", 47, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr14", 48, 1, "access", 32, "uint32");
  tdesc_create_reg (feature, "acr15", 49, 1, "access", 32, "uint32");

  feature = tdesc_create_feature (result, "org.gnu.gdb.s390.fpr");
  tdesc_create_reg (feature, "fpc", 50, 1, "float", 32, "uint32");
  tdesc_create_reg (feature, "f0", 51, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f1", 52, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f2", 53, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f3", 54, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f4", 55, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f5", 56, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f6", 57, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f7", 58, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f8", 59, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f9", 60, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f10", 61, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f11", 62, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f12", 63, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f13", 64, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f14", 65, 1, "float", 64, "ieee_double");
  tdesc_create_reg (feature, "f15", 66, 1, "float", 64, "ieee_double");

  feature = tdesc_create_feature (result, "org.gnu.gdb.s390.linux");
  tdesc_create_reg (feature, "orig_r2", 67, 1, "system", 32, "uint32");
  tdesc_create_reg (feature, "last_break", 68, 0, "system", 32, "code_ptr");
  tdesc_create_reg (feature, "system_call", 69, 1, "system", 32, "uint32");

  feature = tdesc_create_feature (result, "org.gnu.gdb.s390.vx");
  struct tdesc_type *field_type;
  field_type = tdesc_named_type (feature, "ieee_single");
  tdesc_create_vector (feature, "v4f", field_type, 4);

  field_type = tdesc_named_type (feature, "ieee_double");
  tdesc_create_vector (feature, "v2d", field_type, 2);

  field_type = tdesc_named_type (feature, "int8");
  tdesc_create_vector (feature, "v16i8", field_type, 16);

  field_type = tdesc_named_type (feature, "int16");
  tdesc_create_vector (feature, "v8i16", field_type, 8);

  field_type = tdesc_named_type (feature, "int32");
  tdesc_create_vector (feature, "v4i32", field_type, 4);

  field_type = tdesc_named_type (feature, "int64");
  tdesc_create_vector (feature, "v2i64", field_type, 2);

  struct tdesc_type *type;
  type = tdesc_create_union (feature, "vec128");
  field_type = tdesc_named_type (feature, "v4f");
  tdesc_add_field (type, "v4_float", field_type);
  field_type = tdesc_named_type (feature, "v2d");
  tdesc_add_field (type, "v2_double", field_type);
  field_type = tdesc_named_type (feature, "v16i8");
  tdesc_add_field (type, "v16_int8", field_type);
  field_type = tdesc_named_type (feature, "v8i16");
  tdesc_add_field (type, "v8_int16", field_type);
  field_type = tdesc_named_type (feature, "v4i32");
  tdesc_add_field (type, "v4_int32", field_type);
  field_type = tdesc_named_type (feature, "v2i64");
  tdesc_add_field (type, "v2_int64", field_type);
  field_type = tdesc_named_type (feature, "uint128");
  tdesc_add_field (type, "uint128", field_type);

  tdesc_create_reg (feature, "v0l", 70, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v1l", 71, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v2l", 72, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v3l", 73, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v4l", 74, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v5l", 75, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v6l", 76, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v7l", 77, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v8l", 78, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v9l", 79, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v10l", 80, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v11l", 81, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v12l", 82, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v13l", 83, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v14l", 84, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v15l", 85, 1, NULL, 64, "uint64");
  tdesc_create_reg (feature, "v16", 86, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v17", 87, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v18", 88, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v19", 89, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v20", 90, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v21", 91, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v22", 92, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v23", 93, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v24", 94, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v25", 95, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v26", 96, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v27", 97, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v28", 98, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v29", 99, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v30", 100, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "v31", 101, 1, NULL, 128, "vec128");

  tdesc_s390_vx_linux64 = result;
}
