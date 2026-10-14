
byte FUN_004d4d00(CSolar *param_1)

{
  CSolar *pCVar1;
  byte bVar2;
  
  pCVar1 = param_1;
  if ((param_1 != (CSolar *)0x0) && ((*(uint *)(param_1 + 0x4c) & 0x303) == 0x303)) {
    bVar2 = CSolar::GetVisitValue(param_1);
    param_1 = (CSolar *)((uint)param_1 & 0xffffff00);
    FUN_004c4da0(*(undefined4 *)(pCVar1 + 0xb0),&param_1,0,0);
    return (byte)param_1 | bVar2;
  }
  return 1;
}

