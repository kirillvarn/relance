
void FUN_004c4bc0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_8;
  undefined1 local_4 [4];
  
  puVar2 = DAT_00672970;
  puVar3 = (undefined4 *)*DAT_00672970;
  puVar1 = DAT_00672964;
  while (DAT_00672964 = puVar1, puVar3 != puVar2) {
    puVar1 = (undefined4 *)*puVar3;
    std::list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_>::erase
              ((list<CollisionGroupDesc,std::allocator<CollisionGroupDesc>_> *)&DAT_0067296c,
               &local_8,puVar3);
    puVar3 = puVar1;
    puVar1 = DAT_00672964;
  }
  puVar3 = (undefined4 *)*puVar1;
  while (puVar3 != puVar1) {
    puVar2 = (undefined4 *)*puVar3;
    std::list<EquipDesc,std::allocator<EquipDesc>_>::erase
              ((list<EquipDesc,std::allocator<EquipDesc>_> *)&DAT_00672960,&local_8,puVar3);
    puVar3 = puVar2;
  }
  FUN_004c5a80(&local_8,*DAT_00672950,DAT_00672950);
  puVar3 = DAT_00673324;
  local_8 = (undefined4 *)*DAT_00673324;
  if (DAT_00673330 == 0) {
    DAT_00673330 = 0;
    puVar1 = local_8;
    while (local_8 = puVar1, puVar1 != puVar3) {
      FUN_0052afa0();
      FUN_0046c8c0(local_4,puVar1);
      puVar1 = local_8;
    }
  }
  else {
    FUN_004c5f60(DAT_00673324[1]);
    DAT_00673324[1] = DAT_00673328;
    DAT_00673330 = 0;
    *DAT_00673324 = DAT_00673324;
    DAT_00673324[2] = DAT_00673324;
  }
  FUN_004b9bb0();
  FUN_004b9b20(0);
  return;
}

