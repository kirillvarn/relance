
void FUN_00536100(int param_1)

{
  int iVar1;
  Root *pRVar2;
  int *piVar3;
  uint *puVar4;
  
  if (param_1 != 0) {
    piVar3 = (int *)**(int **)(param_1 + 0x24);
    if (piVar3 != *(int **)(param_1 + 0x24)) {
      do {
        iVar1 = FUN_0040f080(piVar3 + 2);
        if (iVar1 != 0) {
          FUN_0040e960(1);
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(param_1 + 0x24));
    }
    puVar4 = *(uint **)(param_1 + 0x44);
    if (puVar4 != *(uint **)(param_1 + 0x48)) {
      do {
        pRVar2 = Archetype::GetSimple(*puVar4);
        if (pRVar2 != (Root *)0x0) {
          (**(code **)(*(int *)pRVar2 + 0xc))();
        }
        puVar4 = puVar4 + 1;
      } while (puVar4 != *(uint **)(param_1 + 0x48));
    }
  }
  return;
}

