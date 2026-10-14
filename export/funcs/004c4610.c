
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004c4610(void)

{
  float fVar1;
  Ship *pSVar2;
  
  fVar1 = _DAT_005c7474;
  if (DAT_0067337c != 0) {
    pSVar2 = Archetype::GetShip(DAT_0067337c);
    fVar1 = *(float *)(pSVar2 + 0x100);
  }
  return (float10)fVar1;
}

