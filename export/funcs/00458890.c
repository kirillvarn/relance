
uint FUN_00458890(uint param_1,int *param_2)

{
  int iVar1;
  uint in_EAX;
  uint *puVar2;
  uint local_4;
  
  iVar1 = DAT_0066d320;
  if (DAT_0066d320 != 0) {
    local_4 = FUN_0052c7a0(&param_1);
    if ((local_4 == *(uint *)(iVar1 + 4)) || (param_1 < *(uint *)(local_4 + 0xc))) {
      puVar2 = &param_1;
    }
    else {
      puVar2 = &local_4;
    }
    in_EAX = *puVar2;
    if (in_EAX != *(uint *)(iVar1 + 4)) {
      *param_2 = in_EAX + 0x10;
      return CONCAT31((int3)(in_EAX + 0x10 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

