
undefined4 * __fastcall FUN_00555db0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_005e1218;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar1 = DAT_0067999c;
  piVar3 = *(int **)(DAT_0067999c + 4);
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
  DAT_006799a0 = DAT_006799a0 + 1;
  return param_1;
}

