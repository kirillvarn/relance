
void __fastcall FUN_0044ed00(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x45) == '\0') {
    FUN_0044f550();
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x4c)) {
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x48) + iVar2 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x4c))(0);
          (**(code **)(**(int **)(*(int *)(param_1 + 0x48) + iVar2 * 4) + 0x38))();
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x34))(*(int **)(param_1 + 0x3c),iVar2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x4c));
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    FUN_00455ca0();
    *(undefined4 *)(param_1 + 0x38) = 0;
    malloc_strfree((char **)(param_1 + 0xa0));
    malloc_strfree((char **)(param_1 + 0xa4));
    *(undefined1 *)(param_1 + 0x45) = 1;
  }
  return;
}

