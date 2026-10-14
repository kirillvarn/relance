
undefined4 __thiscall FUN_0047fb40(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  Equipment *pEVar3;
  int iVar4;
  int iVar5;
  
  pEVar3 = Archetype::GetEquipment(param_2);
  if (pEVar3 != (Equipment *)0x0) {
    iVar4 = (**(code **)(*(int *)pEVar3 + 0x10))();
    puVar1 = *(undefined4 **)(param_1 + 0x350);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      pEVar3 = Archetype::GetEquipment(puVar2[3]);
      if ((pEVar3 != (Equipment *)0x0) &&
         (iVar5 = (**(code **)(*(int *)pEVar3 + 0x10))(), iVar5 == iVar4)) {
        if (*(char *)(puVar2 + 5) != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}

