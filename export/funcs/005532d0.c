
void FUN_005532d0(int param_1)

{
  CShip *this;
  int *piVar1;
  int iVar2;
  IObjRW *pIVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_0054baf0();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x20))();
    if (param_1 == iVar2) {
      iVar2 = FUN_005416c0(param_1,0);
      if ((((iVar2 != 0) && (iVar2 != -0xc)) &&
          (this = *(CShip **)(iVar2 + 0x10), this != (CShip *)0x0)) &&
         ((*(uint *)(this + 0x4c) & 0x503) == 0x503)) {
        pIVar3 = CShip::get_target(this);
        if (pIVar3 != (IObjRW *)0x0) {
          uVar4 = FUN_0054baf0(pIVar3);
          iVar2 = FUN_0045a490(uVar4);
          if (iVar2 == -1) {
            DAT_00679968 = 1;
          }
        }
      }
    }
  }
  return;
}

