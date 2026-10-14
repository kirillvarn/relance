
void __thiscall
FUN_00454eb0(int param_1,char *param_2,undefined4 param_3,undefined4 *param_4,IScriptEngine *param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 0xbc) * 0x40 + *(int *)(param_1 + 0xb4);
  malloc_strcpy((char **)(iVar2 + 8),param_2);
  *(undefined4 *)(iVar2 + 0x3c) = param_3;
  puVar3 = (undefined4 *)(iVar2 + 0xc);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_5 == (IScriptEngine *)0x0) {
    param_5 = ThornScriptLoad(*(char **)(iVar2 + 8));
  }
  *(IScriptEngine **)(iVar2 + 4) = param_5;
  DAT_006799e4 = (**(code **)(*(int *)param_5 + 0x44))(param_5);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  return;
}

