
void FUN_004c78a0(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)0x0;
  while( true ) {
    piVar2 = DAT_00673518;
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[0xd];
    }
    if (piVar2 == (int *)0x0) break;
    (**(code **)(*piVar2 + 8))(param_1);
    piVar1 = piVar2;
  }
  return;
}

