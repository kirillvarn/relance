
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b5600(int param_1,double param_2)

{
  byte bVar1;
  float fVar2;
  char cVar3;
  
  cVar3 = FUN_0041dd90();
  fVar2 = _DAT_005c7474;
  bVar1 = *(byte *)(param_1 + 0x6c);
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(byte *)(param_1 + 0x6c) = bVar1 & 0xfd;
    return;
  }
  if ((bVar1 & 2) == 0) {
    *(byte *)(param_1 + 0x6c) = bVar1 & 0xfe;
    if ((fVar2 < *(float *)(param_1 + 0x17c)) &&
       (fVar2 = *(float *)(param_1 + 0x17c) - (float)param_2, *(float *)(param_1 + 0x17c) = fVar2,
       fVar2 < _DAT_005c7474)) {
      *(undefined4 *)(param_1 + 0x17c) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x17c) = 0x3f000000;
  }
  *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x6c) >> 1 & 1;
  if ((DAT_0067228c == DAT_00616840) && (DAT_00672290 == DAT_00616844)) {
    *(float *)(param_1 + 0x180) = *(float *)(param_1 + 0x180) + (float)param_2;
  }
  else {
    DAT_0067228c = DAT_00616840;
    DAT_00672290 = DAT_00616844;
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  if (_DAT_005c7474 < *(float *)(param_1 + 0x164)) {
    fVar2 = *(float *)(param_1 + 0x164) - (float)param_2;
    *(float *)(param_1 + 0x164) = fVar2;
    if (fVar2 < _DAT_005c7474 == (fVar2 == _DAT_005c7474)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd;
  return;
}

