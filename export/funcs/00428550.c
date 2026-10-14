
void FUN_00428550(void)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_00667c70;
  if (piVar1 != DAT_00667c70) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0x68))();
      piVar1 = (int *)*piVar1;
    } while (piVar1 != DAT_00667c70);
  }
  return;
}

