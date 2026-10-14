
void __thiscall FUN_004c2700(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  EquipDesc *this;
  int *piVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 0x330);
  this = EquipDescList::traverse_equipment_type((EquipDescList *)(iVar1 + 0x20),0,(EquipDesc *)0x0);
  if (this == (EquipDesc *)0x0) {
    if (param_2 == 0) goto LAB_004c27da;
    iVar3 = *(int *)(iVar1 + 0x24);
    piVar5 = *(int **)(iVar3 + 4);
    piVar4 = operator_new(0x28);
    *piVar4 = iVar3;
    if (piVar5 == (int *)0x0) {
      piVar5 = piVar4;
    }
    piVar4[1] = (int)piVar5;
    *(int **)(iVar3 + 4) = piVar4;
    *(int **)piVar4[1] = piVar4;
    FUN_004b7390(piVar4 + 2,iVar1 + 0x38);
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + 1;
    this = EquipDescList::traverse_equipment_type
                     ((EquipDescList *)(iVar1 + 0x20),0,(EquipDesc *)0x0);
  }
  else if (param_2 == 0) {
    piVar5 = *(int **)(iVar1 + 0x24);
    piVar4 = (int *)*piVar5;
    while (piVar4 != piVar5) {
      if (*(short *)((int)piVar4 + 10) == *(short *)(this + 2)) {
        piVar2 = (int *)*piVar4;
        *(int *)piVar4[1] = *piVar4;
        *(int *)(*piVar4 + 4) = piVar4[1];
        FUN_005b7e1d(piVar4);
        *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
        piVar4 = piVar2;
      }
      else {
        piVar4 = (int *)*piVar4;
      }
    }
    goto LAB_004c27da;
  }
  if (this != (EquipDesc *)0x0) {
    EquipDesc::set_count(this,param_2);
  }
LAB_004c27da:
  EquipDesc::set_count((EquipDesc *)(iVar1 + 0x38),param_2);
  FUN_004bf850(0xffffffff);
  return;
}

