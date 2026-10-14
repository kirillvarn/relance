
void __fastcall FUN_004059d0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (1 < param_1[1]) {
    iVar1 = 0x1c;
    do {
      if (*(char *)(*param_1 + iVar1 + 0x18) != '\0') {
        *(undefined1 *)(*param_1 + iVar1 + 0x19) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x1c;
    } while (iVar2 < param_1[1]);
  }
  return;
}

