
/* WARNING: Removing unreachable block (ram,0x004cbbb9) */
/* WARNING: Removing unreachable block (ram,0x004cbbc0) */
/* WARNING: Removing unreachable block (ram,0x004cbbe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004cbb40(BaseWatcher *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x60))();
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != *(int *)(param_1 + 0x2c)) {
    do {
      if ((*(int **)(iVar2 + 4) != (int *)0x0) && (*(char *)(iVar2 + 8) == '\x01')) {
        (**(code **)(**(int **)(iVar2 + 4) + 0x10))();
        *(undefined1 *)(iVar2 + 8) = 0;
      }
      piVar1 = *(int **)(iVar2 + 0xc);
      if ((piVar1 != (int *)0x0) && (piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x60))();
        (**(code **)(**(int **)(iVar2 + 0xc) + 8))(*(int **)(iVar2 + 0xc));
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
      iVar2 = iVar2 + 0x10;
    } while (iVar2 != *(int *)(param_1 + 0x2c));
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  if (param_1[0x14] != (BaseWatcher)0x0) {
    FUN_00428de0();
    DAT_006735b0 = DAT_006735b0 + -1;
    if (DAT_006735b0 == 0) {
      DAT_006735a4 = 0;
      _DAT_006735ac = DAT_006108f8;
    }
    param_1[0x14] = (BaseWatcher)0x0;
  }
  if (*(int *)param_1 != 0) {
    BaseWatcher::set_pointer(param_1,(Watchable *)0x0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x14] = (BaseWatcher)0x0;
  param_1[0x15] = (BaseWatcher)0x0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[8] = (BaseWatcher)0x1;
  param_1[0x20] = (BaseWatcher)0x1;
  return;
}

