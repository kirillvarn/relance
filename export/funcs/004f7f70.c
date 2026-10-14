
void __fastcall FUN_004f7f70(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bf4c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005d9ad4;
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x1f) & 4) != 0) {
    piVar1 = (int *)param_1[0x1b];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))(piVar1,7);
      (**(code **)(*(int *)param_1[0x1b] + 8))((int *)param_1[0x1b]);
      param_1[0x1b] = 0;
    }
    if (param_1[0x1c] != 0) {
      (**(code **)(**(int **)Alchemy_exref + 0x58))(*(int **)Alchemy_exref,param_1[0x1c]);
      (**(code **)(*(int *)param_1[0x1c] + 8))((int *)param_1[0x1c]);
      param_1[0x1c] = 0;
    }
  }
  if (((*(byte *)(param_1 + 0x1f) & 8) != 0) && (param_1[1] != 0)) {
    FUN_0042e160();
  }
  *param_1 = &PTR_LAB_005d9aac;
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x11) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0x11),(Watchable *)0x0);
  }
  ExceptionList = pvStack_c;
  return;
}

