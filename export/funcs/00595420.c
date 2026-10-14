
undefined4 * __fastcall FUN_00595420(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  IDPMsgHandler local_15;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c4ae6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_0059f860();
  *(undefined1 *)((int)param_1 + 0x331) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)((int)param_1 + 0x32f) = 0;
  *(undefined1 *)((int)param_1 + 0x32e) = 0;
  param_1[0xd2] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xcf] = 0;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  param_1[0xd7] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd4] = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  param_1[0xdc] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xd9] = 0;
  *(undefined1 *)(param_1 + 0xdd) = 0;
  param_1[0xe1] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xde] = 0;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  param_1[0xe6] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe3] = 0;
  *(undefined1 *)(param_1 + 0xe7) = 0;
  *(IDPMsgHandler *)(param_1 + 0xe8) = local_15;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  local_4 = 1;
  FUN_004215b0();
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  param_1[0x100] = 0;
  *param_1 = &PTR_FUN_005e55ac;
  param_1[0x1f] = &PTR_OnReceive_005e559c;
  *(undefined1 *)(param_1 + 0xcb) = 1;
  *(undefined1 *)((int)param_1 + 0x32d) = 0;
  uVar1 = DAT_00679b94;
  param_1[0xf3] = 0;
  *(undefined4 *)((int)param_1 + 0x32e) = uVar1;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xf4] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf0] = 0;
  param_1[0xec] = 0;
  *(undefined1 *)(param_1 + 0xed) = 0;
  *(undefined1 *)(param_1 + 0xf5) = 0;
  param_1[0xf6] = 0;
  param_1[0x109] = 0;
  param_1[0x108] = 0;
  param_1[0x107] = 0;
  param_1[0x10a] = param_1[0xf3];
  *(undefined1 *)(param_1 + 0x10b) = 0;
  param_1[0xee] = 0xffffffff;
  param_1[0xef] = 0;
  if (DAT_0067d9e0 == '\0') {
    DAT_0067d9e0 = '\x01';
    FUN_00425b30("Interface\\UI\\UITextures.ini",*(undefined4 *)Data_exref);
    DAT_0067d9e4 = FUN_00595730("HUD_sliderarrow");
    DAT_0067d9e8 = FUN_00595730("HUD_slidertextopbottom");
    DAT_0067d9ec = FUN_00595730("HUD_slidertexmid");
  }
  param_1[0x103] = DAT_00679bb0;
  param_1[0x104] = DAT_00679bb0;
  param_1[0x105] = DAT_00679bb0;
  param_1[0x106] = DAT_00679bb0;
  if ((param_1[0xe9] == 0) || ((uint)((int)(param_1[0xeb] - param_1[0xe9]) >> 2) < 5)) {
    pvVar2 = operator_new(0x14);
    FUN_00597c70(param_1[0xe9],param_1[0xea],pvVar2);
    IDPMsgHandler::OnReceive((IDPMsgHandler *)(param_1 + 0xe8),(uchar *)param_1[0xe9],param_1[0xea])
    ;
    FUN_005b7e1d(param_1[0xe9]);
    param_1[0xeb] = (int)pvVar2 + 0x14;
    iVar3 = FUN_005ad970();
    param_1[0xea] = (void *)((int)pvVar2 + iVar3 * 4);
    param_1[0xe9] = pvVar2;
  }
  local_14 = param_1 + 0xcf;
  FUN_004deb70(param_1[0xea],&local_14);
  local_14 = param_1 + 0xd4;
  FUN_00537260(param_1[0xea],1,&local_14);
  local_14 = param_1 + 0xe3;
  FUN_00537260(param_1[0xea],1,&local_14);
  ExceptionList = local_c;
  return param_1;
}

