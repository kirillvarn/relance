
void __fastcall FUN_004881f0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_005a17b0();
  if (param_1[0xce] != 2) {
    iVar2 = -1;
    if (param_1[0x196] != -1) {
      iVar2 = param_1[0x196];
    }
    if (param_1[0x3c5] != -1) {
      iVar2 = param_1[0x3c5];
    }
    if (-2 < iVar2) {
      if (iVar2 < param_1[0x3a0]) {
        param_1[0x197] = iVar2;
      }
      if ((-2 < iVar2) && (iVar2 < param_1[0x5cf])) {
        param_1[0x3c6] = iVar2;
      }
    }
  }
  if ((char)param_1[0xcf] != '\0') {
    *(undefined1 *)(param_1 + 0xcf) = 0;
    FUN_005763b0(0xc5,0);
    FUN_004a7690((char)param_1[0xcc]);
    (**(code **)(param_1[0x177] + 0x28))();
    (**(code **)(param_1[0x3a6] + 0x28))();
    (**(code **)(*param_1 + 0x84))();
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*param_1 + 0x28))();
    (**(code **)*param_1)(1);
  }
  return;
}

