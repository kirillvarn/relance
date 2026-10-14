
void __fastcall FUN_00419100(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_005c8eb4;
  if ((void *)param_1[7] != (void *)0x0) {
    free((void *)param_1[7]);
    param_1[7] = 0;
  }
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
    FUN_005b7e1d((char *)(iVar2 + -1));
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

