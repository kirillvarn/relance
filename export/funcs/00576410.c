
undefined4 FUN_00576410(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int aiStack_80 [32];
  
  if (DAT_0067c3a4 == 0) {
    return 0;
  }
  DAT_0067c278 = param_1;
  piVar5 = (int *)FUN_00578950(&param_1);
  piVar6 = (int *)FUN_00578920(&param_1);
  iVar3 = param_2;
  iVar8 = 0;
  while (piVar6 != piVar5) {
    if (((param_2 != 1) || (DAT_0067c3ac == 0)) || (DAT_0067c3ac == piVar6[4])) {
      aiStack_80[iVar8] = piVar6[4];
      iVar8 = iVar8 + 1;
    }
    piVar7 = (int *)piVar6[2];
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      cVar4 = *(char *)(*piVar7 + 0x15);
      piVar2 = (int *)*piVar7;
      while (piVar6 = piVar7, cVar4 == '\0') {
        cVar4 = *(char *)(*piVar2 + 0x15);
        piVar7 = piVar2;
        piVar2 = (int *)*piVar2;
      }
    }
    else {
      piVar7 = (int *)piVar6[1];
      if (piVar6 == (int *)piVar7[2]) {
        do {
          piVar6 = piVar7;
          piVar7 = (int *)piVar6[1];
        } while (piVar6 == (int *)piVar7[2]);
      }
      if ((int *)piVar6[2] != piVar7) {
        piVar6 = piVar7;
      }
    }
  }
  while (iVar8 = iVar8 + -1, -1 < iVar8) {
    cVar4 = (*(code *)**(undefined4 **)aiStack_80[iVar8])(param_1);
    if (cVar4 != '\0') {
      return 1;
    }
  }
  if (iVar3 != 1) {
    return 0;
  }
  if (param_1 == 0xf) {
    if (DAT_0067c290 == '\0') {
      return 0;
    }
    if (0 < DAT_0067c274) {
      piVar6 = *(int **)(DAT_0067c270 + 4);
      puVar1 = (undefined4 *)piVar6[2];
      *(int *)piVar6[1] = *piVar6;
      *(int *)(*piVar6 + 4) = piVar6[1];
      FUN_005b7e1d(piVar6);
      DAT_0067c274 = DAT_0067c274 + -1;
      (**(code **)*puVar1)(0x10);
      return 1;
    }
    return 0;
  }
  return 0;
}

