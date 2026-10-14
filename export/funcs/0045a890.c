
void FUN_0045a890(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *local_18;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ba269;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0045aa10(&local_18,*DAT_0066d33c,DAT_0066d33c,&param_1);
  if (local_18 == DAT_0066d33c) {
    local_14[0] = 0;
    local_14[1] = 0;
    local_4 = 1;
    if ((param_1 != 0) && ((Watchable *)(param_1 + 8) != (Watchable *)0x0)) {
      BaseWatcher::set_pointer((BaseWatcher *)local_14,(Watchable *)(param_1 + 8));
    }
    puVar1 = DAT_0066d33c;
    puVar3 = (undefined4 *)DAT_0066d33c[1];
    local_4 = 2;
    puVar2 = operator_new(0x10);
    *puVar2 = puVar1;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = puVar2;
    }
    puVar2[1] = puVar3;
    puVar1[1] = puVar2;
    *(undefined4 **)puVar2[1] = puVar2;
    FUN_0045aad0(puVar2 + 2,local_14);
    DAT_0066d340 = DAT_0066d340 + 1;
    local_4 = 0xffffffff;
    if (local_14[0] != 0) {
      BaseWatcher::set_pointer((BaseWatcher *)local_14,(Watchable *)0x0);
    }
  }
  ExceptionList = local_c;
  return;
}

