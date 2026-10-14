
void FUN_00442130(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)FUN_0059da10("NavBar");
  if (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[0xfa];
    if (piVar1 != (int *)0x0) {
      iVar3 = piVar1[3];
      while (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 8);
        FUN_0043d2a0(iVar3);
        iVar3 = iVar2;
      }
      (**(code **)(*piVar1 + 0x28))();
      (**(code **)*piVar1)(1);
      piVar4[0xfa] = 0;
    }
    FUN_004420a0();
    (**(code **)(*piVar4 + 0x28))();
    (**(code **)*piVar4)(1);
  }
  return;
}

