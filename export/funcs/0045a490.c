
undefined4 FUN_0045a490(float param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = param_1;
  if ((param_1 != 0.0) && (param_2 != (int *)0x0)) {
    iVar2 = (**(code **)(*param_2 + 0x68))(&param_1);
    if (iVar2 == 0) {
      if (fVar1 < DAT_005ce7ec != (fVar1 == DAT_005ce7ec)) {
        return 0xffffffff;
      }
      if (DAT_005ce7f8 <= fVar1) {
        return 1;
      }
    }
  }
  return 0;
}

