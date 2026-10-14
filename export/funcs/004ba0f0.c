
void FUN_004ba0f0(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_4 [4];
  
  bVar3 = SinglePlayer();
  if (bVar3) {
    iVar4 = PackMissionLogData(0,(FmtStr *)0x0,(uchar *)&DAT_0066fc60,DAT_006119f8 * 2);
    (**(code **)(*DAT_0067ecd0 + 0x130))(DAT_00673344,&DAT_0066fc60,iVar4);
  }
  piVar6 = (int *)*DAT_00672334;
  if (piVar6 != DAT_00672334) {
    do {
      FUN_004ba860(piVar6 + 2,&DAT_0066fc60,DAT_006119f8,1);
      piVar5 = piVar6;
      if (DAT_0066fc60 != 0x2a) {
        piVar5 = (int *)piVar6[1];
        *piVar5 = *piVar6;
        *(int *)(*piVar6 + 4) = piVar6[1];
        FUN_004bd620(0);
        FUN_005b7e1d(piVar6);
        DAT_00672338 = DAT_00672338 + -1;
      }
      piVar6 = (int *)*piVar5;
    } while (piVar6 != DAT_00672334);
  }
  bVar3 = SinglePlayer();
  if ((bVar3) && (piVar6 = DAT_00672334, DAT_00672334 != (int *)*DAT_00672334)) {
    do {
      iVar4 = piVar6[1];
      FUN_004ba860((FmtStr *)(iVar4 + 8),&DAT_0066fc60,DAT_006119f8,1);
      iVar4 = PackMissionLogData(1,(FmtStr *)(iVar4 + 8),(uchar *)&DAT_0066fc60,DAT_006119f8 * 2);
      (**(code **)(*DAT_0067ecd0 + 0x130))(DAT_00673344,&DAT_0066fc60,iVar4);
      piVar6 = (int *)piVar6[1];
    } while (piVar6 != (int *)*DAT_00672334);
  }
  if ((((DAT_00672400 != (int *)0x0) && (DAT_0067232c != 0)) &&
      ((*DAT_00672328 == -8 || (*(int *)(*DAT_00672328 + 0xc) != 0x3d3)))) &&
     (FUN_0059dd00(DAT_00672400,0), piVar6 = DAT_00672400, DAT_00672400 != (int *)0x0)) {
    iVar4 = DAT_00672400[3];
    while (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 8);
      FUN_0043d2a0(iVar4);
      iVar4 = iVar1;
    }
    (**(code **)(*piVar6 + 0x28))();
    (**(code **)*piVar6)(1);
  }
  piVar5 = DAT_00672328;
  piVar6 = (int *)*DAT_00672328;
  while (piVar6 != piVar5) {
    piVar2 = (int *)*piVar6;
    FUN_004bd4b0(auStack_4,piVar6);
    piVar6 = piVar2;
  }
  return;
}

