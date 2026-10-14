
void __thiscall FUN_005b6b90(int *param_1,LPCSTR param_2,BYTE *param_3)

{
  BYTE BVar1;
  uint uVar2;
  HKEY hKey;
  BYTE *pBVar3;
  
  if (*param_1 < 1) {
    hKey = (HKEY)0x0;
  }
  else {
    hKey = (HKEY)param_1[*param_1];
  }
  uVar2 = 0xffffffff;
  pBVar3 = param_3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    BVar1 = *pBVar3;
    pBVar3 = pBVar3 + 1;
  } while (BVar1 != '\0');
  RegSetValueExA(hKey,param_2,0,1,param_3,~uVar2);
  return;
}

