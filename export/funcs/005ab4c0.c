
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005ab4c0(int param_1)

{
  CGunWrapper *this;
  undefined4 uVar1;
  code *pcVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005c564b;
  local_c = ExceptionList;
  if ((DAT_00615b10 != '\0') && (*(int *)(param_1 + 0x234) == 0)) {
    local_1c = DAT_005e64d0;
    local_18 = DAT_005e64d4;
    local_14 = DAT_005e64d8;
    local_10 = _DAT_005e64dc;
    ExceptionList = &local_c;
    this = operator_new(0x28);
    local_4 = 0;
    if (this == (CGunWrapper *)0x0) {
      uVar1 = 0;
    }
    else {
      pcVar2 = *(code **)(param_1 + 0x224);
      if (*(code **)(param_1 + 0x224) == (code *)0x0) {
        pcVar2 = _C_exref;
      }
      uVar1 = CGunWrapper::CGunWrapper
                        (this,"..\\exe\\gundll.dll",(_GUID *)&local_1c,(char *)pcVar2,
                         *(ulong *)(param_1 + 0x230),(ushort *)0x0);
    }
    *(undefined4 *)(param_1 + 0x234) = uVar1;
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  ExceptionList = local_c;
  return 1;
}

