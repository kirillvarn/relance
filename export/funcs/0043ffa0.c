
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043ffa0(int param_1)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3b8);
  FUN_0043a460();
  if ((*(int *)(iVar2 + 0x1c) != 0) &&
     (_Str1 = *(char **)(*(int *)(iVar2 + 0x1c) + 4), _Str1 != (char *)0x0)) {
    iVar1 = stricmp(_Str1,"Trader");
    if (iVar1 == 0) {
      FUN_0044c290("Camera_Trader_Desk");
      FUN_00435cf0("Player_Trader");
      goto LAB_00440097;
    }
    iVar1 = stricmp(*(char **)(*(int *)(iVar2 + 0x1c) + 4),"Equipment");
    if (iVar1 == 0) {
      FUN_0044c290("Camera_Equip_Desk");
      FUN_00435cf0("Player_Equip");
      goto LAB_00440097;
    }
    iVar1 = stricmp(*(char **)(*(int *)(iVar2 + 0x1c) + 4),"ShipDealer");
    if (iVar1 == 0) {
      FUN_0044c290("Camera_Ship_Desk");
      FUN_00435cf0("Player_Ship");
      goto LAB_00440097;
    }
    iVar1 = stricmp(*(char **)(*(int *)(iVar2 + 0x1c) + 4),"Planetscape");
    if (iVar1 != 0) {
      iVar2 = stricmp(*(char **)(*(int *)(iVar2 + 0x1c) + 4),"Deck");
      if (iVar2 != 0) goto LAB_00440097;
    }
  }
  FUN_0044c290("Camera_0");
LAB_00440097:
  FUN_00412050(0,(float)_DAT_005c89b8 / _DAT_0061650c);
  *(undefined1 *)(param_1 + 0x3c4) = 1;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return;
}

