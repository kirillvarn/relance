
void FUN_00541040(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint unaff_retaddr;
  
  piVar2 = param_1;
  if ((((param_1 == (int *)0x0) || (param_1 == (int *)0xfffffff4)) ||
      (iVar3 = param_1[4], iVar3 == 0)) || ((*(uint *)(iVar3 + 0x4c) & 0x503) != 0x503)) {
    iVar3 = 0;
  }
  for (piVar1 = (int *)*DAT_00678a34; piVar1 != DAT_00678a34; piVar1 = (int *)*piVar1) {
    if (*(int *)(piVar1[2] + 8) == iVar3) {
      iVar3 = piVar1[2];
      if (iVar3 != 0) {
        FUN_00541200();
        FUN_005b7e1d(iVar3);
      }
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      FUN_005b7e1d(piVar1);
      DAT_00678a38 = DAT_00678a38 + -1;
      break;
    }
  }
  switch(piVar2[7]) {
  case 1:
    FUN_00542390(piVar2);
    return;
  case 2:
    FUN_00542390(piVar2);
    piVar1 = DAT_00678ac8;
    piVar5 = DAT_00678ac4;
    if (DAT_00678ac4 < DAT_00678ac8) {
LAB_00541138:
      if ((int *)*piVar5 != piVar2) goto code_r0x0054113c;
      piVar4 = piVar5 + 1;
      if (piVar4 != DAT_00678ac8) {
        iVar3 = (int)piVar5 - (int)piVar4;
        do {
          *(int *)(iVar3 + (int)piVar4) = *piVar4;
          piVar4 = piVar4 + 1;
        } while (piVar4 != piVar1);
      }
      DAT_00678ac8 = DAT_00678ac8 + -1;
    }
LAB_0054116b:
    iVar3 = (**(code **)(*piVar2 + 0x88))(&param_1);
    if ((iVar3 == 0) && ((unaff_retaddr & 0xfdff) != 0)) {
      (**(code **)(*DAT_00678ae0 + 0xc))(piVar2);
      return;
    }
    break;
  case 3:
    FUN_00542390(piVar2);
    return;
  case 4:
    FUN_00542390(piVar2);
    return;
  case 5:
    FUN_00542390(piVar2);
    return;
  case 6:
    FUN_00542390(piVar2);
    return;
  case 7:
    FUN_00542390(piVar2);
    return;
  case 8:
    FUN_00542390(piVar2);
    return;
  case 9:
    FUN_00542390(piVar2);
    break;
  case 10:
    FUN_00542390(piVar2);
    return;
  }
  return;
code_r0x0054113c:
  piVar5 = piVar5 + 1;
  if (DAT_00678ac8 <= piVar5) goto LAB_0054116b;
  goto LAB_00541138;
}

