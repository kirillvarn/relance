
int * __thiscall FUN_004c9a80(int param_1,Costume *param_2)

{
  void **ppvVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  accessory *paVar6;
  undefined4 uVar7;
  int *piVar8;
  code *pcVar9;
  int iVar10;
  int *piVar11;
  uint local_744;
  Costume *local_740;
  CostumeDescriptions *local_738;
  int local_734;
  undefined1 local_730 [4];
  undefined4 local_72c;
  undefined4 local_728;
  undefined4 local_724;
  undefined4 local_720;
  undefined4 local_71c [8];
  int local_6fc;
  int *local_6f8;
  undefined4 local_6f4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd982;
  local_c = ExceptionList;
  piVar4 = (int *)**(int **)(param_1 + 4);
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  local_734 = param_1;
  if (piVar4 != *(int **)(param_1 + 4)) {
    do {
      ExceptionList = ppvVar1;
      bVar2 = Costume_is_equal((Costume *)(piVar4 + 2),param_2);
      if (bVar2) {
        piVar4[0x10] = piVar4[0x10] + 1;
        ExceptionList = local_c;
        return (int *)piVar4[0xf];
      }
      piVar4 = (int *)*piVar4;
      ppvVar1 = ExceptionList;
    } while (piVar4 != (int *)*(int *)(local_734 + 4));
  }
  local_728 = *(undefined4 *)(param_2 + 4);
  local_72c = *(undefined4 *)param_2;
  local_724 = *(undefined4 *)(param_2 + 8);
  local_720 = *(undefined4 *)(param_2 + 0xc);
  iVar10 = 0;
  local_6fc = *(int *)(param_2 + 0x30);
  if (0 < *(int *)(param_2 + 0x30)) {
    puVar3 = local_71c;
    do {
      *puVar3 = *(undefined4 *)(((int)param_2 - (int)&local_72c) + (int)puVar3);
      iVar10 = iVar10 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar10 < local_6fc);
  }
  piVar4 = operator_new(0x298);
  local_4 = 0;
  if (piVar4 == (int *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    FUN_005b7fba(piVar4 + 1,0x10,4,FUN_00420d40,FUN_00420d10);
    piVar11 = piVar4 + 0x11;
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar10 = 4;
    piVar5 = piVar11;
    do {
      *piVar5 = 0;
      *(undefined1 *)(piVar5 + 1) = 0;
      piVar5 = piVar5 + 0x21;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    FUN_004215b0();
    piVar4[0xa5] = 0;
    piVar4[0xa4] = 0;
    piVar4[0xa3] = 0;
    *piVar4 = 0;
    piVar5 = piVar4 + 0x95;
    iVar10 = 4;
    do {
      *piVar11 = 0;
      *(undefined1 *)(piVar11 + 1) = 0;
      *piVar5 = -1;
      piVar5 = piVar5 + 1;
      piVar11 = piVar11 + 0x21;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    piVar4[0x99] = 0x3f800000;
    piVar11 = piVar4;
  }
  local_4 = 0xffffffff;
  local_6f8 = piVar11;
  FUN_004ca4b0();
  FUN_004c9f00(param_2);
  iVar10 = FUN_004ca3c0();
  *piVar11 = iVar10;
  local_738 = GetCostumeDescriptions();
  local_744 = 0;
  if (0 < *(int *)(param_2 + 0x30)) {
    local_740 = param_2 + 0x10;
    piVar5 = piVar11 + 1;
    do {
      if (4 < local_744) break;
      paVar6 = CostumeDescriptions::find_accessory(local_738,*(ulong *)local_740);
      if (paVar6 != (accessory *)0x0) {
        FUN_004c9de0();
        local_4 = 2;
        pcVar9 = *(code **)(paVar6 + 8);
        if (*(code **)(paVar6 + 8) == (code *)0x0) {
          pcVar9 = _C_exref;
        }
        FUN_004cec20(pcVar9);
        pcVar9 = *(code **)(paVar6 + 0x28);
        if (*(code **)(paVar6 + 0x28) == (code *)0x0) {
          pcVar9 = _C_exref;
        }
        FUN_004cebc0(pcVar9);
        pcVar9 = *(code **)(paVar6 + 0x18);
        if (*(code **)(paVar6 + 0x18) == (code *)0x0) {
          pcVar9 = _C_exref;
        }
        FUN_004cebc0(pcVar9);
        uVar7 = FUN_004ca480();
        iVar10 = FUN_004c9e20(uVar7);
        piVar5[1] = iVar10;
        if (*(int *)(paVar6 + 0x3c) != 0) {
          piVar8 = (int *)FUN_0053e430(local_730);
          pcVar9 = *(code **)(*piVar8 + 0xc);
          if (*(code **)(*piVar8 + 0xc) == (code *)0x0) {
            pcVar9 = _C_exref;
          }
          FUN_004c9db0(pcVar9);
          FUN_00420f30(piVar4,0);
        }
        local_4 = 0xffffffff;
        FUN_004de730();
      }
      local_740 = local_740 + 4;
      local_744 = local_744 + 1;
      piVar5 = piVar5 + 4;
    } while ((int)local_744 < *(int *)(param_2 + 0x30));
  }
  piVar4 = local_6f8;
  if (*piVar11 == 0) {
    if (local_6f8 != (int *)0x0) {
      FUN_004ca530();
      FUN_005b7e1d(piVar4);
    }
    local_6f8 = (int *)0x0;
  }
  local_6f4 = 1;
  FUN_004cec80(&local_738,*(undefined4 *)(local_734 + 4),&local_72c);
  ExceptionList = local_c;
  return local_6f8;
}

