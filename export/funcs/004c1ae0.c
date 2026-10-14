
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c1ae0(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  EquipDesc *pEVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if (param_2 == 4) {
    param_2 = 3;
  }
  *(int *)(param_1 + 0x390) = param_2;
  if (param_2 == 1) {
    uStack_48 = 1;
    uStack_4c = 1;
    uStack_50 = 0x4c2091;
    (**(code **)(**(int **)(param_1 + 0x3a0) + 0xa8))();
    uStack_50 = 0;
    uStack_54 = 1;
    uStack_58 = 1;
    uStack_5c = 0x4c20a5;
    (**(code **)(**(int **)(param_1 + 0x3a4) + 0xa8))();
    uStack_5c = 0;
    uStack_60 = 1;
    uStack_64 = 1;
    uStack_68 = 0x4c20b9;
    (**(code **)(**(int **)(param_1 + 0x3a8) + 0xa8))();
    iVar7 = *(int *)(param_1 + 0x33c);
    uStack_68 = 0;
    uStack_6c = 1;
    uStack_70 = 1;
    uStack_74 = 0x4c20d0;
    (**(code **)(**(int **)(iVar7 + 8) + 0xa8))();
    uStack_74 = 0;
    uStack_78 = 1;
    uStack_7c = 1;
    uStack_80 = 0x4c20e1;
    (**(code **)(**(int **)(iVar7 + 0x14) + 0xa8))();
    uStack_80 = 0;
    uStack_84 = 1;
    uStack_88 = 1;
    uStack_8c = 0x4c20f2;
    (**(code **)(**(int **)(iVar7 + 0xc) + 0xa8))();
    uStack_8c = 0;
    uStack_90 = 1;
    uStack_94 = 1;
    uStack_98 = 0x4c2103;
    (**(code **)(**(int **)(iVar7 + 0x20) + 0xa8))();
    uStack_98 = 0;
    uStack_9c = 1;
    uStack_a0 = 1;
    uStack_a4 = 0x4c2114;
    (**(code **)(**(int **)(iVar7 + 0x18) + 0xa8))();
    uStack_a4 = 0;
    uStack_a8 = 1;
    uStack_ac = 1;
    uStack_b0 = 0x4c2125;
    (**(code **)(**(int **)(iVar7 + 0x1c) + 0xa8))();
    if (*(int **)(iVar7 + 0x10) != (int *)0x0) {
      uStack_b0 = 0;
      (**(code **)(**(int **)(iVar7 + 0x10) + 0xa8))(1,1);
    }
    uStack_b0 = 0;
    (**(code **)(**(int **)(param_1 + 0x348) + 0xa8))(1,1);
    (**(code **)(**(int **)(param_1 + 0x350) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0x354) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0x358) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0x35c) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0x34c) + 0xa8))(1,1,0);
    iVar7 = *(int *)(param_1 + 0x334);
    iVar4 = *(int *)(iVar7 + 0x14);
    if (iVar4 != *(int *)(iVar7 + 0x18)) {
      do {
        FUN_004bed40();
        iVar4 = iVar4 + 4;
      } while (iVar4 != *(int *)(iVar7 + 0x18));
    }
    (**(code **)(**(int **)(iVar7 + 8) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0x41c) + 0xa8))(1,1,0);
    (**(code **)(**(int **)(param_1 + 0x420) + 0xa8))(1,1,0);
  }
  else {
    if (param_2 == 2) {
      uStack_48 = 1;
      uStack_4c = 1;
      uStack_50 = 0x4c1eea;
      (**(code **)(**(int **)(param_1 + 0x3a0) + 0xa8))();
      uStack_50 = 0;
      uStack_54 = 0;
      uStack_58 = 1;
      uStack_5c = 0x4c1efe;
      (**(code **)(**(int **)(param_1 + 0x3a4) + 0xa8))();
      uStack_5c = 0;
      uStack_60 = 0;
      uStack_64 = 1;
      uStack_68 = 0x4c1f12;
      (**(code **)(**(int **)(param_1 + 0x3a8) + 0xa8))();
      iVar7 = *(int *)(param_1 + 0x33c);
      uStack_68 = 0;
      uStack_6c = 1;
      uStack_70 = 1;
      uStack_74 = 0x4c1f29;
      (**(code **)(**(int **)(iVar7 + 8) + 0xa8))();
      uStack_74 = 0;
      uStack_78 = 1;
      uStack_7c = 1;
      uStack_80 = 0x4c1f3a;
      (**(code **)(**(int **)(iVar7 + 0x14) + 0xa8))();
      uStack_80 = 0;
      uStack_84 = 1;
      uStack_88 = 1;
      uStack_8c = 0x4c1f4b;
      (**(code **)(**(int **)(iVar7 + 0xc) + 0xa8))();
      uStack_8c = 0;
      uStack_90 = 1;
      uStack_94 = 1;
      uStack_98 = 0x4c1f5c;
      (**(code **)(**(int **)(iVar7 + 0x20) + 0xa8))();
      uStack_98 = 0;
      uStack_9c = 1;
      uStack_a0 = 1;
      uStack_a4 = 0x4c1f6d;
      (**(code **)(**(int **)(iVar7 + 0x18) + 0xa8))();
      uStack_a4 = 0;
      uStack_a8 = 1;
      uStack_ac = 1;
      uStack_b0 = 0x4c1f7e;
      (**(code **)(**(int **)(iVar7 + 0x1c) + 0xa8))();
      if (*(int **)(iVar7 + 0x10) != (int *)0x0) {
        uStack_b0 = 0;
        (**(code **)(**(int **)(iVar7 + 0x10) + 0xa8))(1,1);
      }
      uStack_b0 = 0;
      (**(code **)(**(int **)(param_1 + 0x348) + 0xa8))(1,1);
      (**(code **)(**(int **)(param_1 + 0x350) + 0xa8))(1,1,0);
      (**(code **)(**(int **)(param_1 + 0x354) + 0xa8))(1,1,0);
      (**(code **)(**(int **)(param_1 + 0x358) + 0xa8))(1,1,0);
      (**(code **)(**(int **)(param_1 + 0x35c) + 0xa8))(1,1,0);
      (**(code **)(**(int **)(param_1 + 0x34c) + 0xa8))(1,1,0);
      iVar7 = *(int *)(param_1 + 0x334);
      iVar4 = *(int *)(iVar7 + 0x14);
      if (iVar4 != *(int *)(iVar7 + 0x18)) {
        do {
          FUN_004bedc0();
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(iVar7 + 0x18));
      }
      (**(code **)(**(int **)(iVar7 + 8) + 0xa8))(1,0,0);
      FUN_004bf850(0xffffffff);
      (**(code **)(**(int **)(param_1 + 0x41c) + 0xa8))(1,0,0);
      (**(code **)(**(int **)(param_1 + 0x420) + 0xa8))(1,0,0);
      return;
    }
    if (param_2 == 3) {
      iVar7 = *(int *)(param_1 + 0x334);
      iVar4 = *(int *)(iVar7 + 0x14);
      if (iVar4 != *(int *)(iVar7 + 0x18)) {
        do {
          uStack_48 = 0x4c1b37;
          FUN_004bed40();
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(iVar7 + 0x18));
      }
      iVar4 = 0;
      uStack_48 = 0;
      uStack_4c = 1;
      uStack_50 = 1;
      uStack_54 = 0x4c1b53;
      (**(code **)(**(int **)(iVar7 + 8) + 0xa8))();
      uStack_54 = 0;
      uStack_58 = 1;
      uStack_5c = 1;
      uStack_60 = 0x4c1b66;
      (**(code **)(**(int **)(param_1 + 0x41c) + 0xa8))();
      uStack_60 = 0;
      uStack_64 = 1;
      uStack_68 = 1;
      uStack_6c = 0x4c1b79;
      (**(code **)(**(int **)(param_1 + 0x420) + 0xa8))();
      uStack_6c = 0;
      uStack_70 = 1;
      uStack_74 = 1;
      uStack_78 = 0x4c1b8c;
      (**(code **)(**(int **)(param_1 + 0x3a0) + 0xa8))();
      uStack_78 = 0;
      uStack_7c = 0;
      uStack_80 = 1;
      uStack_84 = 0x4c1b9e;
      (**(code **)(**(int **)(param_1 + 0x3a4) + 0xa8))();
      uStack_84 = 0;
      uStack_88 = 0;
      uStack_8c = 1;
      uStack_90 = 0x4c1bb0;
      (**(code **)(**(int **)(param_1 + 0x3a8) + 0xa8))();
      uStack_90 = *(undefined4 *)(param_1 + 0x428);
      uStack_94 = 0x4c1bc2;
      FUN_004bef00();
      uStack_90 = 0x4c1bcd;
      FUN_004bedc0();
      uStack_90 = 0;
      uStack_94 = 0;
      uStack_98 = 1;
      uStack_9c = 0x4c1bdf;
      (**(code **)(**(int **)(param_1 + 0x348) + 0xa8))();
      uStack_9c = 0;
      uStack_a0 = 0;
      uStack_a4 = 1;
      uStack_a8 = 0x4c1bf1;
      (**(code **)(**(int **)(param_1 + 0x350) + 0xa8))();
      uStack_a8 = 0;
      uStack_ac = 0;
      uStack_b0 = 1;
      (**(code **)(**(int **)(param_1 + 0x354) + 0xa8))();
      uVar9 = 0;
      uVar8 = 1;
      (**(code **)(**(int **)(param_1 + 0x358) + 0xa8))();
      iVar7 = 0;
      (**(code **)(**(int **)(param_1 + 0x35c) + 0xa8))(1,0,0,uVar8,uVar9);
      (**(code **)(**(int **)(param_1 + 0x34c) + 0xa8))(1,0,0);
      puVar1 = *(undefined1 **)(param_1 + 0x428);
      uStack_b0 = CONCAT31(uStack_b0._1_3_,*puVar1);
      uStack_b0 = CONCAT22(*(undefined2 *)(puVar1 + 2),(undefined2)uStack_b0);
      uStack_ac = *(uint *)(puVar1 + 4);
      uStack_a8 = *(undefined4 *)(puVar1 + 8);
      uStack_a4 = CONCAT31(uStack_a4._1_3_,puVar1[0xc]);
      uStack_a0 = *(undefined4 *)(puVar1 + 0x10);
      uStack_9c = *(undefined4 *)(puVar1 + 0x14);
      uStack_98 = CONCAT31(uStack_98._1_3_,puVar1[0x18]);
      uStack_94 = *(undefined4 *)(puVar1 + 0x1c);
      EquipDesc::set_count((EquipDesc *)&uStack_b0,1);
      bVar5 = *(int *)(*(int *)(param_1 + 0x424) + 4) == *(int *)(param_1 + 0x338);
      fVar6 = EquipDesc::get_cargo_space_occupied((EquipDesc *)&uStack_b0);
      dVar10 = (double)fVar6;
      if (uStack_ac == DAT_00674a88) {
        iVar2 = 0;
        if (bVar5) {
          iVar2 = *(int *)(param_1 + 0x40c);
        }
        iVar2 = (*(int *)(param_1 + 0x404) - *(int *)(param_1 + 0x400)) - iVar2;
      }
      else if (uStack_ac == DAT_00674a8c) {
        iVar2 = 0;
        if (bVar5) {
          iVar2 = *(int *)(param_1 + 0x408);
        }
        iVar2 = (*(int *)(param_1 + 0x3fc) - *(int *)(param_1 + 0x3f8)) - iVar2;
      }
      else {
        iVar2 = CShip::get_ammo_capacity_remaining(*(CShip **)(param_1 + 0x438),uStack_ac);
        if (iVar2 < 0) {
          if (dVar10 == _DAT_005c8ba8) {
            iVar2 = *(int *)(*(int *)(param_1 + 0x428) + 0x14);
          }
          else {
            iVar2 = ftol();
          }
        }
        else {
          if ((bVar5) &&
             (pEVar3 = EquipDescList::find_matching_cargo
                                 ((EquipDescList *)(*(int *)(param_1 + 0x334) + 0x20),uStack_ac,1,
                                  1.0), pEVar3 != (EquipDesc *)0x0)) {
            iVar4 = *(int *)(pEVar3 + 0x14);
          }
          iVar2 = CShip::get_ammo_capacity_remaining(*(CShip **)(param_1 + 0x43c),uStack_ac);
          iVar2 = iVar2 - iVar4;
        }
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      if (!bVar5) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x428) + 0x14);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x34c) + 0x658) = 0;
      iVar4 = *(int *)(*(int *)(param_1 + 0x428) + 0x14);
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
      *(int *)(*(int *)(param_1 + 0x34c) + 0x65c) = iVar4;
      if ((bVar5) && (*(int *)(*(int *)(param_1 + 0x428) + 0x14) == 1)) {
        (**(code **)(**(int **)(param_1 + 0x34c) + 0xa8))(1,1,0);
      }
      if (iVar7 == 4) {
        if (iVar2 < *(int *)(*(int *)(param_1 + 0x34c) + 0x664)) {
          FUN_00489e80(DAT_00672458,0);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x360) = 0;
      }
      (**(code **)(**(int **)(param_1 + 0x34c) + 0xa8))(0x38,iVar2,0);
      FUN_004c1a10(iVar2);
      if (*(int *)(*(int *)(param_1 + 0x424) + 4) == *(int *)(param_1 + 0x338)) {
        (**(code **)(**(int **)(param_1 + 0x348) + 0xa8))(0x1e,0x757);
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x348) + 0xa8))(0x1e,0x758,0);
      }
      if (iVar2 < 1) {
        FUN_00489e80(DAT_00672458,0);
        **(undefined1 **)(param_1 + 0x428) = 0;
        *(undefined4 *)(param_1 + 0x424) = 0;
        *(undefined4 *)(param_1 + 0x428) = 0;
        FUN_004bf850(0xffffffff);
        FUN_004c1ae0(2);
        return;
      }
    }
  }
  return;
}

