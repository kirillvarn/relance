
void __thiscall FUN_005477d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  FUN_00539bc0(0x303,param_2);
  if ((((param_1 == 0) || (param_1 == -0xc)) ||
      (piVar1 = *(int **)(param_1 + 0x10), piVar1 == (int *)0x0)) ||
     ((piVar1[0x13] & 0x303U) != 0x303)) {
    piVar1 = (int *)0x0;
  }
  (**(code **)(*piVar1 + 0x4c))(param_2);
  if (((param_1 == 0) || (param_1 == -0xc)) ||
     ((piVar1 = *(int **)(param_1 + 0x10), piVar1 == (int *)0x0 ||
      ((piVar1[0x13] & 0x303U) != 0x303)))) {
    piVar1 = (int *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0054783d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc4))();
  return;
}

