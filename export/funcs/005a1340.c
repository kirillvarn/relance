
uint __fastcall FUN_005a1340(undefined4 *param_1)

{
  uint uVar1;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  uVar1 = FUN_0059f0d0(local_18);
  if ((char)uVar1 == '\x01') {
    *param_1 = local_18[0];
    param_1[1] = local_10;
    param_1[2] = 0;
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

