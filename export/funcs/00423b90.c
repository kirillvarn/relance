
void FUN_00423b90(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *local_c [3];
  
  if (DAT_006679d8 == (int *)0x0) {
    DAT_006679d8 = (int *)FUN_005b73e0();
  }
  piVar1 = DAT_006679d8;
  (**(code **)(*DAT_006679d8 + 0x2c))();
  *local_c[0] = piVar1;
  local_c[0][1] = local_c;
  local_c[0][2] = param_2;
  return;
}

