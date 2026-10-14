
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005553b0(undefined4 param_1,float *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  iVar1 = FUN_005792b0(0x25);
  if ((iVar1 != 0) && (iVar1 = FUN_005792b0(0x27), iVar1 != 0)) {
    if ((param_3 != (int *)0x0) &&
       (fVar3 = (float10)(**(code **)(*param_3 + 0x20))(param_1), (float10)_DAT_005c7474 < fVar3)) {
      if (param_2 == (float *)0x0) {
        return param_3;
      }
      *param_2 = (float)fVar3;
      return param_3;
    }
    piVar2 = (int *)*DAT_006798c8;
    if (piVar2 != DAT_006798c8) {
      do {
        fVar3 = (float10)(**(code **)(*(int *)piVar2[2] + 0x20))(param_1);
        if ((float10)_DAT_005c7474 < fVar3) {
          if (param_2 == (float *)0x0) {
            return (int *)piVar2[2];
          }
          *param_2 = (float)fVar3;
          return (int *)piVar2[2];
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != DAT_006798c8);
    }
  }
  if (param_2 != (float *)0x0) {
    *param_2 = 0.0;
  }
  return (int *)0x0;
}

