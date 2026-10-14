
void FUN_005383c0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *local_8;
  
  piVar2 = (int *)0x0;
  piVar3 = (int *)0x0;
  piVar1 = DAT_00675570;
  while (piVar4 = piVar1, piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[0x32];
    piVar4[0x34] = piVar4[0x34] + 1;
    if (piVar4[0x35] != 0) {
      if (piVar4[0x37] != 0) {
        FUN_005ae700(piVar4[0x35]);
        piVar4[0x35] = 0;
        piVar4[0x37] = 0;
      }
      (**(code **)(*piVar4 + 8))();
      iVar5 = piVar4[0x34];
      piVar4[0x34] = iVar5 + -1;
      if (iVar5 + -1 < 1) {
        (**(code **)*piVar4)(1);
      }
    }
    (**(code **)(*piVar4 + 8))();
    iVar5 = piVar4[0x34] + -1;
    piVar4[0x34] = iVar5;
    if ((0 < iVar5) || ((**(code **)*piVar4)(1), iVar5 != 0)) {
      piVar4[0x33] = (int)piVar3;
      local_8 = piVar4;
      if (piVar3 != (int *)0x0) {
        piVar3[0x32] = (int)piVar4;
        local_8 = piVar2;
      }
      piVar4[0x32] = 0;
      piVar2 = local_8;
      piVar3 = piVar4;
    }
  }
  while (piVar2 != (int *)0x0) {
    iVar5 = piVar2[0x33];
    piVar1 = (int *)piVar2[0x32];
    if (iVar5 == 0) {
      if (piVar1 != (int *)0x0) {
        piVar1[0x33] = 0;
      }
    }
    else if (piVar1 == (int *)0x0) {
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 200) = 0;
      }
    }
    else {
      *(int **)(iVar5 + 200) = piVar1;
      *(int *)(piVar2[0x32] + 0xcc) = piVar2[0x33];
    }
    piVar2[0x33] = 0;
    piVar2[0x32] = 0;
    (**(code **)(*piVar2 + 4))();
    piVar2 = piVar1;
  }
  return;
}

