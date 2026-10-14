
void __fastcall FUN_00592080(int param_1)

{
  int *piVar1;
  void **ppvVar2;
  int *piVar3;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c4a58;
  local_c = ExceptionList;
  piVar3 = (int *)**(int **)(param_1 + 4);
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  local_10 = param_1;
  if (piVar3 != *(int **)(param_1 + 4)) {
    do {
      FUN_005b7e1d(piVar3[3]);
      FUN_0046dfb0(&local_14,piVar3);
      piVar3 = local_14;
      ppvVar2 = ExceptionList;
    } while (local_14 != *(int **)(param_1 + 4));
  }
  ExceptionList = ppvVar2;
  piVar3 = *(int **)(param_1 + 4);
  local_14 = (int *)*piVar3;
  local_4 = 0xffffffff;
  piVar1 = local_14;
  if (*(int *)(param_1 + 0x10) == 0) {
    while (local_14 = piVar1, piVar1 != piVar3) {
      FUN_00595150();
      FUN_0046dfb0(&local_10,piVar1);
      piVar1 = local_14;
    }
  }
  else {
    FUN_00594900(piVar3[1]);
    *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

