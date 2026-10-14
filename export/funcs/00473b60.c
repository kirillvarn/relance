
void FUN_00473b60(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_0059d9c0("NN_NetworkOperation");
  if (piVar3 != (int *)0x0) {
    FUN_004a7690((char)piVar3[0xce]);
    if ((code *)piVar3[0xcc] != (code *)0x0) {
      (*(code *)piVar3[0xcc])(piVar3[0xcd],0);
    }
    (**(code **)(*piVar3 + 0x84))();
    iVar2 = piVar3[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*piVar3 + 0x28))();
    (**(code **)*piVar3)(1);
  }
  return;
}

