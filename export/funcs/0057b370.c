
void __fastcall FUN_0057b370(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x490) != 0) {
    piVar1 = *(int **)(param_1 + 0x48c);
    piVar3 = (int *)*piVar1;
    while (piVar3 != piVar1) {
      piVar2 = (int *)*piVar3;
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      FUN_0045eeb0();
      FUN_005b7e1d(piVar3);
      *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + -1;
      piVar3 = piVar2;
    }
    *(undefined1 *)(param_1 + 0x400) = 1;
    *(undefined1 *)(param_1 + 0x401) = 1;
  }
  return;
}

