
undefined4 FUN_00577dd0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*DAT_0067c21c;
  if (piVar2 != DAT_0067c21c) {
    do {
      cVar1 = FUN_00577d60(piVar2[2],param_1,param_2,0);
      if (cVar1 != '\0') {
        return 1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != DAT_0067c21c);
  }
  return 0;
}

