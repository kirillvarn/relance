
int __thiscall FUN_005aa75b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *unaff_EBX;
  char *unaff_ESI;
  int *piVar4;
  bool in_ZF;
  
  if (in_ZF) {
    return 0;
  }
  param_2 = (char *)(param_1 + 0x1d4);
  cVar3 = (char)unaff_EBX;
  *param_2 = cVar3;
  piVar4 = (int *)0x0;
  while( true ) {
    if (piVar4 == unaff_EBX) {
      piVar4 = *(int **)(param_1 + 0x1b8);
    }
    else {
      piVar4 = (int *)*piVar4;
    }
    if (piVar4 == unaff_EBX) break;
    piVar1 = (int *)piVar4[2];
    if (piVar1 != unaff_EBX) {
      FUN_005af6a0();
      FUN_005b7e1d(piVar1);
    }
    piVar4[2] = (int)unaff_EBX;
  }
  piVar4 = *(int **)(param_1 + 0x1b8);
  while (piVar4 != unaff_EBX) {
    piVar1 = (int *)*piVar4;
    if (*(char *)(param_1 + 0x1c0) == cVar3) {
      FUN_005afe80(1);
      piVar4 = piVar1;
    }
    else {
      *piVar4 = *(int *)(param_1 + 0x1c4);
      *(int **)(param_1 + 0x1c4) = piVar4;
      piVar4 = piVar1;
    }
  }
  *(int **)(param_1 + 0x1bc) = unaff_EBX;
  *(int **)(param_1 + 0x1b8) = unaff_EBX;
  (**(code **)(*DAT_0067ecd0 + 0x58))(param_4,DAT_00673344);
  iVar2 = FUN_005a89b0(unaff_ESI,0x40a00000,0x42700000);
  if ((*unaff_ESI != cVar3) && (*(int **)(param_1 + 0x1b8) == unaff_EBX)) {
    if (DAT_0067ecd0 == unaff_EBX) {
      return 0;
    }
    *unaff_ESI = cVar3;
    piVar4 = (int *)0x0;
    while( true ) {
      if (piVar4 == unaff_EBX) {
        piVar4 = *(int **)(param_1 + 0x1b8);
      }
      else {
        piVar4 = (int *)*piVar4;
      }
      if (piVar4 == unaff_EBX) break;
      piVar1 = (int *)piVar4[2];
      if (piVar1 != unaff_EBX) {
        FUN_005af6a0();
        FUN_005b7e1d(piVar1);
      }
      piVar4[2] = (int)unaff_EBX;
    }
    piVar4 = *(int **)(param_1 + 0x1b8);
    while (piVar4 != unaff_EBX) {
      piVar1 = (int *)*piVar4;
      if (*(char *)(param_1 + 0x1c0) == cVar3) {
        FUN_005b7e1d(piVar4);
        piVar4 = piVar1;
      }
      else {
        *piVar4 = *(int *)(param_1 + 0x1c4);
        *(int **)(param_1 + 0x1c4) = piVar4;
        piVar4 = piVar1;
      }
    }
    *(int **)(param_1 + 0x1bc) = unaff_EBX;
    *(int **)(param_1 + 0x1b8) = unaff_EBX;
    (**(code **)(*DAT_0067ecd0 + 0x4c))(DAT_00673344);
    iVar2 = FUN_005a89b0(unaff_ESI,0x40a00000,0x42700000);
    if (iVar2 == 1) {
      iVar2 = 4;
    }
  }
  return iVar2;
}

