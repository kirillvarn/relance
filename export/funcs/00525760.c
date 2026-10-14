
void __fastcall FUN_00525760(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(Root **)(param_1 + 8) != (Root *)0x0) {
    Archetype::Root::Release(*(Root **)(param_1 + 8));
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x14))) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xc) + iVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x15c))(1);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xc));
  piVar1 = *(int **)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0xb0);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_005b7e1d(*puVar2);
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_005b7e1d(puVar2[2]);
    puVar2[2] = 0;
    puVar2[3] = 0;
    FUN_005b7e1d(puVar2);
  }
  return;
}

