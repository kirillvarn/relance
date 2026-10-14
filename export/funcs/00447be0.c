
void FUN_00447be0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *local_c [3];
  
  if (DAT_00668a98 == (int *)0x0) {
    DAT_00668a98 = (int *)FUN_005b73e0();
  }
  piVar1 = DAT_00668a98;
  (**(code **)(*DAT_00668a98 + 0x38))();
  *local_c[0] = piVar1;
  local_c[0][1] = local_c;
  local_c[0][2] = param_2;
  return;
}

