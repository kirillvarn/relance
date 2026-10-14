
undefined4 * __fastcall FUN_00449260(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9afa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005593d0(0);
  param_1[0xc] = &PTR_LAB_005cbed8;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00555a40();
  local_4._0_1_ = 2;
  FUN_0059ec40();
  local_4._0_1_ = 3;
  FUN_004488d0();
  *param_1 = &PTR_FUN_005cbea0;
  param_1[0xc] = &PTR_LAB_005cbe98;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar1 = param_1 + 0x19;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  }
  param_1[0xb9] = 0;
  puVar1 = param_1 + 0x39;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  param_1[0x13a] = 0;
  puVar1 = param_1 + 0xba;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  FUN_004546d0();
  param_1[0x13e] = 0;
  *(undefined1 *)(param_1 + 0x13f) = 0;
  param_1[0x140] = 0;
  *(undefined1 *)(param_1 + 0x145) = 0;
  *(undefined1 *)((int)param_1 + 0x515) = 0;
  *(undefined1 *)((int)param_1 + 0x516) = 0;
  *(undefined1 *)((int)param_1 + 0x517) = 0;
  puVar1 = param_1 + 0x146;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  param_1[0x206] = 0;
  puVar1 = param_1 + 0x186;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  puVar1 = param_1 + 0x207;
  for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  param_1[0x407] = 0;
  FUN_0044ceb0();
  puVar1 = param_1 + 0x433;
  puVar3 = param_1 + 0x423;
  do {
    puVar3[-0x15] = 0;
    *puVar3 = 0;
    puVar3[0x15] = 0;
    puVar3 = puVar3 + 1;
    *(undefined1 *)(puVar1 + -0x15) = 1;
    *(undefined1 *)puVar1 = 1;
    *(undefined1 *)(puVar1 + 0x15) = 1;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  } while ((int)((-0x10cc - (int)param_1) + (int)puVar1) < 0x10);
  param_1[0x422] = 0;
  param_1[0x437] = 0;
  param_1[0x44c] = 0;
  *(undefined1 *)(param_1 + 0x4ce) = 0;
  param_1[0x4e9] = 0;
  *(undefined1 *)(param_1 + 0x4d0) = 0;
  ExceptionList = local_c;
  return param_1;
}

