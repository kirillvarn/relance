
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420350(char param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  HMODULE pHVar1;
  BOOL BVar2;
  int iVar3;
  HWND pHVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  tagPOINT tStack_1c;
  tagCURSORINFO tStack_14;
  
  if (param_1 != '\0') {
    if ((param_4 != '\0') || (pHVar4 = GetFocus(), pHVar4 == DAT_0067eca0)) {
      if ((DAT_0061682c & 1) == 0) {
        DAT_0061682c = DAT_0061682c | 1;
        FUN_0041e740();
        FUN_005b7e6c(&LAB_0041e880);
      }
      if (DAT_00616854 == '\0') {
        DAT_00616854 = '\x01';
        FUN_00420060(DAT_0067eca0,1);
      }
      DAT_006167cc = DAT_006167cc ^ (param_4 << 4 ^ DAT_006167cc) & 0x10;
      if ((DAT_0061682c & 1) == 0) {
        DAT_0061682c = DAT_0061682c | 1;
        FUN_0041e740();
        FUN_005b7e6c(&LAB_0041e880);
      }
      if (DAT_00616854 == '\0') {
        DAT_00616854 = '\x01';
        FUN_00420060(DAT_0067eca0,1);
      }
      FUN_004201a0(1);
      DAT_0061685c = 1;
    }
    return;
  }
  if ((DAT_0061682c & 1) == 0) {
    DAT_0061682c = DAT_0061682c | 1;
    FUN_0041e740();
    FUN_005b7e6c(&LAB_0041e880);
  }
  if (DAT_00616854 == '\0') {
    DAT_00616854 = '\x01';
    _DAT_006167f8 = GetDoubleClickTime();
    uVar8 = 0;
    puVar7 = &DAT_006167c4;
    puVar6 = &DAT_005e752c;
    uVar5 = 0x800;
    pHVar1 = GetModuleHandleA((LPCSTR)0x0);
    DirectInput8Create(pHVar1,uVar5,puVar6,puVar7,uVar8);
    (**(code **)(*DAT_006167c4 + 0xc))(DAT_006167c4,&DAT_005e74ec,&DAT_006167c8,0);
    (**(code **)(*DAT_006167c8 + 0x2c))(DAT_006167c8,&DAT_005e772c);
    DAT_006167cc = DAT_006167cc | 0x60;
    if ((DAT_006167cc & 0x40) != 0) {
      FUN_0041e790(0x80);
    }
  }
  DAT_006167cc = DAT_006167cc & 0xfe;
  if (DAT_006167c8 != (int *)0x0) {
    (**(code **)(*DAT_006167c8 + 0x20))(DAT_006167c8);
  }
  DAT_006167cc = DAT_006167cc & 0xf3;
  FUN_00535980();
  if (DAT_006167c8 != (int *)0x0) {
    (**(code **)(*DAT_006167c8 + 0x34))(DAT_006167c8,DAT_0067eca0,6);
    DAT_006167cc = DAT_006167cc & 0xf7;
  }
  tStack_14.cbSize = 0x14;
  GetCursorInfo(&tStack_14);
  if (((byte)tStack_14.flags & 1) == 0) {
    tStack_1c.x = DAT_00616840;
    tStack_1c.y = DAT_00616844;
    BVar2 = ClientToScreen(DAT_0067eca0,&tStack_1c);
    if (BVar2 != 0) {
      SetCursorPos(tStack_1c.x,tStack_1c.y);
    }
    do {
      iVar3 = ShowCursor(1);
    } while (iVar3 < 1);
  }
  DAT_0061685c = 0;
  return;
}

