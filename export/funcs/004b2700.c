
void __fastcall FUN_004b2700(int param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_80 [128];
  
  if (*(int *)(param_1 + 0x7f4) == 0) {
    uVar2 = FUN_00575d70();
    uVar3 = FUN_00575d60();
    iVar4 = FUN_00576f40(uVar2);
    if (iVar4 == 0) {
      FUN_00576f40(uVar3);
    }
    FUN_004af230("../Data/interface/keylist.ini");
    uVar2 = (**(code **)(**(int **)(param_1 + 0x4b8) + 0xa8))(0x3b,0,0);
    FUN_004af900(uVar2);
  }
  else {
    if (*(char *)(param_1 + 0x84d) != '\0') {
      FUN_004b1c00(*(undefined4 *)(param_1 + 0x8b8),*(undefined1 *)(param_1 + 0x8bc));
      *(undefined1 *)(param_1 + 0x334) = *(undefined1 *)(param_1 + 0x8bc);
      *(undefined1 *)(param_1 + 0x84d) = 0;
      *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x8b8);
      FUN_004b0920(0x536);
    }
    FUN_004b06a0(1);
  }
  *(undefined1 *)(param_1 + 0x848) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x7ac) + 0x348) = DAT_00679b94;
  *(undefined1 *)(*(int *)(param_1 + 0x7a8) + 0x37c) = 1;
  *(byte *)(*(int *)(param_1 + 0x7a8) + 0x388) = *(byte *)(*(int *)(param_1 + 0x7a8) + 0x388) & 0xfb
  ;
  FUN_004b2540(0);
  switch(*(undefined4 *)(param_1 + 0x7f4)) {
  case 0:
    FUN_004aeab0();
    break;
  case 1:
    FUN_004aebb0();
    break;
  case 2:
    FUN_004aeca0();
    break;
  case 3:
    FUN_004aed70();
    break;
  case 4:
    *(byte *)(*(int *)(param_1 + 0x7f0) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x7f0) + 0x6c) & 0xfc
    ;
    *(undefined4 *)(*(int *)(param_1 + 0x374) + 0x348) = DAT_00679bb0;
    FUN_004347e0(DAT_0067eca8,0x5e4,auStack_80,0x40);
    (**(code **)(**(int **)(param_1 + 0x7b4) + 0xa8))(0x1d,auStack_80,0);
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7b0) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x7b4) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x344) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
  }
  if (*(char *)(param_1 + 0x848) == '\0') {
    FUN_004aee30();
  }
  return;
}

