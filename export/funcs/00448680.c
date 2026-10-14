
void __thiscall FUN_00448680(int param_1,uint param_2)

{
  Ship *pSVar1;
  
  pSVar1 = Archetype::GetShip(param_2);
  *(Ship **)(param_1 + 0x30) = pSVar1;
  return;
}

