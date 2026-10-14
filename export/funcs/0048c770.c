
void __fastcall FUN_0048c770(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  MissionVendorProperties *pMVar6;
  int iVar7;
  void *unaff_EBX;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bc41b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_0043a8d0(DAT_0066873c);
  iVar8 = 0;
  iVar11 = 0;
  puVar4 = (undefined4 *)0x0;
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(iVar3 + 4);
    }
    else {
      puVar4 = (undefined4 *)*puVar4;
    }
    if (puVar4 == (undefined4 *)0x0) break;
    iVar11 = iVar11 + 1;
  }
  piVar5 = operator_new(iVar11 * 0x60 + 4);
  pcVar2 = MissionVendorProperties_exref;
  pcVar1 = ~MissionVendorProperties_exref;
  local_4 = 0;
  if (piVar5 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = piVar5 + 1;
    *piVar5 = iVar11;
    FUN_005b7fba(piVar9,0x60,iVar11,pcVar2,pcVar1);
  }
  *(int **)(param_1 + 0x394) = piVar9;
  iVar10 = 0;
  local_4 = 0xffffffff;
  *(int *)(param_1 + 0x398) = iVar11;
  if (0 < iVar11) {
    do {
      pMVar6 = (MissionVendorProperties *)0x0;
      iVar7 = 0;
      puVar4 = (undefined4 *)0x0;
      while( true ) {
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = *(undefined4 **)(iVar3 + 4);
        }
        else {
          puVar4 = (undefined4 *)*puVar4;
        }
        if (puVar4 == (undefined4 *)0x0) goto LAB_0048c843;
        if (iVar7 == iVar10) break;
        iVar7 = iVar7 + 1;
      }
      pMVar6 = (MissionVendorProperties *)puVar4[2];
LAB_0048c843:
      MissionVendorProperties::operator=
                ((MissionVendorProperties *)(*(int *)(param_1 + 0x394) + iVar8),pMVar6);
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 0x60;
    } while (iVar10 < iVar11);
  }
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  (**(code **)(**(int **)(param_1 + 0x428) + 0xa8))(0x37,0,*(int *)(param_1 + 0x398) + -1);
  ExceptionList = unaff_EBX;
  return;
}

