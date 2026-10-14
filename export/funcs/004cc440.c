
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004cc440(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 unaff_EDI;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_48 [36];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00421ed0(0xde1);
  FUN_00421ed0(0xb44);
  FUN_00421ed0(0xb71);
  FUN_00421ed0(0xb60);
  FUN_00422610(&DAT_0067dbf8,"E:\\FL\\Scratch\\Source\\Client\\Space\\HUD_Comm.cpp",0x660);
  FUN_00422950(&DAT_0067dbf8);
  FUN_004101e0();
  fVar7 = -NAN;
  fVar5 = 1.9478e-43;
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x8b,0xffffffff);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x16,1);
  fVar1 = *(float *)(param_1 + 0x5c);
  fVar2 = *(float *)(param_1 + 0x60);
  uVar3 = *(undefined4 *)(param_1 + 100);
  FUN_004215b0();
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  FUN_00422690(0,auStack_48);
  FUN_00421ed0(0xb71);
  FUN_00421ed0(0xb44);
  FUN_00421ed0(0xde1);
  FUN_00421dd0(0xbe2);
  FUN_004220c0(2,1);
  FUN_00421670(2);
  FUN_00421ba0(&DAT_00679bb4);
  FUN_00422b80(fVar1 - _DAT_005d2b1c,fVar2 + _DAT_005d2b1c,uVar3);
  fVar1 = fVar5 + _DAT_005d747c;
  fVar2 = fVar7 - _DAT_005d747c;
  fVar4 = fVar7 - _DAT_005d747c;
  fVar6 = fVar5;
  fVar8 = fVar7;
  FUN_00421cc0(fVar5,fVar7,unaff_EDI);
  FUN_00421cc0(fVar1,fVar7,unaff_EDI);
  FUN_00421cc0(fVar1,fVar7,unaff_EDI);
  FUN_00421cc0(fVar1,fVar4,unaff_EDI);
  FUN_00421cc0(fVar1,fVar4,unaff_EDI);
  FUN_00421cc0(fVar5,fVar2,unaff_EDI);
  FUN_00421cc0(fVar5,fVar2,unaff_EDI);
  FUN_00421cc0(fVar6,fVar8,unaff_EDI);
  FUN_00421690();
  return;
}

