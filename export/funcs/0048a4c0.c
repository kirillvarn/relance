
undefined4 __fastcall FUN_0048a4c0(int *param_1)

{
  undefined4 *puVar1;
  wchar_t *pwVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  size_t sVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  wchar_t *pwStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  int iStack_28;
  void *pvStack_24;
  undefined1 auStack_20 [4];
  void *pvStack_1c;
  int iStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bc323;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0xd8] = DAT_00671ff8;
  (**(code **)(*param_1 + 0x98))("Interface\\NeuroNet\\Inventory\\CHAR_infowindow.cmp",0);
  FUN_005a1340(param_1 + 0x20);
  if (param_1[0xd8] == 6) {
    cVar6 = FUN_004c4810();
    if (cVar6 == '\0') {
      uVar7 = FUN_004a7670();
      *(undefined1 *)(param_1 + 0xcb) = uVar7;
      *(undefined1 *)(param_1 + 0xda) = 1;
    }
    DAT_0067dcc8 = 1;
    FUN_0041dda0(1);
    FUN_0041dde0("Arrow",0);
  }
  param_1[0x1e] = 6;
  param_1[0x1c] = 1;
  if (param_1[0xd8] != 6) {
    piStack_2c = (int *)0x3c9374bc;
    iStack_28 = 0x3c9374bc;
    pvStack_24 = (void *)0x0;
    pwStack_38 = (wchar_t *)0x3ecd4fdf;
    uStack_34 = 0x3e72b021;
    uStack_30 = 0;
    iVar8 = FUN_005a0c90("MissionCloseButton","Interface\\NeuroNet\\Inventory\\x.3db",0,
                         "ui_select_item",0,&pwStack_38,0,&piStack_2c,0,0,0,0,0x409,0,0);
    param_1[0xcc] = iVar8;
  }
  iVar8 = param_1[0xd8];
  uVar9 = 0x412;
  if ((iVar8 == 3) || (iVar8 == 1)) {
    uVar9 = 0x4cf;
  }
  if (iVar8 == 4) {
    uVar9 = 0;
  }
  piStack_2c = (int *)0xbed58106;
  iStack_28 = 0x3e841893;
  pvStack_24 = (void *)0x0;
  iVar8 = FUN_005a0e30("MissionMessageTitle","PageHeader",&piStack_2c,0,0x3f5645a2,0x3d75c28f,
                       0x3fc00000,uVar9,1,0,1);
  param_1[0xcd] = iVar8;
  if (param_1[0xd8] == 6) {
    FUN_0041c970(&DAT_0066fc60,DAT_006119f8);
    (*(code *)PTR_FUN_00616420)(&DAT_0066fc60);
    (**(code **)(*(int *)param_1[0xcd] + 0xa8))(0x1d,&DAT_0066fc60,0);
    if ((DAT_00671f7c & 1) != 0) {
      piStack_2c = (int *)0x3dcccccd;
      iStack_28 = 0x3cd4fdf4;
      pvStack_24 = (void *)0x0;
      pwStack_38 = (wchar_t *)0xbe6b851f;
      uStack_34 = 0xbe560419;
      uStack_30 = 0;
      iVar8 = FUN_005a0d00("MMYesButton","ui_select_item",&pwStack_38,&piStack_2c,0,0,0x335,0,0);
      param_1[0xd4] = iVar8;
      piStack_2c = (int *)0xbea8f5c3;
      iStack_28 = 0xbe3f7cee;
      pvStack_24 = (void *)0x0;
      FUN_005a0e30("MMYesText","ButtonText",&piStack_2c,0,0x3e4ac083,0x3cf5c28f,0x3ff33333,0x4dc,1,0
                   ,1);
    }
    if ((DAT_00671f7c & 2) != 0) {
      piStack_2c = (int *)0x3dcccccd;
      iStack_28 = 0x3cd4fdf4;
      pvStack_24 = (void *)0x0;
      pwStack_38 = (wchar_t *)0x0;
      uStack_34 = 0xbe560419;
      uStack_30 = 0;
      iVar8 = FUN_005a0d00("MMNoButton","ui_select_item",&pwStack_38,&piStack_2c,0,0,0x336,0,0);
      param_1[0xd5] = iVar8;
      piStack_2c = (int *)0xbdc8b439;
      iStack_28 = 0xbe3f7cee;
      pvStack_24 = (void *)0x0;
      FUN_005a0e30("MMNoText","ButtonText",&piStack_2c,0,0x3e4ac083,0x3cf5c28f,0x3ff33333,0x4dd,1,0,
                   1);
    }
    if ((DAT_00671f7c & 4) != 0) {
      piStack_2c = (int *)0x3dcccccd;
      iStack_28 = 0x3cd4fdf4;
      pvStack_24 = (void *)0x0;
      pwStack_38 = (wchar_t *)0x3e6b851f;
      uStack_34 = 0xbe560419;
      uStack_30 = 0;
      iVar8 = FUN_005a0d00("MMLaterButton","ui_select_item",&pwStack_38,&piStack_2c,0,0,0x337,0,0);
      param_1[0xd6] = iVar8;
      piStack_2c = (int *)0x3e072b02;
      iStack_28 = 0xbe3f7cee;
      pvStack_24 = (void *)0x0;
      FUN_005a0e30("MMLaterText","ButtonText",&piStack_2c,0,0x3e4ac083,0x3cf5c28f,0x3ff33333,0x622,1
                   ,0,1);
    }
    if ((DAT_00671f7c & 8) != 0) {
      piStack_2c = (int *)0x3c9374bc;
      iStack_28 = 0x3c9374bc;
      pvStack_24 = (void *)0x0;
      pwStack_38 = (wchar_t *)0x3ecd4fdf;
      uStack_34 = 0x3e72b021;
      uStack_30 = 0;
      iVar8 = FUN_005a0c90("MissionCloseButton","Interface\\NeuroNet\\Inventory\\x.3db",0,
                           "ui_select_item",0,&pwStack_38,0,&piStack_2c,0,0,0,0,0x409,0,0);
      param_1[0xcc] = iVar8;
      piStack_2c = (int *)0x3dcccccd;
      iStack_28 = 0x3cd4fdf4;
      pvStack_24 = (void *)0x0;
      pwStack_38 = (wchar_t *)0xbc449ba6;
      uStack_34 = 0xbe560419;
      uStack_30 = 0;
      iVar8 = FUN_005a0d00("MMOkButton","ui_select_item",&pwStack_38,&piStack_2c,0,0,0,0,0);
      param_1[0xd7] = iVar8;
      piStack_2c = (int *)0xbddf3b64;
      iStack_28 = 0xbe3f7cee;
      pvStack_24 = (void *)0x0;
      FUN_005a0e30("MMOkText","ButtonText",&piStack_2c,0,0x3e47ae14,0x3cf5c28f,0x3ff33333,0x411,1,0,
                   1);
    }
  }
  if (param_1[0xd8] == 4) {
    piStack_2c = (int *)0x3e083127;
    iStack_28 = 0x3cd4fdf4;
    pvStack_24 = (void *)0x0;
    pwStack_38 = (wchar_t *)0xbe3c6a7f;
    uStack_34 = 0xbe560419;
    uStack_30 = 0;
    iVar8 = FUN_005a0d00("DropCargoButton","ui_select_item",&pwStack_38,&piStack_2c,0,0,0x338,0,0);
    param_1[0xd0] = iVar8;
    piStack_2c = (int *)0xbea04189;
    iStack_28 = 0xbe3f7cee;
    pvStack_24 = (void *)0x0;
    iVar8 = FUN_005a0e30("DropCargoText","ButtonText",&piStack_2c,0,0x3e851eb8,0x3cf5c28f,0x3ff33333
                         ,0x51f,1,0,1);
    param_1[0xd1] = iVar8;
    piStack_2c = (int *)0x3e083127;
    iStack_28 = 0x3cd4fdf4;
    pvStack_24 = (void *)0x0;
    pwStack_38 = (wchar_t *)0x3e3851ec;
    uStack_34 = 0xbe560419;
    uStack_30 = 0;
    iVar8 = FUN_005a0d00("DCCancelButton","ui_select_item",&pwStack_38,&piStack_2c,0,0,0x63e,0,0);
    param_1[0xd2] = iVar8;
    piStack_2c = (int *)0x3d4ccccd;
    iStack_28 = 0xbe3f7cee;
    pvStack_24 = (void *)0x0;
    iVar8 = FUN_005a0e30("DCCancelText","ButtonText",&piStack_2c,0,0x3e851eb8,0x3cf5c28f,0x3ff33333,
                         0x63d,1,0,1);
    param_1[0xd3] = iVar8;
    iVar8 = FUN_005416c0(DAT_00671f78,0);
    if ((((iVar8 != 0) && (iVar8 != -0xc)) && (iVar8 = *(int *)(iVar8 + 0x10), iVar8 != 0)) &&
       (((byte)*(undefined4 *)(iVar8 + 0x4c) & 3) == 3)) {
      pwStack_38 = (wchar_t *)0x0;
      uStack_34 = 0;
      pvStack_c = (void *)0x0;
      FUN_005472d0(iVar8,&pwStack_38);
      if ((pwStack_38 != (wchar_t *)0x0) && (*pwStack_38 != L'\0')) {
        wcscpy(&DAT_0066fc60,pwStack_38);
        (**(code **)(*(int *)param_1[0xcd] + 0xa8))(0x1d,&DAT_0066fc60,0);
      }
      pvStack_c = (void *)0xffffffff;
      if (pwStack_38 != (wchar_t *)0x0) {
        free(pwStack_38);
      }
    }
  }
  piStack_2c = (int *)0xbec7ae14;
  iStack_28 = 0x3e8d4fdf;
  pvStack_24 = (void *)0xbfa4dd2f;
  iVar8 = FUN_005a10e0("MissionMessageText",0x3f451eb8,0x3ebd70a4,&piStack_2c,1);
  param_1[0xce] = iVar8;
  FUN_0041c970(&DAT_0066fc60,DAT_006119f8);
  pvStack_1c = operator_new(0xc);
  *(void **)pvStack_1c = pvStack_1c;
  *(void **)((int)pvStack_1c + 4) = pvStack_1c;
  iStack_18 = 0;
  pvStack_c = (void *)0x1;
  piVar10 = (int *)StyleNode::StyleNode((StyleNode *)&piStack_2c,0x9ca4);
  pvStack_c._0_1_ = 2;
  piVar10 = (int *)(**(code **)(*piVar10 + 0x1c))();
  pvVar5 = pvStack_1c;
  puVar13 = *(undefined4 **)((int)pvStack_1c + 4);
  puVar1 = (undefined4 *)((int)pvStack_1c + 4);
  pvStack_c._0_1_ = 3;
  puVar11 = operator_new(0xc);
  *puVar11 = pvVar5;
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = puVar11;
  }
  puVar11[1] = puVar13;
  *puVar1 = puVar11;
  pwVar2 = (wchar_t *)(puVar11 + 2);
  *(undefined4 **)puVar11[1] = puVar11;
  pvStack_c._0_1_ = 4;
  pwStack_38 = pwVar2;
  if (pwVar2 != (wchar_t *)0x0) {
    uVar9 = (**(code **)(*piVar10 + 0x1c))();
    *(undefined4 *)pwVar2 = uVar9;
  }
  iStack_18 = iStack_18 + 1;
  pvStack_c._0_1_ = 2;
  if (piVar10 != (int *)0x0) {
    (**(code **)*piVar10)(1);
  }
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  StyleNode::~StyleNode((StyleNode *)&piStack_2c);
  uVar9 = 0;
  puVar14 = auStack_20;
  sVar12 = wcslen(&DAT_0066fc60);
  FUN_0057e2c0(&DAT_0066fc60,sVar12,puVar14,uVar9);
  FUN_005798b0(0,0);
  FUN_0057b370();
  FUN_0057b3e0(auStack_20);
  piStack_2c = (int *)0x0;
  iStack_28 = 0x3d9ba5e3;
  pvStack_24 = (void *)0xbfa4dd2f;
  (**(code **)(*param_1 + 0x7c))(0,0x3d9ba5e3,0xbfa4dd2f);
  (**(code **)(*param_1 + 0x14))(param_1 + 0x18);
  FUN_0045a460();
  FUN_004424f0(1);
  cVar6 = FUN_004b5060(param_1[1],uStack_10);
  piVar10 = piStack_2c;
  pvStack_1c = (void *)0xffffffff;
  if (cVar6 == '\0') {
    piVar4 = (int *)*piStack_2c;
    while (piVar4 != piVar10) {
      piVar3 = (int *)*piVar4;
      *(int *)piVar4[1] = *piVar4;
      *(int *)(*piVar4 + 4) = piVar4[1];
      FUN_0046ea80(0);
      FUN_005b7e1d(piVar4);
      iStack_28 = iStack_28 + -1;
      piVar4 = piVar3;
    }
    FUN_005b7e1d(piStack_2c);
    uVar9 = 0;
  }
  else {
    piVar4 = (int *)*piStack_2c;
    while (piVar4 != piVar10) {
      piVar3 = (int *)*piVar4;
      *(int *)piVar4[1] = *piVar4;
      *(int *)(*piVar4 + 4) = piVar4[1];
      FUN_0045eeb0();
      FUN_005b7e1d(piVar4);
      iStack_28 = iStack_28 + -1;
      piVar4 = piVar3;
    }
    FUN_005b7e1d(piStack_2c);
    uVar9 = 1;
  }
  ExceptionList = pvStack_24;
  return uVar9;
}

