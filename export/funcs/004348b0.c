
void __fastcall FUN_004348b0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x800)) {
    do {
      FUN_0041b030(param_1 + 0x400 + iVar1 * 4);
      (**(code **)(**(int **)Engine_exref + 0x3c))
                (*(int **)Engine_exref,*(undefined4 *)(param_1 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x800));
  }
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + iVar1 * 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x400 + iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  *(undefined4 *)(param_1 + 0x800) = 0;
  return;
}

