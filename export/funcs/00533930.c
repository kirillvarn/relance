
bool FUN_00533930(void)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 local_10;
  void *pvStack_c;
  int *piStack_8;
  void *local_4;
  
  piStack_8 = (int *)&LAB_005c08f8;
  pvStack_c = ExceptionList;
  local_10 = 0;
  piVar4 = *(int **)Engine_exref;
  pcVar5 = "1.11_IFLAppearance";
  local_4 = (void *)0x0;
  ExceptionList = &pvStack_c;
  iVar3 = (**(code **)*piVar4)(piVar4,"1.11_IFLAppearance",&local_10);
  pvVar2 = local_4;
  piVar1 = piStack_8;
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*piVar4 + 0x20))(piVar4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    ExceptionList = pvVar2;
    return -1 < iVar3;
  }
  local_10 = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  ExceptionList = pcVar5;
  return false;
}

