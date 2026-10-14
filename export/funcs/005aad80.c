
int __fastcall FUN_005aad80(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_1 + 0x1b8);
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    if (*(char *)(puVar1[2] + 0x200) != '\0') {
      return puVar1[2];
    }
  }
  return 0;
}

