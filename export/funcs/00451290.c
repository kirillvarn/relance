
void __fastcall FUN_00451290(int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  HardpointSummary::destroy((HardpointSummary *)(param_1 + 0x170));
  pcVar2 = (char *)(param_1 + 0x160);
  puVar1 = (undefined4 *)(param_1 + 0xe0);
  do {
    if (*pcVar2 != '\0') {
      (**(code **)(**(int **)Anim_exref + 0x38))(*(int **)Anim_exref,*puVar1);
      (**(code **)(**(int **)Anim_exref + 0x28))(*(int **)Anim_exref,*puVar1);
      *puVar1 = 0xffffffff;
      puVar1[0x10] = 0xffffffff;
      *pcVar2 = '\0';
    }
    puVar1 = puVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while ((int)(pcVar2 + (-0x160 - param_1)) < 0x10);
  FUN_00451380();
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x15) = 3;
    *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x16) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x18) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x14) = 0;
  }
  return;
}

