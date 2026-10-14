
void __thiscall FUN_0043c9f0(int param_1,AmbientScriptProperties *param_2)

{
  int iVar1;
  AmbientScriptProperties *pAVar2;
  undefined4 *puVar3;
  AmbientScriptProperties *pAVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pAVar2 = param_2;
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
    param_2 = (AmbientScriptProperties *)(undefined4 *)0x0;
  } while ((puVar3 != (undefined4 *)0x0) &&
          (param_2 = (AmbientScriptProperties *)puVar3, *(int *)puVar3[2] != iVar1));
  ExceptionList = &local_c;
  if (param_2 != (AmbientScriptProperties *)0x0) {
    pAVar4 = *(AmbientScriptProperties **)((int)param_2 + 8);
    ExceptionList = &local_c;
    if (pAVar4 != (AmbientScriptProperties *)0x0) {
      ExceptionList = &local_c;
      AmbientScriptProperties::~AmbientScriptProperties(pAVar4);
      FUN_005b7e1d(pAVar4);
    }
    FUN_0043cf80(&param_2);
  }
  pAVar4 = operator_new(0x14);
  local_4 = 0;
  if (pAVar4 == (AmbientScriptProperties *)0x0) {
    pAVar4 = (AmbientScriptProperties *)0x0;
  }
  else {
    pAVar4 = (AmbientScriptProperties *)AmbientScriptProperties::AmbientScriptProperties(pAVar4);
  }
  local_4 = 0xffffffff;
  AmbientScriptProperties::operator=(pAVar4,pAVar2);
  if ((*(char *)(param_1 + 0xc) == '\0') ||
     (puVar3 = *(undefined4 **)(param_1 + 0x10), puVar3 == (undefined4 *)0x0)) {
    puVar3 = operator_new(0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar3;
  }
  puVar3[1] = *(undefined4 *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[2] = pAVar4;
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

