
void __fastcall FUN_00447690(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b99f1;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0x78);
  ExceptionList = &local_c;
  piVar3 = operator_new(iVar2 * 0x44 + 4);
  local_4 = 0;
  if (piVar3 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piVar3 + 1;
    *piVar3 = iVar2;
    FUN_005b7fba(piVar5,0x44,iVar2,&LAB_00446c60,FUN_00446c80);
  }
  uVar1 = iVar2 * 8 + 4;
  local_4 = 0xffffffff;
  *(int **)(param_1 + 0xa0) = piVar5;
  piVar3 = operator_new(uVar1);
  local_4 = 1;
  if (piVar3 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piVar3 + 1;
    *piVar3 = iVar2;
    FUN_005b7fba(piVar5,8,iVar2,&LAB_00446eb0,FUN_00446ec0);
  }
  local_4 = 0xffffffff;
  *(int **)(param_1 + 0xa4) = piVar5;
  piVar3 = operator_new(uVar1);
  local_4 = 2;
  if (piVar3 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piVar3 + 1;
    *piVar3 = iVar2;
    FUN_005b7fba(piVar5,8,iVar2,&LAB_00446eb0,FUN_00446ec0);
  }
  *(int **)(param_1 + 0xa8) = piVar5;
  iVar6 = 0;
  local_4 = 0xffffffff;
  if (0 < iVar2) {
    do {
      lVar4 = HardpointSummary::get_instance(*(HardpointSummary **)(param_1 + 0x74),iVar6);
      *(long *)(*(int *)(param_1 + 0xa4) + iVar6 * 8) = lVar4;
      lVar4 = HardpointSummary::get_instance(*(HardpointSummary **)(param_1 + 0x74),iVar6);
      *(long *)(*(int *)(param_1 + 0xa8) + iVar6 * 8) = lVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  ExceptionList = local_c;
  return;
}

