
undefined4 * __thiscall
FUN_004bf120(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9,
            undefined1 param_10,undefined1 param_11)

{
  _Node *p_Var1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_c4;
  list<EquipDesc,std::allocator<EquipDesc>_> lStack_c1;
  undefined4 *puStack_b8;
  int iStack_b4;
  undefined4 *puStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 *puStack_4c;
  undefined4 *local_40;
  undefined1 local_3c [36];
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bd580;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 4) = lStack_c1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 8) = lStack_c1;
  local_4 = 0;
  local_40 = param_1;
  p_Var1 = std::list<EquipDesc,std::allocator<EquipDesc>_>::_Buynode
                     ((list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 8),(_Node *)0x0,
                      (_Node *)0x0);
  param_1[9] = p_Var1;
  param_1[10] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  EquipDesc::EquipDesc((EquipDesc *)(param_1 + 0xe));
  param_1[3] = param_2;
  *(undefined1 *)(param_1 + 0x17) = param_10;
  *param_1 = &PTR_FUN_005d628c;
  param_1[0xb] = 0;
  param_1[0xc] = param_9;
  *(undefined1 *)((int)param_1 + 0x5d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)((int)param_1 + 0x5e) = param_11;
  EquipDesc::set_count((EquipDesc *)(param_1 + 0xe),0);
  param_1[0x16] = 0;
  FUN_004215b0();
  local_10 = 0;
  local_14 = (void *)0x0;
  local_18 = 0;
  (**(code **)(*param_2 + 0x90))(param_3,local_3c);
  puStack_b0 = operator_new(0x2c);
  pvStack_c._0_1_ = 2;
  puStack_b8 = puStack_b0;
  if (puStack_b0 == (undefined4 *)0x0) {
    puStack_b0 = (undefined4 *)0x0;
  }
  else {
    *puStack_b0 = &PTR_LAB_005d6028;
    puStack_b0[1] = param_1;
    puStack_b0[9] = 0;
    FUN_004be7e0(param_1[3],&stack0xffffff38);
  }
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  FUN_00537260(param_1[6],1,&puStack_b0);
  if (1 < param_7) {
    iStack_b4 = param_7 + -1;
    do {
      puVar2 = operator_new(0x2c);
      pvStack_c._0_1_ = 3;
      puStack_4c = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puStack_b8 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = &PTR_LAB_005d6028;
        puVar2[1] = param_1;
        puVar2[9] = 0;
        FUN_004be7e0(param_1[3],&stack0xffffff38);
        puStack_b8 = puVar2;
      }
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
      FUN_00537260(param_1[6],1,&puStack_b8);
      iStack_b4 = iStack_b4 + -1;
    } while (iStack_b4 != 0);
    iStack_b4 = 0;
  }
  pcVar4 = "interface\\multiplayer\\trade\\TRADE_transscrollbar.3db";
  if (param_7 != 4) {
    pcVar4 = "interface\\multiplayer\\trade\\TRADE_inventoryscrollbar.3db";
  }
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_64 = 0x3c449ba6;
  uStack_60 = 0x3c1374bc;
  uStack_5c = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0x3c449ba6;
  uStack_90 = 0x3c1374bc;
  uStack_8c = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_58 = 0x3c23d70a;
  uStack_54 = 0x3e0f5c29;
  uStack_50 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  sprintf(&DAT_006724b8,"%s-%06d","ScrollBar",DAT_006728b8);
  DAT_006728b8 = DAT_006728b8 + 1;
  iVar3 = FUN_005a0ef0(&DAT_006724b8,pcVar4,&uStack_7c,param_2,&uStack_58,1,
                       "interface\\multiplayer\\trade\\TRADE_down_arrow.3db",&uStack_70,param_4,
                       &uStack_94,0,"interface\\multiplayer\\trade\\TRADE_up_arrow.3db",&uStack_a0,
                       param_3,&uStack_64,0,"interface\\multiplayer\\trade\\TRADE_scrollhandle.3db",
                       &uStack_88,&uStack_ac,param_5,param_6,&stack0xffffff38,0,0,0,param_7,0,0);
  param_1[2] = iVar3;
  *(undefined4 **)(iVar3 + 0x2f0) = param_1;
  FUN_004bf850(0xffffffff);
  ExceptionList = local_14;
  return param_1;
}

