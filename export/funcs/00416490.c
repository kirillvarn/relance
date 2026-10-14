
void __fastcall FUN_00416490(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_4 [4];
  
  *param_1 = &PTR_LAB_005c8dec;
  if (param_1[0x46] != 0) {
    param_1[0x46] = 0;
  }
  if (param_1[0x36] != 0) {
    param_1[0x36] = 0;
  }
  param_1[0x56] = 0;
  piVar1 = (int *)param_1[0x58];
  piVar2 = (int *)*piVar1;
  if (param_1[0x5b] == 0) {
    while (piVar2 != piVar1) {
      FUN_0052afa0();
      FUN_0046c8c0(local_4,piVar2);
    }
  }
  else {
    FUN_00418c90(piVar1[1]);
    *(undefined4 *)(param_1[0x58] + 4) = param_1[0x59];
    param_1[0x5b] = 0;
    *(undefined4 *)param_1[0x58] = param_1[0x58];
    *(undefined4 *)(param_1[0x58] + 8) = param_1[0x58];
  }
  FUN_005b7e1d(param_1[0x58]);
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  FUN_005b7e1d(param_1[0x59]);
  param_1[0x59] = 0;
  return;
}

