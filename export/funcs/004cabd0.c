
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004cabd0(BaseWatcher *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x1bc);
  if (piVar1 != (int *)0x0) {
    iVar3 = piVar1[3];
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
      FUN_0043d2a0(iVar3);
      iVar3 = iVar2;
    }
    (**(code **)(*piVar1 + 0x28))();
    (**(code **)*piVar1)(1);
    *(undefined4 *)(param_1 + 0x1bc) = 0;
  }
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x60))();
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != *(int *)(param_1 + 0x2c)) {
    do {
      if ((*(int **)(iVar3 + 4) != (int *)0x0) && (*(char *)(iVar3 + 8) == '\x01')) {
        (**(code **)(**(int **)(iVar3 + 4) + 0x10))();
        *(undefined1 *)(iVar3 + 8) = 0;
      }
      piVar1 = *(int **)(iVar3 + 0xc);
      if ((piVar1 != (int *)0x0) && (piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x60))();
        (**(code **)(**(int **)(iVar3 + 0xc) + 8))(*(int **)(iVar3 + 0xc));
        *(undefined4 *)(iVar3 + 0xc) = 0;
      }
      iVar3 = iVar3 + 0x10;
    } while (iVar3 != *(int *)(param_1 + 0x2c));
  }
  FUN_004cd230();
  if (param_1[0x14] != (BaseWatcher)0x0) {
    FUN_00428de0();
    DAT_006735b0 = DAT_006735b0 + -1;
    if (DAT_006735b0 == 0) {
      DAT_006735a4 = 0;
      _DAT_006735ac = DAT_006108f8;
    }
    param_1[0x14] = (BaseWatcher)0x0;
  }
  BaseWatcher::set(param_1,(Watchable *)0x0);
  param_1[8] = (BaseWatcher)0x1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x14] = (BaseWatcher)0x0;
  param_1[0x15] = (BaseWatcher)0x0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = (BaseWatcher)0x1;
  if (*(int *)(param_1 + 0x170) != 0) {
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  param_1[0x174] = (BaseWatcher)0x0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  return;
}

