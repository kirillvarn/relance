
void __thiscall FUN_0051cbb0(int param_1,int param_2)

{
  BaseWatcher *this;
  int iVar1;
  Watchable *pWVar2;
  int iVar3;
  
  this = (BaseWatcher *)(param_1 + 0xc0);
  if (param_2 == 0) {
    pWVar2 = (Watchable *)0x0;
  }
  else {
    pWVar2 = (Watchable *)(param_2 + 8);
  }
  if (pWVar2 != *(Watchable **)this) {
    BaseWatcher::set_pointer(this,pWVar2);
  }
  iVar1 = *(int *)this;
  if (((iVar1 == 0) || (iVar3 = iVar1 + -8, iVar3 == 0)) || (*(int *)(iVar1 + 0x14) != 1)) {
    iVar3 = 0;
  }
  FUN_004c7330(iVar3);
  return;
}

