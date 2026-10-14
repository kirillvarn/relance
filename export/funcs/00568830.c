
HKEY __thiscall FUN_00568830(uint *param_1,LPCSTR param_2,HKEY param_3)

{
  uint uVar1;
  LSTATUS LVar2;
  
  uVar1 = *param_1;
  if (((0 < (int)uVar1) && ((HKEY)param_1[uVar1] != (HKEY)0x0)) && (uVar1 < 0x20)) {
    LVar2 = RegOpenKeyExA((HKEY)param_1[uVar1],param_2,0,(REGSAM)param_3,&param_3);
    if (LVar2 == 0) {
      param_1[*param_1 + 1] = (uint)param_3;
      *param_1 = *param_1 + 1;
      return param_3;
    }
  }
  return (HKEY)0;
}

