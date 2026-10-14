
bool __fastcall FUN_004725b0(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0041dde0("Arrow",0);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0xbfd9999a;
  FUN_005a0db0("Frame","Interface\\NeuroNet\\errorexplanation.cmp",&local_c,0,&local_18,0,0,0,1,1,0,
               1,0,0,0,&local_24);
  local_c = 0;
  local_8 = 0;
  local_4 = 0xbf800000;
  iVar3 = FUN_005a0e30(&DAT_005d075c,"SubHeader",&local_c,0,0x3f07ae14,0x3e08b439,0x3fa00000,0,1,0,0
                      );
  *(int *)(param_1 + 0x334) = iVar3;
  iVar3 = *(int *)(iVar3 + 0x334);
  if (*(char *)(iVar3 + 0x30) != '\x01') {
    *(undefined1 *)(iVar3 + 0x30) = 1;
    *(undefined4 *)(iVar3 + 0x28) = 0;
  }
  local_c = 0x3e083127;
  local_8 = 0x3cd4fdf4;
  local_4 = 0;
  local_18 = 0xbc449ba6;
  local_14 = 0xbd99999a;
  local_10 = 0xbf800000;
  uVar4 = FUN_005a0d00("ErrorOkayButton","ui_select_item",&local_18,&local_c,0,0,0,0,0);
  *(undefined4 *)(param_1 + 0x338) = uVar4;
  local_c = 0xbcbc6a7f;
  local_8 = 0xbdb851ec;
  local_4 = 0xbf800000;
  uVar4 = FUN_005a0e30("ErrorOkayText","ButtonText",&local_c,0,0x3e21cac1,0x3d75c28f,0x3fa00000,
                       0x411,1,0,0);
  *(undefined4 *)(param_1 + 0x33c) = uVar4;
  local_c = 0xbe6c8b44;
  local_8 = 0x3def9db2;
  local_4 = 0xbf800000;
  iVar3 = FUN_005a0e30("ErrorDialogTitle","PageHeader",&local_c,0,0x3ee66666,0x3d75c28f,0x3f99999a,
                       1000,1,0,1);
  *(int *)(param_1 + 0x340) = iVar3;
  iVar3 = *(int *)(iVar3 + 0x334);
  if (*(char *)(iVar3 + 0x30) != '\x01') {
    *(undefined1 *)(iVar3 + 0x30) = 1;
    *(undefined4 *)(iVar3 + 0x28) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x340) + 0xa8))(0x1d,L"Freelancer Encountered an Error",0);
  *(undefined4 *)(param_1 + 0x70) = 0x6e;
  *(undefined4 *)(param_1 + 0x78) = 6;
  uVar1 = FUN_004a7670();
  *(undefined1 *)(param_1 + 0x330) = uVar1;
  FUN_0059d8c0(param_1);
  FUN_00577b40(param_1 + 0x32c);
  FUN_005760d0(0xf);
  FUN_005760d0(0x11);
  cVar2 = FUN_004b5060(local_8,local_4);
  return cVar2 != '\0';
}

