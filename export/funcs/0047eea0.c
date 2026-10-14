
void __thiscall FUN_0047eea0(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  EquipDesc *pEVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((param_2 != 0) && (iVar3 = FUN_0047e790(), iVar3 != 0)) {
    if (*(int *)(param_1 + 0x32c) == 0) {
      FUN_004f6380(*(undefined4 *)(iVar3 + 8));
    }
    FUN_0043a510(DAT_0066873c);
    uVar4 = Arch2Good(*(uint *)(iVar3 + 4));
    puVar5 = (undefined4 *)FUN_00437d90(uVar4);
    if (puVar5 != (undefined4 *)0x0) {
      uVar1 = *(uint *)(iVar3 + 0x14);
      if (uVar1 < param_2) {
        param_2 = uVar1;
      }
      puVar5[7] = puVar5[7] + param_2;
      iVar6 = FUN_0047e460(*(undefined4 *)(iVar3 + 4));
      if (((iVar6 == 4) || (bVar2 = arch_is_combinable(*(uint *)(iVar3 + 4)), bVar2)) ||
         (pEVar7 = EquipDescList::find_equipment_item
                             ((EquipDescList *)(param_1 + 0x3a8),*(ushort *)(iVar3 + 2)),
         pEVar7 == (EquipDesc *)0x0)) {
        FUN_00438060(*puVar5);
        uVar8 = ftol();
      }
      else {
        FUN_00438060(*puVar5);
        uVar8 = ftol();
      }
      FUN_004c4d30(uVar8);
      *(undefined1 *)(param_1 + 0x3b8) = 1;
      FUN_00438270(DAT_0066873c,uVar4,param_2);
      FUN_004c4260(*(undefined2 *)(iVar3 + 2),param_2);
      uVar9 = 1;
      uVar8 = FUN_004c4060(1);
      FUN_004c62b0(uVar8,uVar9);
      *(undefined1 *)(param_1 + 0x4e5) = 0;
      if ((param_2 == uVar1) && (*(int *)(param_1 + 0x398) != 0)) {
        FUN_0047e9e0();
      }
    }
    FUN_004427e0(0);
  }
  return;
}

