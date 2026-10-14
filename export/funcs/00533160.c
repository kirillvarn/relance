
void __thiscall FUN_00533160(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  CEquip *pCVar3;
  int iVar4;
  void **ppvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c08da;
  local_c = ExceptionList;
  if ((((param_1 == 0) || (param_1 == -0xc)) || (iVar2 = *(int *)(param_1 + 0x10), iVar2 == 0)) ||
     ((*(uint *)(iVar2 + 0x4c) & 0x103) != 0x103)) {
    iVar2 = 0;
  }
  ExceptionList = &local_c;
  pCVar3 = CEquipManager::FindByID((CEquipManager *)(iVar2 + 0xe4),(ushort)param_2);
  uVar1 = *(uint *)(pCVar3 + 0x14);
  if (uVar1 < 0x401) {
    if (uVar1 == 0x400) {
      local_14 = operator_new(0x20);
      local_4 = 6;
      if (local_14 == (void *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_0052ec40(pCVar3,param_1);
      }
      iVar2 = *(int *)(param_1 + 0xb8);
      local_4 = 0xffffffff;
      iVar4 = FUN_0042a7e0(iVar2,*(undefined4 *)(iVar2 + 4));
      puVar6 = &local_30;
    }
    else if (uVar1 < 0x41) {
      if (uVar1 == 0x40) {
        local_14 = operator_new(0x40);
        local_4 = 4;
        if (local_14 == (void *)0x0) {
          local_40 = 0;
        }
        else {
          local_40 = FUN_0052d6e0(pCVar3,param_1);
        }
        iVar2 = *(int *)(param_1 + 0xb8);
        local_4 = 0xffffffff;
        iVar4 = FUN_0042a7e0(iVar2,*(undefined4 *)(iVar2 + 4));
        puVar6 = &local_40;
      }
      else if (uVar1 == 1) {
        local_14 = operator_new(0x20);
        local_4 = 1;
        if (local_14 == (void *)0x0) {
          local_44 = 0;
        }
        else {
          local_44 = FUN_00531b40(pCVar3,param_1);
        }
        iVar2 = *(int *)(param_1 + 0xb8);
        local_4 = 0xffffffff;
        iVar4 = FUN_0042a7e0(iVar2,*(undefined4 *)(iVar2 + 4));
        puVar6 = &local_44;
      }
      else if (uVar1 == 2) {
        local_14 = operator_new(0x20);
        local_4 = 9;
        if (local_14 == (void *)0x0) {
          local_48 = 0;
        }
        else {
          local_48 = FUN_00532210(pCVar3,param_1);
        }
        iVar2 = *(int *)(param_1 + 0xb8);
        local_4 = 0xffffffff;
        iVar4 = FUN_0042a7e0(iVar2,*(undefined4 *)(iVar2 + 4));
        puVar6 = &local_48;
      }
      else {
        if (uVar1 != 0x20) {
          ExceptionList = local_c;
          return;
        }
        local_14 = operator_new(0x40);
        local_4 = 3;
        if (local_14 == (void *)0x0) {
          param_2 = 0;
        }
        else {
          param_2 = FUN_0052d570(pCVar3,param_1);
        }
        iVar2 = *(int *)(param_1 + 0xb8);
        local_4 = 0xffffffff;
        iVar4 = FUN_0042a7e0(iVar2,*(undefined4 *)(iVar2 + 4));
        puVar6 = &param_2;
      }
    }
    else {
      if (uVar1 == 0x80) {
        local_14 = operator_new(0x44);
        local_4 = 2;
        if (local_14 == (void *)0x0) {
          local_34 = 0;
        }
        else {
          local_34 = FUN_0052d880(pCVar3,param_1);
        }
        iVar2 = *(int *)(param_1 + 0xb8);
        local_4 = 0xffffffff;
        iVar4 = FUN_0042a7e0(iVar2,*(undefined4 *)(iVar2 + 4));
        *(int *)(iVar2 + 4) = iVar4;
        puVar6 = &local_34;
        **(int **)(iVar4 + 4) = iVar4;
        goto LAB_005335c6;
      }
      if (uVar1 == 0x100) {
        local_14 = operator_new(0x18);
        local_4 = 7;
        if (local_14 == (void *)0x0) {
          local_38 = 0;
          puVar6 = &local_38;
        }
        else {
          local_38 = FUN_0052e200(pCVar3,param_1);
          puVar6 = &local_38;
        }
        goto LAB_005336d0;
      }
      if (uVar1 != 0x200) {
        ExceptionList = local_c;
        return;
      }
      local_14 = operator_new(0x10);
      local_4 = 8;
      if (local_14 == (void *)0x0) {
        local_3c = 0;
      }
      else {
        local_3c = FUN_0052eb10(pCVar3,param_1);
      }
      iVar2 = *(int *)(param_1 + 0xb8);
      local_4 = 0xffffffff;
      iVar4 = FUN_0042a7e0(iVar2,*(undefined4 *)(iVar2 + 4));
      puVar6 = &local_3c;
    }
  }
  else {
    if (0x200000 < uVar1) {
      if (uVar1 != 0x400000) {
        if (uVar1 != 0x800000) {
          ExceptionList = local_c;
          return;
        }
        local_10 = operator_new(0x34);
        local_4 = 0xb;
        if (local_10 == (void *)0x0) {
          local_1c = 0;
        }
        else {
          local_1c = FUN_00516c30(pCVar3,param_1);
        }
        iVar2 = *(int *)(param_1 + 0xb8);
        local_4 = 0xffffffff;
        iVar4 = FUN_0042a7e0(iVar2,*(undefined4 *)(iVar2 + 4));
        *(int *)(iVar2 + 4) = iVar4;
        puVar6 = &local_1c;
        **(int **)(iVar4 + 4) = iVar4;
        goto LAB_005335c6;
      }
      local_10 = operator_new(0x14);
      local_4 = 10;
      if (local_10 == (void *)0x0) {
        local_18 = 0;
      }
      else {
        local_18 = FUN_00532530(pCVar3,param_1);
      }
      puVar6 = &local_18;
LAB_005336d0:
      uVar7 = *(undefined4 *)(param_1 + 0xb8);
      ppvVar5 = &local_14;
LAB_005336e2:
      local_4 = 0xffffffff;
      FUN_005947a0(ppvVar5,uVar7,puVar6);
      ExceptionList = local_c;
      return;
    }
    if (uVar1 == 0x200000) {
      local_14 = operator_new(0x20);
      local_4 = 0xd;
      if (local_14 == (void *)0x0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_00532800(pCVar3,param_1);
      }
      uVar7 = *(undefined4 *)(param_1 + 0xb8);
      puVar6 = &local_20;
      ppvVar5 = &local_10;
      goto LAB_005336e2;
    }
    if (uVar1 == 0x1000) {
      local_14 = operator_new(0x10);
      local_4 = 0xc;
      if (local_14 == (void *)0x0) {
        local_24 = 0;
      }
      else {
        local_24 = FUN_00531e80(pCVar3,param_1);
      }
      iVar2 = *(int *)(param_1 + 0xb8);
      local_4 = 0xffffffff;
      iVar4 = FUN_0042a7e0(iVar2,*(undefined4 *)(iVar2 + 4));
      puVar6 = &local_24;
    }
    else if (uVar1 == 0x20000) {
      local_14 = operator_new(0x60);
      local_4 = 0;
      if (local_14 == (void *)0x0) {
        local_28 = 0;
      }
      else {
        local_28 = FUN_00527b80(pCVar3,param_1);
      }
      iVar2 = *(int *)(param_1 + 0xb8);
      local_4 = 0xffffffff;
      iVar4 = FUN_0042a7e0(iVar2,*(undefined4 *)(iVar2 + 4));
      puVar6 = &local_28;
    }
    else {
      if (uVar1 != 0x100000) {
        ExceptionList = local_c;
        return;
      }
      local_14 = operator_new(0x38);
      local_4 = 5;
      if (local_14 == (void *)0x0) {
        local_2c = 0;
      }
      else {
        local_2c = FUN_0052f540(pCVar3,param_1);
      }
      iVar2 = *(int *)(param_1 + 0xb8);
      local_4 = 0xffffffff;
      iVar4 = FUN_0042a7e0(iVar2,*(undefined4 *)(iVar2 + 4));
      puVar6 = &local_2c;
    }
  }
  *(int *)(iVar2 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
LAB_005335c6:
  FUN_005999b0(iVar4 + 8,puVar6);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  ExceptionList = local_c;
  return;
}

