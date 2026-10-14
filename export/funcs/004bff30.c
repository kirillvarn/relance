
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bff30(void)

{
  uint uVar1;
  float10 fVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  float10 fVar5;
  wchar_t local_18 [2];
  wchar_t *local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005bd608;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  fVar5 = (float10)FUN_0042d680();
  fVar2 = (float10)_DAT_006728c0;
  _DAT_006728c0 = (float)(fVar5 + fVar2);
  if ((float10)_DAT_005c75e8 < fVar5 + fVar2) {
    DAT_0061218c = DAT_0061218c == '\0';
    _DAT_006728c0 = 0.0;
  }
  pwVar3 = (wchar_t *)FUN_0058a520();
  sVar4 = wcslen(pwVar3);
  if ((-1 < (int)(sVar4 - 1)) && ((pwVar3[sVar4 - 1] == L'|') != (bool)DAT_0061218c)) {
    local_14 = (wchar_t *)0x0;
    local_10 = 0;
    local_4 = 0;
    if (pwVar3 == (wchar_t *)0x0) {
      FUN_00414280();
    }
    else {
      sVar4 = wcslen(pwVar3);
      FUN_004142a0(sVar4 + 1);
      wcsncpy(local_14,pwVar3,sVar4);
      local_14[sVar4] = L'\0';
    }
    if (DAT_0061218c == '\0') {
      if (local_14 == (wchar_t *)0x0) {
        sVar4 = 0;
      }
      else {
        sVar4 = wcslen(local_14);
      }
      pwVar3 = local_14;
      sVar4 = sVar4 - 1;
      if (local_14 != (wchar_t *)0x0) {
        if (sVar4 == 0xffffffff) {
          sVar4 = wcslen(local_14);
        }
        uVar1 = sVar4 + 1;
        if (local_10 < uVar1) {
          if (local_14 == (wchar_t *)0x0) {
            local_14 = malloc(uVar1 * 2);
            *local_14 = L'\0';
            local_10 = uVar1;
          }
          else {
            local_14 = realloc(local_14,uVar1 * 2);
            local_10 = uVar1;
          }
        }
        wcsncpy(local_14,pwVar3,sVar4);
        local_14[sVar4] = L'\0';
      }
    }
    else {
      local_18[0] = L'|';
      local_18[1] = 0;
      if (local_14 == (wchar_t *)0x0) {
        sVar4 = 0;
      }
      else {
        sVar4 = wcslen(local_14);
      }
      FUN_004142a0(sVar4 + 2);
      wcsncpy(local_14 + sVar4,local_18,1);
      local_14[sVar4 + 1] = L'\0';
    }
    FUN_0058a530(local_14);
    if (local_14 != (wchar_t *)0x0) {
      free(local_14);
    }
  }
  ExceptionList = local_c;
  return;
}

