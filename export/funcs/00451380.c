
void __fastcall FUN_00451380(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x120);
  do {
    puVar2[-0x10] = 0xffffffff;
    *puVar2 = 0xffffffff;
    *(undefined1 *)(param_1 + 0x160 + iVar1) = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0x10);
  return;
}

