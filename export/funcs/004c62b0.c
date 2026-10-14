
void __thiscall FUN_004c62b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  Ship *pSVar4;
  GoodInfo *pGVar5;
  undefined4 uVar6;
  undefined1 local_4 [4];
  
  if (*param_1 != 0) {
    FUN_00583b90();
  }
  if ((param_1[6] != 0) && (pSVar4 = Archetype::GetShip(param_1[6]), pSVar4 != (Ship *)0x0)) {
    std::list<EquipDesc,std::allocator<EquipDesc>_>::erase
              ((list<EquipDesc,std::allocator<EquipDesc>_> *)(param_1 + 7),local_4,
               *(undefined4 *)param_1[8],(undefined4 *)param_1[8]);
    *(undefined1 *)(param_1 + 10) = 0;
    if (*param_1 != 0) {
      FUN_00585d90(0,0);
      FUN_00585bd0(0xffffffff,0,0);
    }
    *(char *)(param_1 + 10) = (char)param_3;
    if (*param_1 != 0) {
      FUN_00585a90(pSVar4 + 8,1,param_3);
      FUN_005850f0(param_2);
    }
    FUN_004c6b80(param_2);
    puVar1 = (undefined4 *)param_1[8];
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      pGVar5 = GoodList::find_by_archetype(puVar2[3]);
      if (pGVar5 != (GoodInfo *)0x0) {
        EquipDesc::set_owner((EquipDesc *)(puVar2 + 2),(int)param_1);
      }
    }
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 0xa8))(0x1e,*(undefined4 *)(pSVar4 + 0x14),0);
    }
    if ((int *)param_1[2] != (int *)0x0) {
      iVar3 = *(int *)param_1[2];
      FUN_004c4f70();
      uVar6 = ftol();
      (**(code **)(iVar3 + 0xa8))(0x40,100,uVar6);
      (**(code **)(*(int *)param_1[2] + 0xa8))(3,0x408,0);
    }
  }
  return;
}

