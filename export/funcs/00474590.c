
void FUN_00474590(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  
  piVar4 = (int *)FUN_0059d9c0("BlockingDialog");
  if (piVar4 != (int *)0x0) {
    cVar3 = FUN_0041a3e0();
    if (cVar3 != '\0') {
      *(undefined1 *)(piVar4 + 0xcb) = 0;
    }
    FUN_004a7690((char)piVar4[0xcb]);
    (**(code **)(*piVar4 + 0x84))();
    iVar2 = piVar4[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*piVar4 + 0x28))();
    (**(code **)*piVar4)(1);
  }
  return;
}

