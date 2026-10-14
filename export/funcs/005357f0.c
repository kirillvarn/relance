
void __thiscall FUN_005357f0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  CEquip *pCVar4;
  CEGun *this;
  short unaff_BX;
  int *unaff_EBP;
  CSimple *local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14 [2];
  undefined2 local_c [2];
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_c[0] = (undefined2)param_2;
  local_18 = CONCAT22(local_18._2_2_,*(undefined2 *)SUBOBJ_ID_NONE_exref);
  local_4 = local_18;
  FUN_00535b80(local_14,local_c);
  if ((*(int *)(local_14[0] + 0x10) != 0) &&
     (piVar1 = (int *)FUN_005416c0(*(int *)(local_14[0] + 0x10),0), piVar1 != (int *)0x0)) {
    if ((ushort)param_2 == *(ushort *)SUBOBJ_ID_NONE_exref) {
      local_20 = (CSimple *)0x0;
      local_1c = (uint)*(ushort *)SUBOBJ_ID_NONE_exref;
      (**(code **)(*param_1 + 0x74))(&local_20);
      (**(code **)(*param_1 + 0x78))(&local_20);
      if (unaff_EBP != (int *)0x0) {
        iVar2 = (**(code **)(*unaff_EBP + 0x20))();
        iVar3 = (**(code **)(*piVar1 + 0x20))();
        if ((iVar2 == iVar3) && (unaff_BX == *(short *)(local_14[0] + 0x14))) {
          return;
        }
      }
      (**(code **)(param_1[1] + 0x44))(&local_4,piVar1,*(undefined2 *)(local_14[0] + 0x14),0);
      return;
    }
    iVar2 = param_1[4];
    if ((iVar2 == 0) || ((*(uint *)(iVar2 + 0x4c) & 0x103) != 0x103)) {
      iVar2 = 0;
    }
    pCVar4 = CEquipManager::FindByID((CEquipManager *)(iVar2 + 0xe4),(ushort)param_2);
    if (pCVar4 != (CEquip *)0x0) {
      this = CEGun::cast(pCVar4);
      local_20 = (CSimple *)0x0;
      local_1c = (uint)*(ushort *)SUBOBJ_ID_NONE_exref;
      if (this != (CEGun *)0x0) {
        CEGun::GetTarget(this,&local_20,(ushort *)&local_1c);
        if (((local_20 != (CSimple *)0x0) &&
            (iVar2 = (**(code **)(*piVar1 + 0x20))(), *(int *)(local_20 + 0xb0) == iVar2)) &&
           ((short)local_1c == *(short *)(local_14[0] + 0x14))) {
          return;
        }
        (**(code **)(param_1[1] + 0x44))(&param_2,piVar1,*(undefined2 *)(local_14[0] + 0x14),0);
      }
    }
  }
  return;
}

