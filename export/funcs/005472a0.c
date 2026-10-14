
undefined4 FUN_005472a0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if ((param_1[0x13] & 0x503U) != 0x503) {
                    /* WARNING: Could not recover jumptable at 0x005472c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x88))();
      return uVar1;
    }
    uVar1 = *(undefined4 *)(param_1[0x22] + 0x14);
  }
  return uVar1;
}

