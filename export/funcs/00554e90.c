
undefined4 FUN_00554e90(void)

{
  undefined4 uVar1;
  
  if (DAT_00679954 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00554e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)*DAT_00679954)();
    return uVar1;
  }
  return 0;
}

