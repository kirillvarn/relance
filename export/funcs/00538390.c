
void FUN_00538390(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_00675570;
  while (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[0x32];
    (**(code **)(iVar1 + 0xc))(param_1);
  }
  return;
}

