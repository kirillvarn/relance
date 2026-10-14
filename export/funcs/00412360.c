
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412360(float param_1)

{
  if (DAT_00616514 == '\0') {
    if ((float)_DAT_005c7720 < param_1) {
      param_1 = 0.1;
    }
  }
  else {
    DAT_00616514 = '\0';
    param_1 = 0.0;
  }
  if (DAT_006105ac != '\0') {
    if (DAT_00616510 <= DAT_006105a8) {
      if (DAT_00616510 < DAT_006105a8) {
        DAT_006105a8 = DAT_006105a8 - _DAT_00616508 * param_1;
        if ((NAN(DAT_006105a8) || NAN(DAT_00616510)) ||
            DAT_006105a8 < DAT_00616510 == (DAT_006105a8 == DAT_00616510)) {
          return;
        }
        DAT_006105a8 = DAT_00616510;
      }
      DAT_006105ac = '\0';
    }
    else {
      DAT_006105a8 = _DAT_00616508 * param_1 + DAT_006105a8;
      if (DAT_00616510 <= DAT_006105a8) {
        DAT_006105a8 = DAT_00616510;
        DAT_006105ac = 0;
        return;
      }
    }
  }
  return;
}

