
uint __thiscall FUN_00562990(int param_1,int param_2)

{
  char extraout_AL;
  undefined4 in_EAX;
  uint uVar1;
  uint3 uVar2;
  uint3 extraout_var;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(param_1 + 4));
  if ((*(char *)(param_1 + 4) != '\0') &&
     ((uVar1 = *(uint *)(param_2 + 0x2c), *(uint *)(param_1 + 0x10) < uVar1 ||
      (uVar1 < *(uint *)(param_1 + 0xc))))) {
    return uVar1 & 0xffffff00;
  }
  uVar2 = (uint3)(uVar1 >> 8);
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_005a9950(param_2);
    uVar2 = extraout_var;
    if (extraout_AL != *(char *)(param_1 + 0x14)) {
      return (uint)extraout_var << 8;
    }
  }
  uVar1 = CONCAT31(uVar2,*(char *)(param_1 + 6));
  if ((*(char *)(param_1 + 6) != '\0') &&
     ((uVar1 = *(uint *)(param_2 + 0x8c), *(uint *)(param_1 + 0x1c) < uVar1 ||
      (uVar1 < *(uint *)(param_1 + 0x18))))) {
    return uVar1 & 0xffffff00;
  }
  uVar2 = (uint3)(uVar1 >> 8);
  if ((*(char *)(param_1 + 7) != '\0') && (*(char *)(param_2 + 0x95) != *(char *)(param_1 + 0x20)))
  {
    return (uint)uVar2 << 8;
  }
  if ((*(char *)(param_1 + 8) != '\0') && (*(char *)(param_2 + 0x94) != *(char *)(param_1 + 0x21)))
  {
    return (uint)uVar2 << 8;
  }
  if ((*(char *)(param_1 + 9) != '\0') && (*(char *)(param_2 + 0x3e) != *(char *)(param_1 + 0x22)))
  {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}

