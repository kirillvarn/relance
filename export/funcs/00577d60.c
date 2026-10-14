
uint FUN_00577d60(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)(param_1 + 0x14);
  piVar4 = (int *)*piVar3;
  if (piVar4 != piVar3) {
    do {
      piVar2 = (int *)piVar4[2];
      if (*piVar2 == param_2) {
        *param_3 = param_2;
        if ((piVar2[5] != 0) && (piVar3 = (int *)(piVar2[6] - piVar2[5] >> 3), param_4 < piVar3)) {
          iVar1 = piVar2[5] + (int)param_4 * 8;
          param_3[1] = *(int *)(piVar2[5] + (int)param_4 * 8);
          param_3[2] = *(int *)(iVar1 + 4);
          return CONCAT31((int3)((uint)iVar1 >> 8),1);
        }
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 0x14));
  }
  return (uint)piVar3 & 0xffffff00;
}

