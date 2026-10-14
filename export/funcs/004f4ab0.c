
void __fastcall FUN_004f4ab0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bf307;
  puVar1 = *(undefined4 **)(param_1 + 0xe8);
  local_4 = 0;
  puVar3 = (undefined4 *)*puVar1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while (puVar3 != puVar1) {
    puVar2 = (undefined4 *)*puVar3;
    FUN_00516f70(local_10,puVar3);
    puVar3 = puVar2;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0xb0);
  local_4 = 1;
  puVar3 = (undefined4 *)*puVar1;
  while (puVar3 != puVar1) {
    puVar2 = (undefined4 *)*puVar3;
    std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::erase
              ((list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *)(param_1 + 0xac),
               local_10,puVar3);
    puVar3 = puVar2;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  ExceptionList = local_c;
  return;
}

