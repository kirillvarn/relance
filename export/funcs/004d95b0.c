
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d95b0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  IBehaviorManager *this;
  EvaluateResult EVar4;
  CEqObj *this_00;
  int iVar5;
  
  if (param_2 == -1) {
    iVar5 = 0;
    param_2 = 0;
    iVar3 = FUN_0054baf0();
    if (iVar3 == 0) {
      return;
    }
    if (((iVar3 == -0xc) || (this_00 = *(CEqObj **)(iVar3 + 0x10), this_00 == (CEqObj *)0x0)) ||
       ((*(uint *)(this_00 + 0x4c) & 0x503) != 0x503)) {
      this_00 = (CEqObj *)0x0;
    }
    this = CEqObj::get_behavior_interface(this_00);
    if (*(int *)(param_1 + 0x380) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 900) - *(int *)(param_1 + 0x380)) / 0x148;
    }
    if (0 < iVar3) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x380) + iVar5 + 0x138);
        if ((iVar1 != -1) &&
           (EVar4 = IBehaviorManager::external_player_evaluate(this,iVar1), EVar4 != 2)) {
          param_2 = param_2 + 1;
        }
        iVar5 = iVar5 + 0x148;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (*(int *)(param_1 + 0x3b4) != param_2) {
    *(int *)(param_1 + 0x3b4) = param_2;
    if (9 < param_2) {
      *(undefined4 *)(param_1 + 0x3b4) = 9;
    }
    (**(code **)(**(int **)(param_1 + 0x3b8) + 0xa8))
              (4,*(undefined4 *)(&DAT_00612654 + *(int *)(param_1 + 0x3b4) * 4),0);
    FUN_005a1340(*(int *)(param_1 + 0x3b8) + 0x80);
    fVar2 = *(float *)(param_1 + 0x3d4) * _DAT_005d74c8;
    *(undefined4 *)(param_1 + 0xec) = 0x3e322d0e;
    *(float *)(param_1 + 0x3d4) = fVar2;
    fVar2 = *(float *)(param_1 + 0x3d0) * _DAT_005d8468;
    *(undefined4 *)(param_1 + 0xf0) = 0x3d1374bc;
    *(float *)(param_1 + 0x3d0) = fVar2;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0x3b03126f;
    *(undefined4 *)(param_1 + 0xfc) = 0x3eb3b646;
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  return;
}

