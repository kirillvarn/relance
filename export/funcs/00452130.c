
void __fastcall FUN_00452130(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  malloc_strfree((char **)(param_1 + 0x70));
  puVar2 = (undefined4 *)(param_1 + 0x7c);
  iVar1 = 0x20;
  do {
    if (*(char *)(puVar2 + 2) != '\0') {
      (**(code **)(**(int **)Deform_exref + 0x28))
                (*(int **)Deform_exref,*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x30),puVar2[-1]);
      uVar4 = *puVar2;
      FUN_004356c0(uVar4);
      FUN_00434e20(uVar4);
      puVar2[-1] = 0xffffffff;
      *puVar2 = 0;
      puVar2[1] = 0xffffffff;
      *(undefined1 *)(puVar2 + 2) = 0;
    }
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  pcVar3 = (char *)(param_1 + 0x2b0);
  iVar1 = 0x20;
  do {
    if (*pcVar3 != '\0') {
      if (pcVar3[1] != '\0') {
        (**(code **)(**(int **)Deform_exref + 0x30))
                  (*(int **)Deform_exref,*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x30),
                   *(undefined4 *)(pcVar3 + -0x38));
      }
      *pcVar3 = '\0';
    }
    pcVar3 = pcVar3 + 0x3c;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x15) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x6c) + 0x16) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x18) = 0;
  }
  FUN_00445540(*(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x55));
  return;
}

