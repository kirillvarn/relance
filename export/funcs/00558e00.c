
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00558e00(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  if (DAT_00679a0c != 0) {
    return false;
  }
  DAT_00679a04 = 1;
  _DAT_006799fc = *param_1;
  _DAT_00679a00 = param_1[1];
  FUN_00556090(param_1,&param_1);
  if (param_1 != DAT_00679a08) {
    if (DAT_00679a08 != (undefined4 *)0x0) {
      *(undefined1 *)((int)DAT_00679a08 + 0xd) = 0;
      FUN_00555f00(2,puVar1);
    }
    DAT_00679a08 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      *(undefined1 *)((int)param_1 + 0xd) = 1;
      FUN_00555f00(1,puVar1);
    }
  }
  return DAT_00679a08 != (undefined4 *)0x0;
}

