
void __thiscall FUN_00489b50(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_18;
  undefined1 local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bc278;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 4) {
    puVar2 = *(undefined4 **)(param_1 + 4);
    for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
      if (puVar3[2] == param_2) {
        return;
      }
    }
    local_18 = param_2;
    local_14 = param_3;
    local_10 = (int *)0x0;
    local_4 = 0;
    ExceptionList = &local_c;
    iVar4 = FUN_00489f40(puVar2,puVar2[1]);
    puVar2[1] = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
    FUN_0059f7e0(iVar4 + 8,&local_18);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    local_4 = 0xffffffff;
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 0x60))();
      (**(code **)(*local_10 + 8))(local_10);
      local_10 = (int *)0x0;
    }
    if (iVar1 == 0) {
      FUN_00489a80();
      ExceptionList = local_c;
      return;
    }
  }
  else {
    ExceptionList = &local_c;
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s",
               "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_Messaging.cpp",0xa2,
               "NN Message inbox overflow!");
  }
  ExceptionList = local_c;
  return;
}

