
int * __fastcall FUN_004c6140(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd73c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 7) = local_11;
  pvVar4 = operator_new(0x28);
  *(void **)pvVar4 = pvVar4;
  *(void **)((int)pvVar4 + 4) = pvVar4;
  param_1[8] = (int)pvVar4;
  param_1[9] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  piVar1 = (int *)param_1[8];
  local_4 = 0;
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_005b7e1d(piVar3);
    param_1[9] = param_1[9] + -1;
    piVar3 = piVar2;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  if (*param_1 != 0) {
    FUN_00585d90(0,0);
    FUN_00585bd0(0xffffffff,0,0);
  }
  ExceptionList = local_c;
  return param_1;
}

