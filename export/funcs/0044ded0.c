
int __thiscall FUN_0044ded0(int param_1,char *param_2,int param_3)

{
  char *_Src;
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9d2b;
  local_c = ExceptionList;
  iVar7 = 0;
  if ((*(byte *)(param_3 + 4) & 1) == 0) {
    ExceptionList = &local_c;
    _Src = ThornGetUserString(*(IScriptEngine **)(param_1 + 0x3c),(int)param_2,"Actor");
    param_2 = (char *)0x0;
    if (_Src != (char *)0x0) {
      param_2 = _strdup(_Src);
      _strlwr(param_2);
    }
    piVar1 = (int *)FUN_0044e870(param_3,param_2);
    if (piVar1 != (int *)0x0) {
      pvVar2 = operator_new(0x9f8);
      local_4 = 0;
      if (pvVar2 == (void *)0x0) {
        param_3 = 0;
      }
      else {
        param_3 = FUN_00451fd0(param_1,param_1,param_3);
      }
      *(int **)(param_3 + 0x6c) = piVar1;
      *(undefined1 *)((int)piVar1 + 0x15) = *(undefined1 *)(iVar3 + 0x40);
      *(undefined1 *)((int)piVar1 + 0x16) = *(undefined1 *)(iVar3 + 0x41);
      piVar1[6] = 0;
      local_4 = 0xffffffff;
      malloc_strcpy((char **)(param_3 + 0x70),*(char **)(iVar3 + 0x38));
      iVar7 = param_3;
      if (param_2 != (char *)0x0) {
        iVar3 = stricmp(param_2,"player");
        if (iVar3 == 0) {
          *(undefined1 *)(param_1 + 0x61) = 1;
          *(int **)(param_1 + 0x9c) = piVar1;
          puVar4 = (undefined4 *)FUN_00452e40(local_3c);
          puVar6 = (undefined4 *)(param_1 + 100);
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          fVar8 = (float10)(**(code **)(*piVar1 + 0x10))();
          *(float *)(param_1 + 0x94) = (float)fVar8;
          uVar5 = FUN_00452eb0();
          *(undefined4 *)(param_1 + 0x98) = uVar5;
        }
        free(param_2);
      }
    }
  }
  ExceptionList = local_c;
  return iVar7;
}

