
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00414070(int *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  size_t _Count;
  undefined4 uVar9;
  int iVar10;
  wchar_t *pwVar11;
  float fVar12;
  wchar_t *pwStack_14;
  wchar_t *pwStack_10;
  int *piStack_8;
  
  if (param_1[1] != DAT_006105b0) {
    if (*param_1 == 0) {
      piVar8 = (int *)FUN_00417620();
      *param_1 = (int)piVar8;
      (**(code **)(*piVar8 + 8))(param_1[0x57]);
      iVar1 = *param_1;
      pwStack_10 = (wchar_t *)DAT_00616638;
      if (DAT_00616638 == (int *)0x0) {
        FUN_00414280();
      }
      else {
        _Count = DAT_0061663c;
        if (DAT_0061663c == -1) {
          _Count = wcslen((wchar_t *)DAT_00616638);
        }
        FUN_004142a0(_Count + 1);
        wcsncpy(*(wchar_t **)(iVar1 + 4),pwStack_10,_Count);
        *(undefined2 *)(*(int *)(iVar1 + 4) + _Count * 2) = 0;
      }
      iVar1 = *param_1;
      if ((*(int *)(iVar1 + 0x20) != DAT_006105b0) && (*(int *)(iVar1 + 0x14) != 0)) {
        FUN_00413e80(*(int *)(iVar1 + 0x14));
        *(undefined4 *)(iVar1 + 0x14) = 0;
      }
      if ((*(int *)(iVar1 + 0x14) == 0) && (FUN_004127d0(0), *(int *)(iVar1 + 0x14) == 0)) {
        (**(code **)(*(int *)*param_1 + 4))();
        *param_1 = 0;
      }
    }
    piVar8 = (int *)*param_1;
    if (piVar8 != (int *)0x0) {
      param_1[1] = DAT_006105b0;
      if ((piVar8[8] != DAT_006105b0) &&
         (pwVar11 = (wchar_t *)piVar8[5], (wchar_t *)piVar8[5] != (wchar_t *)0x0)) {
        do {
          pwStack_10 = *(wchar_t **)(pwVar11 + 0x12);
          do {
            pwVar2 = *(wchar_t **)(pwVar11 + 0x10);
            pwVar11[0x12] = L'\0';
            pwVar11[0x13] = L'\0';
            pwVar11[0x10] = L'\0';
            pwVar11[0x11] = L'\0';
            pwStack_14 = pwVar11;
            FUN_00537260(DAT_00616648,1,&pwStack_14);
            pwVar11 = pwVar2;
          } while (pwVar2 != (wchar_t *)0x0);
          pwVar11 = pwStack_10;
        } while (pwStack_10 != (wchar_t *)0x0);
        piVar8[5] = 0;
      }
      if (piVar8[5] == 0) {
        FUN_004127d0(0);
      }
      iVar1 = piVar8[5];
      if (iVar1 != 0) {
        pwStack_10 = (wchar_t *)(**(code **)(*piVar8 + 0xc))();
        piStack_8 = param_1 + 2;
        pwStack_14 = *(wchar_t **)pwStack_10;
        uVar9 = (**(code **)(*piVar8 + 0x10))(piVar8[2],piStack_8);
        (**(code **)(pwStack_14 + 0x14))(uVar9);
        uVar3 = *(uint *)(iVar1 + 0x1c);
        iVar4 = *(int *)(iVar1 + 8);
        fVar12 = 0.0;
        iVar10 = 0x11;
        piVar8 = param_1 + 0x14;
        fVar7 = _DAT_005c7474;
        do {
          uVar5 = *(uint *)(iVar1 + 4);
          fVar12 = (float)*(int *)pwStack_14 + fVar12;
          *piVar8 = 0;
          pwStack_14 = pwStack_14 + 2;
          iVar10 = iVar10 + -1;
          fVar6 = fVar12 / (float)uVar5;
          piVar8[-1] = (int)fVar7;
          piVar8[1] = (int)fVar6;
          piVar8[2] = (int)((float)uVar3 / (float)iVar4);
          piVar8 = piVar8 + 4;
          fVar7 = fVar6;
        } while (iVar10 != 0);
      }
    }
  }
  return;
}

