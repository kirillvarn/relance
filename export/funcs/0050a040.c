
undefined4 * __fastcall FUN_0050a040(undefined4 *param_1)

{
  void *pvVar1;
  undefined1 local_12;
  undefined1 local_11;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bfb23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_005db1f0;
  local_4 = 0;
  local_10 = param_1;
  FUN_0050c0b0(&local_11,0,&local_12);
  param_1[6] = param_1[2];
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)(param_1 + 0x19) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0x1a] = pvVar1;
  param_1[0x1b] = 0;
  param_1[0xb] = 0x3dcccccd;
  param_1[10] = 0x3dcccccd;
  param_1[9] = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[7] = 0;
  param_1[0x1c] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = &PTR_LAB_005db1b4;
  param_1[8] = 0x20;
  param_1[0xc] = 0x43160000;
  param_1[0x17] = 0x41200000;
  param_1[0x18] = 2;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0x3f800000;
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  ExceptionList = local_c;
  return param_1;
}

