
void __fastcall FUN_00445a90(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  cVar3 = FUN_0059e6a0();
  if (cVar3 != '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x300);
  *(undefined1 *)(param_1 + 0x2f8) = 1;
  pcVar6 = "talk_blowoff";
  if (iVar1 == 2) {
    pcVar6 = "talk_commodity_dealer";
  }
  else if (iVar1 == 3) {
    pcVar6 = "talk_ship_dealer";
  }
  else if (iVar1 == 4) {
    pcVar6 = "talk_equip_dealer";
  }
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (iVar1 != -1) {
    iVar4 = FUN_0043ad50(*(undefined4 *)(*(int *)(param_1 + 8) + 0x38));
    puVar5 = (undefined4 *)0x0;
    do {
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = *(undefined4 **)(iVar4 + 4);
      }
      else {
        puVar5 = (undefined4 *)*puVar5;
      }
      if (puVar5 == (undefined4 *)0x0) goto LAB_00445bc4;
      piVar2 = (int *)puVar5[2];
    } while (*piVar2 != iVar1);
    if ((puVar5 != (undefined4 *)0x0) && (piVar2 != (int *)0x0)) {
      if (*(char *)((int)piVar2 + 10) != '\0') {
        iVar1 = piVar2[0x88];
        if (iVar1 == 0) {
          FUN_0041dde0("talk_blowoff",0);
          return;
        }
        if (iVar1 == 1) {
          FUN_0041dde0("talk_bribe",0);
          return;
        }
        if (iVar1 == 2) {
          FUN_0041dde0("talk_rumor",0);
          return;
        }
        if (iVar1 == 3) {
          FUN_0041dde0("talk_mission",0);
          return;
        }
        if (iVar1 == 4) {
          FUN_0041dde0("talk_info",0);
          return;
        }
        if (iVar1 != 5) goto LAB_00445bc4;
      }
      pcVar6 = "talk_story";
    }
  }
LAB_00445bc4:
  FUN_0041dde0(pcVar6,0);
  return;
}

