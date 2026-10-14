
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004be7e0(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  local_28 = param_3[2];
  local_30 = *param_3 + _DAT_005d6130;
  local_2c = param_3[1];
  if ((*(int *)(param_1 + 4) == 0) || (*(char *)(*(int *)(param_1 + 4) + 0x5c) == '\0')) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = 0.0;
    FUN_00422b80(local_30 + _DAT_005d6128,local_2c + _DAT_005d612c,local_28);
    sprintf(&DAT_006724b8,"%s-%06d","InfoCard",DAT_006728b8);
    DAT_006728b8 = DAT_006728b8 + 1;
    iVar2 = FUN_005a0c90(&DAT_006724b8,"interface\\multiplayer\\trade\\TRADE_question.3db",
                         "interface\\multiplayer\\trade\\TRADE_question.3db",0,0,&local_18,0,
                         &local_24,0,0,0,1,0,0,0);
    *(int *)(param_1 + 0x10) = iVar2;
    *(int *)(iVar2 + 0x2f0) = param_1;
    FUN_005a1340(*(int *)(param_1 + 0x10) + 0x80);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x74) = 1000;
    (**(code **)(**(int **)(param_1 + 0x10) + 0xa8))(1,1,0);
  }
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  sprintf(&DAT_006724b8,"%s-%06d","InfoFrame",DAT_006728b8);
  DAT_006728b8 = DAT_006728b8 + 1;
  iVar2 = FUN_005a0c90(&DAT_006724b8,"interface\\multiplayer\\trade\\TRADE_plyr_item_info.3db",
                       "interface\\multiplayer\\trade\\TRADE_plyr_item_info.3db",0,0,&local_30,0,
                       &local_24,1,0,0,1,0,0,0);
  *(int *)(param_1 + 0xc) = iVar2;
  *(int *)(iVar2 + 0x2f0) = param_1;
  FUN_005a1340(*(int *)(param_1 + 0xc) + 0x80);
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  FUN_00422b80(local_30 - (float)s_333>interface_multiplayer_trade__005d60a4._0_4_,local_2c,local_28
              );
  sprintf(&DAT_006724b8,"%s-%06d","IconFrame",DAT_006728b8);
  DAT_006728b8 = DAT_006728b8 + 1;
  iVar2 = FUN_005a0c90(&DAT_006724b8,"interface\\multiplayer\\trade\\TRADE_item_view.3db",
                       "interface\\multiplayer\\trade\\TRADE_item_view.3db",0,0,&local_18,0,
                       &local_24,1,0,0,1,0,0,0);
  *(int *)(param_1 + 8) = iVar2;
  *(int *)(iVar2 + 0x2f0) = param_1;
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x337) = 1;
  FUN_005a1340(*(int *)(param_1 + 8) + 0x80);
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_00422b80(local_30 - (float)s_333>interface_multiplayer_trade__005d60a4._0_4_,local_2c,local_28
              );
  sprintf(&DAT_006724b8,"%s-%06d","IconMesh",DAT_006728b8);
  DAT_006728b8 = DAT_006728b8 + 1;
  iVar2 = FUN_005a0db0(&DAT_006724b8,"interface\\multiplayer\\trade\\TRADE_item_view.3db",auStack_c,
                       0,&local_18,0,0,0,1,0,1,1,100,0,0,&local_24);
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(iVar2 + 0x2ec) = iVar2;
  *(int *)(*(int *)(param_1 + 0x14) + 0x2f0) = param_1;
  FUN_005a1340(*(int *)(param_1 + 0x14) + 0x80);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2ec) = *(undefined4 *)(param_1 + 0x14);
  FUN_00422b80(local_30 - _DAT_005c99c8,local_2c,local_28);
  sprintf(&DAT_006724b8,"%s-%06d","ItemName",DAT_006728b8);
  DAT_006728b8 = DAT_006728b8 + 1;
  uVar3 = FUN_005a0e30(&DAT_006724b8,"ItemName",auStack_c,0,0x3e6b851f,0x3d872b02,0x3fc00000,0,0,0,0
                      );
  fVar1 = local_2c - _DAT_005c99c8;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  FUN_00422b80(local_30 + _DAT_005d011c,fVar1,local_28);
  sprintf(&DAT_006724b8,"%s-%06d","ItemCount",DAT_006728b8);
  DAT_006728b8 = DAT_006728b8 + 1;
  uVar3 = FUN_005a0e30(&DAT_006724b8,"ItemName",auStack_c,0,0x3e428f5c,0x3ccccccd,0x3fc00000,0,2,0,0
                      );
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  sprintf(&DAT_006724b8,"%s-%06d","CargoBar",DAT_006728b8);
  DAT_006728b8 = DAT_006728b8 + 1;
  iVar2 = FUN_0059db20(&DAT_006724b8,"CargoBarControl",param_2,0);
  *(int *)(param_1 + 0x20) = iVar2;
  *(undefined4 *)(iVar2 + 0xb4) = 0x3cd844d0;
  *(undefined4 *)(iVar2 + 0xb8) = 0x3b51b717;
  *(undefined4 *)(iVar2 + 0xbc) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x348) = 1;
  local_24 = local_30 - (float)s_<X94>CargoBarControl_005d602f._1_4_;
  iVar2 = *(int *)(param_1 + 0x20);
  local_20 = local_2c - _DAT_005d602c;
  *(float *)(iVar2 + 0xa8) = local_24;
  *(float *)(iVar2 + 0xac) = local_20;
  local_1c = local_28;
  *(float *)(iVar2 + 0xb0) = local_28;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x330) = 0x42c80000;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x334) = 0x42c80000;
  *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x340) = 0xff00c800;
  (**(code **)(**(int **)(param_1 + 0x20) + 0xa8))(0x19,0x10000,0);
  return;
}

