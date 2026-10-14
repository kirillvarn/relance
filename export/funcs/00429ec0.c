
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00429ec0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((*(float *)(param_1 + 0x54) <= _DAT_005c7474) && (_DAT_005ca23c <= *(float *)(param_1 + 0x58))
     ) {
    return 0xfffffff9;
  }
  uVar1 = ftol();
  *param_2 = uVar1;
  uVar1 = ftol();
  *param_3 = uVar1;
  return 0;
}

