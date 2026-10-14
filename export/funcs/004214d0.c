
void FUN_004214d0(void)

{
  uint uVar1;
  int iVar2;
  undefined1 uStack00000004;
  undefined1 uStack00000008;
  
  _uStack00000004 = ftol();
  if (_uStack00000004 < 0) {
    _uStack00000004 = 0;
  }
  else if (0xff < _uStack00000004) {
    _uStack00000004 = 0xff;
  }
  _uStack00000008 = ftol();
  if (_uStack00000008 < 0) {
    _uStack00000008 = 0;
  }
  else if (0xff < _uStack00000008) {
    _uStack00000008 = 0xff;
  }
  uVar1 = ftol();
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xff < (int)uVar1) {
    uVar1 = 0xff;
  }
  iVar2 = ftol();
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  (**(code **)(**(int **)Pipeline_exref + 0x14))
            (*(int **)Pipeline_exref,8,
             (uint)CONCAT21(CONCAT11((char)iVar2,uStack00000004),uStack00000008) << 8 | uVar1 & 0xff
            );
  return;
}

