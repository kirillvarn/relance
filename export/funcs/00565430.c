
void FUN_00565430(char *param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = strrchr(param_1,0x2e);
  if (pcVar1 != (char *)0x0) {
    iVar2 = stricmp(pcVar1 + 1,"bmp");
    if (iVar2 == 0) {
      FUN_005650f0(param_1);
      return;
    }
    stricmp(pcVar1 + 1,(char *)&PTR_DAT_005e2798);
  }
  FUN_00565490(param_1);
  return;
}

