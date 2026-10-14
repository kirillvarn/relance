
void FUN_00442060(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0059da10("NavBar");
  if ((piVar1 == (int *)0x0) &&
     (piVar1 = (int *)FUN_0059db20("NavBar","NavBar",0,0), piVar1 == (int *)0x0)) {
    return;
  }
  piVar1 = (int *)(**(code **)(*piVar1 + 8))();
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00442098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xb4))();
  return;
}

