
undefined4 FUN_0057d9c0(HMODULE param_1,LPCSTR param_2,undefined4 *param_3,uint *param_4)

{
  HRSRC hResInfo;
  DWORD DVar1;
  HGLOBAL hResData;
  LPVOID pvVar2;
  
  *param_3 = 0;
  *param_4 = 0;
  hResInfo = FindResourceExA(param_1,(LPCSTR)0x17,param_2,0);
  if (hResInfo == (HRSRC)0x0) {
    return 0;
  }
  DVar1 = SizeofResource(param_1,hResInfo);
  hResData = LoadResource(param_1,hResInfo);
  if (hResData == (HGLOBAL)0x0) {
    return 0;
  }
  pvVar2 = LockResource(hResData);
  if (pvVar2 == (LPVOID)0x0) {
    return 0;
  }
  *param_4 = DVar1 >> 1;
  *param_3 = pvVar2;
  return 1;
}

