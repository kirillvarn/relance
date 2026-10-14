
int __thiscall FUN_004bf620(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  EquipDesc *this;
  int *piVar3;
  int *piVar4;
  
  this = EquipDescList::traverse_equipment_type
                   ((EquipDescList *)(param_1 + 0x20),0,(EquipDesc *)0x0);
  if (this == (EquipDesc *)0x0) {
    if (param_2 == 0) goto LAB_004bf6f6;
    iVar2 = *(int *)(param_1 + 0x24);
    piVar4 = *(int **)(iVar2 + 4);
    piVar3 = operator_new(0x28);
    *piVar3 = iVar2;
    if (piVar4 == (int *)0x0) {
      piVar4 = piVar3;
    }
    piVar3[1] = (int)piVar4;
    *(int **)(iVar2 + 4) = piVar3;
    *(int **)piVar3[1] = piVar3;
    FUN_004b7390(piVar3 + 2,param_1 + 0x38);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    this = EquipDescList::traverse_equipment_type
                     ((EquipDescList *)(param_1 + 0x20),0,(EquipDesc *)0x0);
  }
  else if (param_2 == 0) {
    piVar4 = *(int **)(param_1 + 0x24);
    piVar3 = (int *)*piVar4;
    while (piVar3 != piVar4) {
      if (*(short *)((int)piVar3 + 10) == *(short *)(this + 2)) {
        piVar1 = (int *)*piVar3;
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        FUN_005b7e1d(piVar3);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        piVar3 = piVar1;
      }
      else {
        piVar3 = (int *)*piVar3;
      }
    }
    goto LAB_004bf6f6;
  }
  if (this != (EquipDesc *)0x0) {
    EquipDesc::set_count(this,param_2);
  }
LAB_004bf6f6:
  EquipDesc::set_count((EquipDesc *)(param_1 + 0x38),param_2);
  FUN_004bf850(0xffffffff);
  return param_2;
}

