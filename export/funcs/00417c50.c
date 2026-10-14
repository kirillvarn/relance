
void FUN_00417c50(char *param_1,uint param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  if (param_3 != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar4 = param_3;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    if (param_2 <= uVar2) {
      uVar2 = param_2 - 1;
    }
    pcVar4 = param_1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar4 = *param_3;
      param_3 = param_3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    param_1[uVar2] = '\0';
  }
  return;
}

