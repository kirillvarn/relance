
void __fastcall thunk_FUN_00531af0(INotify *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_005de13c;
  if (*(CEquip **)(param_1 + 4) != (CEquip *)0x0) {
    CEquip::NotifyDisconnecting(*(CEquip **)(param_1 + 4),param_1);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00536170(*(int *)(param_1 + 0xc));
  }
  return;
}

