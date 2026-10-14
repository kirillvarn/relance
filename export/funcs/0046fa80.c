
void __fastcall FUN_0046fa80(int param_1)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  int unaff_EBP;
  int iVar8;
  int *piVar9;
  uint uStack_40;
  undefined2 *puStack_3c;
  undefined2 *puStack_38;
  uint uStack_34;
  int local_20;
  int local_14;
  
  if (DAT_0066dac0 == 0) {
    local_20 = DAT_0066dac0;
  }
  else {
    local_20 = (DAT_0066dac4 - DAT_0066dac0) / 0xc;
  }
  iVar7 = *(int *)(param_1 + 0x350);
  iVar8 = iVar7 * 0xc;
  piVar9 = (int *)(param_1 + 0x358);
  local_14 = 0xd;
  do {
    if (iVar7 < local_20) {
      pbVar1 = (byte *)(piVar9[1] + 0x6c);
      *pbVar1 = *pbVar1 | 3;
      *(byte *)(piVar9[-1] + 0x6c) = *(byte *)(piVar9[-1] + 0x6c) | 3;
      *(byte *)(piVar9[2] + 0x6c) = *(byte *)(piVar9[2] + 0x6c) | 3;
      *(byte *)(*piVar9 + 0x6c) = *(byte *)(*piVar9 + 0x6c) | 3;
      puStack_38 = *(undefined2 **)(DAT_0066dac0 + 4 + iVar8);
      puVar2 = (uint *)(DAT_0066dac0 + iVar8);
      uStack_34 = 0xffffffff;
      puStack_3c = &DAT_0066fc60;
      uStack_40 = 0x46fb2c;
      FUN_004779a0();
      uStack_34 = 0;
      puStack_38 = &DAT_0066fc60;
      puStack_3c = (undefined2 *)0x1d;
      uStack_40 = 0x46fb43;
      (**(code **)(*(int *)piVar9[-1] + 0xa8))();
      uVar3 = 0x3da;
      if ((char)puVar2[2] != '\0') {
        uVar3 = 0x3d9;
      }
      uStack_40 = 0;
      (**(code **)(*(int *)*piVar9 + 0xa8))(0x1e,uVar3);
      uStack_34 = *puVar2;
      FUN_00432240(&stack0xffffffd8,&uStack_34);
      if (unaff_EBP == DAT_0066daa8) {
        puVar6 = &DAT_005d0214;
      }
      else {
        puVar6 = *(undefined **)(unaff_EBP + 0x10);
      }
      (**(code **)(*(int *)piVar9[1] + 0xa8))(0x1d,puVar6,0);
      uStack_40 = *puVar2;
      iVar4 = FUN_0052c7a0(&uStack_40);
      if ((iVar4 == DAT_0066da94) || (uStack_40 < *(uint *)(iVar4 + 0xc))) {
        piVar5 = (int *)&stack0xffffffd4;
      }
      else {
        piVar5 = (int *)&stack0xffffffd0;
      }
      if (*piVar5 == DAT_0066da94) {
        puVar6 = &DAT_005d0214;
      }
      else {
        puVar6 = *(undefined **)(*piVar5 + 0x10);
      }
      (**(code **)(*(int *)piVar9[2] + 0xa8))(0x1d,puVar6,0);
    }
    else {
      pbVar1 = (byte *)(piVar9[1] + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
      *(byte *)(piVar9[-1] + 0x6c) = *(byte *)(piVar9[-1] + 0x6c) & 0xfc;
      *(byte *)(piVar9[2] + 0x6c) = *(byte *)(piVar9[2] + 0x6c) & 0xfc;
      *(byte *)(*piVar9 + 0x6c) = *(byte *)(*piVar9 + 0x6c) & 0xfc;
    }
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 0xc;
    piVar9 = piVar9 + 4;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  uStack_34 = 0;
  if (local_20 + -0xd < 1) {
    puStack_38 = (undefined2 *)0x1;
    puStack_3c = (undefined2 *)0x2;
    uStack_40 = 0x46fc3e;
    (**(code **)(**(int **)(param_1 + 0x348) + 0xa8))();
    *(byte *)(*(int *)(param_1 + 0x348) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x348) + 0x6c) & 0xfd
    ;
    return;
  }
  puStack_38 = (undefined2 *)0x0;
  puStack_3c = (undefined2 *)0x2;
  uStack_40 = 0x46fc61;
  (**(code **)(**(int **)(param_1 + 0x348) + 0xa8))();
  uStack_40 = local_20 - 0xb;
  *(byte *)(*(int *)(param_1 + 0x348) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x348) + 0x6c) | 2;
  (**(code **)(**(int **)(param_1 + 0x348) + 0xa8))(0x37,0);
  return;
}

