
void __thiscall FUN_005145a0(int param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  CEquip *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ID_String *this;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = (int *)FUN_0054baf0();
  iVar3 = *(int *)(param_1 + 0x14);
  if ((((iVar3 == 0) || (iVar3 == 8)) || (iVar3 == -4)) ||
     ((iVar3 = *(int *)(iVar3 + 8), iVar3 == 0 || ((*(uint *)(iVar3 + 0x4c) & 0x303) != 0x303)))) {
    iVar3 = 0;
  }
  pCVar4 = CEquipManager::FindFirst((CEquipManager *)(iVar3 + 0xe4),0x800000);
  if (pCVar4 == (CEquip *)0x0) {
    iVar3 = 0;
  }
  else if (*(int *)(pCVar4 + 0xc) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(pCVar4 + 0xc) + 4);
  }
  if ((*(byte *)((int)param_2 + 0x185) & 2) != 0) {
    return;
  }
  *(byte *)((int)param_2 + 0x185) = *(byte *)((int)param_2 + 0x185) | 3;
  if (param_2 == piVar2) {
    this = (ID_String *)(iVar3 + 0x54);
    bVar1 = ID_String::IsEmpty(this);
    if (!bVar1) {
      local_10 = 0x3f800000;
      local_20 = 0x3f800000;
      local_30 = 0x3f800000;
      local_14 = 0;
      local_18 = 0;
      local_1c = 0;
      local_24 = 0;
      local_28 = 0;
      local_2c = 0;
      local_4 = 0;
      local_8 = 0;
      local_c = 0;
      uVar5 = (**(code **)(*param_2 + 0x1c))();
      goto LAB_00514713;
    }
  }
  local_10 = 0x3f800000;
  local_20 = 0x3f800000;
  local_30 = 0x3f800000;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  uVar5 = (**(code **)(*param_2 + 0x1c))();
  this = (ID_String *)(iVar3 + 0x68);
LAB_00514713:
  bVar1 = ID_String::IsEmpty(this);
  if (!bVar1) {
    uVar8 = 0;
    puVar7 = &local_30;
    uVar6 = FUN_0040f080(this,param_2,uVar5,puVar7,0);
    FUN_00503070(uVar6,param_2,uVar5,puVar7,uVar8);
  }
  return;
}

