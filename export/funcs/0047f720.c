
void __thiscall FUN_0047f720(int param_1,EquipDesc *param_2,ID_String *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  Equipment *pEVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if ((param_2 == (EquipDesc *)0x0) ||
     ((iVar5 = FUN_0047e460(*(undefined4 *)(param_2 + 4)), iVar5 != 0 && (iVar5 != 2)))) {
    if (param_3 == (ID_String *)0x0) {
      pEVar6 = Archetype::GetEquipment(*(uint *)(param_2 + 4));
      if (pEVar6 != (Equipment *)0x0) {
        param_3 = (ID_String *)(**(code **)(*(int *)pEVar6 + 0x10))();
        puVar1 = *(undefined4 **)(param_1 + 0x350);
        for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
          if ((((EquipDesc *)(puVar2 + 2) != param_2) &&
              (pEVar6 = Archetype::GetEquipment(puVar2[3]), pEVar6 != (Equipment *)0x0)) &&
             (iVar5 = (**(code **)(*(int *)pEVar6 + 0x10))(), (ID_String *)iVar5 == param_3)) {
            if ((*(int *)(param_1 + 0x360) == 0) ||
               (*(int *)(*(int *)(param_1 + 0x360) + 0x978) != 3)) {
              EquipDesc::set_equipped((EquipDesc *)(puVar2 + 2),false);
            }
            else {
              FUN_004c4540(*(undefined2 *)((int)puVar2 + 10),puVar2 + 4,puVar2[7],puVar2[6],0);
            }
          }
        }
      }
      if ((*(int *)(param_1 + 0x360) == 0) || (*(int *)(*(int *)(param_1 + 0x360) + 0x978) != 3)) {
        EquipDesc::set_equipped(param_2,true);
        return;
      }
      uVar10 = 1;
    }
    else {
      if ((*(int *)(param_1 + 0x360) == 0) || (*(int *)(*(int *)(param_1 + 0x360) + 0x978) != 3)) {
        EquipDesc::set_equipped(param_2,false);
        return;
      }
      uVar10 = 0;
    }
    FUN_004c4540(*(undefined2 *)(param_2 + 2),param_2 + 8,*(undefined4 *)(param_2 + 0x14),
                 *(undefined4 *)(param_2 + 0x10),uVar10);
    return;
  }
  *(undefined2 *)(param_1 + 0x948) = *(undefined2 *)(param_2 + 2);
  if (param_3 == (ID_String *)0x0) {
    pcVar9 = (char *)FUN_00585ef0(param_2,0);
    if (pcVar9 == (char *)0x0) {
      FUN_00489e80(DAT_00671c68);
      return;
    }
    param_3 = (ID_String *)StringAlloc(pcVar9,false);
    EquipDesc::set_hardpoint(param_2,(CacheString *)&param_3);
    EquipDesc::set_equipped(param_2,true);
    FUN_00489e80(DAT_00671c70,0);
    uVar7 = Arch2Good(*(uint *)(param_2 + 4));
    FUN_004c6860(uVar7);
    pEVar6 = Archetype::GetEquipment(*(uint *)(param_2 + 4));
    if ((pEVar6 != (Equipment *)0x0) &&
       (iVar5 = (**(code **)(*(int *)pEVar6 + 0x10))(), iVar5 == 0x11)) {
      param_3 = (ID_String *)(pEVar6 + 0x98);
      bVar3 = ID_String::IsEmpty(param_3);
      if ((!bVar3) &&
         ((pEVar6 = Archetype::GetEquipmentByName(param_3), pEVar6 != (Equipment *)0x0 &&
          (pEVar6[0x78] == (Equipment)0x0)))) {
        FUN_004f6200(0,pcVar9);
      }
    }
    if (((*(int *)(param_1 + 0x360) == 0) ||
        (iVar5 = *(int *)(*(int *)(param_1 + 0x360) + 0x978), iVar5 == 2)) ||
       (param_3 = (ID_String *)((uint)param_3 & 0xffffff00), iVar5 == 3)) {
      param_3 = (ID_String *)CONCAT31(param_3._1_3_,1);
    }
    uVar10 = FUN_0047e460(*(undefined4 *)(param_2 + 4));
    FUN_004c6a50(param_2,param_3,uVar10);
    iVar5 = *(int *)(param_1 + 0x360);
    if (iVar5 == 0) goto LAB_0047fb04;
  }
  else {
    if (*(uint *)(param_2 + 4) != 0) {
      Archetype::GetEquipment(*(uint *)(param_2 + 4));
    }
    param_3 = *(ID_String **)(param_2 + 0x14);
    if ((int)param_3 < 1) {
      param_3 = (ID_String *)0x1;
    }
    FUN_004c63e0(local_8,local_4);
    uVar7 = ftol();
    uVar8 = ftol();
    if (uVar8 < uVar7) {
      FUN_00489e80(DAT_00671c78,0);
      return;
    }
    FUN_005645c0(0x11);
    if (iVar5 == 0) {
      FUN_004f6380(*(undefined4 *)(param_2 + 8));
    }
    EquipDesc::make_internal(param_2);
    EquipDesc::set_equipped(param_2,false);
    if (((*(int *)(param_1 + 0x360) == 0) ||
        (iVar5 = *(int *)(*(int *)(param_1 + 0x360) + 0x978), iVar5 == 2)) ||
       (param_3 = (ID_String *)((uint)param_3 & 0xffffff00), iVar5 == 3)) {
      param_3 = (ID_String *)CONCAT31(param_3._1_3_,1);
    }
    uVar10 = FUN_0047e460(*(undefined4 *)(param_2 + 4));
    FUN_004c6a50(param_2,param_3,uVar10);
    iVar5 = *(int *)(param_1 + 0x360);
    if (iVar5 == 0) {
      if (*(char *)(param_1 + 0x35c) != '\0') {
        if (*(int *)(param_1 + 0x978) != 2) {
          return;
        }
        FUN_004c6e70();
        return;
      }
      goto LAB_0047fb04;
    }
  }
  if (*(int *)(iVar5 + 0x978) != 3) {
    FUN_004c6e70();
    return;
  }
LAB_0047fb04:
  cVar4 = FUN_004c4810();
  if (cVar4 != '\0') {
    FUN_004c4040(param_1 + 0x34c);
    iVar5 = FUN_00446be0();
    if (iVar5 != 0) {
      FUN_00448540(param_1 + 0x34c);
      FUN_00447210();
    }
  }
  return;
}

