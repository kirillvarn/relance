
undefined4 __thiscall FUN_0058f7a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_0058e000(param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_00579aa0();
    *(undefined4 *)(param_1 + 0x588) = uVar2;
    if (*(int *)(param_1 + 0x4a4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2;
    }
    FUN_0058f640(iVar3,0);
    FUN_00595db0(0);
    return 1;
  }
  return 0;
}

