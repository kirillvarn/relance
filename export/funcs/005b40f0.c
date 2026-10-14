
void FUN_005b40f0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 local_5;
  
  if ((DAT_0067ed0c & 1) == 0) {
    DAT_0067ed0c = DAT_0067ed0c | 1;
    DAT_0067ed00 = local_5;
    DAT_0067ed04 = (int *)FUN_0042a7e0(0,0);
    DAT_0067ed08 = 0;
    FUN_005b7e6c(&LAB_005b3640);
  }
  piVar3 = (int *)*DAT_0067ed04;
  piVar2 = DAT_0067ed04;
  if (piVar3 != DAT_0067ed04) {
    do {
      piVar1 = (int *)piVar3[2];
      if ((float)piVar1[5] != (float)piVar1[4]) {
        piVar1[5] = piVar1[4];
        (**(code **)(*piVar1 + 4))(piVar1[4]);
        piVar2 = DAT_0067ed04;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar2);
  }
  return;
}

