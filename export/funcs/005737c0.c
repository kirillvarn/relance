
void __fastcall FUN_005737c0(int param_1)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005c39c3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x210) = &PTR_FUN_005e2718;
  piVar1 = *(int **)(param_1 + 0x224);
  local_4 = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x224);
  local_4 = local_4 & 0xffffff00;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  *(undefined4 *)(param_1 + 0x210) = &PTR_LAB_005e2708;
  ExceptionList = pvStack_c;
  return;
}

