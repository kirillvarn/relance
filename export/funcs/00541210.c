
void FUN_00541210(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)*DAT_00678a34;
  piVar3 = DAT_00678a34;
  if (piVar4 != DAT_00678a34) {
    do {
      if (param_1 == 0) {
LAB_00541333:
        iVar1 = piVar4[2];
        if (iVar1 != 0) {
          FUN_00541200();
          FUN_005b7e1d(iVar1);
        }
        piVar5 = (int *)*piVar4;
        *(int **)piVar4[1] = piVar5;
        *(int *)(*piVar4 + 4) = piVar4[1];
        FUN_005b7e1d(piVar4);
        DAT_00678a38 = DAT_00678a38 + -1;
        piVar3 = DAT_00678a34;
      }
      else {
        puVar2 = (undefined4 *)0x0;
        do {
          if (puVar2 == (undefined4 *)0x0) {
            puVar2 = *(undefined4 **)(param_1 + 4);
          }
          else {
            puVar2 = (undefined4 *)*puVar2;
          }
          if (puVar2 == (undefined4 *)0x0) goto LAB_00541333;
          iVar1 = puVar2[2];
          if ((((iVar1 == 0) || (iVar1 == -0xc)) || (iVar1 = *(int *)(iVar1 + 0x10), iVar1 == 0)) ||
             ((*(uint *)(iVar1 + 0x4c) & 0x503) != 0x503)) {
            iVar1 = 0;
          }
        } while (iVar1 != *(int *)(piVar4[2] + 8));
        piVar5 = (int *)*piVar4;
      }
      piVar4 = piVar5;
    } while (piVar5 != piVar3);
  }
  FUN_00542410(param_1,1);
  FUN_00542410(param_1,1);
  FUN_00542410(param_1,1);
  FUN_00542410(param_1,1);
  FUN_00542410(param_1,1);
  DAT_00678ac8 = DAT_00678ac4;
  FUN_00542410(param_1,1);
  FUN_00542410(param_1,1);
  FUN_00542410(param_1,1);
  FUN_00542410(param_1,1);
  FUN_00542410(param_1,1);
  FUN_00542410(param_1,1);
  if (DAT_00678ae0 != 0) {
    FreeSpatial((ISpatialPartition *)DAT_00678ae0);
    DAT_00678ae0 = 0;
  }
  return;
}

