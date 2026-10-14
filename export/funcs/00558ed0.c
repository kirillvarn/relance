
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00558ed0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  
  puVar1 = param_2;
  if (DAT_00679a0c != 0) {
    return false;
  }
  DAT_00679a04 = 1;
  _DAT_006799fc = *param_2;
  _DAT_00679a00 = param_2[1];
  FUN_00556090(param_2,&param_2);
  if (param_2 != DAT_00679a08) {
    if (DAT_00679a08 != (undefined4 *)0x0) {
      *(undefined1 *)((int)DAT_00679a08 + 0xd) = 0;
      FUN_00555f00(2,puVar1);
    }
    DAT_00679a08 = param_2;
    if (param_2 != (undefined4 *)0x0) {
      *(undefined1 *)((int)param_2 + 0xd) = 1;
      FUN_00555f00(1,puVar1);
    }
  }
  uVar2 = 0xffffffff;
  if (param_1 == 0x201) {
    uVar2 = 3;
  }
  bVar3 = DAT_00679a08 != (undefined4 *)0x0;
  if (bVar3) {
    FUN_00555f00(uVar2,puVar1);
  }
  return bVar3;
}

