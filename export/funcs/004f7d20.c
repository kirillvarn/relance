
void __thiscall FUN_004f7d20(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  Watchable *pWVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0) {
    pWVar1 = (Watchable *)0x0;
  }
  else {
    pWVar1 = (Watchable *)(param_2 + 8);
  }
  if (pWVar1 != *(Watchable **)(param_1 + 0x44)) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0x44),pWVar1);
  }
  *(undefined4 *)(param_1 + 0x40) = param_3;
  puVar3 = (undefined4 *)(param_1 + 0x10);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

