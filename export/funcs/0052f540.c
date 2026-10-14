
undefined4 * __thiscall FUN_0052f540(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c05de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00531a30(param_2,param_3);
  iVar5 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_4 = 2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_LAB_005ddcdc;
  if (param_1[1] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1[1] + 0xc) + 4);
  }
  bVar1 = ID_String::IsEmpty((ID_String *)(iVar3 + 0x58));
  if (!bVar1) {
    if (param_1[1] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1[1] + 0xc) + 4);
    }
    uVar2 = FUN_0040f080(iVar3 + 0x58);
    param_1[0xc] = uVar2;
    FUN_0040e960(1);
  }
  if (param_1[1] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1[1] + 0xc) + 4);
  }
  bVar1 = ID_String::IsEmpty((ID_String *)(iVar3 + 0x5c));
  if (!bVar1) {
    if (param_1[1] != 0) {
      iVar5 = *(int *)(*(int *)(param_1[1] + 0xc) + 4);
    }
    piVar4 = (int *)FUN_0042ae40(iVar5 + 0x5c);
    param_1[0xd] = piVar4;
    (**(code **)(*piVar4 + 0xc))();
  }
  ExceptionList = local_c;
  return param_1;
}

