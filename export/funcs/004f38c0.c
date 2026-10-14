
void FUN_004f38c0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  wchar_t *_Str;
  undefined4 *puVar2;
  size_t _Count;
  void *pvVar3;
  undefined2 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bf1aa;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    piVar8 = param_1 + 1;
    *piVar8 = 0;
    param_1[2] = 0;
    _Str = (wchar_t *)param_2[1];
    if (_Str != (wchar_t *)0x0) {
      _Count = wcslen(_Str);
      uVar1 = _Count + 1;
      if ((uint)param_1[2] < uVar1) {
        if ((void *)*piVar8 == (void *)0x0) {
          puVar4 = malloc(uVar1 * 2);
          *piVar8 = (int)puVar4;
          *puVar4 = 0;
        }
        else {
          pvVar3 = realloc((void *)*piVar8,uVar1 * 2);
          *piVar8 = (int)pvVar3;
        }
        param_1[2] = uVar1;
      }
      wcsncpy((wchar_t *)*piVar8,_Str,_Count);
      *(undefined2 *)(*piVar8 + _Count * 2) = 0;
    }
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
    local_4._0_1_ = 1;
    if (param_2[5] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(param_2[6] - param_2[5]) >> 3;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    piVar6 = operator_new(iVar5 << 3);
    param_1[5] = piVar6;
    piVar8 = (int *)param_2[6];
    for (piVar7 = (int *)param_2[5]; piVar7 != piVar8; piVar7 = piVar7 + 2) {
      local_4._0_1_ = 2;
      if (piVar6 != (int *)0x0) {
        puVar2 = (undefined4 *)*piVar7;
        *piVar6 = (int)puVar2;
        *(char *)(piVar6 + 1) = (char)piVar7[1];
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)();
        }
      }
      piVar6 = piVar6 + 2;
    }
    param_1[6] = piVar6;
    param_1[7] = piVar6;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  }
  ExceptionList = local_c;
  return;
}

