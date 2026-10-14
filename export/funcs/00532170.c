
bool FUN_00532170(void)

{
  int *piVar1;
  int iVar2;
  void *unaff_EBX;
  int *piVar3;
  char *pcVar4;
  undefined4 local_10;
  void *pvStack_c;
  int *piStack_8;
  undefined4 local_4;
  
  piStack_8 = (int *)&LAB_005c0738;
  pvStack_c = ExceptionList;
  local_10 = 0;
  piVar3 = *(int **)Engine_exref;
  pcVar4 = "1.11_IFLAppearance";
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)*piVar3)(piVar3,"1.11_IFLAppearance",&local_10);
  piVar1 = piStack_8;
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar3 + 0x14))(piVar3);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    ExceptionList = unaff_EBX;
    return -1 < iVar2;
  }
  local_10 = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = pcVar4;
  return false;
}

