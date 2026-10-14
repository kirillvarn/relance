
undefined1 __fastcall FUN_00534420(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc4);
  puVar2 = (undefined4 *)*puVar1;
  while( true ) {
    if (puVar2 == puVar1) {
      return 0;
    }
    if ((*(char *)(puVar2 + 5) != '\0') && (bVar3 = Fuse::IsSpent((Fuse *)(puVar2 + 2)), !bVar3))
    break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return 1;
}

