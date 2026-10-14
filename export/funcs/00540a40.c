
uint FUN_00540a40(uint param_1)

{
  uint in_EAX;
  uint *puVar1;
  
  if (DAT_00678ac4 != DAT_00678ac8) {
    in_EAX = *DAT_00678ac4;
    puVar1 = DAT_00678ac4;
    while (in_EAX != 0) {
      if (in_EAX == param_1) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
      puVar1 = puVar1 + 1;
      if (puVar1 == DAT_00678ac8) break;
      in_EAX = *puVar1;
    }
  }
  return in_EAX & 0xffffff00;
}

