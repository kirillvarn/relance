
void __thiscall FUN_005aa9c0(int param_1,int param_2)

{
  CHARACTER_ID *pCVar1;
  CHARACTER_ID *pCVar2;
  _Node *p_Var3;
  undefined4 *puVar4;
  allocator<EquipDesc> local_15;
  int local_14;
  CHARACTER_ID *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c5627;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x1d4) = 1;
  puVar4 = (undefined4 *)0x0;
  local_14 = param_1;
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(param_2 + 4);
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
    if (puVar4 == (undefined4 *)0x0) break;
    pCVar2 = operator_new(0x2dc);
    local_4 = 0;
    local_10 = pCVar2;
    if (pCVar2 == (CHARACTER_ID *)0x0) {
      pCVar2 = (CHARACTER_ID *)0x0;
    }
    else {
      *pCVar2 = (CHARACTER_ID)0x0;
      pCVar2[0x200] = (CHARACTER_ID)0x0;
      pCVar2[0x201] = (CHARACTER_ID)0x0;
      *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        *)(pCVar2 + 0x204) = param_2._0_1_;
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
               *)(pCVar2 + 0x204),false);
      local_4._0_1_ = 1;
      *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        *)(pCVar2 + 0x214) = param_2._0_1_;
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
               *)(pCVar2 + 0x214),false);
      local_4._0_1_ = 2;
      *(undefined4 *)(pCVar2 + 0x224) = 0;
      *(undefined4 *)(pCVar2 + 0x230) = 0;
      *(undefined4 *)(pCVar2 + 0x234) = 0;
      *(undefined4 *)(pCVar2 + 0x238) = 0;
      *(undefined4 *)(pCVar2 + 0x23c) = 0;
      *(undefined4 *)(pCVar2 + 0x240) = 0;
      *(undefined4 *)(pCVar2 + 0x244) = 0;
      std::list<EquipDesc,std::allocator<EquipDesc>_>::list<EquipDesc,std::allocator<EquipDesc>_>
                ((list<EquipDesc,std::allocator<EquipDesc>_> *)(pCVar2 + 0x248),&local_15);
      local_4._0_1_ = 3;
      *(list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *)(pCVar2 + 0x254) =
           (list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>)param_2._0_1_;
      p_Var3 = std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::_Buynode
                         ((list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *)
                          (pCVar2 + 0x254),(_Node *)0x0,(_Node *)0x0);
      *(_Node **)(pCVar2 + 600) = p_Var3;
      *(undefined4 *)(pCVar2 + 0x25c) = 0;
      local_4 = CONCAT31(local_4._1_3_,4);
      *(undefined4 *)(pCVar2 + 0x260) = 0;
      *(undefined4 *)(pCVar2 + 0x264) = 0;
      *(undefined4 *)(pCVar2 + 0x268) = 0;
      *(undefined4 *)(pCVar2 + 0x26c) = 0;
      *(undefined4 *)(pCVar2 + 0x270) = 0;
      FUN_004cdc10();
      FUN_004cdc10();
      *(undefined4 *)(pCVar2 + 0x228) = 0;
      *(undefined4 *)(pCVar2 + 0x22c) = 0;
    }
    pCVar1 = (CHARACTER_ID *)puVar4[2];
    local_4 = 0xffffffff;
    CHARACTER_ID::operator=(pCVar2,pCVar1);
    pCVar2[0x200] = pCVar1[0x200];
    pCVar2[0x201] = pCVar1[0x201];
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(pCVar2 + 0x204),
           (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *)(pCVar1 + 0x204),0,*(uint *)npos_exref);
    std::
    basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>::
    assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
            *)(pCVar2 + 0x214),
           (basic_string<unsigned_short,struct_std::char_traits<unsigned_short>,class_std::allocator<unsigned_short>_>
            *)(pCVar1 + 0x214),0,*(uint *)npos_exref);
    *(undefined4 *)(pCVar2 + 0x224) = *(undefined4 *)(pCVar1 + 0x224);
    *(undefined4 *)(pCVar2 + 0x228) = *(undefined4 *)(pCVar1 + 0x228);
    *(undefined4 *)(pCVar2 + 0x22c) = *(undefined4 *)(pCVar1 + 0x22c);
    *(undefined4 *)(pCVar2 + 0x230) = *(undefined4 *)(pCVar1 + 0x230);
    *(undefined4 *)(pCVar2 + 0x234) = *(undefined4 *)(pCVar1 + 0x234);
    *(undefined4 *)(pCVar2 + 0x238) = *(undefined4 *)(pCVar1 + 0x238);
    *(undefined4 *)(pCVar2 + 0x23c) = *(undefined4 *)(pCVar1 + 0x23c);
    *(undefined4 *)(pCVar2 + 0x240) = *(undefined4 *)(pCVar1 + 0x240);
    *(undefined4 *)(pCVar2 + 0x244) = *(undefined4 *)(pCVar1 + 0x244);
    std::list<EquipDesc,std::allocator<EquipDesc>_>::operator=
              ((list<EquipDesc,std::allocator<EquipDesc>_> *)(pCVar2 + 0x248),
               (list<struct_EquipDesc,class_std::allocator<struct_EquipDesc>_> *)(pCVar1 + 0x248));
    std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::operator=
              ((list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *)(pCVar2 + 0x254),
               (list<struct_CollisionGroupDesc,class_std::allocator<struct_CollisionGroupDesc>_> *)
               (pCVar1 + 0x254));
    *(undefined4 *)(pCVar2 + 0x260) = *(undefined4 *)(pCVar1 + 0x260);
    *(undefined4 *)(pCVar2 + 0x264) = *(undefined4 *)(pCVar1 + 0x264);
    *(undefined4 *)(pCVar2 + 0x268) = *(undefined4 *)(pCVar1 + 0x268);
    *(undefined4 *)(pCVar2 + 0x26c) = *(undefined4 *)(pCVar1 + 0x26c);
    *(undefined4 *)(pCVar2 + 0x270) = *(undefined4 *)(pCVar1 + 0x270);
    FUN_0053c250(pCVar1 + 0x274);
    FUN_0053c250(pCVar1 + 0x2a8);
    FUN_005ae700(pCVar2);
  }
  *(undefined4 *)(local_14 + 0x1cc) = *(undefined4 *)(param_2 + 0x14);
  ExceptionList = local_c;
  return;
}

