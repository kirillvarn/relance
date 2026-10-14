
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e890(void)

{
  HMODULE pHVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  tagPOINT local_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_0061685c != '\0') {
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
        uStack_14 = 0x14;
        uStack_10 = 0x10;
        uStack_c = 0;
        uStack_8 = 0;
        uStack_4 = 0x80;
        iVar2 = (**(code **)(*DAT_006167c8 + 0x18))(DAT_006167c8,1,&uStack_14);
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
    DAT_006167cc = DAT_006167cc | 1;
    _DAT_00616820 = 0;
    _DAT_0061681c = 0;
    if ((((DAT_00679bc8 != 0) && (DAT_00679bcc != 0)) && (DAT_00679be5 == '\0')) &&
       ((BVar3 = GetCursorPos(&local_1c), BVar3 != 0 &&
        (BVar3 = ScreenToClient(DAT_0067eca0,&local_1c), BVar3 != 0)))) {
      DAT_00616840 = local_1c.x;
      DAT_00616844 = local_1c.y;
      DAT_00616848 = 0;
    }
    if (DAT_00616840 < 0) {
      DAT_00616840 = 0;
    }
    else if (DAT_00610850 <= DAT_00616840) {
      DAT_00616840 = DAT_00610850 + -1;
    }
    if (DAT_00616844 < 0) {
      DAT_00616844 = 0;
    }
    else if (DAT_00610854 <= DAT_00616844) {
      DAT_00616844 = DAT_00610854 + -1;
    }
    do {
      iVar2 = ShowCursor(0);
    } while (-1 < iVar2);
  }
  return;
}

