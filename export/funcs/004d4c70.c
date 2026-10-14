
undefined4 FUN_004d4c70(CSolar *param_1)

{
  CSolar *this;
  byte bVar1;
  int *piVar2;
  
  this = param_1;
  piVar2 = (int *)FUN_005416c0(*(undefined4 *)(param_1 + 0xb0),0);
  if (((piVar2 != (int *)0x0) &&
      ((**(code **)(*piVar2 + 0x88))(&param_1), ((uint)param_1 & 0x107ffdff) != 0)) &&
     ((char)piVar2[0x2a] != '\0')) {
    return 0;
  }
  if ((*(uint *)(this + 0x4c) & 0x303) == 0x303) {
    bVar1 = CSolar::GetVisitValue(this);
    param_1 = (CSolar *)((uint)param_1 & 0xffffff00);
    FUN_004c4da0(*(undefined4 *)(this + 0xb0),&param_1,0,0);
    if ((((byte)param_1 | bVar1) & 1) == 0) {
      return 1;
    }
  }
  return 0;
}

