
void __thiscall FUN_00440260(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = FUN_0055e280();
  if ((cVar1 != '\0') || (cVar1 = FUN_0055e280(), cVar1 != '\0')) {
    *(int *)(param_1 + 0x3f0) = param_2;
    return;
  }
  *(int *)(param_1 + 0x3ec) = param_2;
  FUN_005645c0(0x1b);
  switch(*(undefined4 *)(param_2 + 0x30)) {
  case 2:
    puVar3 = &local_18;
    local_18 = 0;
    local_14 = 0xbdcccccd;
    local_10 = 0xbfbfbe77;
    goto LAB_00440345;
  case 3:
    puVar3 = &local_c;
    local_c = 0;
    local_8 = 0xbdcccccd;
    local_4 = 0xbfbfbe77;
LAB_00440345:
    pcVar2 = "Interface\\NeuroNet\\NewsVendor\\NEWS_background.cmp";
    break;
  default:
    goto switchD_004402ba_caseD_4;
  case 7:
    puVar3 = &local_24;
    local_24 = 0;
    local_20 = 0xbdb020c5;
    local_1c = 0xbfa4dd2f;
    pcVar2 = "Interface\\NeuroNet\\Inventory\\INV_biginforcard_center.cmp";
    break;
  case 0xc:
    puVar3 = &local_30;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0xbf8ccccd;
    pcVar2 = "Interface\\NeuroNet\\Inventory\\repair_bakgrnd.cmp";
  }
  FUN_00441ea0(0x3f800000,pcVar2,puVar3);
switchD_004402ba_caseD_4:
  switch(*(undefined4 *)(param_2 + 0x30)) {
  case 2:
  case 3:
  case 0xc:
    param_2 = 0x3da3d70a;
    break;
  default:
    param_2 = 0x3f800000;
    break;
  case 7:
    param_2 = 0x3d4ccccd;
  }
  FUN_0055e590(DAT_005cb4d0);
  FUN_0055e360(*(undefined4 *)(param_1 + 1000),0x3f800000,param_2);
  return;
}

