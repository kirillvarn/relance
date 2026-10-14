
void __thiscall FUN_00456ff0(int param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  malloc_strcpy((char **)(param_1 + 0x6c),param_2);
  *(undefined1 *)(param_1 + 0x74) = (undefined1)param_3;
  iVar2 = stricmp(param_2,PTR_s_BackgroundAmbient_00610ff8);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x76) = 1;
    FUN_00428bc0(param_1 + 0x80);
    return;
  }
  iVar2 = stricmp(param_2,PTR_s_BackgroundMusic_00610ffc);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0x77) = 1;
    FUN_00428ba0(param_1 + 0x80);
    return;
  }
  if (((*(char *)(param_1 + 0x74) == '\0') &&
      (pcVar1 = *(char **)(param_1 + 0x6c), pcVar1 != (char *)0x0)) && (*pcVar1 != '\0')) {
    param_3 = CreateID(pcVar1);
    uVar3 = FUN_0042ae40(&param_3);
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
  }
  return;
}

