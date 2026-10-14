
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __fastcall FUN_005ac9d0(int param_1)

{
  int *piVar1;
  DWORD DVar2;
  undefined1 uVar3;
  
  if ((*(int *)(param_1 + 0x234) != 0) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x234) + 0xc), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x20))(piVar1,param_1);
    CGunWrapper::Update(*(CGunWrapper **)(param_1 + 0x234));
  }
  CDPClient::DispatchMsgs((CDPClient *)(param_1 + 4),0xffffffff);
  FUN_005ac2b0();
  uVar3 = 0;
  if (*(char *)(param_1 + 0x238) != '\0') {
    DVar2 = timeGetTime();
    if (999 < DVar2 - _DAT_0067ea58) {
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x238) = 0;
      _DAT_0067ea58 = timeGetTime();
    }
  }
  return uVar3;
}

