
void __thiscall FUN_00547880(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = SinglePlayer();
  if (!bVar1) {
    if ((((param_1 == 0) || (param_1 == -0xc)) ||
        (piVar2 = *(int **)(param_1 + 0x10), piVar2 == (int *)0x0)) ||
       ((piVar2[0x13] & 0x303U) != 0x303)) {
      piVar2 = (int *)0x0;
    }
    (**(code **)(*piVar2 + 0x50))(param_2,*(undefined4 *)UPDATE_DUMB_exref);
  }
  FUN_00534010(param_2);
  if (*(int *)(param_1 + 0x204) != 0) {
    FUN_00502f00(param_2);
  }
  if (*(int **)(param_1 + 0xe4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xe4) + 8))(param_2);
  }
  return;
}

