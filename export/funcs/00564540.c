
void FUN_00564540(void)

{
  int *piVar1;
  
  piVar1 = &DAT_0067a4a8;
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x10))();
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x67a55c);
  return;
}

