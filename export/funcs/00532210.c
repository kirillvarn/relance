
INotify * __thiscall FUN_00532210(INotify *param_1,CEquip *param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  CAttachedEquip *this;
  AttachedEquipment *pAVar3;
  Explosion *pEVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  INotify **ppIVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  INotify *pIVar12;
  INotify *local_88;
  undefined1 auStack_84 [32];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [15];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c0769;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(CEquip **)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &PTR_FUN_005de13c;
  local_88 = param_1;
  CEquip::ConnectClientEquip(param_2,param_1);
  this = CAttachedEquip::cast(param_2);
  if (this != (CAttachedEquip *)0x0) {
    pAVar3 = CAttachedEquip::AttachedEquipArch(this);
    bVar2 = ID_String::IsEmpty((ID_String *)(pAVar3 + 0x70));
    if (!bVar2) {
      pAVar3 = CAttachedEquip::AttachedEquipArch(this);
      pEVar4 = Archetype::GetExplosion((ID_String *)(pAVar3 + 0x70));
      *(Explosion **)(param_1 + 0xc) = pEVar4;
      if (pEVar4 != (Explosion *)0x0) {
        FUN_00536100(pEVar4);
      }
    }
  }
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_4 = 1;
  *(undefined ***)param_1 = &PTR_LAB_005de16c;
  if (*(int *)(param_1 + 4) != 0) {
    iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  }
  bVar2 = ID_String::IsEmpty((ID_String *)(iVar7 + 0x54));
  if (!bVar2) {
    piVar1 = *(int **)(param_1 + 4);
    (**(code **)(*piVar1 + 0x68))(&local_54);
    puVar8 = auStack_48;
    ppIVar9 = &local_88;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppIVar9 = (INotify *)*puVar8;
      puVar8 = puVar8 + 1;
      ppIVar9 = ppIVar9 + 1;
    }
    uStack_5c = uStack_4c;
    uStack_64 = local_54;
    uStack_60 = uStack_50;
    if (*(int *)(param_1 + 4) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
    }
    uVar5 = (**(code **)(*piVar1 + 100))(0);
    uVar10 = *(undefined4 *)(param_1 + 8);
    bVar2 = ID_String::IsEmpty((ID_String *)(iVar7 + 0x54));
    if (!bVar2) {
      pIVar12 = param_1 + 0x10;
      puVar11 = auStack_84;
      uVar6 = FUN_0040f080((ID_String *)(iVar7 + 0x54),uVar10,uVar5,puVar11,pIVar12);
      FUN_00503070(uVar6,uVar10,uVar5,puVar11,pIVar12);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

