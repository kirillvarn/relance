
void __fastcall FUN_0052d510(int param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    FUN_0052cfd0();
    bVar2 = SinglePlayer();
    if (!bVar2) {
      (**(code **)(*piVar1 + 0x94))();
    }
    uVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
    FUN_005532d0(uVar3);
  }
  return;
}

