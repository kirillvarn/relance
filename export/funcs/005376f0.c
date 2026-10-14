
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005376f0(undefined4 *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x2d) & 8) != 0) {
    FUN_00410e20();
    iVar1 = param_1[0x33];
    if (iVar1 == 0) {
      DAT_00675570 = param_1[0x32];
      if (DAT_00675570 == 0) {
        DAT_00675574 = 0;
      }
      else {
        *(undefined4 *)(DAT_00675570 + 0xcc) = 0;
      }
    }
    else if (param_1[0x32] == 0) {
      DAT_00675574 = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 200) = 0;
      }
    }
    else {
      *(undefined4 *)(iVar1 + 200) = param_1[0x32];
      *(undefined4 *)(param_1[0x32] + 0xcc) = param_1[0x33];
    }
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    _DAT_0067556c = _DAT_0067556c + -1;
    iVar1 = param_1[0x34];
    param_1[0x34] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      (**(code **)*param_1)(1);
    }
  }
  return;
}

