
INotify * __thiscall FUN_00531ab0(INotify *param_1,byte param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_005de13c;
  if (*(CEquip **)(param_1 + 4) != (CEquip *)0x0) {
    CEquip::NotifyDisconnecting(*(CEquip **)(param_1 + 4),param_1);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00536170(*(int *)(param_1 + 0xc));
  }
  if ((param_2 & 1) != 0) {
    FUN_005b7e1d(param_1);
  }
  return param_1;
}

