
void FUN_004424f0(char param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar2 = (int *)FUN_0059da10("NavBar");
  if ((piVar2 == (int *)0x0) || (iVar3 = (**(code **)(*piVar2 + 8))(), iVar3 == 0)) {
switchD_00442574_caseD_4:
    return;
  }
  if (param_1 != '\0') {
    FUN_0043e600();
  }
  piVar2 = *(int **)(iVar3 + 0x380);
  piVar4 = (int *)*piVar2;
  if (piVar4 == piVar2) {
    return;
  }
  while ((*(char *)((int)piVar4 + 9) != '\0' || ((char)piVar4[10] == '\0'))) {
    piVar4 = (int *)*piVar4;
    if (piVar4 == piVar2) {
      return;
    }
  }
  switch(piVar4[0xe]) {
  case 2:
  case 3:
  case 7:
  case 0xc:
    cVar1 = FUN_0055e280();
    if ((cVar1 != '\0') || (cVar1 = FUN_0055e280(), cVar1 != '\0')) {
      *(int **)(iVar3 + 0x3f0) = piVar4 + 2;
      return;
    }
    break;
  default:
    goto switchD_00442574_caseD_4;
  }
  *(int **)(iVar3 + 0x3ec) = piVar4 + 2;
  FUN_005645c0(0x1b);
  switch(piVar4[0xe]) {
  case 2:
    puVar6 = &uStack_18;
    uStack_18 = 0;
    uStack_14 = 0xbdcccccd;
    uStack_10 = 0xbfbfbe77;
    goto LAB_00442654;
  case 3:
    puVar6 = &uStack_c;
    uStack_c = 0;
    uStack_8 = 0xbdcccccd;
    uStack_4 = 0xbfbfbe77;
LAB_00442654:
    pcVar5 = "Interface\\NeuroNet\\NewsVendor\\NEWS_background.cmp";
    break;
  default:
    goto switchD_004425c9_caseD_4;
  case 7:
    puVar6 = &uStack_24;
    uStack_24 = 0;
    uStack_20 = 0xbdb020c5;
    uStack_1c = 0xbfa4dd2f;
    pcVar5 = "Interface\\NeuroNet\\Inventory\\INV_biginforcard_center.cmp";
    break;
  case 0xc:
    puVar6 = &uStack_30;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0xbf8ccccd;
    pcVar5 = "Interface\\NeuroNet\\Inventory\\repair_bakgrnd.cmp";
  }
  FUN_00441ea0(0x3f800000,pcVar5,puVar6);
switchD_004425c9_caseD_4:
  switch(piVar4[0xe]) {
  case 2:
  case 3:
  case 0xc:
    _param_1 = 0x3da3d70a;
    break;
  default:
    _param_1 = 0x3f800000;
    break;
  case 7:
    _param_1 = 0x3d4ccccd;
  }
  FUN_0055e590(DAT_005cb4d0);
  FUN_0055e360(*(undefined4 *)(iVar3 + 1000),0x3f800000,_param_1);
  return;
}

