
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_0046ef80(int *param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  Equipment *pEVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char **ppcStack_184;
  char **ppcStack_180;
  undefined1 *puStack_17c;
  char *pcStack_178;
  char *pcStack_174;
  char *pcStack_170;
  undefined2 *puStack_164;
  undefined4 uStack_160;
  undefined2 *puStack_15c;
  undefined2 *puStack_158;
  char *pcStack_14c;
  char acStack_148 [4];
  char acStack_12c [300];
  
  acStack_148[0] = '\0';
  acStack_148[1] = '\0';
  acStack_148[2] = '\0';
  acStack_148[3] = '\0';
  pcStack_14c = "Interface\\NeuroNet\\Inventory\\CHAR_infowindow.cmp";
  param_1[0xcc] = param_3;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  (**(code **)(*param_1 + 0x98))();
  FUN_005a1340();
  puStack_158 = (undefined2 *)0x1;
  puStack_15c = (undefined2 *)0x0;
  uStack_160 = 0x3fc00000;
  puStack_164 = (undefined2 *)0x3d75c28f;
  pcStack_170 = acStack_12c;
  pcStack_174 = "PageHeader";
  pcStack_178 = "CommodityByBaseTitle";
  acStack_12c[0] = '\x06';
  acStack_12c[1] = -0x7f;
  acStack_12c[2] = -0x2b;
  acStack_12c[3] = -0x42;
  acStack_12c[4] = -0x6d;
  acStack_12c[5] = '\x18';
  acStack_12c[6] = -0x7c;
  acStack_12c[7] = '>';
  acStack_12c[8] = '\0';
  acStack_12c[9] = '\0';
  acStack_12c[10] = '\0';
  acStack_12c[0xb] = '\0';
  puStack_17c = (undefined1 *)0x46f007;
  piVar3 = (int *)FUN_005a0e30();
  puStack_158 = (undefined2 *)0x3d5;
  puStack_15c = DAT_0067eca8;
  uStack_160 = 0x46f025;
  FUN_004347e0();
  if (param_1[0xcc] != 0) {
    pEVar4 = Archetype::GetEquipment(param_1[0xcc]);
    if (pEVar4 != (Equipment *)0x0) {
      puStack_158 = (undefined2 *)0x46f054;
      wcscat(&DAT_0066fc60,L" - ");
      uStack_160 = *(undefined4 *)(pEVar4 + 0x14);
      puStack_158 = DAT_006119f8;
      puStack_15c = &DAT_0066dc60;
      puStack_164 = DAT_0067eca8;
      FUN_004347e0();
      pcStack_170 = (char *)0x46f07b;
      wcscat(&DAT_0066fc60,&DAT_0066dc60);
    }
  }
  (*(code *)PTR_FUN_00616420)();
  puStack_158 = &DAT_0066fc60;
  puStack_15c = (undefined2 *)0x1d;
  uStack_160 = 0x46f09c;
  (**(code **)(*piVar3 + 0xa8))();
  uStack_160 = 0;
  puStack_164 = (undefined2 *)0x0;
  pcStack_170 = (char *)0x0;
  pcStack_174 = (char *)0x0;
  pcStack_178 = (char *)0x0;
  puStack_17c = &stack0xfffffec4;
  ppcStack_180 = (char **)0x0;
  ppcStack_184 = &pcStack_14c;
  pcStack_14c = (char *)0x3ecd4fdf;
  acStack_148[0] = '!';
  acStack_148[1] = -0x50;
  acStack_148[2] = 'r';
  acStack_148[3] = '>';
  iVar5 = FUN_005a0c90("CommodityByBaseCloseButton","Interface\\NeuroNet\\Inventory\\x.3db",0,
                       "ui_select_item",0);
  uStack_160 = 1;
  puStack_164 = (undefined2 *)0x0;
  pcStack_170 = (char *)0x3ff33333;
  pcStack_174 = (char *)0x3cf5c28f;
  pcStack_178 = (char *)0x3dcccccd;
  puStack_17c = (undefined1 *)0x0;
  ppcStack_180 = &pcStack_14c;
  ppcStack_184 = (char **)0x5d01a8;
  param_1[0xcd] = iVar5;
  pcStack_14c = (char *)0xbec7ae14;
  acStack_148[0] = '\\';
  acStack_148[1] = -0x71;
  acStack_148[2] = 'B';
  acStack_148[3] = '>';
  piVar3 = (int *)FUN_005a0e30("CommodityByBasePriceTitle");
  uStack_160 = 0;
  puStack_164 = (undefined2 *)0x1;
  param_1[0xce] = (int)piVar3;
  (**(code **)(*piVar3 + 0xa8))();
  pcStack_170 = (char *)0x0;
  pcStack_174 = (char *)0x0;
  pcStack_178 = (char *)0x3cc;
  puStack_17c = (undefined1 *)0x3ff33333;
  ppcStack_180 = (char **)0x3cf5c28f;
  ppcStack_184 = (char **)0x3e851eb8;
  puStack_158 = (undefined2 *)0xbdcac083;
  piVar3 = (int *)FUN_005a0e30("CommodityByBaseBaseTitle","SubHeader",&puStack_158,0);
  pcStack_170 = (char *)0x1;
  param_1[0xcf] = (int)piVar3;
  pcStack_174 = (undefined1 *)0x24;
  pcStack_178 = "j\x01j";
  (**(code **)(*piVar3 + 0xa8))();
  pcStack_178 = (char *)0x1;
  puStack_17c = (undefined1 *)0x0;
  ppcStack_180 = (char **)0x0;
  ppcStack_184 = (char **)0x3cd;
  puStack_164 = (undefined2 *)0x3e343958;
  uStack_160 = 0x3e428f5c;
  puStack_15c = (undefined2 *)0x0;
  piVar3 = (int *)FUN_005a0e30("CommodityByBaseSystemTitle","SubHeader",&puStack_164,0,0x3e4ccccd,
                               0x3cf5c28f,0x3ff33333);
  pcStack_178 = (char *)0x0;
  puStack_17c = (undefined1 *)0x1;
  param_1[0xd0] = (int)piVar3;
  ppcStack_180 = (char **)0x24;
  ppcStack_184 = (char **)0x46f229;
  (**(code **)(*piVar3 + 0xa8))();
  ppcStack_184 = (char **)0x1;
  pcStack_170 = (char *)0xbe8b4396;
  piVar3 = (int *)FUN_005a0e30("CommodityByBaseBuySellTitle","SubHeader",&pcStack_170,0,0x3dcccccd,
                               0x3cf5c28f,0x3ff33333,0x3d8,0,0);
  ppcStack_184 = (char **)0x0;
  param_1[0xd1] = (int)piVar3;
  (**(code **)(*piVar3 + 0xa8))(0x24,1);
  pcStack_170 = (char *)0x0;
  piVar3 = param_1 + 0xd6;
  do {
    pcVar1 = pcStack_170;
    sprintf(acStack_148,"CommodityByBasePrice%d",pcStack_170);
    pcStack_178 = (char *)(_DAT_005d0118 - (float)(int)pcStack_170 * _DAT_005d011c);
    puStack_17c = (undefined1 *)0xbec7ae14;
    pcStack_174 = (char *)0x0;
    pcStack_170 = pcStack_178;
    piVar6 = (int *)FUN_005a0e30(acStack_148,"ItemName",&puStack_17c,0,0x3dcccccd,0x3cf5c28f,
                                 0x3ff33333,0,0,0,1);
    uVar7 = 1;
    piVar3[-1] = (int)piVar6;
    (**(code **)(*piVar6 + 0xa8))(0x24,1,0);
    sprintf(&stack0xfffffeac,"CommodityByBuySellPrice%d",pcVar1);
    pcStack_174 = puStack_17c;
    pcStack_178 = (char *)0xbe8b4396;
    pcStack_170 = (char *)0x0;
    piVar6 = (int *)FUN_005a0e30(&stack0xfffffeac,"ItemName",&pcStack_178,0,0x3dcccccd,0x3cf5c28f,
                                 0x3ff33333,0,0,0,1);
    *piVar3 = (int)piVar6;
    (**(code **)(*piVar6 + 0xa8))(0x24,1,0);
    sprintf((char *)&uStack_160,"CommodityByBaseBase%d",pcVar1);
    puStack_164 = (undefined2 *)0x0;
    piVar6 = (int *)FUN_005a0e30(&uStack_160,"ItemName",&stack0xfffffe94,0,0x3e851eb8,0x3cf5c28f,
                                 0x3ff33333,0,0,0,1);
    piVar3[1] = (int)piVar6;
    (**(code **)(*piVar6 + 0xa8))(0x24,1,0);
    sprintf(&stack0xfffffe94,"CommodityByBaseSystem%d",pcVar1);
    ppcStack_184 = (char **)0x3e343958;
    puStack_17c = (undefined1 *)0x0;
    ppcStack_180 = (char **)uVar7;
    piVar6 = (int *)FUN_005a0e30(&stack0xfffffe94,"ItemName",&ppcStack_184,0,0x3e4ccccd,0x3cf5c28f,
                                 0x3ff33333,0,0,0,1);
    piVar3[2] = (int)piVar6;
    (**(code **)(*piVar6 + 0xa8))(0x24,1,0);
    pcStack_170 = pcVar1 + 1;
    piVar3 = piVar3 + 4;
  } while ((int)pcStack_170 < 0xd);
  uStack_160 = 0x3ec83127;
  puStack_15c = (undefined2 *)0x3e6d9168;
  puStack_158 = (undefined2 *)0xbfa4dd2f;
  iVar5 = FUN_005a17e0("CommodityByBaseScroll",&uStack_160,0x3c9ba5e3,0x3ecfdf3b,0,5,3,0);
  param_1[0xd2] = iVar5;
  FUN_0046f6d0(param_1[0xcc]);
  if (param_1[0xd3] != 1) {
    param_1[0xd3] = 1;
    FUN_00470040(1);
  }
  FUN_0046fa80();
  FUN_005760d0(0xf);
  puStack_164 = (undefined2 *)0xbfa4dd2f;
  (**(code **)(*param_1 + 0x7c))(0,0x3d9ba5e3,0xbfa4dd2f);
  (**(code **)(*param_1 + 0x14))(param_1 + 0x18);
  cVar2 = FUN_004b5060(param_1[1],0);
  return cVar2 != '\0';
}

