
void __fastcall FUN_00414c50(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005b884b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_005c8cb8;
  local_4 = 0;
  iVar3 = param_1[5];
  local_10 = param_1;
  if (param_1[5] != 0) {
    do {
      iVar1 = *(int *)(iVar3 + 0x24);
      do {
        iVar2 = *(int *)(iVar3 + 0x20);
        *(undefined4 *)(iVar3 + 0x24) = 0;
        *(undefined4 *)(iVar3 + 0x20) = 0;
        local_14 = iVar3;
        FUN_00537260(DAT_00616648,1,&local_14);
        iVar3 = iVar2;
      } while (iVar2 != 0);
      iVar3 = iVar1;
    } while (iVar1 != 0);
    param_1[5] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    free((void *)param_1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  ExceptionList = local_c;
  return;
}

