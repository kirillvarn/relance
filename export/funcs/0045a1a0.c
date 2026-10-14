
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0045a1a0(undefined4 param_1,undefined4 *param_2,float param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  if (param_3 < _DAT_005c94f8) {
    *param_2 = DAT_00679bb4;
    return;
  }
  if (param_3 < _DAT_005c75e0) {
    *(undefined1 *)((int)param_2 + 1) = 0x80;
    *(undefined1 *)((int)param_2 + 2) = 0x40;
    *(undefined1 *)param_2 = 0xff;
    *(undefined1 *)((int)param_2 + 3) = 0xff;
    return;
  }
  if (_DAT_005c8930 < param_3) {
    FUN_0059d570(param_1);
    FUN_0059d560();
    uVar1 = ftol();
    uVar2 = ftol(uVar1);
    param_3 = (float)CONCAT13(0xff,CONCAT12(uVar2,CONCAT11(uVar2,uVar1)));
    *param_2 = param_3;
    return;
  }
  *(undefined1 *)((int)param_2 + 1) = 0x40;
  *(undefined1 *)((int)param_2 + 2) = 0x40;
  *(undefined1 *)param_2 = 0xff;
  *(undefined1 *)((int)param_2 + 3) = 0xff;
  return;
}

