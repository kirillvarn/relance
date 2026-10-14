
undefined4 __fastcall FUN_0042a350(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1[0xc] != 0) && (param_1[0xc] != -1)) {
    cVar1 = (**(code **)(*param_1 + 0xa0))();
    if (cVar1 == '\0') {
      iVar2 = (**(code **)(**(int **)Streamer_exref + 0x28))(*(int **)Streamer_exref,param_1[0xc]);
      if ((iVar2 != 4) && (iVar2 != 0)) {
        uVar3 = FUN_00429840();
        return uVar3;
      }
    }
  }
  return 1;
}

