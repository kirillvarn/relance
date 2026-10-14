
int * __thiscall FUN_00414640(int param_1,uint param_2,char param_3)

{
  int iVar1;
  void **ppvVar2;
  void *pvVar3;
  int *piVar4;
  int *piStack_14;
  char cStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b882e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (ExceptionList = &pvStack_c,
     param_2 < (uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3))) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (*(char *)(iVar1 + 4 + param_2 * 8) == param_3) {
      piVar4 = *(int **)(iVar1 + param_2 * 8);
      ExceptionList = &pvStack_c;
      ppvVar2 = &pvStack_c;
      if (piVar4 != (int *)0x0) goto LAB_00414705;
    }
    else {
      ExceptionList = &pvStack_c;
      (**(code **)(**(int **)(iVar1 + param_2 * 8) + 4))();
      *(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 8) = 0;
    }
  }
  if (param_3 == '\0') {
    pvVar3 = operator_new(0x2c);
    local_4 = 1;
    if (pvVar3 == (void *)0x0) goto LAB_004146ee;
    piVar4 = (int *)FUN_004147a0();
  }
  else {
    pvVar3 = operator_new(0x34);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
LAB_004146ee:
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_00414d10();
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar4 + 8))(*(undefined4 *)(param_1 + 0x1c));
  ppvVar2 = ExceptionList;
LAB_00414705:
  ExceptionList = ppvVar2;
  if ((*(int *)(param_1 + 0x10) == 0) ||
     ((uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3) <= param_2)) {
    cStack_10 = param_3;
    piStack_14 = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)*piVar4)();
    }
    local_4 = 2;
    FUN_00418610(*(undefined4 *)(param_1 + 0x14),1,&piStack_14);
    local_4 = 0xffffffff;
    if (piStack_14 != (int *)0x0) {
      (**(code **)(*piStack_14 + 4))();
    }
    (**(code **)(*piVar4 + 4))();
  }
  else {
    *(int **)(*(int *)(param_1 + 0x10) + param_2 * 8) = piVar4;
  }
  ExceptionList = pvStack_c;
  return piVar4;
}

