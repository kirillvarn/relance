
undefined4 FUN_00451450(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x74) != -1) {
    iVar1 = 0;
    piVar2 = (int *)(param_1 + 0x120);
    do {
      if ((*(char *)(param_1 + 0x160 + iVar1) != '\0') &&
         (iVar3 = iVar1, *piVar2 == *(int *)(param_2 + 0x14))) break;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      iVar3 = -1;
    } while (iVar1 < 0x10);
    if (*(char *)(iVar3 + 0x160 + param_1) != '\0') {
      (**(code **)(**(int **)Anim_exref + 0x38))
                (*(int **)Anim_exref,*(undefined4 *)(param_1 + 0xe0 + iVar3 * 4));
      (**(code **)(**(int **)Anim_exref + 0x28))
                (*(int **)Anim_exref,*(undefined4 *)(param_1 + 0xe0 + iVar3 * 4));
      *(undefined4 *)(param_1 + 0xe0 + iVar3 * 4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x120 + iVar3 * 4) = 0xffffffff;
      *(undefined1 *)(iVar3 + 0x160 + param_1) = 0;
    }
  }
  return 0;
}

