
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0053ea60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((float)param_1[0xd] == _DAT_005c7474) {
    uVar1 = (**(code **)*param_1)(param_1 + 0xf,0);
    uVar1 = FUN_005553b0(uVar1);
    param_1[0xe] = uVar1;
    param_1[0xd] = 0x3f800000;
  }
  return;
}

