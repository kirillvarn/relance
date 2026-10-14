
int __thiscall FUN_00454820(int *param_1,undefined4 param_2,undefined4 param_3)

{
  IScriptEngine *pIVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9f1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*param_1 != 0) {
    ExceptionList = &local_c;
    ThornScriptDestroy((IScriptEngine **)(param_1 + 1));
    iVar3 = *param_1;
    if (iVar3 != 0) {
      FUN_0044eb20();
      FUN_005b7e1d(iVar3);
    }
    *param_1 = 0;
    pIVar1 = ThornScriptLoad((char *)param_1[2]);
    param_1[1] = (int)pIVar1;
  }
  pvVar2 = operator_new(0xb4);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0044eab0();
  }
  local_4 = 0xffffffff;
  *param_1 = iVar3;
  FUN_0044ebf0();
  FUN_0044ece0(param_2,param_3);
  piVar4 = param_1 + 3;
  piVar5 = (int *)*param_1;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  ExceptionList = local_c;
  return *param_1;
}

