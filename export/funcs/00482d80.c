
undefined4 FUN_00482d80(int param_1,int param_2)

{
  bool bVar1;
  Equipment *pEVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)**(int **)(param_1 + 4);
  if (piVar4 != *(int **)(param_1 + 4)) {
    do {
      pEVar2 = Archetype::GetEquipment(piVar4[3]);
      if ((pEVar2 != (Equipment *)0x0) &&
         (((iVar3 = (**(code **)(*(int *)pEVar2 + 0x10))(), iVar3 == 0x11 || (iVar3 == 0x12)) ||
          (iVar3 == 0x13)))) {
        bVar1 = ID_String::IsEmpty((ID_String *)(pEVar2 + 0x98));
        if (((!bVar1) &&
            (pEVar2 = Archetype::GetEquipmentByName((ID_String *)(pEVar2 + 0x98)),
            pEVar2 != (Equipment *)0x0)) && (*(int *)(pEVar2 + 8) == param_2)) {
          return 1;
        }
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 4));
  }
  return 0;
}

