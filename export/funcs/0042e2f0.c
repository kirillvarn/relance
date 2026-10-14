
void FUN_0042e2f0(void)

{
  int *piVar1;
  
  piVar1 = *(int **)Alchemy_exref;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
  }
  piVar1 = *(int **)FxEffectLibrary_exref;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
  }
  DAT_00667e14 = 0;
  return;
}

