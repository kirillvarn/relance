
void __fastcall FUN_005af6a0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c58cd;
  puVar2 = *(undefined4 **)(param_1 + 600);
  local_4 = 2;
  puVar5 = (undefined4 *)*puVar2;
  local_18 = param_1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while (puVar5 != puVar2) {
    puVar3 = (undefined4 *)*puVar5;
    std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::erase
              ((list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *)(param_1 + 0x254),
               &local_1c,puVar5);
    puVar5 = puVar3;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 600));
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x24c);
  local_1c = (undefined4 *)*puVar2;
  local_4 = CONCAT31(local_4._1_3_,1);
  while (local_1c != puVar2) {
    puVar5 = (undefined4 *)FUN_0053ab20(local_14,0);
    std::list<EquipDesc,std::allocator<EquipDesc>_>::erase
              ((list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 0x248),local_10,*puVar5);
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0x24c));
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  iVar4 = *(int *)(param_1 + 0x218);
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d(iVar4 + -2);
    }
    else {
      *(char *)(iVar4 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  iVar4 = *(int *)(param_1 + 0x208);
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d(iVar4 + -2);
    }
    else {
      *(char *)(iVar4 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  ExceptionList = local_c;
  return;
}

