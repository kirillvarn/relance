
void FUN_004c5090(void)

{
  int iVar1;
  Watchable *pWVar2;
  int iVar3;
  undefined4 local_4;
  
  DAT_00673398 = 1;
  local_4 = 2;
  iVar1 = FUN_00540fc0(&local_4);
  if (iVar1 != 0) {
    while( true ) {
      if (((iVar1 == -0xc) || (iVar3 = *(int *)(iVar1 + 0x10), iVar3 == 0)) ||
         ((*(uint *)(iVar3 + 0x4c) & 0x303) != 0x303)) {
        iVar3 = 0;
      }
      if (*(int *)(iVar3 + 0x160) == DAT_00673394) break;
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        return;
      }
    }
    if (iVar1 == 0) {
      pWVar2 = (Watchable *)0x0;
    }
    else {
      pWVar2 = (Watchable *)(iVar1 + 8);
    }
    if (pWVar2 != (Watchable *)DAT_006728d8) {
      BaseWatcher::set_pointer((BaseWatcher *)&DAT_006728d8,pWVar2);
    }
  }
  return;
}

