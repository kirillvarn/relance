
void __thiscall FUN_0043c630(int param_1,CharacterProperties *param_2)

{
  int iVar1;
  CharacterProperties *pCVar2;
  undefined4 *puVar3;
  CharacterProperties *pCVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pCVar2 = param_2;
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
    param_2 = (CharacterProperties *)(undefined4 *)0x0;
  } while ((puVar3 != (undefined4 *)0x0) &&
          (param_2 = (CharacterProperties *)puVar3, *(int *)puVar3[2] != iVar1));
  ExceptionList = &local_c;
  if (param_2 != (CharacterProperties *)0x0) {
    pCVar4 = *(CharacterProperties **)((int)param_2 + 8);
    ExceptionList = &local_c;
    if (pCVar4 != (CharacterProperties *)0x0) {
      ExceptionList = &local_c;
      CharacterProperties::~CharacterProperties(pCVar4);
      FUN_005b7e1d(pCVar4);
    }
    FUN_0043cf80(&param_2);
  }
  pCVar4 = operator_new(100);
  local_4 = 0;
  if (pCVar4 == (CharacterProperties *)0x0) {
    pCVar4 = (CharacterProperties *)0x0;
  }
  else {
    pCVar4 = (CharacterProperties *)CharacterProperties::CharacterProperties(pCVar4);
  }
  local_4 = 0xffffffff;
  CharacterProperties::operator=(pCVar4,pCVar2);
  if ((*(char *)(param_1 + 0xc) == '\0') ||
     (puVar3 = *(undefined4 **)(param_1 + 0x10), puVar3 == (undefined4 *)0x0)) {
    puVar3 = operator_new(0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar3;
  }
  puVar3[1] = *(undefined4 *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[2] = pCVar4;
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

