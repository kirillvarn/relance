
void __thiscall FUN_00417ca0(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    if (param_2 == (char *)0x0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x4c) = 0;
    }
    else {
      uVar2 = 0xffffffff;
      pcVar4 = param_2;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2 - 1;
      if (0x3f < uVar2) {
        uVar2 = 0x3f;
      }
      pcVar4 = param_2;
      pcVar5 = (char *)(param_1 + 0x4c);
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      *(undefined1 *)(uVar2 + 0x4c + param_1) = 0;
      *(uint *)(param_1 + 0x48) = uVar2;
    }
  }
  if (param_2 == (char *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  uVar2 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  if (0x3f < uVar2) {
    uVar2 = 0x3f;
  }
  pcVar4 = (char *)(param_1 + 8);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar4 = *param_2;
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 1;
  }
  ((char *)(param_1 + 8))[uVar2] = '\0';
  *(uint *)(param_1 + 4) = uVar2;
  return;
}

