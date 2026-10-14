
undefined4 __thiscall
FUN_004c6530(int *param_1,EquipDesc *param_2,CacheString *param_3,int param_4,char param_5)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  Equipment *pEVar6;
  undefined4 uVar7;
  HardpointSummary local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd759;
  local_c = ExceptionList;
  if (param_2 == (EquipDesc *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    param_4 = *(int *)(param_2 + 0x14);
  }
  ExceptionList = &local_c;
  if (*(uint *)(param_2 + 4) != 0) {
    ExceptionList = &local_c;
    Archetype::GetEquipment(*(uint *)(param_2 + 4));
  }
  uVar3 = ftol();
  if (param_1[6] != 0) {
    Archetype::GetShip(param_1[6]);
    EquipDescList::get_cargo_space_occupied((EquipDescList *)(param_1 + 7));
  }
  uVar4 = ftol();
  iVar1 = *(int *)(param_2 + 0x14);
  EquipDesc::set_count(param_2,param_4);
  bVar2 = EquipDesc::is_internal(param_2);
  if ((bVar2) && (*(int *)param_3 == *(int *)CARGO_BAY_HP_NAME_exref)) {
    if (uVar4 < uVar3) {
      EquipDesc::set_count(param_2,iVar1);
      if (param_5 == '\0') {
        ExceptionList = local_c;
        return 0;
      }
      FUN_00489e80(DAT_0067339c,0);
      ExceptionList = local_c;
      return 0;
    }
    EquipDesc::set_equipped(param_2,false);
    bVar2 = arch_is_combinable(*(uint *)(param_2 + 4));
    EquipDescList::add_equipment_item((EquipDescList *)(param_1 + 7),param_2,bVar2);
    if (param_5 != '\0') {
      FUN_005645c0(0x10);
    }
    goto LAB_004c6802;
  }
  HardpointSummary::HardpointSummary(local_2c);
  local_4 = 0;
  HardpointSummary::analyze_instance(local_2c,*(long *)(*param_1 + 0x4b8));
  if (*(char **)param_3 == *(char **)CARGO_BAY_HP_NAME_exref) {
    if (uVar4 < uVar3) {
      EquipDesc::set_count(param_2,iVar1);
joined_r0x004c674c:
      if (param_5 != '\0') {
        FUN_00489e80(DAT_0067339c,0);
      }
      local_4 = 0xffffffff;
      HardpointSummary::~HardpointSummary(local_2c);
      ExceptionList = local_c;
      return 0;
    }
    EquipDesc::make_internal(param_2);
    bVar2 = false;
LAB_004c676e:
    EquipDesc::set_equipped(param_2,bVar2);
  }
  else {
    iVar5 = HardpointSummary::find_name(local_2c,*(char **)param_3);
    if (iVar5 == -1) {
      EquipDesc::set_count(param_2,iVar1);
      goto joined_r0x004c674c;
    }
    EquipDesc::set_hardpoint(param_2,param_3);
    if (*(int *)param_3 != *(int *)CARGO_BAY_HP_NAME_exref) {
      bVar2 = true;
      goto LAB_004c676e;
    }
  }
  bVar2 = arch_is_combinable(*(uint *)(param_2 + 4));
  EquipDescList::add_equipment_item((EquipDescList *)(param_1 + 7),param_2,bVar2);
  if (param_5 == '\0') goto switchD_004c67cf_caseD_7;
  bVar2 = EquipDesc::is_internal(param_2);
  if (bVar2) {
    uVar7 = 0x10;
    goto LAB_004c67e8;
  }
  pEVar6 = Archetype::GetEquipment(*(uint *)(param_2 + 4));
  if (pEVar6 != (Equipment *)0x0) {
    uVar7 = (**(code **)(*(int *)pEVar6 + 0x10))();
    switch(uVar7) {
    case 6:
    case 10:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x19:
    case 0x1c:
      uVar7 = 0x16;
      break;
    default:
      goto switchD_004c67cf_caseD_7;
    case 0xb:
    case 0xd:
    case 0xe:
      uVar7 = 0x15;
      break;
    case 0xc:
    case 0xf:
      uVar7 = 0x13;
      break;
    case 0x11:
    case 0x13:
    case 0x21:
      uVar7 = 0x12;
      break;
    case 0x12:
    case 0x1e:
    case 0x1f:
    case 0x20:
      uVar7 = 0x14;
    }
LAB_004c67e8:
    FUN_005645c0(uVar7);
  }
switchD_004c67cf_caseD_7:
  local_4 = 0xffffffff;
  HardpointSummary::~HardpointSummary(local_2c);
LAB_004c6802:
  FUN_005850f0(param_1 + 7);
  EquipDesc::set_count(param_2,iVar1);
  ExceptionList = local_c;
  return 1;
}

