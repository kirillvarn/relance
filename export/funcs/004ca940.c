
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ca940(BaseWatcher *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  char cVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bda41;
  pvStack_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x1bc);
  local_4 = 1;
  ppvVar4 = &pvStack_c;
  if (piVar1 != (int *)0x0) {
    iVar3 = piVar1[3];
    ExceptionList = &pvStack_c;
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
      FUN_0043d2a0(iVar3);
      iVar3 = iVar2;
    }
    (**(code **)(*piVar1 + 0x28))();
    (**(code **)*piVar1)(1);
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    ppvVar4 = ExceptionList;
  }
  ExceptionList = ppvVar4;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x60))();
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_004caae0();
  if (param_1[0x14] != (BaseWatcher)0x0) {
    FUN_00428de0();
    FUN_004ca670();
    param_1[0x14] = (BaseWatcher)0x0;
  }
  FUN_004ca910();
  if (*(int *)(param_1 + 0x170) != 0) {
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  param_1[0x174] = (BaseWatcher)0x0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  cVar5 = FUN_00420d60();
  if (cVar5 != '\0') {
    FUN_0059eee0();
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0059ef20();
  local_4 = 4;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x60))();
    (**(code **)(**(int **)(param_1 + 0xc) + 8))(*(int **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_004caae0();
  if (param_1[0x14] != (BaseWatcher)0x0) {
    FUN_00428de0();
    DAT_006735b0 = DAT_006735b0 + -1;
    if (DAT_006735b0 == 0) {
      DAT_006735a4 = 0;
      _DAT_006735ac = DAT_006108f8;
    }
    param_1[0x14] = (BaseWatcher)0x0;
  }
  FUN_004ca910();
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_4 = 0xffffffff;
  if (*(int *)param_1 != 0) {
    BaseWatcher::set_pointer(param_1,(Watchable *)0x0);
  }
  ExceptionList = pvStack_c;
  return;
}

