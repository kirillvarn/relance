
undefined4 * __thiscall
FUN_004510f0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9e07;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044fbe0(param_2,param_4,param_5);
  local_4 = 0;
  HardpointSummary::HardpointSummary((HardpointSummary *)(param_1 + 0x5c));
  *param_1 = &PTR_LAB_005ccf6c;
  param_1[1] = &PTR_LAB_005ccf3c;
  param_1[2] = &PTR_LAB_005ccf20;
  param_1[3] = &PTR_LAB_005ccf00;
  param_1[4] = &PTR_LAB_005ccec8;
  param_1[5] = &PTR_LAB_005ccea0;
  param_1[6] = &PTR_LAB_005cce7c;
  param_1[7] = &PTR_LAB_005cce44;
  param_1[8] = &PTR_LAB_005cce2c;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  puVar2 = param_1 + 0x20;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x37] = 0x3f800000;
  param_1[0x33] = 0x3f800000;
  param_1[0x2f] = 0x3f800000;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = 0;
  puVar2 = param_1 + 0x48;
  do {
    puVar2[-0x10] = 0xffffffff;
    *puVar2 = 0xffffffff;
    *(undefined1 *)(iVar1 + 0x160 + (int)param_1) = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0x10);
  HardpointSummary::clear((HardpointSummary *)(param_1 + 0x5c));
  ExceptionList = local_c;
  return param_1;
}

