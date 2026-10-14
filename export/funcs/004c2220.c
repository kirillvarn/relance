
void __thiscall FUN_004c2220(int param_1,int param_2)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  CShip *this;
  float10 fVar7;
  float fVar8;
  undefined4 uStack_34;
  double dStack_30;
  EquipDesc local_28 [2];
  undefined2 local_26;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  
  iVar6 = *(int *)(param_1 + 0x330);
  if (iVar6 != 0) {
    local_20 = *(undefined4 *)(param_2 + 8);
    local_26 = *(undefined2 *)(param_2 + 2);
    local_1c = *(undefined1 *)(param_2 + 0xc);
    local_18 = *(undefined4 *)(param_2 + 0x10);
    local_14 = *(undefined4 *)(param_2 + 0x14);
    local_24 = *(uint *)(param_2 + 4);
    local_10 = *(undefined1 *)(param_2 + 0x18);
    local_c = *(undefined4 *)(param_2 + 0x1c);
    local_28[0] = (EquipDesc)0x0;
    bVar4 = arch_is_combinable(local_24);
    EquipDescList::add_equipment_item((EquipDescList *)(iVar6 + 0x20),local_28,bVar4);
    fVar8 = EquipDescList::get_cargo_space_occupied((EquipDescList *)(iVar6 + 0x20));
    *(double *)(iVar6 + 0x60) = (double)fVar8;
    iVar5 = *(int *)(iVar6 + 0x28) - *(int *)(iVar6 + 0x30);
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    (**(code **)(**(int **)(iVar6 + 8) + 0xa8))(0x37,0,iVar5);
    FUN_004bf850(0xffffffff);
    iVar6 = FUN_005416c0(*(undefined4 *)(param_1 + 0x42c),1);
    if (iVar6 != 0) {
      this = (CShip *)FUN_00543320();
      dVar2 = *(double *)(*(int *)(param_1 + 0x330) + 0x60);
      dVar3 = *(double *)(*(int *)(param_1 + 0x334) + 0x60);
      fVar8 = CShip::get_cargo_hold_remaining(this);
      *(double *)(param_1 + 1000) =
           (double)((((float)*(double *)(param_1 + 0x3f0) - fVar8) - (float)dVar2) + (float)dVar3);
    }
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x334) + 100);
    fVar7 = (float10)FUN_004c4640();
    *(double *)(param_1 + 0x3c0) =
         (double)((fVar7 - (float10)dStack_30) + (float10)(double)CONCAT44(uStack_34,uVar1));
  }
  if (*(int *)(param_1 + 0x390) == 3) {
    FUN_004c1ae0(4);
  }
  return;
}

