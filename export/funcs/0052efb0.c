
undefined4 * __thiscall FUN_0052efb0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c05a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00429040(1);
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = &PTR_LAB_005ddbfc;
  local_4 = 0;
  piVar1 = (int *)FUN_0042ae40(EXTERIOR_SOUND_NAME_exref);
  param_1[0x13] = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  iVar2 = *(int *)(param_1[0xc] + 0x10);
  if ((iVar2 == 0) || (((byte)*(undefined4 *)(iVar2 + 0x4c) & 3) != 3)) {
    iVar2 = FUN_0054bb00();
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xb4);
  }
  if (iVar2 == DAT_00673344) {
    piVar1 = (int *)FUN_0042ae40(INTERIOR_SOUND_NAME_exref);
    param_1[0x12] = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
  }
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
  ExceptionList = pvStack_c;
  return param_1;
}

