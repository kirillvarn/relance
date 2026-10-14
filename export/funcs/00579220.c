
undefined4 FUN_00579220(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_0067c3bc != (undefined4 *)0x0) {
    (**(code **)*DAT_0067c3bc)(1);
    DAT_0067c3bc = (undefined4 *)0x0;
  }
  DAT_0067c3bc = (int *)FUN_00565d90();
  if (DAT_0067c3bc != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_0067c3bc + 4))(param_1);
    return uVar1;
  }
  return 0;
}

