
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00514960(int param_1,int *param_2)

{
  ID_String *this;
  bool bVar1;
  int *piVar2;
  int iVar3;
  CEquip *pCVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  int local_58 [4];
  undefined1 local_48 [8];
  undefined4 uStack_40;
  undefined4 local_3c;
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
  undefined4 uStack_10;
  float fStack_c;
  float fStack_4;
  
  piVar7 = param_2;
  if ((*(byte *)((int)param_2 + 0x185) & 1) == 0) {
    *(byte *)((int)param_2 + 0x185) = *(byte *)((int)param_2 + 0x185) | 1;
    local_58[0] = param_1;
    piVar2 = (int *)FUN_0054baf0();
    iVar3 = *(int *)(param_1 + 0x14);
    if ((((iVar3 == 0) || (iVar3 == 8)) || (iVar3 == -4)) ||
       ((iVar3 = *(int *)(iVar3 + 8), iVar3 == 0 || ((*(uint *)(iVar3 + 0x4c) & 0x303) != 0x303))))
    {
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
    if (piVar7 == piVar2) {
      this = (ID_String *)(iVar3 + 0x5c);
      bVar1 = ID_String::IsEmpty(this);
      param_1 = local_58[0];
      if (!bVar1) {
        (**(code **)(*piVar7 + 0x2c))(&param_2,local_48);
        fStack_c = -fStack_4;
        uStack_18 = 0x3f800000;
        uStack_28 = 0x3f800000;
        uStack_38 = 0x3f800000;
        uStack_1c = 0;
        uStack_20 = 0;
        uStack_24 = 0;
        uStack_2c = 0;
        uStack_30 = 0;
        uStack_34 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        local_58[0] = 0;
        local_58[1] = 0;
        bVar1 = ID_String::IsEmpty(this);
        if (bVar1) {
          return;
        }
        uVar9 = 0;
        puVar8 = &stack0xffffffa4;
        puVar6 = &uStack_38;
        uVar5 = FUN_0040f080(this,puVar6,puVar8,0);
        FUN_00503f40(uVar5,puVar6,puVar8,uVar9);
        return;
      }
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(*(int *)(param_1 + 0x14) + -8);
    }
    param_2 = (int *)(CONCAT31(param_2._1_3_,(char)piVar7[0x61]) & 0xffffff01);
    uVar5 = FUN_00514110(&local_3c,piVar2,param_2);
    uVar9 = (**(code **)(*piVar2 + 0x10))();
    if (DAT_006751f8 == (int *)0x0) {
      DAT_006751f8 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_006751f8 + 0x28))(DAT_006751f8,local_58 + 1,uVar9,uVar5);
    uStack_20 = 0x3f800000;
    uStack_30 = 0x3f800000;
    uStack_40 = 0x3f800000;
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    local_3c = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    bVar1 = ID_String::IsEmpty((ID_String *)(iVar3 + 0x70));
    if (!bVar1) {
      uVar9 = 0;
      piVar7 = local_58;
      puVar6 = &uStack_40;
      uVar5 = FUN_0040f080((ID_String *)(iVar3 + 0x70),puVar6,piVar7,0);
      FUN_00503f40(uVar5,puVar6,piVar7,uVar9);
    }
  }
  return;
}

