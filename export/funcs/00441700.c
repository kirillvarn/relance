
void __thiscall FUN_00441700(int param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  char local_8 [8];
  
  FUN_004be390();
  *(int *)(param_1 + 0x3b8) = param_3;
  if (*(int *)(param_3 + 0x1c) != 0) {
    sprintf(local_8,"%d,",*(undefined4 *)(*(int *)(param_3 + 0x1c) + 0x18));
    iVar7 = 0;
    iVar9 = 0x1c;
    do {
      pcVar2 = *(char **)(iVar9 + *(int *)(param_2 + 0x1c));
      if ((pcVar2 != (char *)0x0) && (pcVar2 = strstr(pcVar2,local_8), pcVar2 != (char *)0x0)) {
        uVar6 = 0xffffffff;
        pcVar2 = local_8;
        goto code_r0x004417a0;
      }
      iVar9 = iVar9 + 4;
      iVar7 = iVar7 + 1;
    } while (iVar9 < 0x2c);
    iVar9 = FUN_0043a460();
    puVar3 = PTR_s_Camera_0_00610d20;
    iVar7 = *(int *)(*(int *)(param_3 + 0x1c) + 0x10);
    switch(iVar7) {
    case 5:
    case 7:
      if (iVar7 != 7) {
        FUN_0045a460();
      }
      puVar3 = PTR_s_Camera_Wide_00610d18;
      if ((*(int *)(param_1 + 0x374) != 0) && (*(int *)(*(int *)(param_3 + 0x1c) + 0x10) == 5)) {
        puVar3 = PTR_s_Camera_Trader_Wide_00610d1c;
      }
      *(undefined1 *)(iVar9 + 0x1340) = 1;
      cVar1 = FUN_0044ba60(puVar3,FUN_00441c40,param_1,0);
      if (cVar1 != '\0') {
        FUN_0041dda0(0);
        *(undefined1 *)(param_1 + 0x3d5) = 1;
        if (*(int *)(*(int *)(param_3 + 0x1c) + 0x10) == 7) {
          return;
        }
        FUN_00441a40(1);
        return;
      }
      break;
    case 6:
      puVar8 = puVar3;
      if (*(int *)(param_1 + 0x374) != 0) {
        pcVar4 = *(code **)(param_1 + 0x370);
        if (*(code **)(param_1 + 0x370) == (code *)0x0) {
          pcVar4 = _C_exref;
        }
        iVar7 = stricmp((char *)pcVar4,"Trader");
        puVar8 = PTR_s_Camera_Trader_Desk_00610d24;
        if (iVar7 != 0) {
          pcVar4 = *(code **)(param_1 + 0x370);
          if (*(code **)(param_1 + 0x370) == (code *)0x0) {
            pcVar4 = _C_exref;
          }
          iVar7 = stricmp((char *)pcVar4,"Equipment");
          puVar8 = PTR_s_Camera_Equip_Desk_00610d28;
          if (iVar7 != 0) {
            pcVar4 = *(code **)(param_1 + 0x370);
            if (*(code **)(param_1 + 0x370) == (code *)0x0) {
              pcVar4 = _C_exref;
            }
            iVar7 = stricmp((char *)pcVar4,"ShipDealer");
            puVar8 = puVar3;
            if (iVar7 == 0) {
              puVar8 = PTR_s_Camera_Ship_Desk_00610d2c;
            }
          }
        }
      }
      iVar7 = FUN_0059da10("NN_Dealer");
      if (((((iVar7 != 0) && ((*(byte *)(iVar7 + 0x6c) & 2) != 0)) && (*(int *)(iVar7 + 4) != 0)) &&
          ((iVar7 = FUN_0059da10("NN_Inventory"), iVar7 != 0 && ((*(byte *)(iVar7 + 0x6c) & 2) != 0)
           ))) && (*(int *)(iVar7 + 4) != 0)) {
        FUN_005763b0(0x6b,0);
      }
      piVar5 = (int *)FUN_0059da10("NN_ShipTrader");
      if ((piVar5 != (int *)0x0) &&
         (piVar5 = (int *)(**(code **)(*piVar5 + 8))(), piVar5 != (int *)0x0)) {
        (**(code **)(*piVar5 + 0xa8))(0x4e,0,0);
      }
      *(undefined1 *)(iVar9 + 0x1340) = 1;
      FUN_0044c490();
      cVar1 = FUN_0044ba60(puVar8,FUN_00441c40,param_1,0);
      if (cVar1 != '\0') {
        FUN_0041dda0(0);
        FUN_00441a40(0);
        *(undefined1 *)(param_1 + 0x3d5) = 0;
        return;
      }
      break;
    case 8:
      FUN_0045a460();
      FUN_0043e600();
      *(undefined1 *)(iVar9 + 0x1340) = 1;
      cVar1 = FUN_0044ba60("Camera_Track_1",FUN_00441c40,param_1,0);
      if (cVar1 != '\0') {
        FUN_0041dda0(0);
        FUN_00441a40(1);
        *(undefined1 *)(param_1 + 0x3d5) = 1;
        return;
      }
      FUN_00441a40(1);
      *(undefined1 *)(param_1 + 0x3d5) = 1;
      break;
    case 9:
    case 10:
      *(undefined1 *)(iVar9 + 0x1340) = 0;
      cVar1 = FUN_0044bfd0(0,FUN_00441c40,param_1,0,1);
      if (cVar1 != '\0') {
        return;
      }
    }
  }
  FUN_00440ac0(*(undefined4 *)(param_1 + 0x3b8));
  return;
  while( true ) {
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    if (cVar1 == '\0') break;
code_r0x004417a0:
    if (uVar6 == 0) break;
  }
  FUN_00441b90((~uVar6 - 1) + *(int *)(*(int *)(param_2 + 0x1c) + 0x1c + iVar7 * 4),0,0);
  return;
}

