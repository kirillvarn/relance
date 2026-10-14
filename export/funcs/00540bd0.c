
void FUN_00540bd0(float param_1)

{
  int iVar1;
  CBeam *this;
  undefined4 local_4;
  
  local_4 = 3;
  for (iVar1 = FUN_00540fc0(&local_4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
    if (((iVar1 == -0xc) || (this = *(CBeam **)(iVar1 + 0x10), this == (CBeam *)0x0)) ||
       (((byte)*(undefined4 *)(this + 0x4c) & 0x67) != 0x67)) {
      this = (CBeam *)0x0;
    }
    CBeam::move(this,param_1);
  }
  return;
}

