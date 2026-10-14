
void __fastcall FUN_0047b410(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  
  *(undefined1 *)((int)param_1 + 0x4e7) = 0;
  (**(code **)(*param_1 + 0xb4))();
  iVar2 = (**(code **)(*param_1 + 0x94))("Inventory_Scroll");
  param_1[0xf4] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("PlayerCash");
  param_1[0xed] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemName01");
  param_1[0xfa] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemName02");
  param_1[0xfb] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemName03");
  param_1[0xfc] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemName04");
  param_1[0xfd] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemName05");
  param_1[0xfe] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemView01");
  param_1[0xff] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemView02");
  param_1[0x100] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemView03");
  param_1[0x101] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemView04");
  param_1[0x102] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemView05");
  param_1[0x103] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemPrice01");
  param_1[0x104] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemPrice02");
  param_1[0x105] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemPrice03");
  param_1[0x106] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemPrice04");
  param_1[0x107] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemPrice05");
  param_1[0x108] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemQuantity01");
  param_1[0x109] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemQuantity02");
  param_1[0x10a] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemQuantity03");
  param_1[0x10b] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemQuantity04");
  param_1[0x10c] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemQuantity05");
  param_1[0x10d] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemButton1");
  param_1[0x10e] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemButton2");
  param_1[0x10f] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemButton3");
  param_1[0x110] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemButton4");
  param_1[0x111] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemButton5");
  param_1[0x112] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemMesh1");
  param_1[0x113] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemMesh2");
  param_1[0x114] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemMesh3");
  param_1[0x115] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemMesh4");
  param_1[0x116] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemMesh5");
  param_1[0x117] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemGoodDeal01");
  param_1[0x118] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemGoodDeal02");
  param_1[0x119] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemGoodDeal03");
  param_1[0x11a] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemGoodDeal04");
  param_1[0x11b] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemGoodDeal05");
  param_1[0x11c] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemDamage1");
  param_1[0x11d] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemDamage2");
  param_1[0x11e] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemDamage3");
  param_1[0x11f] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemDamage4");
  param_1[0x120] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ItemDamage5");
  param_1[0x121] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("EquipToggle1");
  param_1[0x122] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("EquipToggle2");
  param_1[0x123] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("EquipToggle3");
  param_1[0x124] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("EquipToggle4");
  param_1[0x125] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("EquipToggle5");
  param_1[0x126] = iVar2;
  piVar4 = param_1 + 0x127;
  iVar2 = 5;
  do {
    if (piVar4[-0xf] != 0) {
      *(undefined4 *)(piVar4[-0xf] + 0x74) = 100;
    }
    if (*piVar4 != 0) {
      *(undefined4 *)(*piVar4 + 0x74) = 100;
    }
    if ((int *)piVar4[-10] != (int *)0x0) {
      (**(code **)(*(int *)piVar4[-10] + 0xa8))(0x19,0x10000,0);
    }
    if (piVar4[-5] != 0) {
      *(undefined4 *)(piVar4[-5] + 0x74) = 100;
      (**(code **)(*(int *)piVar4[-5] + 0xa8))(0x34,1,0);
    }
    if ((int *)piVar4[-0x19] != (int *)0x0) {
      (**(code **)(*(int *)piVar4[-0x19] + 0xa8))(0x35,1,0);
    }
    piVar4 = piVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = (**(code **)(*param_1 + 0x94))("InfoCard_Background");
  param_1[0x12d] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("InfoCard_Name");
  param_1[0x12e] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("InfoCard_Info");
  param_1[0x12f] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("InfoCard_Close");
  param_1[0x130] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("InfoCard_View");
  param_1[0x131] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("InfoCard_Scroll");
  param_1[0x132] = iVar2;
  if (param_1[0x130] != 0) {
    *(undefined4 *)(param_1[0x130] + 0x74) = 100;
  }
  if (param_1[0x131] != 0) {
    pbVar1 = (byte *)(param_1[0x131] + 0x518);
    *pbVar1 = *pbVar1 & 0x7f;
  }
  iVar2 = (**(code **)(*param_1 + 0x94))("Filter_Weapons");
  param_1[0xf5] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("Filter_CargoBay");
  param_1[0xf6] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("Filter_Equipment");
  param_1[0xf7] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("Filter_Commodity");
  param_1[0xf8] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("Filter_Ammo");
  param_1[0xf9] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ShipView_Info");
  param_1[0xd1] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ShipView_Toggle");
  param_1[0xd0] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ShipView_DamageBar");
  param_1[0xce] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ShipView_Name");
  param_1[0xcd] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("Shipview_Frame");
  param_1[0xcf] = iVar2;
  iVar2 = (**(code **)(*param_1 + 0x94))("ShipView_Control");
  param_1[0xcc] = iVar2;
  FUN_0047f240(DAT_00671ce4,1);
  iVar2 = (**(code **)(*param_1 + 0x94))("JettisonButton");
  param_1[300] = iVar2;
  iVar2 = FUN_004c3e10();
  uVar5 = 1;
  param_1[0xd2] = iVar2;
  uVar3 = FUN_004c4060(1);
  FUN_004c62b0(uVar3,uVar5);
  if ((char)param_1[0xd7] == '\0') {
    FUN_00586b70();
  }
  FUN_0047d2f0(param_1 + 0xd3,0,1);
  iVar2 = (**(code **)(*param_1 + 0x94))("PlayerTitle");
  param_1[0xe1] = iVar2;
  if (((char)param_1[0xd7] == '\0') && (param_1[0xd8] == 0)) {
    *(undefined1 *)(param_1 + 0x138) = 1;
  }
  return;
}

