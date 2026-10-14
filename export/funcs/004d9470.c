
void __thiscall FUN_004d9470(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  IBehaviorManager *this;
  EvaluateResult EVar4;
  CEqObj *this_00;
  
  iVar3 = FUN_0054baf0();
  if (iVar3 != 0) {
    cVar2 = FUN_0045a740();
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x3a8) = 0xffffffff;
      if (*(int *)(param_2 + 0x138) == -1) {
        FUN_004d8e20(0xffffffff,0);
        FUN_00489e80(DAT_00674a18,0);
        return;
      }
      if (((iVar3 == -0xc) || (this_00 = *(CEqObj **)(iVar3 + 0x10), this_00 == (CEqObj *)0x0)) ||
         ((*(uint *)(this_00 + 0x4c) & 0x503) != 0x503)) {
        this_00 = (CEqObj *)0x0;
      }
      this = CEqObj::get_behavior_interface(this_00);
      iVar3 = *(int *)(this + 0xc0);
      iVar1 = *(int *)(param_2 + 0x138);
      if (iVar3 == iVar1) {
        if ((iVar3 != -1) && (iVar3 != 0x13)) {
          FUN_004d8e20(iVar1,0);
          return;
        }
      }
      else {
        EVar4 = IBehaviorManager::external_player_evaluate(this,iVar1);
        if (EVar4 == 2) {
          if (*(int *)(param_2 + 0x138) == 7) {
            cVar2 = FUN_004d9750();
            if (cVar2 != '\0') {
              FUN_00489e80(DAT_00674a14,0);
            }
          }
        }
        else {
          FUN_00489ea0(param_2 + 4);
          FUN_004d8e20(*(undefined4 *)(param_2 + 0x138),0);
          if (*(int *)(param_2 + 0x138) == 3) {
            *(undefined4 *)(param_1 + 0x3ac) = DAT_005d828c;
            *(undefined4 *)(param_1 + 0x3b0) = 0;
            return;
          }
        }
      }
    }
  }
  return;
}

