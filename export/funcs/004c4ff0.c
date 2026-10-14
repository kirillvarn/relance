
int FUN_004c4ff0(uint param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_00672950;
  if ((((piVar1 != DAT_00672950) && (-1 < (int)param_1)) && (piVar1[5] != 0)) &&
     (param_1 < (uint)((piVar1[6] - piVar1[5]) / 0x1c))) {
    return param_1 * 0x1c + piVar1[5];
  }
  return 0;
}

