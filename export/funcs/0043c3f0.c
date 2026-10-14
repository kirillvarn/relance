
void __thiscall FUN_0043c3f0(int param_1,NewsBroadcastProperties *param_2)

{
  int iVar1;
  NewsBroadcastProperties *pNVar2;
  undefined4 *puVar3;
  NewsBroadcastProperties *pNVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pNVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b949b;
  local_c = ExceptionList;
  iVar1 = *(int *)param_2;
  puVar3 = (undefined4 *)0x0;
  do {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_1 + 4);
    }
    else {
      puVar3 = (undefined4 *)*puVar3;
    }
    param_2 = (NewsBroadcastProperties *)(undefined4 *)0x0;
  } while ((puVar3 != (undefined4 *)0x0) &&
          (param_2 = (NewsBroadcastProperties *)puVar3, *(int *)puVar3[2] != iVar1));
  ExceptionList = &local_c;
  if (param_2 != (NewsBroadcastProperties *)0x0) {
    pNVar4 = *(NewsBroadcastProperties **)((int)param_2 + 8);
    ExceptionList = &local_c;
    if (pNVar4 != (NewsBroadcastProperties *)0x0) {
      ExceptionList = &local_c;
      NewsBroadcastProperties::~NewsBroadcastProperties(pNVar4);
      FUN_005b7e1d(pNVar4);
    }
    FUN_0043cf80(&param_2);
  }
  pNVar4 = operator_new(0x60);
  local_4 = 0;
  if (pNVar4 == (NewsBroadcastProperties *)0x0) {
    pNVar4 = (NewsBroadcastProperties *)0x0;
  }
  else {
    pNVar4 = (NewsBroadcastProperties *)NewsBroadcastProperties::NewsBroadcastProperties(pNVar4);
  }
  local_4 = 0xffffffff;
  NewsBroadcastProperties::operator=(pNVar4,pNVar2);
  if ((*(char *)(param_1 + 0xc) == '\0') ||
     (puVar3 = *(undefined4 **)(param_1 + 0x10), puVar3 == (undefined4 *)0x0)) {
    puVar3 = operator_new(0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar3;
  }
  puVar3[1] = *(undefined4 *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[2] = pNVar4;
  if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 4) = puVar3;
  }
  else {
    **(undefined4 **)(param_1 + 8) = puVar3;
  }
  *(undefined4 **)(param_1 + 8) = puVar3;
  ExceptionList = local_c;
  return;
}

