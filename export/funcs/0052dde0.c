
void __thiscall FUN_0052dde0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  Root *this;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  uint uStack_a8;
  undefined4 uStack_a4;
  int iStack_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined *puStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 auStack_68 [8];
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_28 [5];
  void *pvStack_14;
  Vector *pVStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c04f7;
  pVStack_c = ExceptionList;
  local_94 = CONCAT31(local_94._1_3_,uStack_a4._3_1_);
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_4 = 0;
  ExceptionList = &pVStack_c;
  (**(code **)(**(int **)(param_1 + 4) + 0x98))(&local_94,param_2);
  if (iStack_98 == 0) {
    uStack_a8 = 0;
  }
  else {
    uStack_a8 = (local_94 - iStack_98) / 0x44;
  }
  uVar9 = 0;
  iVar5 = param_1;
  if (uStack_a8 != 0) {
    do {
      uVar3 = uStack_a8;
      piVar4 = operator_new(0xd4);
      pVStack_c._0_1_ = 1;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        FUN_0052e100(3);
        pVStack_c._0_1_ = 2;
        FUN_005154a0(0,0,0,0);
        piVar4[0x34] = 0;
        *piVar4 = (int)&PTR_LAB_005dd67c;
        piVar4[1] = (int)&PTR_LAB_005dd5fc;
        piVar4[3] = (int)&PTR_FUN_005dd5f4;
      }
      pVStack_c = (Vector *)((uint)pVStack_c._1_3_ << 8);
      if (*(int *)(iVar5 + 4) == 0) {
        this = (Root *)0x0;
      }
      else {
        this = *(Root **)(*(int *)(iVar5 + 4) + 0x4c);
      }
      (**(code **)(*(int *)this + 0xc))();
      (**(code **)(*piVar4 + 0x168))(this);
      Archetype::Root::Release(this);
      if (((piVar4 == (int *)0xfffffff4) || (piVar8 = (int *)piVar4[4], piVar8 == (int *)0x0)) ||
         (((byte)piVar8[0x13] & 0x67) != 0x67)) {
        piVar8 = (int *)0x0;
      }
      FUN_0052e0a0();
      puStack_80 = PTR_DAT_00613ed0;
      uStack_7c = DAT_00673344;
      puVar1 = (undefined4 *)(uVar9 + param_1);
      uStack_84 = 0;
      uStack_74 = *puVar1;
      uStack_70 = puVar1[1];
      uStack_6c = puVar1[2];
      puVar6 = puVar1 + 3;
      puVar7 = auStack_68;
      for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uStack_44 = puVar1[0xc];
      uStack_40 = puVar1[0xd];
      uStack_3c = puVar1[0xe];
      auStack_28[0] = *(undefined4 *)(*(int *)(*(int *)(uStack_a8 + 4) + 4) + 0xb0);
      (**(code **)(*piVar8 + 0xa0))(&uStack_84);
      uVar2 = uStack_a8 >> 8;
      uStack_a8 = uStack_a8 & 0xffffff00;
      iVar5 = FUN_0054baf0();
      if (*(int *)(uVar3 + 8) == iVar5) {
        uStack_a8 = CONCAT31((int3)uVar2,1);
        CELauncher::ComputeProjectilePosAndVelocity_OneBarrel
                  (*(CELauncher **)(uVar3 + 4),(Vector *)auStack_28,(Vector *)&local_94,(int)piVar8,
                   pVStack_c);
      }
      else {
        local_94 = iStack_48;
        local_90 = uStack_44;
        local_8c = uStack_40;
      }
      FUN_0053f340(&local_94,uStack_a8);
      (**(code **)(**(int **)(this + 4) + 0x20))(1);
      FUN_00540c30(piVar4,0);
      uVar9 = uVar9 + 1;
      iVar5 = uStack_a4;
    } while (uVar9 < uStack_a8);
  }
  FUN_005b7e1d(iStack_98);
  ExceptionList = pvStack_14;
  return;
}

