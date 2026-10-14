
int * __thiscall FUN_00590f30(int *param_1,undefined4 *param_2)

{
  wchar_t *_Str;
  short *psVar1;
  undefined4 *puVar2;
  size_t _Count;
  void *pvVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  _Str = (wchar_t *)*param_2;
  if (_Str == (wchar_t *)0x0) {
    psVar1 = (short *)*param_1;
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      *psVar1 = 0;
    }
  }
  else {
    _Count = wcslen(_Str);
    uVar9 = _Count + 1;
    if ((uint)param_1[1] < uVar9) {
      if ((void *)*param_1 == (void *)0x0) {
        puVar4 = malloc(uVar9 * 2);
        *param_1 = (int)puVar4;
        *puVar4 = 0;
      }
      else {
        pvVar3 = realloc((void *)*param_1,uVar9 * 2);
        *param_1 = (int)pvVar3;
      }
      param_1[1] = uVar9;
    }
    wcsncpy((wchar_t *)*param_1,_Str,_Count);
    *(undefined2 *)(*param_1 + _Count * 2) = 0;
  }
  param_1[2] = param_2[2];
  if (param_1 + 3 != param_2 + 3) {
    puVar5 = (undefined4 *)param_2[4];
    if (puVar5 == (undefined4 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_2[5] - (int)puVar5 >> 3;
    }
    puVar6 = (undefined4 *)param_1[4];
    if (puVar6 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_1[5] - (int)puVar6 >> 3;
    }
    if (uVar7 < uVar9) {
      if (puVar5 == (undefined4 *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = param_2[5] - (int)puVar5 >> 3;
      }
      if (puVar6 == (undefined4 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = param_1[6] - (int)puVar6 >> 3;
      }
      if (uVar7 < uVar9) {
        FUN_00445dc0(puVar6,param_1[5]);
        FUN_005b7e1d(param_1[4]);
        iVar8 = FUN_005995f0();
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        pvVar3 = operator_new(iVar8 * 8);
        param_1[4] = (int)pvVar3;
        iVar8 = FUN_00591420(param_2[4],param_2[5],pvVar3);
        param_1[6] = iVar8;
      }
      else {
        if (puVar6 == (undefined4 *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = param_1[5] - (int)puVar6 >> 3;
        }
        FUN_00591460(puVar5,puVar5 + iVar8 * 2,puVar6);
        FUN_00591420(puVar5 + iVar8 * 2,param_2[5],param_1[5]);
        iVar8 = FUN_005995f0();
        iVar8 = param_1[4] + iVar8 * 8;
      }
      param_1[5] = iVar8;
    }
    else {
      puVar2 = (undefined4 *)param_2[5];
      for (; puVar5 != puVar2; puVar5 = puVar5 + 2) {
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6 = puVar6 + 2;
      }
      puVar5 = (undefined4 *)param_1[5];
      for (; puVar6 != puVar5; puVar6 = puVar6 + 2) {
        FUN_00418f70(0);
      }
      if (param_2[4] == 0) {
        param_1[5] = param_1[4];
      }
      else {
        param_1[5] = param_1[4] + ((int)(param_2[5] - param_2[4]) >> 3) * 8;
      }
    }
  }
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}

