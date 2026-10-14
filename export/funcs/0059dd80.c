
int * FUN_0059dd80(undefined4 param_1)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *local_8;
  
  piVar8 = (int *)0x0;
  iVar9 = -1;
  local_8 = (int *)0x0;
  iVar4 = DAT_0067dbe8;
  do {
    if (iVar4 == 0) {
      return piVar8;
    }
    piVar3 = *(int **)(iVar4 + 8);
    if ((((piVar3 != (int *)0x0) && (bVar2 = *(byte *)(piVar3 + 0x1b), (bVar2 & 1) != 0)) &&
        ((bVar2 & 2) != 0)) && (piVar7 = piVar3, (bVar2 & 8) != 0)) {
      do {
        if ((*(byte *)(piVar7 + 0x1b) & 2) == 0) goto LAB_0059de27;
        piVar1 = piVar7 + 1;
        piVar7 = (int *)*piVar1;
      } while ((int *)*piVar1 != (int *)0x0);
      iVar6 = (**(code **)(*piVar3 + 0x6c))();
      if (iVar6 == 0) {
        iVar6 = 0;
        piVar7 = piVar3;
        do {
          piVar7 = (int *)piVar7[1];
          iVar6 = iVar6 + 1;
        } while (piVar7 != (int *)0x0);
      }
      if (iVar9 < iVar6) {
        cVar5 = (**(code **)(*piVar3 + 0x10))(param_1);
      }
      else {
        if ((iVar6 != iVar9) || ((float)piVar3[0x1a] <= (float)piVar8[0x1a])) goto LAB_0059de27;
        cVar5 = (**(code **)(*piVar3 + 0x10))(param_1);
      }
      piVar8 = local_8;
      if (cVar5 != '\0') {
        piVar8 = piVar3;
        iVar9 = iVar6;
        local_8 = piVar3;
      }
    }
LAB_0059de27:
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}

