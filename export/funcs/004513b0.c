
undefined4 FUN_004513b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x74) != -1) {
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      if (*(char *)(param_1 + 0x160 + iVar1) == '\0') break;
      iVar1 = iVar1 + 1;
      iVar2 = -1;
    } while (iVar1 < 0x10);
    *(undefined4 *)(param_1 + 0x120 + iVar2 * 4) = *(undefined4 *)(param_2 + 0x14);
    *(undefined1 *)(iVar2 + 0x160 + param_1) = 1;
    iVar1 = (**(code **)(**(int **)Anim_exref + 0x24))
                      (*(int **)Anim_exref,*(undefined4 *)(param_1 + 0x74),
                       *(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_2 + 0x3c),0,0);
    *(int *)(param_1 + 0xe0 + iVar2 * 4) = iVar1;
    if (iVar1 != -1) {
      (**(code **)(**(int **)Anim_exref + 0x2c))
                (*(int **)Anim_exref,iVar1,*(undefined4 *)(param_2 + 0xc),
                 *(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x34),
                 *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38),
                 *(undefined4 *)(param_2 + 0x4c),0);
    }
  }
  return 0;
}

