
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428c50(float param_1,float param_2,float param_3)

{
  int *piVar1;
  float unaff_retaddr;
  float local_4;
  
  piVar1 = DAT_00667cb0;
  local_4 = param_2;
  if (DAT_00667cb0 != (int *)0x0) {
    if (((float)_DAT_005ca158 < param_2) && (local_4 = DAT_006108d8, DAT_00667cac != 3)) {
      local_4 = DAT_006108e4;
    }
    if ((float)_DAT_005ca158 < param_3) {
      if (DAT_00667cac != 3) {
        DAT_00667cb0[0xe] = DAT_006108e8;
        piVar1[0xd] = (int)local_4;
        return;
      }
      DAT_00667cb0[0xe] = DAT_006108dc;
      piVar1[0xd] = (int)local_4;
      return;
    }
    param_2 = 0.0;
    (**(code **)(*DAT_00667cb0 + 0x24))(DAT_00667cb0);
    piVar1[0xd] = (int)&param_2;
    piVar1[0xe] = (int)ABS(((float)&param_2 - unaff_retaddr) / param_1);
  }
  return;
}

