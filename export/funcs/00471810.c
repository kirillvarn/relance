
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00471810(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128 [3];
  int local_11c;
  float local_118 [3];
  float local_10c [3];
  char local_100 [224];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (DAT_0066d359 == '\0') {
    FUN_0045a460();
  }
  FUN_004424f0(1);
  iVar3 = FUN_0059da10("NN_Pause");
  if (iVar3 != 0) {
    FUN_004a7560();
  }
  FUN_0041dde0("arrow",0);
  local_128[0] = 0.0;
  local_128[1] = 0.0;
  local_128[2] = 0.0;
  local_134 = 0;
  local_130 = 0;
  local_12c = 0;
  FUN_00422b80(0,0,0xbf800000);
  FUN_005a0db0("ExitFrame","Interface\\NeuroNet\\Options\\alt-f4window.cmp",local_118,0,&local_134,0
               ,0,0,1,1,0,1,0,0,0,local_128);
  local_134 = 0;
  local_130 = 0;
  local_12c = 0;
  local_128[0] = 0.0;
  local_128[1] = 0.0;
  local_128[2] = 0.0;
  FUN_00422b80(0,0x3cf5c288,0xbf800000);
  FUN_005a0db0("ExitTextFrame","Interface\\NeuroNet\\Options\\alt-f4textplain.3db",local_118,0,
               local_128,0,0,1,0,1,0,1,0,0,0,&local_134);
  FUN_00422b80(0,0x3d0b4394,0xbf800000);
  uVar4 = FUN_005a0e30("ExitText","PageHeader",local_118,0,0x3eb851ec,0x3cf5c28f,0x3fc00000,0,1,0,0)
  ;
  *(undefined4 *)(param_1 + 0x33c) = uVar4;
  local_11c = 0;
  puVar5 = (undefined4 *)(param_1 + 0x348);
  do {
    iVar3 = local_11c;
    local_118[0] = (float)local_11c * _DAT_005d043c - _DAT_005d0438;
    sprintf(local_100,"ExitButtonBox%d",local_11c);
    local_128[0] = local_118[0] + _DAT_005d0434;
    local_134 = 0x3db645a2;
    local_130 = 0x3cac0831;
    local_12c = 0;
    local_128[1] = -0.075;
    local_128[2] = -1.0;
    uVar4 = FUN_005a0d00(local_100,"ui_select_item",local_128,&local_134,0,0,0,0,0);
    puVar5[-2] = uVar4;
    sprintf(local_100,"ExitButtonText%d",iVar3);
    local_10c[0] = local_118[0] + _DAT_005d041c;
    local_10c[1] = -0.071;
    local_10c[2] = -1.0;
    uVar4 = FUN_005a0e30(local_100,"ButtonText",local_10c,0,0x3e8a3d71,0x3cf5c28f,0x3fc00000,0,1,0,0
                        );
    local_11c = iVar3 + 1;
    *puVar5 = uVar4;
    puVar5 = puVar5 + 1;
  } while (local_11c < 2);
  (**(code **)(**(int **)(param_1 + 0x33c) + 0xa8))(0x1e,0x726,0);
  (**(code **)(**(int **)(param_1 + 0x348) + 0xa8))(0x1e,0x727,0);
  (**(code **)(**(int **)(param_1 + 0x34c) + 0xa8))(0x1e,0x728,0);
  *(undefined4 *)(param_1 + 0x70) = 0x6e;
  *(undefined4 *)(param_1 + 0x78) = 6;
  uVar1 = FUN_004a7670();
  *(undefined1 *)(param_1 + 0x339) = uVar1;
  FUN_00577b40(param_1 + 0x32c);
  FUN_005760d0(0x13);
  FUN_005760d0(0x12);
  FUN_005760d0(0xf);
  FUN_005760d0(0x11);
  cVar2 = FUN_004b5060(uStack_20,uStack_1c);
  return cVar2 != '\0';
}

