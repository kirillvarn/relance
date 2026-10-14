
undefined1 * __fastcall FUN_00411bc0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uStack00000004;
  
  _uStack00000004 = ftol();
  if (_uStack00000004 < 0) {
    _uStack00000004 = 0;
  }
  else if (0xff < _uStack00000004) {
    _uStack00000004 = 0xff;
  }
  iVar1 = ftol();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  iVar2 = ftol();
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  *param_1 = (char)iVar2;
  param_1[2] = uStack00000004;
  param_1[1] = (char)iVar1;
  param_1[3] = 0xff;
  return param_1;
}

