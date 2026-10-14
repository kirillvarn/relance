
void __thiscall FUN_004c1a10(int param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *_Format;
  wchar_t local_80 [5];
  wchar_t awStack_76 [33];
  wchar_t awStack_34 [26];
  
  iVar6 = *(int *)(param_1 + 0x34c);
  _Format = param_2;
  if (((iVar6 != 0) && (_Format = *(wchar_t **)(iVar6 + 0x65c), (int)param_2 <= (int)_Format)) &&
     (_Format = param_2, (int)param_2 < (int)*(wchar_t **)(iVar6 + 0x658))) {
    _Format = *(wchar_t **)(iVar6 + 0x658);
  }
  swprintf(local_80,0x5d0ec4,_Format);
  sVar3 = wcslen(awStack_76 + 1);
  iVar6 = 0;
  pwVar5 = awStack_76 + sVar3;
  awStack_34[(int)sVar3 / 3 + sVar3] = L'\0';
  pwVar4 = awStack_34 + (int)sVar3 / 3 + sVar3;
  while (pwVar2 = pwVar4, pwVar4 = pwVar2, sVar3 != 0) {
    wVar1 = *pwVar5;
    pwVar4 = pwVar2 + -1;
    sVar3 = sVar3 - 1;
    iVar6 = iVar6 + 1;
    pwVar5 = pwVar5 + -1;
    *pwVar4 = wVar1;
    if (iVar6 == 3) {
      if (sVar3 == 0) break;
      pwVar2[-2] = L',';
      iVar6 = 0;
      pwVar4 = pwVar2 + -2;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x35c) + 0xa8))(0x1d,pwVar4,0);
  *(wchar_t **)(param_1 + 0x364) = _Format;
  return;
}

