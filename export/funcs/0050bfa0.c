
int FUN_0050bfa0(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bfc0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(0x78);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0050a040();
  }
  iVar1 = DAT_00675060;
  piVar5 = *(int **)(DAT_00675060 + 4);
  local_4 = 0xffffffff;
  piVar4 = operator_new(0xc);
  *piVar4 = iVar1;
  if (piVar5 == (int *)0x0) {
    piVar5 = piVar4;
  }
  piVar4[1] = (int)piVar5;
  *(int **)(iVar1 + 4) = piVar4;
  *(int **)piVar4[1] = piVar4;
  if (piVar4 + 2 != (int *)0x0) {
    piVar4[2] = iVar3;
  }
  DAT_00675064 = DAT_00675064 + 1;
  ExceptionList = local_c;
  return iVar3;
}

