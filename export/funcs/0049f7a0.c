
void __fastcall FUN_0049f7a0(wchar_t *param_1)

{
  int iVar1;
  ISystem *pIVar2;
  undefined4 uVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  int unaff_EDI;
  undefined2 *_Count;
  int local_410;
  wchar_t *local_40c;
  int local_408;
  int local_404;
  wchar_t awStack_218 [6];
  undefined1 auStack_20c [524];
  
  DAT_006720c9 = 0;
  local_40c = param_1;
  if ((char)param_1[0x5e6] == '\0') {
    iVar1 = FUN_004c4690();
    iVar7 = iVar1 + -3;
    iVar6 = 0;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    pwVar9 = (wchar_t *)(iVar1 + -1);
    local_408 = iVar1;
    (**(code **)(**(int **)(param_1 + 0x570) + 0xa8))(0x37,0);
    if (iVar7 == 0) {
      (**(code **)(**(int **)(param_1 + 0x570) + 0xa8))(2,1);
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x570) + 0xa8))(2,0,0);
    }
    if (iVar1 <= *(int *)(param_1 + 0x57a)) {
      param_1[0x57a] = L'\0';
      param_1[0x57b] = L'\0';
    }
    iVar7 = *(int *)(param_1 + 0x57a);
    if (iVar7 < iVar1) {
      pwVar8 = param_1 + 0x572;
      param_1 = pwVar9;
      do {
        DAT_0066fc60 = 0;
        iVar1 = FUN_004c46a0(iVar7);
        if (iVar1 != 0) {
          FUN_004347e0(DAT_0067eca8,0x54b,&DAT_0066dc60,DAT_006119f8);
          swprintf(&DAT_0066fc60,0x66dc60,*(wchar_t **)(iVar1 + 0x14));
          FUN_0048dc10(iVar1,auStack_20c,0x100);
          pIVar2 = Universe::get_system(*(uint *)(iVar1 + 0xc));
          if (pIVar2 != (ISystem *)0x0) {
            FUN_004347e0(DAT_0067eca8,0x54c,&DAT_0066dc60,DAT_006119f8);
            wcscat(&DAT_0066fc60,L"\n");
            uVar3 = (**(code **)(*(int *)pIVar2 + 0xc))(&local_40c,0x100);
            FUN_004347e0(DAT_0067eca8,uVar3);
            pwVar9 = (wchar_t *)&stack0xfffffbdc;
            _Count = &DAT_0066dc60;
            sVar4 = wcslen(&DAT_0066fc60);
            swprintf(&DAT_0066fc60 + sVar4,(size_t)_Count,pwVar9);
          }
          wcscat(&DAT_0066fc60,L"\n");
          wcscat(&DAT_0066fc60,awStack_218);
        }
        (**(code **)(**(int **)pwVar8 + 0xa8))(0x1d,&DAT_0066fc60,0);
        (**(code **)(**(int **)pwVar8 + 0xa8))(0x33,&DAT_00679bb0,1);
        (**(code **)(**(int **)pwVar8 + 0xa8))(1,0,0);
        pwVar9 = pwVar8 + -8;
        iVar6 = iVar6 + 1;
        pwVar8 = pwVar8 + 2;
        (**(code **)(**(int **)pwVar9 + 0xa8))(1,0,0);
        if (2 < iVar6) {
          return;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < unaff_EDI);
    }
    param_1 = param_1 + iVar6 * 2 + 0x572;
    iVar6 = 3 - iVar6;
    do {
      (**(code **)(**(int **)param_1 + 0xa8))(1,1,0);
      pwVar9 = param_1 + -8;
      param_1 = param_1 + 2;
      (**(code **)(**(int **)pwVar9 + 0xa8))(1,1,0);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    return;
  }
  local_404 = FUN_004c4fb0();
  iVar7 = 0;
  local_404 = local_404 * 5;
  local_408 = 0;
  local_40c = (wchar_t *)0x1;
  local_410 = 0;
  if (0 < local_404) {
    pwVar9 = param_1 + 0x572;
    do {
      iVar1 = FUN_004c4ff0();
      if (iVar1 != 0) {
        uVar5 = *(uint *)(iVar1 + 0x18) & 0xf;
        if (uVar5 != 9) {
          local_408 = local_408 + 1;
        }
        if (local_410 < *(int *)(param_1 + 0x57a)) {
          if (uVar5 == 10) {
            local_40c = (wchar_t *)((int)local_40c + 1);
          }
        }
        else if ((uVar5 != 9) && (iVar7 < 3)) {
          if (uVar5 == 10) {
            FUN_004347e0(DAT_0067eca8,0x4df,&DAT_0066dc60);
            pwVar8 = local_40c;
            local_40c = (wchar_t *)((int)local_40c + 1);
            swprintf(&DAT_0066fc60,0x66dc60,pwVar8);
          }
          else {
            FUN_004347e0(DAT_0067eca8,0x331c,&DAT_0066fc60);
          }
          FUN_0041c970(&DAT_0066dc60);
          wcscat(&DAT_0066fc60,&DAT_0066dc60);
          (**(code **)(**(int **)pwVar9 + 0xa8))(0x1d,&DAT_0066fc60);
          (**(code **)(**(int **)pwVar9 + 0xa8))(1,0,0);
          pwVar8 = pwVar9 + -8;
          iVar7 = iVar7 + 1;
          pwVar9 = pwVar9 + 2;
          (**(code **)(**(int **)pwVar8 + 0xa8))(1,0,0);
        }
      }
      local_410 = local_410 + 1;
    } while (local_410 < local_404);
    if (2 < iVar7) goto LAB_0049fb89;
  }
  pwVar9 = param_1 + iVar7 * 2 + 0x572;
  iVar7 = 3 - iVar7;
  do {
    (**(code **)(**(int **)pwVar9 + 0xa8))(1,1);
    pwVar8 = pwVar9 + -8;
    pwVar9 = pwVar9 + 2;
    (**(code **)(**(int **)pwVar8 + 0xa8))(1,1,0);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
LAB_0049fb89:
  iVar1 = local_408;
  iVar7 = local_408 + -3;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x570) + 0xa8))(0x37,0);
  if (iVar7 == 0) {
    (**(code **)(**(int **)(param_1 + 0x570) + 0xa8))(2,1);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x570) + 0xa8))(2,0,0);
  }
  if (iVar1 <= *(int *)(param_1 + 0x57a)) {
    param_1[0x57a] = L'\0';
    param_1[0x57b] = L'\0';
  }
  return;
}

