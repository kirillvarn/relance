
undefined4 * __thiscall FUN_0052e200(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c0518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00531a30(param_2,param_3);
  local_4 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_LAB_005ddad4;
  if (((param_1[1] != 0) && (iVar1 = *(int *)(param_1[1] + 0x70), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) {
    bVar2 = ID_String::IsEmpty((ID_String *)(iVar1 + 0x58));
    if (!bVar2) {
      piVar3 = (int *)FUN_0042ae40((ID_String *)(iVar1 + 0x58));
      param_1[4] = piVar3;
      (**(code **)(*piVar3 + 0xc))();
    }
    bVar2 = ID_String::IsEmpty((ID_String *)(iVar1 + 0x5c));
    if (!bVar2) {
      piVar3 = (int *)FUN_0042ae40((ID_String *)(iVar1 + 0x5c));
      param_1[5] = piVar3;
      (**(code **)(*piVar3 + 0xc))();
    }
  }
  ExceptionList = local_c;
  return param_1;
}

