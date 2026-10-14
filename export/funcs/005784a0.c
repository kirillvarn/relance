
uint FUN_005784a0(int param_1)

{
  undefined4 *puVar1;
  int nVirtKey;
  SHORT SVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined2 extraout_var;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  
  puVar1 = (undefined4 *)*DAT_0067c258;
  do {
    puVar3 = puVar1;
    if (puVar1 == DAT_0067c258) {
LAB_005784bf:
      return (uint)puVar3 & 0xffffff00;
    }
    if (param_1 == puVar1[2]) {
      puVar3 = puVar1 + 2;
      if ((puVar3 != (undefined4 *)0x0) && (piVar6 = (int *)puVar1[7], piVar6 != (int *)puVar1[8]))
      break;
      goto LAB_005784bf;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
LAB_005784e0:
  uVar4 = piVar6[1];
  nVirtKey = *piVar6;
  SVar2 = GetKeyState(0x10);
  uVar7 = (uint)(SVar2 < 0);
  SVar2 = GetKeyState(0x11);
  if (SVar2 < 0) {
    uVar7 = uVar7 | 4;
  }
  SVar2 = GetKeyState(0x12);
  if (SVar2 < 0) {
    uVar7 = uVar7 | 0x10;
  }
  if ((uVar7 & uVar4) == uVar4) {
    if (nVirtKey < 0) {
      uVar4 = 0;
      if (nVirtKey == -3) {
        uVar4 = 4;
      }
      else if (nVirtKey == -2) {
        uVar4 = 2;
      }
      else if (nVirtKey == -1) {
        uVar4 = 1;
      }
      uVar5 = 0;
      if ((DAT_00616850 & uVar4) != 0) {
LAB_00578574:
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
    }
    else {
      SVar2 = GetKeyState(nVirtKey);
      uVar5 = CONCAT22(extraout_var,SVar2);
      if (SVar2 < 0) goto LAB_00578574;
    }
  }
  piVar6 = piVar6 + 2;
  if (piVar6 == (int *)puVar1[8]) {
    return (uint)puVar3 & 0xffffff00;
  }
  goto LAB_005784e0;
}

