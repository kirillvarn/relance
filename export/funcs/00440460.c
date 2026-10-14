
void FUN_00440460(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
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
  
  switch(param_1) {
  case 2:
    local_18 = 0;
    local_14 = 0xbdcccccd;
    local_10 = 0xbfbfbe77;
    puVar1 = &local_18;
    break;
  case 3:
    local_c = 0;
    local_8 = 0xbdcccccd;
    local_4 = 0xbfbfbe77;
    puVar1 = &local_c;
    break;
  default:
    goto switchD_0044047a_caseD_4;
  case 7:
    local_24 = 0;
    local_20 = 0xbdb020c5;
    local_1c = 0xbfa4dd2f;
    FUN_00441ea0(param_2,"Interface\\NeuroNet\\Inventory\\INV_biginforcard_center.cmp",&local_24);
    return;
  case 0xc:
    local_30 = 0;
    local_2c = 0;
    local_28 = 0xbf8ccccd;
    FUN_00441ea0(param_2,"Interface\\NeuroNet\\Inventory\\repair_bakgrnd.cmp",&local_30);
    return;
  }
  FUN_00441ea0(param_2,"Interface\\NeuroNet\\NewsVendor\\NEWS_background.cmp",puVar1);
switchD_0044047a_caseD_4:
  return;
}

