
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bdda0(int param_1,double param_2)

{
  byte bVar1;
  float fVar2;
  char cVar3;
  
  if (*(char *)(param_1 + 0x164) == '\0') {
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd;
    *(undefined1 *)(param_1 + 0x159) = 0;
  }
  *(undefined1 *)(param_1 + 0x164) = 0;
  cVar3 = FUN_0041dd90();
  fVar2 = _DAT_005c7474;
  bVar1 = *(byte *)(param_1 + 0x6c);
  if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0x159) = 0;
    *(byte *)(param_1 + 0x6c) = bVar1 & 0xfd;
    return;
  }
  if ((bVar1 & 2) == 0) {
    *(byte *)(param_1 + 0x6c) = bVar1 & 0xfe;
    if ((fVar2 < *(float *)(param_1 + 0x15c)) &&
       (fVar2 = *(float *)(param_1 + 0x15c) - (float)param_2, *(float *)(param_1 + 0x15c) = fVar2,
       fVar2 < _DAT_005c7474)) {
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x168);
  }
  *(byte *)(param_1 + 0x158) = *(byte *)(param_1 + 0x6c) >> 1 & 1;
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd;
  if ((DAT_00672450 == DAT_00616840) && (DAT_00672454 == DAT_00616844)) {
    *(float *)(param_1 + 0x160) = *(float *)(param_1 + 0x160) + (float)param_2;
  }
  else {
    DAT_00672450 = DAT_00616840;
    DAT_00672454 = DAT_00616844;
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  if (((byte)DAT_00616850 & 3) != 0) {
    *(undefined1 *)(param_1 + 0x159) = 1;
  }
  return;
}

