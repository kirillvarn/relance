
void FUN_005999d0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c4bac;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    puVar1 = *(undefined4 **)(param_1 + 4);
    local_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      if (puVar1[1] != 0) {
        puVar1[1] = puVar1[1] + -1;
      }
      if (puVar1[1] == 0) {
        puVar1[1] = 1;
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 4) = 0;
    }
    iVar2 = *(int *)(param_2 + 4);
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
  }
  ExceptionList = local_c;
  return;
}

