
void FUN_00442850(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0059da10("NavBar");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 != 0) {
      FUN_00441a40(0);
    }
  }
  return;
}

