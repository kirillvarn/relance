
undefined4 * __thiscall FUN_004c8ca0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_LAB_005d6e30;
  param_1[1] = 0;
  if (param_2 == (char *)0x0) {
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
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
    if (0x1f < uVar2) {
      uVar2 = 0x1f;
    }
    pcVar4 = (char *)(param_1 + 3);
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
    *(char *)((int)(param_1 + 3) + uVar2) = '\0';
    param_1[2] = uVar2;
  }
  if (DAT_00673514 != (undefined4 *)0x0) {
    *(undefined4 **)((int)DAT_00673514 + 4) = param_1;
    DAT_00673514 = param_1;
    *param_1 = &PTR_FUN_005d6ee8;
    return param_1;
  }
  DAT_00673510 = param_1;
  DAT_00673514 = param_1;
  *param_1 = &PTR_FUN_005d6ee8;
  return param_1;
}

