
bool FUN_00442720(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0059da10("NavBar");
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 != 0) {
      iVar2 = FUN_0059da10("NN_Repair");
      if (iVar2 != 0) {
        return true;
      }
      iVar2 = FUN_0059da10("NN_ShipTrader");
      if (iVar2 != 0) {
        return true;
      }
      iVar2 = FUN_0059da10("NN_News");
      if (iVar2 != 0) {
        return true;
      }
      iVar2 = FUN_0059da10("NN_MissionVendor");
      return iVar2 != 0;
    }
  }
  return false;
}

