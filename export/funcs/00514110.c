
void FUN_00514110(undefined4 *param_1,int *param_2,char param_3)

{
  int *piVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  HardpointInfo *pHVar5;
  HardpointInfo local_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((DAT_006751e8 & 1) == 0) {
    DAT_006751e8 = DAT_006751e8 | 1;
    FUN_005b7e6c(&DAT_00514250);
  }
  if ((DAT_006751e8 & 2) == 0) {
    DAT_006751e8 = DAT_006751e8 | 2;
    FUN_005b7e6c(&DAT_00514240);
  }
  piVar1 = param_2;
  if (DAT_006751fc == '\0') {
    pHVar5 = local_48;
    plVar4 = (long *)&param_2;
    DAT_006751fc = '\x01';
    pcVar3 = "HpRightLane";
    lVar2 = (**(code **)(*param_2 + 0x1c))();
    FindHardpoint_PS(lVar2,pcVar3,plVar4,pHVar5);
    DAT_006751dc = uStack_44;
    DAT_006751e0 = uStack_40;
    pHVar5 = local_48;
    plVar4 = (long *)&param_2;
    DAT_006751e4 = uStack_3c;
    pcVar3 = "HpLeftLane";
    lVar2 = (**(code **)(*piVar1 + 0x1c))();
    FindHardpoint_PS(lVar2,pcVar3,plVar4,pHVar5);
    DAT_006751d0 = uStack_44;
    DAT_006751d4 = uStack_40;
    DAT_006751d8 = uStack_3c;
  }
  if (param_3 != '\0') {
    *param_1 = DAT_006751dc;
    param_1[1] = DAT_006751e0;
    param_1[2] = DAT_006751e4;
    return;
  }
  *param_1 = DAT_006751d0;
  param_1[1] = DAT_006751d4;
  param_1[2] = DAT_006751d8;
  return;
}

