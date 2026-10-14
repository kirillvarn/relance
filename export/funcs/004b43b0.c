
void __fastcall FUN_004b43b0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  cVar2 = FUN_0045a740();
  if (cVar2 == '\0') {
    iVar5 = 0;
    iVar6 = 0;
    for (uVar4 = 0;
        (*(int *)(param_1 + 0x334) != 0 &&
        (uVar4 < (uint)(*(int *)(param_1 + 0x338) - *(int *)(param_1 + 0x334) >> 5)));
        uVar4 = uVar4 + 1) {
      iVar3 = *(int *)(param_1 + 0x334) + iVar5;
      if (*(char *)(iVar3 + 0x1c) != '\0') {
        iVar6 = iVar6 + *(int *)(iVar3 + 0xc);
      }
      iVar5 = iVar5 + 0x20;
    }
    if (iVar6 == 0) {
      (**(code **)(**(int **)(param_1 + 0x480) + 0xa8))(1,1,0);
      (**(code **)(**(int **)(param_1 + 0x344) + 0xa8))(1,1,0);
      bVar7 = true;
    }
    else {
      iVar5 = FUN_004c4ce0();
      bVar7 = iVar5 < iVar6;
      (**(code **)(**(int **)(param_1 + 0x480) + 0xa8))(1,!bVar7,0);
      (**(code **)(**(int **)(param_1 + 0x344) + 0xa8))(1,bVar7,0);
    }
    (**(code **)(**(int **)(param_1 + 0x478) + 0xa8))(1,bVar7,0);
    for (piVar1 = *(int **)(param_1 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      piVar1[0x1c] = 100;
      if (-1 < *(int *)(param_1 + 0x484)) {
        iVar6 = (**(code **)(*piVar1 + 8))();
        iVar5 = *(int *)(param_1 + 0x484);
        if (((iVar6 == *(int *)(param_1 + 0x370 + iVar5 * 4)) ||
            (iVar6 == *(int *)(param_1 + 0x394 + iVar5 * 4))) ||
           (iVar6 == *(int *)(param_1 + 0x3dc + iVar5 * 4))) {
          piVar1[0x1c] = 0x65;
        }
      }
    }
    FUN_005a4b50(param_1 + 0x394,9);
    FUN_005a4b50(param_1 + 0x3dc,9);
    FUN_005a4b50(param_1 + 0x370,9);
    FUN_005a0760();
    return;
  }
  return;
}

