
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00573860(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  char *pcVar5;
  
  FUN_005a8260();
  FUN_004c55b0();
  FUN_005a9300();
  *(undefined1 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = DAT_0067c200;
  bVar4 = DAT_0067c200 == 0;
  DAT_0067c1fc = DAT_0067c200;
  DAT_0067c200 = 0;
  if ((bVar4) || (iVar1 == 1)) {
    *(undefined4 *)(param_1 + 4) = 1;
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 4) = 0x13;
      goto LAB_005738df;
    }
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 4) = 5;
      goto LAB_005738df;
    }
    if (iVar1 == 4) {
      *(undefined4 *)(param_1 + 4) = 0x13;
      goto LAB_005738df;
    }
  }
  cVar2 = FUN_005739c0();
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 4) = 0xd;
  }
LAB_005738df:
  *(undefined4 *)(param_1 + 0x228) = 0;
  (**(code **)(*(int *)(param_1 + 0x210) + 4))(&DAT_0067bf4c);
  if ((DAT_00614a9c != '\0') && (DAT_0067c1fc != 4)) {
    DAT_00668762 = 1;
    if (DAT_0067bf40 == 1) {
      pcVar5 = "Intro2_Base";
    }
    else if (DAT_0067bf40 == 2) {
      pcVar5 = "Intro3_Base";
    }
    else {
      pcVar5 = "Intro1_Base";
    }
    uVar3 = Universe::get_base_id(pcVar5);
    FUN_0041dde0("Arrow",1);
    FUN_0041dda0(1);
    *(undefined1 *)(param_1 + 0x22c) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0;
    FUN_00428030(3);
    FUN_00412070(0x3f800000);
    FUN_00412050(0,(float)_DAT_005c89b8 / _DAT_0061650c);
    FUN_004564d0();
    *(undefined4 *)(param_1 + 0x230) = 0;
    FUN_00439200();
    FUN_0043b290(uVar3);
    FUN_00442130();
  }
  return 1;
}

