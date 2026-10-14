
bool FUN_00424510(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b8b38;
  local_c = ExceptionList;
  puVar1 = *(undefined4 **)Pipeline_exref;
  bVar4 = false;
  if (puVar1 != (undefined4 *)0x0) {
    local_10 = (int *)0x0;
    local_4 = 0;
    ExceptionList = &local_c;
    iVar2 = (**(code **)*puVar1)(puVar1,"1.11_IGammaControl",&local_10);
    if (iVar2 == 0) {
      piVar3 = (int *)(uint)DAT_00679be5;
      (**(code **)(*local_10 + 0x18))(local_10);
      iVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,7,DAT_00610858,0,0x3f800000,0);
      bVar4 = -1 < iVar2;
    }
    local_4 = 0xffffffff;
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
    }
  }
  ExceptionList = local_c;
  return bVar4;
}

