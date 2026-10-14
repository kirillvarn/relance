
uint FUN_004e8060(uint param_1)

{
  if ((param_1 & 1) != 0) {
    return 0x563;
  }
  if ((param_1 & 2) != 0) {
    return 1099;
  }
  if ((param_1 & 4) != 0) {
    return 0x564;
  }
  if ((param_1 & 8) != 0) {
    return 0x565;
  }
  if ((param_1 & 0x8010) != 0) {
    return 0x566;
  }
  if ((param_1 & 0x20) != 0) {
    return 0x567;
  }
  if ((param_1 & 0x40) != 0) {
    return 0x568;
  }
  if ((char)param_1 < '\0') {
    return 0x4fa;
  }
  if ((param_1 & 0x100) != 0) {
    return 0x44c;
  }
  if ((param_1 & 0x200) != 0) {
    return 0x442;
  }
  if ((param_1 & 0x400) != 0) {
    return 0x56a;
  }
  if ((param_1 & 0x800) != 0) {
    return 0x56b;
  }
  if ((param_1 & 0x1000) != 0) {
    return 0x56c;
  }
  return -(uint)((param_1 & 0x2000) != 0) & 0x56d;
}

