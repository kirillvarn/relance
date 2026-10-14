
void __thiscall FUN_004581b0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  Equipment *pEVar4;
  int iVar5;
  
  puVar1 = *(undefined4 **)(param_2 + 4);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    pEVar4 = Archetype::GetEquipment(puVar2[3]);
    bVar3 = EquipDesc::is_internal((EquipDesc *)(puVar2 + 2));
    if ((!bVar3) &&
       (iVar5 = HardpointSummary::find_name((HardpointSummary *)*param_1,(char *)puVar2[4]),
       iVar5 != -1)) {
      FUN_00457fe0(iVar5,pEVar4);
    }
  }
  return;
}

