
void __thiscall FUN_004c2380(int param_1,int param_2)

{
  EquipDescList *this;
  undefined4 uVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  EquipDesc *pEVar5;
  int iVar6;
  int iVar7;
  CShip *this_00;
  uint unaff_ESI;
  float10 fVar8;
  float fVar9;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  iVar7 = *(int *)(param_1 + 0x330);
  if (iVar7 != 0) {
    this = (EquipDescList *)(iVar7 + 0x20);
    EquipDescList::find_equipment_item(this,*(ushort *)(param_2 + 2));
    EquipDescList::remove_equipment_item(this,*(ushort *)(param_2 + 2),*(int *)(param_2 + 0x14));
    fVar9 = EquipDescList::get_cargo_space_occupied(this);
    *(double *)(iVar7 + 0x60) = (double)fVar9;
    pEVar5 = EquipDescList::find_equipment_item(this,*(ushort *)(param_2 + 2));
    iVar6 = *(int *)(iVar7 + 0x28) - *(int *)(iVar7 + 0x30);
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    (**(code **)(**(int **)(iVar7 + 8) + 0xa8))(0x37,0,iVar6);
    FUN_004bf850(0xffffffff);
    iVar7 = FUN_005416c0(*(undefined4 *)(param_1 + 0x42c),1);
    if (iVar7 != 0) {
      this_00 = (CShip *)FUN_00543320();
      dVar3 = *(double *)(*(int *)(param_1 + 0x330) + 0x60);
      dVar4 = *(double *)(*(int *)(param_1 + 0x334) + 0x60);
      fVar9 = CShip::get_cargo_hold_remaining(this_00);
      *(double *)(param_1 + 1000) =
           (double)((((float)*(double *)(param_1 + 0x3f0) - fVar9) - (float)dVar3) + (float)dVar4);
    }
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x334) + 100);
    fVar8 = (float10)FUN_004c4640();
    *(double *)(param_1 + 0x3c0) =
         (double)((fVar8 - (float10)uStack_10) + (float10)(double)CONCAT44(uStack_14,uVar1));
    if ((-(uint)(pEVar5 != (EquipDesc *)0x0) & unaff_ESI) ==
        *(uint *)(*(int *)(param_1 + 0x330) + 0x58)) {
      FUN_004c2800(*(int *)(param_1 + 0x330),0);
      iVar7 = *(int *)(param_1 + 0x330);
      puVar2 = *(undefined1 **)(iVar7 + 0x58);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
        *(undefined4 *)(iVar7 + 0x58) = 0;
      }
      FUN_004bf850(0xffffffff);
    }
  }
  if (*(int *)(param_1 + 0x390) == 3) {
    FUN_004c1ae0(4);
  }
  return;
}

