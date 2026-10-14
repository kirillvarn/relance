
uint FUN_00577e10(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*DAT_0067c258;
  piVar2 = DAT_0067c258;
  if (piVar3 != DAT_0067c258) {
    do {
      if (piVar3[2] == param_1) {
        *param_2 = param_1;
        piVar2 = DAT_0067c258;
        if ((piVar3[7] != 0) && (param_3 < (uint)(piVar3[8] - piVar3[7] >> 3))) {
          iVar1 = piVar3[7] + param_3 * 8;
          param_2[1] = *(int *)(piVar3[7] + param_3 * 8);
          param_2[2] = *(int *)(iVar1 + 4);
          return CONCAT31((int3)((uint)iVar1 >> 8),1);
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar2);
  }
  return (uint)piVar2 & 0xffffff00;
}

