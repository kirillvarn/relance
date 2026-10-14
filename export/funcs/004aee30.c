
void __fastcall FUN_004aee30(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_80 [128];
  
  if ((param_1[0x1fe] != 5) && (param_1[0x1fe] != 6)) {
    FUN_005645c0(2);
    FUN_005645c0(5);
  }
  switch(param_1[0x1fe]) {
  case 0:
    FUN_004ae4b0();
    return;
  case 1:
    FUN_004ae650();
    return;
  case 2:
    FUN_004ae770();
    return;
  case 3:
    FUN_004ae890();
    return;
  case 4:
    FUN_004ae9a0();
    return;
  case 5:
    if (*(char *)((int)param_1 + 0x32d) == '\0') {
      *(undefined1 *)((int)param_1 + 0x8a2) = 1;
      param_1[0x210] = 0;
      param_1[0x211] = 0;
      *(byte *)(param_1[0xd3] + 0x331) = *(byte *)(param_1[0xd3] + 0x331) & 0xfd;
      *(byte *)(param_1[0xd4] + 0x331) = *(byte *)(param_1[0xd4] + 0x331) & 0xfd;
      *(byte *)(param_1[0xd5] + 0x331) = *(byte *)(param_1[0xd5] + 0x331) & 0xfd;
      *(byte *)(param_1[0xd6] + 0x331) = *(byte *)(param_1[0xd6] + 0x331) & 0xfd;
      *(byte *)(param_1[0xd8] + 0x331) = *(byte *)(param_1[0xd8] + 0x331) & 0xfd;
      switch(param_1[0x1fd]) {
      case 0:
        FUN_004aeab0();
        FUN_005b3ec0("PerfOptions.ini");
        return;
      case 1:
        FUN_004aebb0();
        FUN_005b3ec0("PerfOptions.ini");
        return;
      case 2:
        FUN_004aeca0();
        FUN_005b3ec0("PerfOptions.ini");
        return;
      case 3:
        FUN_004aed70();
        FUN_005b3ec0("PerfOptions.ini");
        return;
      case 4:
        *(byte *)(param_1[0x1fc] + 0x6c) = *(byte *)(param_1[0x1fc] + 0x6c) & 0xfc;
        *(undefined4 *)(param_1[0xdd] + 0x348) = DAT_00679bb0;
        FUN_004347e0(DAT_0067eca8,0x5e4,local_80,0x40);
        (**(code **)(*(int *)param_1[0x1ed] + 0xa8))(0x1d,local_80,0);
        *(byte *)(param_1[0x1ec] + 0x6c) = *(byte *)(param_1[0x1ec] + 0x6c) & 0xfc;
        *(byte *)(param_1[0x1ed] + 0x6c) = *(byte *)(param_1[0x1ed] + 0x6c) & 0xfc;
        *(byte *)(param_1[0xd1] + 0x6c) = *(byte *)(param_1[0xd1] + 0x6c) & 0xfc;
      }
      FUN_005b3ec0("PerfOptions.ini");
      return;
    }
    *(undefined1 *)(param_1 + 0xcb) = 1;
    FUN_004a7690(*(undefined1 *)((int)param_1 + 0x84b));
    DAT_0067dcc8 = 0;
    FUN_005b3ec0("PerfOptions.ini");
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    break;
  case 6:
    *(undefined1 *)(param_1 + 0xcb) = 1;
    DAT_0067dcc8 = 0;
    if (*(char *)((int)param_1 + 0x32d) == '\0') {
      DAT_0067dcc8 = 0;
      return;
    }
    FUN_004a7690(*(undefined1 *)((int)param_1 + 0x84b));
    FUN_005b3ec0("PerfOptions.ini");
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    break;
  default:
    goto switchD_004aee6a_default;
  }
  (**(code **)(*param_1 + 0x28))();
  (**(code **)*param_1)(1);
switchD_004aee6a_default:
  return;
}

