
void __fastcall FUN_0051e660(IDPMsgHandler *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = *(int **)(param_1 + 0xf8);
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x104) != -1) {
      (**(code **)(*piVar2 + 0x34))(piVar2,*(int *)(param_1 + 0x104));
      *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x108) != -1) {
      (**(code **)(**(int **)(param_1 + 0xf8) + 0x34))
                (*(int **)(param_1 + 0xf8),*(int *)(param_1 + 0x108));
      *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
    }
    (**(code **)(**(int **)(param_1 + 0xf8) + 8))(*(int **)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    param_1[0x110] = (IDPMsgHandler)0x0;
    if (*(int *)(*(int *)(param_1 + 0x100) + 8) != 0) {
      BaseWatcher::set_pointer((BaseWatcher *)(*(int *)(param_1 + 0x100) + 8),(Watchable *)0x0);
    }
  }
  IDPMsgHandler::OnDisconnect(param_1);
  piVar2 = (int *)FUN_0054baf0();
  if (piVar2 != (int *)0x0) {
    iVar1 = *DAT_0067ecd0;
    uVar3 = (**(code **)(*piVar2 + 0x20))(0,5,DAT_00673344);
    (**(code **)(iVar1 + 0xe4))(uVar3);
  }
  FUN_0041a0f0(0,0x40400000);
  return;
}

