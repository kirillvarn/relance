
bool __fastcall FUN_00532490(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))();
    if ((cVar1 == '\0') && (*(int **)(param_1 + 0x18) != (int *)0x0)) {
      if (*(int *)(param_1 + 4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4);
      }
      if ((((*(char *)(iVar2 + 0x58) != '\0') && (iVar2 = *(int *)(param_1 + 8), iVar2 != 0)) &&
          (iVar2 != -0xc)) &&
         ((*(int *)(iVar2 + 0x10) != 0 &&
          ((*(uint *)(*(int *)(iVar2 + 0x10) + 0x4c) & 0x503) == 0x503)))) {
        if ((iVar2 == -0xc) ||
           ((iVar2 = *(int *)(iVar2 + 0x10), iVar2 == 0 ||
            ((*(uint *)(iVar2 + 0x4c) & 0x503) != 0x503)))) {
          iVar2 = 0;
        }
        (**(code **)(**(int **)(param_1 + 0x18) + 0xc))(*(undefined4 *)(iVar2 + 0x29c));
      }
    }
  }
  return *(int *)(param_1 + 4) != 0;
}

