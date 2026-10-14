
void __thiscall FUN_004468f0(int param_1,int param_2,HardpointSummary *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  Equipment *pEVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 unaff_EDI;
  ulong auStack_14 [2];
  int iStack_c;
  HardpointSummary *pHStack_8;
  
  pEVar5 = Archetype::GetEquipment(*(uint *)(param_2 + 4));
  iVar1 = *(int *)(pEVar5 + 4);
  iVar6 = (**(code **)(*(int *)pEVar5 + 0x10))();
  if (iVar6 == 0x15) {
    if (pEVar5[0x70] != (Equipment)0x0) {
      iVar6 = HardpointSummary::find_name(param_3,*(char **)(param_2 + 8));
      if (iVar6 != -1) {
        FUN_00558310(iVar1,iVar6);
        return;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*(int *)pEVar5 + 0x24))();
    if (cVar4 != '\0') {
      auStack_14[0] =
           FUN_0041c540(*(undefined4 *)(pEVar5 + 0xc),*(undefined4 *)Data_exref,0,0,iVar1 + 0x20,
                        param_1 + 0x20,0);
      iVar1 = *(int *)(param_1 + 0x6c);
      iVar6 = FUN_0042a7e0(iVar1,*(undefined4 *)(iVar1 + 4));
      *(int *)(iVar1 + 4) = iVar6;
      **(int **)(iVar6 + 4) = iVar6;
      FUN_005999b0(iVar6 + 8,auStack_14);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      uVar7 = (**(code **)(**(int **)Engine_exref + 100))(*(int **)Engine_exref,auStack_14[0]);
      FUN_00406cd0(uVar7,0,0);
      (**(code **)(**(int **)Engine_exref + 0x3c))(*(int **)Engine_exref,uVar7);
      pcVar2 = *(char **)(iStack_c + 8);
      pcVar3 = *(char **)(pEVar5 + 0x80);
      if ((pcVar2 != (char *)0x0) && (pcVar3 != (char *)0x0)) {
        lVar8 = HardpointSummary::find_name_instance(pHStack_8,pcVar2);
        if (lVar8 != -1) {
          DACOM_CRC::GetCRC32(pcVar3);
          auStack_14[0] = DACOM_CRC::GetCRC32(pcVar2);
          (**(code **)(**(int **)Hardpoint_exref + 0x18))
                    (*(int **)Hardpoint_exref,lVar8,&stack0xffffffe8,unaff_EDI,&stack0xffffffe0);
        }
      }
    }
  }
  return;
}

