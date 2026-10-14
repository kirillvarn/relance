
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e610(void)

{
  HMODULE pHVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  if ((DAT_0061682c & 1) == 0) {
    DAT_0061682c = DAT_0061682c | 1;
    FUN_0041e740();
    FUN_005b7e6c(&LAB_0041e880);
  }
  if (DAT_00616854 == '\0') {
    DAT_00616854 = '\x01';
    _DAT_006167f8 = GetDoubleClickTime();
    uVar6 = 0;
    puVar5 = &DAT_006167c4;
    puVar4 = &DAT_005e752c;
    uVar3 = 0x800;
    pHVar1 = GetModuleHandleA((LPCSTR)0x0);
    DirectInput8Create(pHVar1,uVar3,puVar4,puVar5,uVar6);
    (**(code **)(*DAT_006167c4 + 0xc))(DAT_006167c4,&DAT_005e74ec,&DAT_006167c8,0);
    (**(code **)(*DAT_006167c8 + 0x2c))(DAT_006167c8,&DAT_005e772c);
    DAT_006167cc = DAT_006167cc | 0x60;
    if ((DAT_006167cc & 0x40) != 0) {
      FUN_0041e790(0x80);
    }
  }
  if (DAT_006167c8 != (int *)0x0) {
    (**(code **)(*DAT_006167c8 + 0x20))(DAT_006167c8);
    if (DAT_006167c8 != (int *)0x0) {
      (**(code **)(*DAT_006167c8 + 8))(DAT_006167c8);
      DAT_006167c8 = (int *)0x0;
    }
  }
  if (DAT_006167c4 != (int *)0x0) {
    (**(code **)(*DAT_006167c4 + 8))(DAT_006167c4);
    DAT_006167c4 = (int *)0x0;
  }
  uVar2 = 0;
  DAT_00616858 = 0;
  if (DAT_00616740 != 0) {
    do {
      FUN_005b7e1d((&DAT_00616744)[uVar2]);
      (&DAT_00616744)[uVar2] = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_00616740);
  }
  DAT_00616740 = 0;
  FUN_00425a20();
  DAT_00616855 = 0;
  return;
}

