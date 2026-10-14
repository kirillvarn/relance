
void __fastcall FUN_004e4f70(int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  HardpointInfo *pHVar11;
  int local_94 [2];
  undefined1 auStack_8c [12];
  undefined4 auStack_80 [13];
  undefined1 auStack_4c [4];
  HardpointInfo local_48 [52];
  float *pfStack_14;
  
  if (*(int *)(param_1 + 0x58c) <= *(int *)(param_1 + 0x590)) {
    *(undefined4 *)(param_1 + 0x590) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x590);
  iVar8 = iVar1 + 1;
  *(int *)(param_1 + 0x590) = iVar8;
  if (*(int *)(param_1 + 0x58c) <= iVar8) {
    *(undefined4 *)(param_1 + 0x590) = 0;
  }
  pcVar4 = *(code **)(iVar1 * 0x10 + *(int *)(param_1 + 0x580) + 4);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = _C_exref;
  }
  if (*(int *)(param_1 + 0x398) == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)(*(int *)(param_1 + 0x398) + -8);
  }
  pHVar11 = local_48;
  piVar10 = local_94;
  lVar5 = (**(code **)(*piVar7 + 0x1c))();
  bVar2 = FindHardpoint_OS(lVar5,(char *)pcVar4,piVar10,pHVar11);
  if ((bVar2) && (local_94[0] != -1)) {
    puVar6 = (undefined4 *)(**(code **)(**(int **)Engine_exref + 0xa0))();
    puVar9 = auStack_80;
    for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    if (DAT_00674afc == (int *)0x0) {
      DAT_00674afc = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00674afc + 0x28))(DAT_00674afc,auStack_8c,auStack_80,auStack_4c);
    piVar7 = (int *)(param_1 + 0x3b8);
    cVar3 = (**(code **)(*piVar7 + 0x44))(piVar7,pfStack_14,&stack0xffffff58);
    if (cVar3 == '\0') {
      *pfStack_14 = *(float *)(param_1 + 0x420);
      pfStack_14[1] = *(float *)(param_1 + 0x424);
      return;
    }
    piVar7 = (int *)(**(code **)(*piVar7 + 0x14))(piVar7);
    *pfStack_14 = *pfStack_14 - (float)*piVar7;
    pfStack_14[1] = pfStack_14[1] - (float)piVar7[1];
  }
  return;
}

