
void __thiscall FUN_0052f9a0(int param_1,uint param_2,int param_3)

{
  CETractor *this;
  char cVar1;
  bool bVar2;
  TractorArm *pTVar3;
  int iVar4;
  
  if ((*(int **)(param_1 + 4) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))(), cVar1 == '\0')) {
    this = *(CETractor **)(param_1 + 4);
    pTVar3 = CETractor::GetTractorArm(this,param_2);
    if ((pTVar3 != (TractorArm *)0x0) &&
       (((iVar4 = *(int *)(pTVar3 + 8), iVar4 == 0 || (iVar4 == 0x9c)) ||
        (*(int *)(iVar4 + 0x54) == param_3 || *(int *)(iVar4 + 0x54) - param_3 < 0)))) {
      iVar4 = FUN_0054baf0();
      if ((*(int *)(param_1 + 8) != iVar4) && (bVar2 = SinglePlayer(), bVar2)) {
        return;
      }
      CETractor::RemoveTarget(this,param_2);
    }
  }
  return;
}

