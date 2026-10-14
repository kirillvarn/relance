
void FUN_0051fc90(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  iVar4 = (int)param_2 - (int)param_1;
  do {
    if (iVar4 >> 2 < 0x11) {
      return;
    }
    iVar2 = *param_1;
    iVar3 = param_2[-1];
    iVar4 = param_1[(iVar4 >> 2) / 2];
    piVar5 = param_2;
    piVar7 = param_1;
    if (*(float *)(iVar2 + 4) <= *(float *)(iVar4 + 4)) {
      iVar6 = iVar2;
      if ((*(float *)(iVar2 + 4) <= *(float *)(iVar3 + 4)) &&
         (iVar6 = iVar4, *(float *)(iVar3 + 4) < *(float *)(iVar4 + 4))) goto LAB_0051fd04;
    }
    else {
      iVar6 = iVar4;
      if ((*(float *)(iVar4 + 4) <= *(float *)(iVar3 + 4)) &&
         (iVar6 = iVar2, *(float *)(iVar3 + 4) < *(float *)(iVar2 + 4))) {
LAB_0051fd04:
        iVar6 = iVar3;
      }
    }
    while( true ) {
      for (; iVar4 = *piVar7, *(float *)(iVar6 + 4) < *(float *)(iVar4 + 4); piVar7 = piVar7 + 1) {
      }
      do {
        piVar1 = piVar5 + -1;
        piVar5 = piVar5 + -1;
      } while (*(float *)(*piVar1 + 4) < *(float *)(iVar6 + 4));
      if (piVar5 <= piVar7) break;
      *piVar7 = *piVar5;
      *piVar5 = iVar4;
      piVar7 = piVar7 + 1;
    }
    if ((int)((int)piVar7 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)piVar7 & 0xfffffffcU)) {
      FUN_0051fc90(param_1,piVar7,param_3,0);
      param_1 = piVar7;
    }
    else {
      FUN_0051fc90(piVar7,param_2,param_3,0);
      param_2 = piVar7;
    }
    iVar4 = (int)param_2 - (int)param_1;
  } while( true );
}

