
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041ecf0(void)

{
  HMODULE pHVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_34 [4];
  tagPOINT tStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  tagCURSORINFO tStack_14;
  
  if ((DAT_0061682c & 1) == 0) {
    DAT_0061682c = DAT_0061682c | 1;
    FUN_0041e740();
    FUN_005b7e6c(&LAB_0041e880);
  }
  if (DAT_00616854 == '\0') {
    DAT_00616854 = '\x01';
    _DAT_006167f8 = GetDoubleClickTime();
    uVar7 = 0;
    puVar6 = &DAT_006167c4;
    puVar5 = &DAT_005e752c;
    uVar4 = 0x800;
    pHVar1 = GetModuleHandleA((LPCSTR)0x0);
    DirectInput8Create(pHVar1,uVar4,puVar5,puVar6,uVar7);
    (**(code **)(*DAT_006167c4 + 0xc))(DAT_006167c4,&DAT_005e74ec,&DAT_006167c8,0);
    (**(code **)(*DAT_006167c8 + 0x2c))(DAT_006167c8,&DAT_005e772c);
    DAT_006167cc = DAT_006167cc | 0x60;
    if (((DAT_006167cc & 0x40) != 0) && (DAT_006167dc != 0x80)) {
      if (DAT_006167c8 != (int *)0x0) {
        (**(code **)(*DAT_006167c8 + 0x20))(DAT_006167c8);
      }
      DAT_006167cc = DAT_006167cc & 0xf3;
      FUN_00535980();
      uStack_28 = 0x14;
      uStack_24 = 0x10;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0x80;
      iVar2 = (**(code **)(*DAT_006167c8 + 0x18))(DAT_006167c8,1,&uStack_28);
      if (-1 < iVar2) {
        DAT_006167dc = 0x80;
        FUN_005b7e1d(DAT_006167e0);
        DAT_006167e0 = (void *)0x0;
        if (DAT_006167dc != 0) {
          DAT_006167e0 = operator_new(DAT_006167dc * 0x14);
        }
      }
    }
  }
  DAT_006167cc = DAT_006167cc & 0xfe;
  if (DAT_006167c8 != (int *)0x0) {
    (**(code **)(*DAT_006167c8 + 0x20))(DAT_006167c8);
  }
  DAT_006167cc = DAT_006167cc & 0xf3;
  puVar6 = (undefined4 *)FUN_0053e430(auStack_34);
  FUN_004a2f80(&tStack_30,*puVar6,DAT_006167bc);
  if (DAT_006167c8 != (int *)0x0) {
    (**(code **)(*DAT_006167c8 + 0x34))(DAT_006167c8,DAT_0067eca0,6);
    DAT_006167cc = DAT_006167cc & 0xf7;
  }
  tStack_14.cbSize = 0x14;
  GetCursorInfo(&tStack_14);
  if (((byte)tStack_14.flags & 1) == 0) {
    tStack_30.x = DAT_00616840;
    tStack_30.y = DAT_00616844;
    BVar3 = ClientToScreen(DAT_0067eca0,&tStack_30);
    if (BVar3 != 0) {
      SetCursorPos(tStack_30.x,tStack_30.y);
    }
    do {
      iVar2 = ShowCursor(1);
    } while (iVar2 < 1);
  }
  DAT_0061685c = 0;
  return;
}

