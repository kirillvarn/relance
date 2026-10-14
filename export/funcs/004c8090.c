
void FUN_004c8090(void)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int *piVar1;
  int *piVar2;
  
  (**(code **)(**(int **)MaterialBatcher_exref + 0x20))(*(int **)MaterialBatcher_exref,1,0xffffffff)
  ;
  piVar1 = (int *)0x0;
  while( true ) {
    piVar2 = DAT_00673518;
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[0xd];
    }
    if (piVar2 == (int *)0x0) break;
    (**(code **)(*piVar2 + 0x18))(unaff_ESI,unaff_EBX);
    piVar1 = piVar2;
  }
  (**(code **)(**(int **)MaterialBatcher_exref + 0x20))(*(int **)MaterialBatcher_exref,1,1);
  return;
}

