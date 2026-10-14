
int FUN_004c4fb0(void)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_00672950;
  if (piVar1 == DAT_00672950) {
    return 0;
  }
  if (piVar1[5] == 0) {
    return 0;
  }
  return (piVar1[6] - piVar1[5]) / 0x1c;
}

