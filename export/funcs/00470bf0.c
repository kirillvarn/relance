
void __fastcall FUN_00470bf0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  if (*(int *)(param_1 + 0x10) == 0) {
    while (piVar2 != piVar1) {
      FUN_00536020();
      FUN_00470fd0(local_4,piVar2);
    }
    return;
  }
  piVar2 = (int *)piVar1[1];
  if ((int *)piVar1[1] != *(int **)(param_1 + 8)) {
    do {
      FUN_004713b0(piVar2[2]);
      piVar1 = (int *)*piVar2;
      FUN_0046fa50();
      FUN_005b7e1d(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 8));
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

