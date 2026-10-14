
void __fastcall FUN_005a17b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xc);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    if ((*(byte *)(piVar2 + 0x1b) & 1) == 0) {
      (**(code **)(*piVar2 + 0x30))();
      piVar2 = piVar1;
    }
    else {
      (**(code **)(*piVar2 + 0x2c))();
      piVar2 = piVar1;
    }
  }
  return;
}

