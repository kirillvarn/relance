
void FUN_00536170(int param_1)

{
  int iVar1;
  Root *this;
  int *piVar2;
  uint *puVar3;
  
  if (param_1 != 0) {
    piVar2 = (int *)**(int **)(param_1 + 0x24);
    if (piVar2 != *(int **)(param_1 + 0x24)) {
      do {
        iVar1 = FUN_0040f080(piVar2 + 2);
        if (iVar1 != 0) {
          FUN_0040e990();
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(param_1 + 0x24));
    }
    puVar3 = *(uint **)(param_1 + 0x44);
    if (puVar3 != *(uint **)(param_1 + 0x48)) {
      do {
        this = Archetype::GetSimple(*puVar3);
        if (this != (Root *)0x0) {
          Archetype::Root::Release(this);
        }
        puVar3 = puVar3 + 1;
      } while (puVar3 != *(uint **)(param_1 + 0x48));
    }
  }
  return;
}

