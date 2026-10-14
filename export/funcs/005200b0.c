
undefined4 FUN_005200b0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = DAT_006753c4;
  piVar4 = DAT_006753c4;
  for (piVar1 = (int *)*DAT_006753c4; piVar1 != piVar3; piVar1 = (int *)*piVar1) {
    iVar2 = piVar1[2];
    if (iVar2 != 0) {
      FUN_005205d0();
      FUN_005b7e1d(iVar2);
      piVar4 = DAT_006753c4;
    }
  }
  piVar1 = (int *)*piVar4;
  while (piVar1 != piVar4) {
    piVar3 = (int *)*piVar1;
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_005b7e1d(piVar1);
    DAT_006753c8 = DAT_006753c8 + -1;
    piVar1 = piVar3;
  }
  return 1;
}

