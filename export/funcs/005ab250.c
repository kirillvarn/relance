
undefined4 __thiscall FUN_005ab250(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  code *_Source;
  
  uVar2 = 0;
  if (param_2 == 0) {
    return 0;
  }
  pcVar1 = (char *)(param_1 + 0x21c);
  *pcVar1 = '\0';
  (**(code **)(*DAT_0067ecd0 + 0x50))(param_2,DAT_00673344);
  FUN_005a89b0(pcVar1,0x40a00000,0x42700000);
  if (*pcVar1 != '\0') {
    FUN_004c4660(*(undefined4 *)(param_2 + 0x26c));
    FUN_004c4f80(*(undefined4 *)(param_2 + 0x244));
    FUN_004c3e20(*(undefined4 *)(param_2 + 0x230));
    FUN_004c3f30(param_2 + 0x254);
    FUN_004c4070(param_2 + 0x248);
    FUN_004c4cf0(*(undefined4 *)(param_2 + 0x234),1);
    FUN_004c3d20(param_2 + 0x2a8);
    FUN_004c3d80(param_2 + 0x274);
    if ((*(uint *)(param_2 + 0x264) & 0x3fffffff) == 0) {
      FUN_004c4910(&stack0xfffffffc);
      FUN_004c4840(*(undefined4 *)(param_2 + 0x260));
    }
    else {
      FUN_004c4840(0);
      FUN_004c4910(param_2 + 0x264);
    }
    FUN_004c4a10(*(undefined4 *)(param_2 + 0x268));
    _Source = *(code **)(param_2 + 0x208);
    if (*(code **)(param_2 + 0x208) == (code *)0x0) {
      _Source = _C_exref;
    }
    wcscpy((wchar_t *)&DAT_006732f0,(wchar_t *)_Source);
    uVar2 = 1;
  }
  return uVar2;
}

