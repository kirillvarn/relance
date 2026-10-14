
undefined4 FUN_00442790(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0059da10("NavBar");
  if (iVar2 == 0) {
    return 0;
  }
  cVar1 = FUN_0055e280();
  if (cVar1 == '\0') {
    cVar1 = FUN_0055e280();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

