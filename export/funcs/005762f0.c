
void __thiscall FUN_005762f0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if ((DAT_0067c274 != 0) &&
     (piVar1 = (int *)*DAT_0067c270, piVar3 = DAT_0067c270, piVar1 != DAT_0067c270)) {
    do {
      if (piVar1[2] == param_1) {
        if (param_2 != 0) {
          param_2 = param_2 + -1;
          goto LAB_00576347;
        }
        piVar2 = (int *)*piVar1;
        *(int **)piVar1[1] = piVar2;
        *(int *)(*piVar1 + 4) = piVar1[1];
        FUN_005b7e1d(piVar1);
        DAT_0067c274 = DAT_0067c274 + -1;
        piVar3 = DAT_0067c270;
      }
      else {
LAB_00576347:
        piVar2 = (int *)*piVar1;
      }
      piVar1 = piVar2;
    } while (piVar2 != piVar3);
  }
  return;
}

