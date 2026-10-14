
void FUN_004779a0(wchar_t *param_1,int param_2,int param_3,wchar_t *param_4)

{
  bool bVar1;
  int iVar2;
  wchar_t *_Count;
  wchar_t local_80 [6];
  wchar_t local_74 [58];
  
  if (param_3 < 0) {
    param_3 = 0x2140;
  }
  else if (param_3 == 0) {
    *param_1 = L'\0';
    goto LAB_004779d0;
  }
  FUN_004347e0(DAT_0067eca8,param_3,param_1,0xff);
LAB_004779d0:
  if (param_2 == 0) {
    wcscat(param_1,L"0");
    return;
  }
  iVar2 = 1000000;
  bVar1 = false;
  do {
    if ((iVar2 <= param_2) || (bVar1)) {
      if (bVar1) {
        _Count = L"%03d";
      }
      else {
        _Count = (wchar_t *)&PTR_DAT_005d0ec4;
      }
      swprintf(local_80,(size_t)_Count,(wchar_t *)(param_2 / iVar2));
      wcscat(param_4,local_74);
      if (1 < iVar2) {
        wcscat(param_4,L",");
      }
      param_2 = param_2 - (param_2 / iVar2) * iVar2;
      bVar1 = true;
    }
    iVar2 = iVar2 / 1000;
  } while (0 < iVar2);
  return;
}

