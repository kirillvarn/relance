
void FUN_00557130(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    *piVar1 = 0;
    *(undefined1 *)(piVar1 + 1) = 0;
    FUN_005b7e1d(piVar1);
    *param_1 = 0;
  }
  return;
}

