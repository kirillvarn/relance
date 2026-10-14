
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00540990(int *param_1)

{
  int *piVar1;
  int iVar2;
  byte unaff_retaddr;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x150))();
  if (_DAT_00613ec4 < *(float *)(iVar2 + 0x38)) {
    (**(code **)(*piVar1 + 0x88))(&param_1);
    return (byte)~unaff_retaddr >> 7;
  }
  return 0;
}

