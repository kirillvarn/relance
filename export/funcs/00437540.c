
void FUN_00437540(undefined4 param_1,EquipDescVector *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  EquipDescList local_18 [4];
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b91b9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EquipDescList::EquipDescList(local_18,param_2);
  local_4 = 0;
  FUN_004c4070(local_18);
  piVar3 = local_14;
  piVar2 = (int *)*local_14;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_005b7e1d(piVar2);
    local_10 = local_10 + -1;
    piVar2 = piVar1;
  }
  FUN_005b7e1d(local_14);
  ExceptionList = local_c;
  return;
}

