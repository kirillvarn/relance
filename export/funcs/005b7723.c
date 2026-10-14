
char * FUN_005b7723(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = param_1;
  if (param_3 != 0) {
    do {
      cVar1 = *param_2;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
      param_2 = param_2 + 1;
      if (cVar1 == '\0') break;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    if ((param_3 != 0) && (uVar2 = param_3 - 1, uVar2 != 0)) {
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar4 = '\0';
        pcVar4 = pcVar4 + 1;
      }
    }
  }
  return param_1;
}

