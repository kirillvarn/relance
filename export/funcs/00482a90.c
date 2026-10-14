
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00482a90(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint local_2c;
  int *local_28;
  uint *local_24;
  uint local_20;
  int local_1c;
  undefined1 local_18 [4];
  int *local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bc048;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0043a510(DAT_0066873c);
  if (*(int *)(param_1 + 0x978) == 1) {
    *(undefined4 *)(param_1 + 0x32c) = 4;
    iVar8 = 0;
  }
  else {
    iVar8 = 1;
    if (*(int *)(param_1 + 0x978) != 3) {
      iVar8 = local_1c;
    }
  }
  uVar10 = 0;
  local_2c = 0;
  local_24 = (uint *)0x0;
  local_14 = operator_new(0xc);
  *local_14 = (int)local_14;
  local_14[1] = (int)local_14;
  local_10 = 0;
  local_4 = 0;
  FUN_00437f70(local_18,iVar8);
  if (*(int *)(param_1 + 0x978) == 3) {
    FUN_00483230(local_18);
  }
  else {
    FUN_00482f10(local_18);
  }
  local_28 = (int *)*local_14;
  if (local_28 != local_14) {
    do {
      puVar1 = (uint *)local_28[2];
      uVar7 = puVar1[7];
      if (0 < (int)uVar7) {
        local_20 = uVar7;
        if ((int)uVar7 < 0) {
          local_20 = 0;
        }
        uVar9 = 4;
        uVar10 = Good2Arch(*puVar1);
        if (*(int *)(param_1 + 0x978) == 3) {
          uVar9 = FUN_0047e460(uVar10);
        }
        else if ((DAT_0066873c != 0) && (local_1c = FUN_0043a510(DAT_0066873c), local_1c != 0)) {
          uVar7 = Arch2Good(uVar10);
          fVar11 = (float10)FUN_00438060(uVar7);
          if (fVar11 == (float10)_DAT_005c7474) {
            uVar9 = 5;
          }
        }
        uVar18 = 0;
        uVar17 = 0;
        uVar7 = (uint)(byte)puVar1[9];
        uVar16 = 0;
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = 0;
        uVar12 = 0;
        uVar6 = FUN_0047f040(*puVar1);
        cVar5 = FUN_0047c740(&local_2c,uVar10,uVar9,local_20,uVar6,uVar12,uVar13,uVar14,uVar15,uVar7
                             ,uVar16,uVar17,uVar18);
        uVar10 = local_2c;
        if ((local_24 == (uint *)0x0) && (cVar5 != '\0')) {
          local_24 = puVar1;
        }
      }
      local_28 = (int *)*local_28;
    } while (local_28 != local_14);
    if (local_24 != (uint *)0x0) {
      uVar7 = Good2Arch(*local_24);
      FUN_0047ba90(uVar7,0);
    }
  }
  *(undefined1 *)(param_1 + 0x4e2) = 0;
  FUN_0047f3e0(uVar10);
  if (uVar10 != *(uint *)(param_1 + 0x3c8)) {
    if (*(int **)(param_1 + 0x3d0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x3d0) + 0xa8))(0x37,0,uVar10 - 1);
    }
    if ((*(int *)(param_1 + 0x3c4) != 0) && (uVar10 < *(int *)(param_1 + 0x3c4) + 5U)) {
      if (uVar10 < 6) {
        *(undefined4 *)(param_1 + 0x3c4) = 0;
      }
      else {
        *(uint *)(param_1 + 0x3c4) = uVar10 - 5;
      }
      if (*(int **)(param_1 + 0x3d0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x3d0) + 0xa8))(0x38,*(undefined4 *)(param_1 + 0x3c4),0);
      }
    }
    *(uint *)(param_1 + 0x3c8) = uVar10;
    FUN_00482a90();
  }
  if (uVar10 == 0) {
    *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
  }
  if (uVar10 <= *(uint *)(param_1 + 0x3a4)) {
    *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
  }
  if (((*(int *)(param_1 + 0x978) == 3) && (iVar8 = FUN_00483580(), iVar8 != 0)) &&
     (*(int *)(param_1 + 0x974) != 0)) {
    FUN_00585d90(iVar8,1);
  }
  piVar4 = local_14;
  piVar3 = (int *)*local_14;
  while (piVar3 != piVar4) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_005b7e1d(piVar3);
    local_10 = local_10 + -1;
    piVar3 = piVar2;
  }
  FUN_005b7e1d(local_14);
  ExceptionList = pvStack_c;
  return;
}

