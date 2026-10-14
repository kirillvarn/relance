
undefined4 FUN_004c7860(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)0x0;
  while( true ) {
    piVar3 = DAT_00673518;
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)piVar2[0xd];
    }
    if (piVar3 == (int *)0x0) break;
    cVar1 = (**(code **)(*piVar3 + 0x20))(param_1);
    piVar2 = piVar3;
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

