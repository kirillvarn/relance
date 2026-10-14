
void __fastcall FUN_005ae810(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_005c57c5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005e6520;
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)param_1[1];
    }
    else {
      puVar3 = (undefined4 *)*puVar3;
    }
    if (puVar3 == (undefined4 *)0x0) break;
    iVar1 = puVar3[2];
    if (iVar1 != 0) {
      local_4._0_1_ = 3;
      std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::
      ~list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>
                ((list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *)(iVar1 + 0x254));
      local_4._0_1_ = 2;
      std::list<EquipDesc,std::allocator<EquipDesc>_>::~list<EquipDesc,std::allocator<EquipDesc>_>
                ((list<EquipDesc,std::allocator<EquipDesc>_> *)(iVar1 + 0x248));
      local_4._0_1_ = 1;
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
               *)(iVar1 + 0x214),true);
      local_4 = (uint)local_4._1_3_ << 8;
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
      ::_Tidy((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
               *)(iVar1 + 0x204),true);
      FUN_005b7e1d(iVar1);
    }
    puVar3[2] = 0;
  }
  puVar3 = (undefined4 *)param_1[1];
  while (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar3;
    if (*(char *)(param_1 + 3) == '\0') {
      FUN_005b7e1d(puVar3);
      puVar3 = puVar2;
    }
    else {
      *puVar3 = param_1[4];
      param_1[4] = puVar3;
      puVar3 = puVar2;
    }
  }
  *param_1 = &PTR_FUN_005e6528;
  param_1[2] = 0;
  param_1[1] = 0;
  puVar3 = (undefined4 *)param_1[4];
  while (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar3;
    FUN_005b7e1d(puVar3);
    puVar3 = puVar2;
  }
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}

