
void FUN_004c4000(short param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*DAT_00672970;
  if (piVar1 != DAT_00672970) {
    while ((short)piVar1[2] != param_1) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == DAT_00672970) {
        DAT_00673388 = DAT_00673388 + 1;
        return;
      }
    }
    piVar1[3] = param_2;
  }
  DAT_00673388 = DAT_00673388 + 1;
  return;
}

