
undefined4 * __fastcall FUN_0051e100(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bff5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0051b2f0();
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x8d] = 0x3f800000;
  param_1[0x89] = 0x3f800000;
  param_1[0x85] = 0x3f800000;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  local_4 = 0;
  *param_1 = &PTR_LAB_005dc164;
  param_1[0x3e] = 0;
  puVar1 = operator_new(0x38);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 1;
    *puVar1 = &PTR_LAB_005dc140;
  }
  param_1[0x3f] = puVar1;
  puVar1 = operator_new(0x70);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[0xc] = 0x3f800000;
    puVar1[8] = 0x3f800000;
    puVar1[4] = 0x3f800000;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0xd] = 0;
    puVar1[0x18] = 0x3f800000;
    puVar1[0x14] = 0x3f800000;
    puVar1[0x10] = 0x3f800000;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x15] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x11] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x19] = 0;
    *puVar1 = &PTR_LAB_005dc1f8;
  }
  param_1[0x40] = puVar1;
  param_1[0x42] = 0xffffffff;
  param_1[0x41] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

