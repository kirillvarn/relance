
uint FUN_00553660(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_00679880;
  if (piVar1 != DAT_00679880) {
    while ((param_2 != piVar1[3] || (param_1 != piVar1[2]))) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == DAT_00679880) {
        return (uint)piVar1 & 0xffffff00;
      }
    }
    if (piVar1 != DAT_00679880) {
      return CONCAT31((int3)((uint)piVar1 >> 8),1);
    }
  }
  return (uint)piVar1 & 0xffffff00;
}

