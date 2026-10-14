
void __thiscall FUN_00458220(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  Equipment *pEVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = *(undefined4 **)(param_2 + 4);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    pEVar5 = Archetype::GetEquipment(puVar2[3]);
    bVar4 = EquipDesc::is_internal((EquipDesc *)(puVar2 + 2));
    if ((!bVar4) &&
       (iVar6 = HardpointSummary::find_name((HardpointSummary *)*param_1,(char *)puVar2[4]),
       iVar6 != -1)) {
      uVar3 = *(undefined4 *)(pEVar5 + 4);
      iVar7 = (**(code **)(*(int *)pEVar5 + 0x10))();
      if ((iVar7 == 0x15) && (pEVar5[0x70] != (Equipment)0x0)) {
        FUN_00558310(uVar3,iVar6);
      }
    }
  }
  return;
}

