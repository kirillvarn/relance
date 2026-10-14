
int * __thiscall FUN_004f2910(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  wchar_t *_Str;
  int *piVar2;
  undefined4 *puVar3;
  size_t _Count;
  void *pvVar4;
  undefined2 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bf139;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  _Str = (wchar_t *)*param_2;
  if (_Str != (wchar_t *)0x0) {
    _Count = wcslen(_Str);
    uVar1 = _Count + 1;
    if ((uint)param_1[1] < uVar1) {
      if ((void *)*param_1 == (void *)0x0) {
        puVar5 = malloc(uVar1 * 2);
        *param_1 = (int)puVar5;
        *puVar5 = 0;
      }
      else {
        pvVar4 = realloc((void *)*param_1,uVar1 * 2);
        *param_1 = (int)pvVar4;
      }
      param_1[1] = uVar1;
    }
    wcsncpy((wchar_t *)*param_1,_Str,_Count);
    *(undefined2 *)(*param_1 + _Count * 2) = 0;
  }
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  if (param_2[4] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)(param_2[5] - param_2[4]) >> 3;
  }
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  piVar7 = operator_new(iVar6 * 8);
  param_1[4] = (int)piVar7;
  piVar2 = (int *)param_2[5];
  for (piVar8 = (int *)param_2[4]; piVar8 != piVar2; piVar8 = piVar8 + 2) {
    local_4._0_1_ = 1;
    if (piVar7 != (int *)0x0) {
      puVar3 = (undefined4 *)*piVar8;
      *piVar7 = (int)puVar3;
      *(char *)(piVar7 + 1) = (char)piVar8[1];
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)();
      }
    }
    piVar7 = piVar7 + 2;
  }
  param_1[5] = (int)piVar7;
  param_1[6] = (int)piVar7;
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  ExceptionList = local_c;
  return param_1;
}

