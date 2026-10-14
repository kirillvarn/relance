
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004d9750(void)

{
  CShip *this;
  int iVar1;
  uint uVar2;
  IObjRW *pIVar3;
  undefined2 extraout_var;
  uint3 uVar4;
  char unaff_SI;
  float local_c;
  undefined1 auStack_8 [8];
  
  iVar1 = FUN_0054baf0();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = iVar1 + 0xc;
  if (((uVar2 == 0) || (this = *(CShip **)(iVar1 + 0x10), this == (CShip *)0x0)) ||
     (uVar2 = *(uint *)(this + 0x4c) & 0x503, uVar2 != 0x503)) {
    return uVar2 & 0xffffff00;
  }
  pIVar3 = CShip::get_target(this);
  if (pIVar3 == (IObjRW *)0x0) {
    return 0;
  }
  uVar2 = (**(code **)(*(int *)pIVar3 + 0x88))(&local_c);
  if (uVar2 != 0) {
    return uVar2 & 0xffffff00;
  }
  if (-1 < unaff_SI) {
    return 0;
  }
  uVar2 = (**(code **)(*(int *)pIVar3 + 0x150))();
  if ((uVar2 != 0) && ((*(uint *)(uVar2 + 0x4c) & 0x103) == 0x103)) {
    FUN_004d4b50(uVar2,auStack_8,&local_c,0);
    uVar4 = (uint3)(CONCAT22(extraout_var,
                             (ushort)(local_c < _DAT_005c7474) << 8 |
                             (ushort)(NAN(local_c) || NAN(_DAT_005c7474)) << 10 |
                             (ushort)(local_c == _DAT_005c7474) << 0xe) >> 8);
    if (local_c >= _DAT_005c7474 && (local_c == _DAT_005c7474) == 0) {
      return (uint)uVar4 << 8;
    }
    return CONCAT31(uVar4,1);
  }
  return uVar2 & 0xffffff00;
}

