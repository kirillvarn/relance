
bool FUN_005b0220(int *param_1)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  code *pcVar4;
  int local_234 [5];
  _MEMORYSTATUS local_220;
  wchar_t local_200 [256];
  
  GlobalMemoryStatus(&local_220);
  if (local_220.dwTotalPhys >> 0x14 < 0x78) {
    if (DAT_0067a439 != '\0') goto LAB_005b0558;
    iVar1 = FUN_004347e0(DAT_0067eca8,0xcb,local_200,0x100);
    if (iVar1 == 0) {
      wcscpy(local_200,L"");
    }
    sVar2 = wcslen(local_200);
    if (0 < (int)sVar2) {
      if ((wchar_t *)*param_1 == (wchar_t *)0x0) {
        sVar3 = 0;
      }
      else {
        sVar3 = wcslen((wchar_t *)*param_1);
      }
      FUN_004142a0(sVar3 + sVar2 + 1);
      wcsncpy((wchar_t *)(*param_1 + sVar3 * 2),local_200,sVar2);
      *(undefined2 *)(*param_1 + (sVar3 + sVar2) * 2) = 0;
    }
    sVar2 = wcslen(L"\n\n");
    if (0 < (int)sVar2) {
      if ((wchar_t *)*param_1 == (wchar_t *)0x0) {
        sVar3 = 0;
      }
      else {
        sVar3 = wcslen((wchar_t *)*param_1);
      }
      FUN_004142a0(sVar2 + sVar3 + 1);
      wcsncpy((wchar_t *)(*param_1 + sVar3 * 2),L"\n\n",sVar2);
      *(undefined2 *)(*param_1 + (sVar2 + sVar3) * 2) = 0;
    }
  }
  else if (local_220.dwAvailVirtual >> 0x14 < 400) {
    iVar1 = FUN_004347e0(DAT_0067eca8,0xd6,local_200,0x100);
    if (iVar1 == 0) {
      wcscpy(local_200,L"");
    }
    pcVar4 = wcslen_exref;
    sVar2 = wcslen(local_200);
    if (0 < (int)sVar2) {
      if ((wchar_t *)*param_1 == (wchar_t *)0x0) {
        sVar3 = 0;
      }
      else {
        sVar3 = wcslen((wchar_t *)*param_1);
      }
      FUN_004142a0(sVar3 + sVar2 + 1);
      wcsncpy((wchar_t *)(*param_1 + sVar3 * 2),local_200,sVar2);
      *(undefined2 *)(*param_1 + (sVar3 + sVar2) * 2) = 0;
      pcVar4 = wcslen_exref;
    }
    sVar2 = (*pcVar4)(&DAT_005d0a08);
    if (0 < (int)sVar2) {
      if ((wchar_t *)*param_1 == (wchar_t *)0x0) {
        sVar3 = 0;
      }
      else {
        sVar3 = wcslen((wchar_t *)*param_1);
      }
      FUN_004142a0(sVar2 + sVar3 + 1);
      wcsncpy((wchar_t *)(*param_1 + sVar3 * 2),L"\n\n",sVar2);
      *(undefined2 *)(*param_1 + (sVar2 + sVar3) * 2) = 0;
    }
  }
  if (DAT_0067a439 == '\0') {
    local_234[0] = 0;
    (**(code **)(**(int **)Pipeline_exref + 0x20))(*(int **)Pipeline_exref,0xf,local_234);
    if (local_234[0] != 0) {
      local_234[1] = 0;
      local_234[2] = 0xcd;
      local_234[3] = 0xce;
      local_234[4] = 0xcf;
      iVar1 = FUN_004347e0(DAT_0067eca8,local_234[local_234[0] + 1],local_200,0x100);
      if (iVar1 == 0) {
        wcscpy(local_200,L"");
      }
      sVar2 = wcslen(local_200);
      if (0 < (int)sVar2) {
        if ((wchar_t *)*param_1 == (wchar_t *)0x0) {
          sVar3 = 0;
        }
        else {
          sVar3 = wcslen((wchar_t *)*param_1);
        }
        FUN_004142a0(sVar3 + sVar2 + 1);
        wcsncpy((wchar_t *)(*param_1 + sVar3 * 2),local_200,sVar2);
        *(undefined2 *)(*param_1 + (sVar3 + sVar2) * 2) = 0;
      }
      sVar2 = wcslen(L"\n\n");
      if (0 < (int)sVar2) {
        if ((wchar_t *)*param_1 == (wchar_t *)0x0) {
          sVar3 = 0;
        }
        else {
          sVar3 = wcslen((wchar_t *)*param_1);
        }
        FUN_004142a0(sVar2 + sVar3 + 1);
        wcsncpy((wchar_t *)(*param_1 + sVar3 * 2),L"\n\n",sVar2);
        *(undefined2 *)(*param_1 + (sVar2 + sVar3) * 2) = 0;
      }
    }
  }
LAB_005b0558:
  if ((wchar_t *)*param_1 == (wchar_t *)0x0) {
    return false;
  }
  sVar2 = wcslen((wchar_t *)*param_1);
  return sVar2 != 0;
}

