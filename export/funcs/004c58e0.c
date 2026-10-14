
uint FUN_004c58e0(void)

{
  int *piVar1;
  uint in_EAX;
  int iVar2;
  
  piVar1 = (int *)*DAT_00672950;
  if ((piVar1 != DAT_00672950) && (in_EAX = 0, piVar1[5] != 0)) {
    iVar2 = piVar1[6] - piVar1[5];
    in_EAX = -(iVar2 >> 0x1f);
    if (((iVar2 / 0x1c != 0) &&
        (((piVar1 != DAT_00672950 && (in_EAX = 0, piVar1 != (int *)0xfffffff0)) &&
         (in_EAX = piVar1[0xf], in_EAX != 1)))) && (in_EAX != 0)) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

