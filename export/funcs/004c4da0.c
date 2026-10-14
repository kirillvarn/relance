
int FUN_004c4da0(uint param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  uint3 uVar3;
  int local_8;
  int local_4;
  
  local_8 = FUN_0052c7a0(&param_1);
  piVar2 = &local_8;
  if ((local_8 == DAT_00673324) || (param_1 < *(uint *)(local_8 + 0xc))) {
    local_4 = DAT_00673324;
    piVar2 = &local_4;
  }
  iVar1 = *piVar2;
  uVar3 = (uint3)((uint)iVar1 >> 8);
  if (iVar1 == DAT_00673324) {
    return (uint)uVar3 << 8;
  }
  *param_2 = *(undefined1 *)(iVar1 + 0x10);
  return CONCAT31(uVar3,1);
}

