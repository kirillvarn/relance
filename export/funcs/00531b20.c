
void __thiscall FUN_00531b20(INotify *param_1,int param_2)

{
  if (param_2 == 10) {
    CEquip::NotifyDisconnecting(*(CEquip **)(param_1 + 4),param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

