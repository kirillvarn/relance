
void __fastcall FUN_005a8f50(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = (int *)*piVar2;
  if (*(int *)(param_1 + 0x14) == 0) {
    while (piVar1 != piVar2) {
      FUN_00531930();
      FUN_005adba0(local_4,piVar1);
    }
  }
  else {
    piVar2 = (int *)piVar2[1];
    if (piVar2 != *(int **)(param_1 + 0xc)) {
      do {
        FUN_005adf80(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_005af680(0);
        FUN_005b7e1d(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != (int *)*(int *)(param_1 + 0xc));
    }
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 8);
    *(int *)(*(int *)(param_1 + 8) + 8) = *(int *)(param_1 + 8);
    FUN_0053e430(local_8);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

