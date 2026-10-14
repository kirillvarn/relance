
undefined4 __thiscall FUN_00457fe0(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  GoodInfo *this;
  undefined4 uVar3;
  long lVar4;
  HardpointInfo *pHVar5;
  int iVar6;
  undefined4 *puVar7;
  char **ppcVar8;
  char **ppcVar9;
  char *local_6c;
  ulong local_68;
  char *local_64;
  ulong local_60;
  undefined4 local_5c [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [16];
  
  if (*(int *)(param_1[2] + param_2 * 4) == -1) {
    uVar1 = *(uint *)(param_3 + 8);
    *(uint *)(param_1[3] + param_2 * 4) = uVar1;
    iVar6 = *(int *)(param_3 + 4);
    this = GoodList::find_by_archetype(uVar1);
    if (this != (GoodInfo *)0x0) {
      bVar2 = GoodInfo::has_visual_attachment(this);
      if (bVar2) {
        uVar3 = FUN_0041c540(*(undefined4 *)(this + 0x84),*(undefined4 *)Data_exref,0,0,iVar6 + 0x20
                             ,param_1 + 4,0);
        *(undefined4 *)(param_1[2] + param_2 * 4) = uVar3;
        local_6c = *(char **)(this + 0x80);
        if (local_6c != (char *)0x0) {
          local_68 = DACOM_CRC::GetCRC32(local_6c);
          local_64 = HardpointSummary::get_name((HardpointSummary *)*param_1,param_2);
          local_60 = DACOM_CRC::GetCRC32(local_64);
          iVar6 = **(int **)Hardpoint_exref;
          uVar3 = *(undefined4 *)(param_1[2] + param_2 * 4);
          ppcVar9 = &local_6c;
          ppcVar8 = &local_64;
          lVar4 = HardpointSummary::get_instance((HardpointSummary *)*param_1,param_2);
          (**(code **)(iVar6 + 0x18))(*(undefined4 *)Hardpoint_exref,lVar4,ppcVar8,uVar3,ppcVar9);
          return 1;
        }
        local_5c[0] = 0;
        pHVar5 = HardpointSummary::get_info((HardpointSummary *)*param_1,param_2);
        local_4c = *(undefined4 *)(pHVar5 + 4);
        local_48 = *(undefined4 *)(pHVar5 + 8);
        local_44 = *(undefined4 *)(pHVar5 + 0xc);
        pHVar5 = HardpointSummary::get_info((HardpointSummary *)*param_1,param_2);
        pHVar5 = pHVar5 + 0x10;
        puVar7 = local_40;
        for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *(undefined4 *)pHVar5;
          pHVar5 = pHVar5 + 4;
          puVar7 = puVar7 + 1;
        }
        iVar6 = **(int **)Engine_exref;
        uVar3 = *(undefined4 *)(param_1[2] + param_2 * 4);
        puVar7 = local_5c;
        lVar4 = HardpointSummary::get_instance((HardpointSummary *)*param_1,param_2);
        (**(code **)(iVar6 + 0xbc))(*(undefined4 *)Engine_exref,lVar4,uVar3,puVar7);
        return 1;
      }
    }
  }
  return 0;
}

