
void __fastcall FUN_004d6a40(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = ftol();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  *param_1 = (char)iVar1;
  iVar1 = ftol();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  param_1[1] = (char)iVar1;
  iVar1 = ftol();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  param_1[2] = (char)iVar1;
  iVar1 = ftol();
  if (iVar1 < 0) {
    param_1[3] = 0;
    return;
  }
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  param_1[3] = (char)iVar1;
  return;
}

