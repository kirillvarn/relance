
void FUN_005763b0(undefined4 param_1,char param_2)

{
  SHORT SVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_2 == '\0') {
    puVar4 = &DAT_0067c278;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    SVar1 = GetKeyState(0x10);
    uVar3 = (uint)(SVar1 < 0);
    SVar1 = GetKeyState(0x11);
    if (SVar1 < 0) {
      uVar3 = uVar3 | 4;
    }
    SVar1 = GetKeyState(0x12);
    if (SVar1 < 0) {
      uVar3 = uVar3 | 0x10;
    }
    DAT_0067c290 = 1;
    DAT_0067c280 = uVar3;
  }
  FUN_00576410();
  return;
}

