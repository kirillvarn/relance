
void FUN_00546380(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c0f38;
  pvStack_c = ExceptionList;
  local_10 = 0;
  piVar2 = *(int **)Engine_exref;
  pcVar3 = "1.11_IFLAppearance";
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)*piVar2)(piVar2,"1.11_IFLAppearance",&local_10);
  if (-1 < iVar1) {
    (**(code **)(*piVar2 + 0x18))(piVar2,puStack_8,local_4);
  }
  local_10 = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = pcVar3;
  return;
}

