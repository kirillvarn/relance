
undefined4 __thiscall FUN_00585a90(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  Ship *pSVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_10 [16];
  
  FUN_005850f0(0);
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x32c) = uVar1;
  pSVar2 = Archetype::GetShip(uVar1);
  iVar3 = FUN_0041af40(*(int *)(pSVar2 + 4) + 0x20,local_10,4);
  FUN_00585890(*(undefined4 *)(pSVar2 + 0xc),0,param_3,param_4);
  if (0 < iVar3) {
    puVar4 = local_10;
    do {
      FUN_0041b030(puVar4);
      puVar4 = puVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 1;
}

