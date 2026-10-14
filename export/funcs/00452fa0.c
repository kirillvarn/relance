
undefined4 * __thiscall
FUN_00452fa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [9];
  undefined4 local_9c [4];
  undefined4 local_8c;
  undefined4 local_88;
  int local_7c;
  undefined1 local_74 [104];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9e7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044fbe0(param_2,param_3,param_4);
  *param_1 = &PTR_LAB_005cd524;
  param_1[1] = &PTR_LAB_005cd4f4;
  param_1[2] = &PTR_LAB_005cd4d8;
  param_1[3] = &PTR_LAB_005cd4b8;
  param_1[4] = &PTR_LAB_005cd480;
  param_1[5] = &PTR_LAB_005cd458;
  param_1[6] = &PTR_LAB_005cd434;
  param_1[7] = &PTR_LAB_005cd3fc;
  param_1[8] = &PTR_LAB_005cd3e4;
  local_cc = *(undefined4 *)(param_4 + 8);
  uVar1 = *(undefined1 *)(param_4 + 0x40);
  puVar4 = (undefined4 *)(param_4 + 0x44);
  puVar5 = local_9c;
  for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_c8 = *(undefined4 *)(param_4 + 0xc);
  local_c4 = *(undefined4 *)(param_4 + 0x10);
  puVar4 = (undefined4 *)(param_4 + 0x14);
  puVar5 = local_c0;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_4 = 0;
  uVar2 = FUN_00556fd0(&local_cc,local_74,local_9c + 3,uVar1);
  puVar4 = local_c0;
  puVar5 = param_1 + 0x1d;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1[0x26] = local_9c[3];
  param_1[0x27] = local_8c;
  param_1[0x28] = local_88;
  param_1[0x1b] = uVar2;
  iVar3 = 0;
  do {
    if ((&DAT_0066d130)[iVar3] == 0) {
      (&DAT_0066d130)[iVar3] = uVar2;
      (&DAT_0066d230)[iVar3] = local_7c != 0;
      param_1[0x1c] = iVar3;
      ExceptionList = local_c;
      return param_1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x40);
  param_1[0x1c] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

