
int FUN_004c6f70(int param_1,int param_2,EquipDescList *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  GoodInfo *pGVar4;
  EquipDesc *pEVar5;
  int *piVar6;
  int local_c;
  
  if (DAT_0066873c == 0) {
    return 0;
  }
  iVar3 = FUN_0043a510(DAT_0066873c);
  if (iVar3 != 0) {
    piVar6 = (int *)**(int **)(param_1 + 4);
    local_c = 0;
    if (piVar6 != *(int **)(param_1 + 4)) {
      do {
        uVar1 = piVar6[3];
        pGVar4 = GoodList::find_by_archetype(uVar1);
        if ((pGVar4 != (GoodInfo *)0x0) && ((param_2 == 0 || (piVar6[9] == param_2)))) {
          bVar2 = true;
          if ((param_3 != (EquipDescList *)0x0) &&
             (pEVar5 = EquipDescList::find_equipment_item(param_3,*(ushort *)((int)piVar6 + 10)),
             pEVar5 == (EquipDesc *)0x0)) {
            bVar2 = false;
          }
          iVar3 = FUN_0047e460(uVar1);
          if (((iVar3 == 4) || (pGVar4[0x70] != (GoodInfo)0x0)) || (!bVar2)) {
            FUN_00438060(*(undefined4 *)(pGVar4 + 0x48));
            iVar3 = ftol();
            local_c = local_c + piVar6[7] * iVar3;
          }
          else {
            FUN_00438060(*(undefined4 *)(pGVar4 + 0x48));
            ftol();
            iVar3 = ftol();
            local_c = local_c + iVar3;
          }
        }
        piVar6 = (int *)*piVar6;
      } while (piVar6 != (int *)*(int *)(param_1 + 4));
    }
    return local_c;
  }
  return 0;
}

