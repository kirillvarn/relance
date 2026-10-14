
undefined4 * __thiscall FUN_005593d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c157b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 8) = (undefined1)param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_005e14a4;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  *(undefined1 *)((int)param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = param_2;
  iVar1 = DAT_00679a14;
  piVar3 = *(int **)(DAT_00679a14 + 4);
  local_4 = 0;
  piVar2 = operator_new(0xc);
  *piVar2 = iVar1;
  if (piVar3 == (int *)0x0) {
    piVar3 = piVar2;
  }
  piVar2[1] = (int)piVar3;
  *(int **)(iVar1 + 4) = piVar2;
  *(int **)piVar2[1] = piVar2;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = (int)param_1;
  }
  DAT_00679a18 = DAT_00679a18 + 1;
  ExceptionList = local_c;
  return param_1;
}

