
uint __thiscall FUN_004cdc60(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint in_EAX;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  
  if (*param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  *param_2 = param_1[1];
  param_2[1] = param_1[2];
  param_2[2] = param_1[3];
  param_2[3] = param_1[4];
  param_2[4] = param_1[5];
  param_2[5] = param_1[6];
  uVar1 = param_1[0xf];
  iVar3 = 0;
  param_2[0xe] = uVar1;
  if (0 < (int)uVar1) {
    puVar2 = param_2 + 6;
    do {
      *puVar2 = *(uint *)((int)param_1 + (0xc - (int)(param_2 + 2)) + (int)puVar2);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)param_2[0xe]);
  }
  param_2[0xf] = param_1[0x10];
  param_2[0x10] = param_1[0x11];
  puVar2 = param_2 + 0x11;
  iVar3 = 0x10;
  do {
    *puVar2 = *(uint *)((int)param_1 + (4 - (int)param_2) + (int)puVar2);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_2[0x21] = param_1[0x22];
  param_2[0x22] = param_1[0x23];
  param_2[0x23] = param_1[0x24];
  param_2[0x24] = param_1[0x25];
  param_2[0x25] = param_1[0x26];
  param_2 = (uint *)0x1;
  if (1 < *param_1) {
    puVar2 = param_1 + 4;
    do {
      puVar2[-3] = puVar2[0x23];
      puVar2[-2] = puVar2[0x24];
      puVar2[-1] = puVar2[0x25];
      *puVar2 = puVar2[0x26];
      puVar2[1] = puVar2[0x27];
      puVar2[2] = puVar2[0x28];
      iVar3 = 0;
      puVar2[0xb] = puVar2[0x31];
      if (0 < (int)puVar2[0x31]) {
        puVar4 = puVar2 + 3;
        do {
          *puVar4 = puVar4[0x26];
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar3 < (int)puVar2[0xb]);
      }
      puVar2[0xc] = puVar2[0x32];
      puVar2[0xd] = puVar2[0x33];
      puVar4 = puVar2 + 0xe;
      iVar3 = 0x10;
      do {
        *puVar4 = puVar4[0x26];
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      puVar2[0x1e] = puVar2[0x44];
      puVar2[0x1f] = puVar2[0x45];
      puVar2[0x20] = puVar2[0x46];
      puVar2[0x21] = puVar2[0x47];
      puVar2[0x22] = puVar2[0x48];
      param_2 = (uint *)((int)param_2 + 1);
      puVar2 = puVar2 + 0x26;
    } while (param_2 < *param_1);
  }
  uVar1 = *param_1;
  *param_1 = uVar1 - 1;
  return CONCAT31((int3)(uVar1 - 1 >> 8),1);
}

