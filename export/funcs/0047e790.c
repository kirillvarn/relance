
EquipDesc * __fastcall FUN_0047e790(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  code *pcVar6;
  EquipDesc *pEVar7;
  int iVar8;
  int iVar9;
  int local_c;
  char *local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x3a4) == -1) {
    *(undefined4 *)(param_1 + 0x4f4) = 0;
    return (EquipDesc *)0x0;
  }
  pEVar7 = *(EquipDesc **)(param_1 + 0x4f4);
  iVar8 = 0;
  if (pEVar7 == (EquipDesc *)0x0) {
    bVar3 = false;
    bVar4 = false;
    if ((*(char *)(param_1 + 0x35c) != '\0') && (*(int *)(param_1 + 0x978) == 2)) {
      bVar4 = true;
      bVar3 = true;
    }
    local_c = 0;
    if ((*(char *)(param_1 + 0x35c) == '\0') && (local_4 = FUN_00587050(), 0 < local_4)) {
      do {
        iVar5 = FUN_00587070(iVar8);
        if (iVar5 != 0) {
          iVar9 = 0;
          if (*(int *)(iVar5 + 0x18) == 1) {
            iVar9 = 2;
          }
          if ((bVar3) || (iVar9 == *(int *)(param_1 + 0x32c))) {
            pcVar6 = *(code **)(iVar5 + 8);
            if (*(code **)(iVar5 + 8) == (code *)0x0) {
              pcVar6 = _C_exref;
            }
            local_8 = StringAlloc((char *)pcVar6,false);
            pEVar7 = EquipDescList::find_equipment_item
                               ((EquipDescList *)(param_1 + 0x34c),(CacheString *)&local_8);
            if (((bVar3) || (iVar9 == *(int *)(param_1 + 0x32c))) &&
               (local_c == *(int *)(param_1 + 0x3a4))) goto LAB_0047e911;
            local_c = local_c + 1;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_4);
    }
    puVar1 = *(undefined4 **)(param_1 + 0x350);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      if (puVar2 == (undefined4 *)0xfffffff8) {
        iVar8 = 5;
      }
      else {
        iVar8 = FUN_0047e460(puVar2[3]);
      }
      if (((iVar8 != 5) && ((bVar4 || (iVar8 == *(int *)(param_1 + 0x32c))))) &&
         ((*(char *)(puVar2 + 5) == '\0' ||
          ((*(int *)(param_1 + 0x32c) != 0 && (*(int *)(param_1 + 0x32c) != 2)))))) {
        if (local_c == *(int *)(param_1 + 0x3a4)) {
          pEVar7 = (EquipDesc *)(puVar2 + 2);
LAB_0047e911:
          *(EquipDesc **)(param_1 + 0x4f4) = pEVar7;
          return pEVar7;
        }
        local_c = local_c + 1;
      }
    }
    pEVar7 = *(EquipDesc **)(param_1 + 0x4f4);
  }
  return pEVar7;
}

