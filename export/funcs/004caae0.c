
/* WARNING: Removing unreachable block (ram,0x004cab39) */
/* WARNING: Removing unreachable block (ram,0x004cab40) */
/* WARNING: Removing unreachable block (ram,0x004cab64) */

void __fastcall FUN_004caae0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != *(int *)(param_1 + 0x2c)) {
    do {
      if ((*(int **)(iVar2 + 4) != (int *)0x0) && (*(char *)(iVar2 + 8) == '\x01')) {
        (**(code **)(**(int **)(iVar2 + 4) + 0x10))();
        *(undefined1 *)(iVar2 + 8) = 0;
      }
      piVar1 = *(int **)(iVar2 + 0xc);
      if ((piVar1 != (int *)0x0) && (piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x60))();
        (**(code **)(**(int **)(iVar2 + 0xc) + 8))(*(int **)(iVar2 + 0xc));
        *(undefined4 *)(iVar2 + 0xc) = 0;
      }
      iVar2 = iVar2 + 0x10;
    } while (iVar2 != *(int *)(param_1 + 0x2c));
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  return;
}

