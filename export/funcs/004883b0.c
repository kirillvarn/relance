
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_004883b0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EBP;
  float unaff_ESI;
  float unaff_EDI;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined4 uStack_8;
  
  uVar5 = *param_3;
  local_3c = -0.018;
  local_38 = 0.0;
  local_34 = 0xbf800000;
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_30 = 0x3ca3d70a;
  local_2c = 0x3c75c28f;
  local_28 = 0;
  FUN_00423b30(local_c,&local_3c,&local_30);
  uVar3 = FUN_005a0db0("Confirm_deleteBox","Interface\\NeuroNet\\Options\\alt-f4window.cmp",local_c,
                       0,&local_18,0,0,0,1,1,0,1,0,0,0,&local_24);
  fVar1 = local_38 + _DAT_005cb88c;
  *(undefined4 *)(param_1 + 0x330) = uVar3;
  FUN_00422b80(local_3c + _DAT_005d15b4,fVar1,local_34);
  iVar4 = FUN_005a0e30("Confirm_delTxt",param_3[1],local_c,0,0x3ecccccd,0x3df5c28f,0x3f800000,0x4ad,
                       1,0,0);
  *(int *)(param_1 + 0x334) = iVar4;
  iVar4 = *(int *)(iVar4 + 0x334);
  if (*(char *)(iVar4 + 0x30) != '\x01') {
    *(undefined1 *)(iVar4 + 0x30) = 1;
    *(undefined4 *)(iVar4 + 0x28) = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x334) + 0xa8))(0x1d,uVar5,0);
  local_24 = 0.09;
  local_20 = 0.021;
  local_1c = 0;
  FUN_00422b80(unaff_EDI - _DAT_005d1f84,unaff_ESI - _DAT_005cb88c,unaff_EBP);
  uVar5 = FUN_005a0d00("Confirm_delBtnYes",0,&local_18,&local_24,0,0,0,0,0);
  fVar1 = unaff_ESI - _DAT_005cb88c;
  *(undefined4 *)(param_1 + 0x338) = uVar5;
  local_24 = 0.09;
  local_20 = 0.021;
  local_1c = 0;
  FUN_00422b80(unaff_EDI + _DAT_005d0434,fVar1,unaff_EBP);
  uVar5 = FUN_005a0d00("Confirm_delBtnNo",0,&local_18,&local_24,0,0,0,0,0);
  fVar1 = unaff_ESI - _DAT_005cb88c;
  *(undefined4 *)(param_1 + 0x33c) = uVar5;
  FUN_00422b80(unaff_EDI - _DAT_005d1f84,fVar1,unaff_EBP);
  uVar5 = FUN_005a0e30("Confirm_delBtnYesText","ButtonText",&local_18,0,0x3e8a3d71,0x3cf5c28f,
                       0x3f800000,0x4dc,1,0,0);
  local_24 = unaff_EDI + _DAT_005d0434;
  local_20 = unaff_ESI - _DAT_005cb88c;
  *(undefined4 *)(param_1 + 0x340) = uVar5;
  uVar5 = FUN_005a0e30("Confirm_delBtnNoText","ButtonText",&local_24,0,0x3e8a3d71,0x3cf5c28f,
                       0x3f800000,0x4dd,1,0,0);
  *(undefined4 *)(param_1 + 0x344) = uVar5;
  *(undefined4 *)(param_1 + 0x70) = 0x6e;
  *(undefined4 *)(param_1 + 0x78) = 7;
  FUN_005760d0(0x13);
  FUN_005760d0(0x12);
  FUN_005760d0(0xf);
  FUN_005760d0(0x11);
  FUN_0059d8c0(param_1);
  DAT_0067dccc = DAT_0067dccc + 1;
  cVar2 = FUN_004b5060(uStack_8,param_3);
  return cVar2 != '\0';
}

