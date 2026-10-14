
undefined4 FUN_004c58b0(uint param_1)

{
  if (((-1 < (int)param_1) && (DAT_006728cc != 0)) &&
     (param_1 < (uint)(DAT_006728d0 - DAT_006728cc >> 2))) {
    return *(undefined4 *)(DAT_006728cc + param_1 * 4);
  }
  return 0;
}

