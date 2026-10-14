
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00537690(int param_1)

{
  int iVar1;
  char cVar2;
  
  if (((*(byte *)(param_1 + 0xb4) >> 3 & 1) == 0) && (cVar2 = FUN_00410dd0(), cVar2 != '\0')) {
    *(int *)(param_1 + 0xcc) = DAT_00675574;
    iVar1 = param_1;
    if (DAT_00675574 != 0) {
      *(int *)(DAT_00675574 + 200) = param_1;
      iVar1 = DAT_00675570;
    }
    DAT_00675570 = iVar1;
    DAT_00675574 = param_1;
    *(undefined4 *)(param_1 + 200) = 0;
    _DAT_0067556c = _DAT_0067556c + 1;
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
  }
  return;
}

