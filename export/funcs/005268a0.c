
void __fastcall FUN_005268a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_4 [4];
  
  piVar2 = *(int **)(param_1 + 4);
  piVar1 = (int *)*piVar2;
  if (*(int *)(param_1 + 0x10) == 0) {
    while (piVar1 != piVar2) {
      FUN_0052afa0();
      FUN_0046c8c0(local_4,piVar1);
    }
  }
  else {
    piVar2 = (int *)piVar2[1];
    if (piVar2 != *(int **)(param_1 + 8)) {
      do {
        FUN_00527400(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_005b7e1d(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != (int *)*(int *)(param_1 + 8));
    }
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
  return;
}

