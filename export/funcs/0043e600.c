
void FUN_0043e600(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0059da10("NN_Repair");
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 8))();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xa8))(0x4e,0,0);
    }
  }
  piVar1 = (int *)FUN_0059da10("NN_ShipTrader");
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 8))();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xa8))(0x4e,0,0);
    }
  }
  piVar1 = (int *)FUN_0059da10("NN_News");
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 8))();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xa8))(0x4e,0,0);
    }
  }
  piVar1 = (int *)FUN_0059da10("NN_MissionVendor");
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 8))();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xa8))(0x4e,0,0);
    }
  }
  return;
}

