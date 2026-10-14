
void FUN_0045aa10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  void **ppvVar1;
  Watchable *pWVar2;
  int iVar3;
  int iVar4;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ba291;
  ppvVar1 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar1, param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    local_14[0] = 0;
    local_14[1] = 0;
    local_4 = 1;
    if ((*param_4 != 0) && (pWVar2 = (Watchable *)(*param_4 + 8), pWVar2 != (Watchable *)0x0)) {
      BaseWatcher::set_pointer((BaseWatcher *)local_14,pWVar2);
    }
    local_4 = 0xffffffff;
    if (param_2[2] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_2[2] + -8;
    }
    if (local_14[0] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = local_14[0] + -8;
    }
    if (local_14[0] != 0) {
      BaseWatcher::set_pointer((BaseWatcher *)local_14,(Watchable *)0x0);
    }
    if (iVar4 == iVar3) break;
    ppvVar1 = ExceptionList;
  }
  *param_1 = param_2;
  ExceptionList = local_c;
  return;
}

