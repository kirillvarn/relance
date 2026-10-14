
void __thiscall FUN_004ba2a0(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  FmtStr *pFVar7;
  undefined4 local_4;
  
  if (param_2 != 0) {
    local_4 = param_1;
    if ((DAT_00672338 != 0) && (*(int *)(*DAT_00672334 + 0xc) == 0x549c)) {
      FUN_004bd4b0(&local_4,*DAT_00672334);
    }
    piVar4 = (int *)0x0;
    piVar5 = piVar4;
    if ((DAT_00672338 != 0) && (piVar6 = (int *)*DAT_00672334, piVar6 != DAT_00672334)) {
      do {
        FUN_004ba860(piVar6 + 2,&DAT_0066dc60,DAT_006119f8,1);
        piVar5 = piVar6 + 2;
        if (DAT_0066dc60 != 0x2a) break;
        piVar6 = (int *)*piVar6;
        piVar5 = piVar4;
      } while (piVar6 != DAT_00672334);
    }
    iVar3 = *DAT_00672334;
    iVar2 = FUN_004bd5a0(iVar3,*(undefined4 *)(iVar3 + 4));
    *(int *)(iVar3 + 4) = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
    FUN_004bd5d0(iVar2 + 8,param_2);
    DAT_00672338 = DAT_00672338 + 1;
    pFVar7 = (FmtStr *)(*DAT_00672334 + 8);
    FUN_004ba5a0(pFVar7);
    if (piVar5 != (int *)0x0) {
      FUN_004ba860(pFVar7,&DAT_0066fc60,DAT_006119f8,1);
      FUN_004ba860(piVar5,&DAT_0066dc60,DAT_006119f8,1);
      iVar3 = wcscmp(&DAT_0066fc60,&DAT_0066dc60);
      if (iVar3 == 0) {
        piVar5 = (int *)*DAT_00672334;
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
        FmtStr::~FmtStr((FmtStr *)(piVar5 + 2));
        FUN_005b7e1d(piVar5);
        DAT_00672338 = DAT_00672338 + -1;
        return;
      }
    }
    bVar1 = SinglePlayer();
    if (bVar1) {
      iVar3 = PackMissionLogData(1,pFVar7,(uchar *)&DAT_0066fc60,DAT_006119f8 * 2);
      (**(code **)(*DAT_0067ecd0 + 0x130))(DAT_00673344,&DAT_0066fc60,iVar3);
    }
  }
  return;
}

