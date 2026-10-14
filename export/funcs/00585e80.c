
undefined4 __thiscall FUN_00585e80(int param_1,char *param_2)

{
  HardpointSummary *this;
  int iVar1;
  char *_Str1;
  undefined4 uVar2;
  int iVar3;
  char *_Str2;
  
  if (*(undefined4 **)(param_1 + 0x4d4) != (undefined4 *)0x0) {
    this = (HardpointSummary *)**(undefined4 **)(param_1 + 0x4d4);
    iVar3 = 0;
    if (this != (HardpointSummary *)0x0) {
      for (; iVar1 = HardpointSummary::get_count(this), iVar3 < iVar1; iVar3 = iVar3 + 1) {
        _Str2 = param_2;
        _Str1 = HardpointSummary::get_name(this,iVar3);
        iVar1 = stricmp(_Str1,_Str2);
        if (iVar1 == 0) {
          uVar2 = FUN_00457f00(iVar3);
          return uVar2;
        }
      }
    }
  }
  return 0xffffffff;
}

