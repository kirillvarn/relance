
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041ef20(void)

{
  char cVar1;
  HMODULE pHVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24 [6];
  char cStack_c;
  char cStack_8;
  int iStack_4;
  
  if ((DAT_0061682c & 1) == 0) {
    DAT_0061682c = DAT_0061682c | 1;
    FUN_0041e740();
    FUN_005b7e6c(&LAB_0041e880);
  }
  if (DAT_00616854 == '\0') {
    DAT_00616854 = '\x01';
    _DAT_006167f8 = GetDoubleClickTime();
    uVar9 = 0;
    puVar8 = &DAT_006167c4;
    puVar7 = &DAT_005e752c;
    uVar6 = 0x800;
    pHVar2 = GetModuleHandleA((LPCSTR)0x0);
    DirectInput8Create(pHVar2,uVar6,puVar7,puVar8,uVar9);
    (**(code **)(*DAT_006167c4 + 0xc))(DAT_006167c4,&DAT_005e74ec,&DAT_006167c8,0);
    (**(code **)(*DAT_006167c8 + 0x2c))(DAT_006167c8,&DAT_005e772c);
    DAT_006167cc = DAT_006167cc | 0x60;
    if (((DAT_006167cc & 0x40) != 0) && (DAT_006167dc != 0x80)) {
      if (DAT_006167c8 != (int *)0x0) {
        (**(code **)(*DAT_006167c8 + 0x20))(DAT_006167c8);
      }
      DAT_006167cc = DAT_006167cc & 0xf3;
      FUN_00535980();
      uStack_38 = 0x14;
      uStack_34 = 0x10;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0x80;
      iVar3 = (**(code **)(*DAT_006167c8 + 0x18))(DAT_006167c8,1,&uStack_38);
      if (-1 < iVar3) {
        DAT_006167dc = 0x80;
        FUN_005b7e1d(DAT_006167e0);
        DAT_006167e0 = (void *)0x0;
        if (DAT_006167dc != 0) {
          DAT_006167e0 = operator_new(DAT_006167dc * 0x14);
        }
      }
    }
  }
  DAT_00616860 = DAT_00616860 + 1;
  while (DAT_006167c0 != 0) {
    piVar4 = (int *)(*DAT_006167bc + 8);
    piVar5 = local_24;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    piVar4 = (int *)FUN_0053ab20(auStack_3c,0);
    piVar4 = (int *)*piVar4;
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    FUN_005b7e1d(piVar4);
    DAT_006167c0 = DAT_006167c0 + -1;
    if (cStack_8 == '\0') {
      if ((((local_24[1] != 0) && (cVar1 = FUN_00577680(local_24), cVar1 == '\0')) &&
          (iStack_4 == 0)) && (cStack_c != '\0')) {
        FUN_0045a270(0x201,0,0);
      }
    }
    else {
      FUN_005763b0(5,0);
    }
  }
  DAT_00616860 = DAT_00616860 + -1;
  return;
}

