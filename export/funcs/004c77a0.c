
void FUN_004c77a0(void)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_00673570 != 0) {
    (**(code **)(**(int **)TextureLib_exref + 0x38))(*(int **)TextureLib_exref,DAT_00673570);
    DAT_00673570 = 0;
  }
  piVar1 = (int *)0x0;
  while( true ) {
    piVar2 = DAT_00673518;
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[0xd];
    }
    piVar1 = DAT_00673518;
    if (piVar2 == (int *)0x0) break;
    (**(code **)(*piVar2 + 0x10))();
    piVar1 = piVar2;
  }
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)piVar1[0xd];
    (**(code **)*piVar1)(1);
    piVar1 = piVar2;
  }
  DAT_0067351c = 0;
  DAT_00673518 = (int *)0x0;
  FUN_00425a20();
  return;
}

