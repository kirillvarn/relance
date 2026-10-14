
int * FUN_00509b00(void)

{
  void *pvVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bfafb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x2d0);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    piVar2 = (int *)FUN_00504970();
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x54))(DAT_006132dc);
  ExceptionList = pvVar1;
  return piVar2;
}

