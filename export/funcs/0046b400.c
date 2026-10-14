
undefined4 FUN_0046b400(uint param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  int local_4;
  
  iVar1 = DAT_0066da7c;
  local_8 = FUN_0046e610(&param_1);
  local_4 = *(int *)(iVar1 + 4);
  if ((local_8 == local_4) || (*(uint *)(local_8 + 0xc) < param_1)) {
    piVar2 = &local_4;
  }
  else {
    piVar2 = &local_8;
  }
  if (*piVar2 != local_4) {
    return *(undefined4 *)(*piVar2 + 0x10);
  }
  return 0;
}

