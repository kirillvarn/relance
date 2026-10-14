
void FUN_004b9bb0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = DAT_00672328;
  if (DAT_0066d35a == '\0') {
    piVar4 = (int *)*DAT_00672328;
    while (piVar4 != piVar5) {
      piVar1 = (int *)*piVar4;
      *(int *)piVar4[1] = *piVar4;
      *(int *)(*piVar4 + 4) = piVar4[1];
      FmtStr::~FmtStr((FmtStr *)(piVar4 + 2));
      FUN_005b7e1d(piVar4);
      DAT_0067232c = DAT_0067232c + -1;
      piVar4 = piVar1;
    }
    DAT_00672404 = 0;
  }
  if ((DAT_00672400 != (int *)0x0) &&
     (FUN_0059dd00(DAT_00672400,0), piVar5 = DAT_00672400, DAT_00672400 != (int *)0x0)) {
    iVar3 = DAT_00672400[3];
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
      FUN_0043d2a0(iVar3);
      iVar3 = iVar2;
    }
    (**(code **)(*piVar5 + 0x28))();
    (**(code **)*piVar5)(1);
  }
  return;
}

