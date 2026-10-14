
void FUN_004be6c0(int param_1,CacheString *param_2,CacheString *param_3,undefined4 *param_4,
                 undefined4 *param_5,char param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  GoodInfo *pGVar3;
  Equipment *pEVar4;
  int iVar5;
  
  pGVar3 = GoodList::find_by_archetype(*(uint *)(param_1 + 4));
  CacheString::clear(param_2);
  CacheString::clear(param_3);
  if (pGVar3 == (GoodInfo *)0x0) {
    pEVar4 = Archetype::GetEquipment(*(uint *)(param_1 + 4));
    if (pEVar4 != (Equipment *)0x0) {
      *(undefined4 *)param_2 = *(undefined4 *)(pEVar4 + 0xc);
      CacheString::clear(param_3);
      iVar5 = *(int *)(pEVar4 + 4);
      if (((iVar5 != 0) && (puVar2 = *(undefined4 **)(iVar5 + 0x24), puVar2 != (undefined4 *)0x0))
         && (*(int *)(iVar5 + 0x28) - (int)puVar2 >> 3 != 0)) {
        *(undefined4 *)param_3 = *puVar2;
      }
      *param_4 = *(undefined4 *)(pEVar4 + 0x14);
      *param_5 = *(undefined4 *)(pEVar4 + 0x18);
    }
    return;
  }
  if ((*(int *)(pGVar3 + 0x78) == 0) || (param_6 != '\0')) {
    *(undefined4 *)param_2 = *(undefined4 *)(pGVar3 + 0x74);
    CacheString::clear(param_3);
    pEVar4 = Archetype::GetEquipment(*(uint *)(param_1 + 4));
    iVar5 = *(int *)(pGVar3 + 0x7c);
    if (iVar5 == 0) {
      if (((pEVar4 == (Equipment *)0x0) || (iVar5 = *(int *)(pEVar4 + 4), iVar5 == 0)) ||
         ((piVar1 = *(int **)(iVar5 + 0x24), piVar1 == (int *)0x0 ||
          (*(int *)(iVar5 + 0x28) - (int)piVar1 >> 3 == 0)))) goto LAB_004be745;
      iVar5 = *piVar1;
    }
    *(int *)param_3 = iVar5;
  }
  else {
    *(int *)param_2 = *(int *)(pGVar3 + 0x78);
  }
LAB_004be745:
  *param_4 = *(undefined4 *)(pGVar3 + 0x88);
  *param_5 = *(undefined4 *)(pGVar3 + 0x8c);
  return;
}

