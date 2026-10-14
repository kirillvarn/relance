
int FUN_0041b030(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  iVar4 = -1;
  if (*param_1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
    iVar1 = *param_1;
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x14) + -1;
      *(int *)(iVar1 + 0x14) = iVar4;
      if (iVar4 < 1) {
        if (*(int *)(iVar1 + 4) != -1) {
          (**(code **)(**(int **)TextureLib_exref + 0x1c))
                    (*(int **)TextureLib_exref,*(int *)(iVar1 + 4));
          *(undefined4 *)(iVar1 + 4) = 0xffffffff;
        }
        if (*(int *)(iVar1 + 8) != -1) {
          (**(code **)(**(int **)MaterialLib_exref + 0x28))
                    (*(int **)MaterialLib_exref,*(int *)(iVar1 + 8));
          *(undefined4 *)(iVar1 + 8) = 0xffffffff;
        }
        if (*(int *)(iVar1 + 0x10) != 0) {
          (**(code **)(**(int **)MatAnimLibrary_exref + 0x10))(*(int *)(iVar1 + 0x10));
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        if (*(int *)(iVar1 + 0xc) != 0) {
          (**(code **)(**(int **)VMeshLibrary_exref + 0x10))(*(int *)(iVar1 + 0xc));
          *(undefined4 *)(iVar1 + 0xc) = 0;
        }
      }
      iVar4 = *(int *)(iVar1 + 0x14);
      if (iVar4 < 1) {
        iVar2 = FUN_0041bd90(iVar1);
        piVar3 = (int *)FUN_0041bd10(auStack_8,iVar1);
        iVar1 = *piVar3;
        while (iVar1 != iVar2) {
          FUN_00433a00();
        }
        FUN_0041b590(auStack_4,iVar1,iVar2);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_006166ec);
    *param_1 = 0;
    return iVar4;
  }
  *param_1 = 0;
  return -1;
}

