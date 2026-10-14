
void __thiscall FUN_00514bf0(int param_1,int *param_2,char param_3)

{
  ID_String *this;
  CSolar *this_00;
  char cVar1;
  int *piVar2;
  int iVar3;
  CEquip *pCVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  float unaff_retaddr;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar10 = param_2;
  if ((*(byte *)((int)param_2 + 0x185) & 4) != 0) {
    return;
  }
  *(byte *)((int)param_2 + 0x185) = *(byte *)((int)param_2 + 0x185) | 5;
  piVar2 = (int *)FUN_0054baf0();
  bVar7 = param_2 == piVar2;
  iVar3 = *(int *)(param_1 + 0x14);
  if ((((iVar3 == 0) || (iVar3 == 8)) || (iVar3 == -4)) ||
     ((iVar3 = *(int *)(iVar3 + 8), iVar3 == 0 || ((*(uint *)(iVar3 + 0x4c) & 0x303) != 0x303)))) {
    iVar3 = 0;
  }
  pCVar4 = CEquipManager::FindFirst((CEquipManager *)(iVar3 + 0xe4),0x800000);
  if (pCVar4 == (CEquip *)0x0) {
    param_2 = (int *)0x0;
  }
  else if (*(int *)(pCVar4 + 0xc) == 0) {
    param_2 = (int *)0x0;
  }
  else {
    param_2 = *(int **)(*(int *)(pCVar4 + 0xc) + 4);
  }
  if (bVar7) {
    if ((((param_3 != '\0') && (iVar3 = *(int *)(param_1 + 0x14), iVar3 != 0)) &&
        ((iVar3 != 8 &&
         (((iVar3 != -4 && (this_00 = *(CSolar **)(iVar3 + 8), this_00 != (CSolar *)0x0)) &&
          ((*(uint *)(this_00 + 0x4c) & 0x303) == 0x303)))))) &&
       (uVar5 = CSolar::get_tradelane_space_name(this_00), uVar5 != 0)) {
      FUN_0045b340(uVar5);
    }
    if ((int *)piVar10[0x5f] != (int *)0x0) {
      (**(code **)(*(int *)piVar10[0x5f] + 4))();
    }
    piVar2 = (int *)piVar10[0x5e];
    if (piVar2 != (int *)0x0) {
      FUN_004215b0();
      uStack_4 = 0;
      uStack_8 = 0;
      fStack_c = 0.0;
      (**(code **)(*piVar2 + 0x94))(0xffffffff,&local_30);
      (**(code **)(*(int *)piVar10[0x5e] + 0x60))();
    }
    if (piVar10[0x60] != 0) {
      FUN_005379b0();
      (**(code **)(*(int *)piVar10[0x60] + 8))();
    }
    FUN_00502d90();
    *(byte *)(piVar10 + 0x61) = *(byte *)(piVar10 + 0x61) & 0xbf;
  }
  if (((piVar10[0x5b] != 0) && ((*(byte *)(piVar10[0x5b] + 8) & 2) == 0)) ||
     (((piVar2 = (int *)piVar10[0x5a], piVar2 != (int *)0x0 &&
       (cVar1 = (**(code **)(*piVar2 + 0x14))(piVar2), cVar1 != '\0')) ||
      ((piVar10[0x5c] != 0 && (*(int *)(piVar10[0x5c] + 0xd4) == 0)))))) {
    FUN_004fcef0(piVar10 + 0x59);
  }
  if (bVar7) {
    this = (ID_String *)((int)param_2 + 0x60);
    bVar7 = ID_String::IsEmpty(this);
    if (!bVar7) {
      (**(code **)(*piVar10 + 0x2c))(&param_3,auStack_3c);
      fStack_c = -unaff_retaddr;
      uStack_10 = 0;
      uStack_18 = 0x3f800000;
      uStack_28 = 0x3f800000;
      uStack_38 = 0x3f800000;
      uStack_1c = 0;
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_2c = 0;
      local_30 = 0;
      uStack_34 = 0;
      uStack_14 = 0;
      bVar7 = ID_String::IsEmpty(this);
      if (bVar7) {
        return;
      }
      uVar11 = 0;
      puVar9 = &stack0xffffffb0;
      puVar8 = &uStack_38;
      uVar6 = FUN_0040f080(this,puVar8,puVar9,0);
      FUN_00503f40(uVar6,puVar8,puVar9,uVar11);
      return;
    }
  }
  uStack_10 = 0x3f800000;
  uStack_20 = 0x3f800000;
  local_30 = 0x3f800000;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_4 = 0;
  uStack_8 = 0;
  fStack_c = 0.0;
  uVar6 = (**(code **)(*piVar10 + 0x1c))();
  bVar7 = ID_String::IsEmpty((ID_String *)((int)param_2 + 0x74));
  if (!bVar7) {
    uVar12 = 0;
    puVar8 = &local_30;
    uVar11 = FUN_0040f080((ID_String *)((int)param_2 + 0x74),piVar10,uVar6,puVar8,0);
    FUN_00503070(uVar11,piVar10,uVar6,puVar8,uVar12);
  }
  return;
}

