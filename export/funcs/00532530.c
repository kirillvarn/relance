
INotify * __thiscall FUN_00532530(INotify *param_1,CEquip *param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  CAttachedEquip *this;
  AttachedEquipment *pAVar3;
  Explosion *pEVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  INotify *local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c0788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(CEquip **)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &PTR_FUN_005de13c;
  local_40 = param_1;
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
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &PTR_LAB_005de17c;
  if (*(int *)(param_1 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
  }
  bVar2 = ID_String::IsEmpty((ID_String *)(iVar5 + 0x54));
  if (!bVar2) {
    if (*(int *)(param_1 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
    }
    iVar5 = FUN_0042ae40(iVar5 + 0x54);
    if (iVar5 != 0) {
      piVar6 = (int *)FUN_00428f80(100);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        FUN_00429040(1);
        piVar6[0xc] = 0;
        piVar6[0xd] = 0;
        piVar6[0xe] = 0;
        piVar6[0xf] = 0;
        piVar6[0x10] = 0;
        piVar6[0x11] = 0x3f800000;
        piVar6[0x12] = 0;
        piVar6[0x13] = 0;
        piVar6[0x14] = 0;
        piVar6[0x15] = 0;
        piVar6[0x16] = 0x43b40000;
        piVar6[0x17] = 0;
        piVar6[0x18] = -1;
        *piVar6 = (int)&PTR_LAB_005c9efc;
      }
      *(int **)(param_1 + 0x10) = piVar6;
      (**(code **)(*piVar6 + 0x88))(1);
      uStack_20 = 0x3f800000;
      uStack_30 = 0x3f800000;
      local_40 = (INotify *)0x3f800000;
      uStack_24 = 0;
      uStack_28 = 0;
      uStack_2c = 0;
      uStack_34 = 0;
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_14 = 0;
      uStack_18 = 0;
      uStack_1c = 0;
      iVar1 = **(int **)(param_1 + 0x10);
      uVar7 = (**(code **)(*(int *)param_2 + 0x1c))(&local_40);
      (**(code **)(iVar1 + 0x94))(uVar7);
      (**(code **)(**(int **)(param_1 + 0x10) + 0x58))(iVar5,0);
    }
  }
  ExceptionList = local_c;
  return param_1;
}

