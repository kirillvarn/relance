
void __fastcall FUN_0045d770(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
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
  
  piVar1 = *(int **)(param_1 + 0x508);
  if (piVar1 != (int *)0x0) {
    iVar3 = piVar1[3];
    while (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
      FUN_0043d2a0(iVar3);
      iVar3 = iVar2;
    }
    (**(code **)(*piVar1 + 0x28))();
    (**(code **)*piVar1)(1);
    *(undefined4 *)(param_1 + 0x508) = 0;
  }
  switch(*(undefined4 *)(param_1 + 0x3ac)) {
  default:
    iVar3 = 0;
    break;
  case 0x65:
    iVar3 = 3;
    break;
  case 0x66:
    iVar3 = 1;
    break;
  case 0x67:
    iVar3 = 2;
    break;
  case 0x68:
    iVar3 = 5;
    break;
  case 0x69:
    iVar3 = 6;
    break;
  case 0x6a:
    iVar3 = 4;
  }
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  if (*(char *)(param_1 + 0x52c) == '\0') {
    puVar7 = &uStack_3c;
    pcVar5 = (&PTR_s_Interface_NeuroNet_NavMap_NewNav_006114f8)[iVar3];
    puVar6 = (undefined4 *)(param_1 + 0x4b4 + iVar3 * 0xc);
    uStack_38 = 0;
    uStack_34 = 0;
  }
  else {
    puVar7 = &uStack_54;
    puVar6 = &uStack_3c;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_38 = 0xbdb020c5;
    uStack_34 = 0xbfa4dd2f;
    pcVar5 = "Interface\\NeuroNet\\Inventory\\INV_biginforcard_center.cmp";
  }
  uVar4 = FUN_005a0db0("ScaledBackground",pcVar5,puVar6,0,&uStack_48,0,0,0,1,0,0,1,0,0,0,puVar7);
  *(undefined4 *)(param_1 + 0x508) = uVar4;
  uStack_10 = 0x3f800000;
  uStack_20 = 0x3f800000;
  uStack_30 = 0x3f800000;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_4 = 0;
  uStack_8 = 0;
  uStack_c = 0;
  iVar3 = (**(code **)(**(int **)Engine_exref + 0xa0))
                    (*(int **)Engine_exref,*(undefined4 *)(*(int *)(param_1 + 0x508) + 0x84));
  uStack_14 = *(undefined4 *)(iVar3 + 0x24);
  uStack_10 = *(undefined4 *)(iVar3 + 0x28);
  uStack_c = *(undefined4 *)(iVar3 + 0x2c);
  if (DAT_0066d3ec == (int *)0x0) {
    DAT_0066d3ec = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_0066d3ec + 0x10))(DAT_0066d3ec,&uStack_38,&uStack_38,uStack_4);
  (**(code **)(**(int **)Engine_exref + 0x9c))
            (*(int **)Engine_exref,*(undefined4 *)(*(int *)(param_1 + 0x508) + 0x84),&uStack_48);
  (**(code **)(**(int **)Engine_exref + 0x6c))
            (*(int **)Engine_exref,*(undefined4 *)(*(int *)(param_1 + 0x508) + 0x84),0,0);
  return;
}

