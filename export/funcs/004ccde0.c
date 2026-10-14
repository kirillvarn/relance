
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ccde0(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c [9];
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined1 local_3c [24];
  Vector local_24 [36];
  
  local_9c = *(float *)(param_1 + 0x44) * _DAT_005d74c8;
  if (_DAT_005c7474 <= local_9c) {
    if (_DAT_005c75dc < local_9c) {
      local_9c = 1.0;
    }
  }
  else {
    local_9c = 0.0;
  }
  local_98 = *(float *)(param_1 + 0x44);
  if (_DAT_005c7474 <= local_98) {
    if (_DAT_005c75dc < local_98) {
      local_98 = 1.0;
    }
  }
  else {
    local_98 = 0.0;
  }
  FUN_00423b60(&local_88,param_1 + 0x24,param_1 + 0x30);
  FUN_00422b80(local_88 * local_9c,local_84 * local_9c,local_80 * local_9c);
  FUN_00423b30(&local_78,param_1 + 0x30,&local_94);
  fVar2 = local_98 * *(float *)(param_1 + 0x3c) * _DAT_005c75e0;
  fVar3 = local_98 * *(float *)(param_1 + 0x40) * _DAT_005c75e0;
  FUN_004215b0();
  local_88 = -fVar2;
  local_40 = 0;
  local_44 = 0.0;
  local_48 = 0.0;
  local_80 = 0.0;
  local_84 = fVar3;
  local_7c = local_88;
  FUN_00423b30(&local_94,&local_78,&local_88);
  local_48 = (float)local_94;
  local_44 = (float)local_90;
  local_40 = local_8c;
  puVar4 = local_6c;
  puVar7 = (undefined4 *)(param_1 + 0x78);
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  local_94 = 0;
  local_90 = 0x43340000;
  local_8c = 0;
  puVar4 = (undefined4 *)EulerMatrix(local_24);
  puVar7 = local_6c;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_00422b80(local_78 + fVar2,local_74 + fVar3,local_70);
  local_48 = (float)local_94;
  local_44 = (float)local_90;
  local_40 = local_8c;
  puVar4 = local_6c;
  puVar7 = (undefined4 *)(param_1 + 0xa8);
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  local_94 = 0x43340000;
  local_90 = 0;
  local_8c = 0;
  puVar4 = (undefined4 *)EulerMatrix(local_24);
  puVar7 = local_6c;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  fVar1 = local_7c + local_78;
  local_7c = -fVar3;
  FUN_00422b80(fVar1,-fVar3 + local_74,local_70);
  local_48 = (float)local_94;
  local_44 = (float)local_90;
  local_40 = local_8c;
  puVar4 = local_6c;
  puVar7 = (undefined4 *)(param_1 + 0xd8);
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  local_94 = 0x43340000;
  local_90 = 0x43340000;
  local_8c = 0;
  puVar4 = (undefined4 *)EulerMatrix(local_24);
  local_88 = local_78 + fVar2;
  puVar7 = local_6c;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  local_48 = local_88;
  local_84 = local_7c + local_74;
  local_80 = (float)local_70;
  local_44 = local_84;
  local_40 = local_70;
  puVar4 = local_6c;
  puVar7 = (undefined4 *)(param_1 + 0x108);
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  (**(code **)(*param_2 + 0x44))(param_2,local_3c,param_1 + 0x9c);
  (**(code **)(*param_2 + 0x44))(param_2,local_3c,param_1 + 300);
  uVar5 = ftol();
  *(undefined4 *)(param_1 + 4) = uVar5;
  uVar5 = ftol();
  *(undefined4 *)(param_1 + 8) = uVar5;
  uVar5 = ftol();
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  uVar5 = ftol();
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  return;
}

