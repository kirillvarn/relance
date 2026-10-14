
void __fastcall FUN_004c6250(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)param_1[8];
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_005b7e1d(piVar3);
    param_1[9] = param_1[9] + -1;
    piVar3 = piVar2;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  if (*param_1 != 0) {
    FUN_00585d90(0,0);
    FUN_00585bd0(0xffffffff,0,0);
  }
  return;
}

