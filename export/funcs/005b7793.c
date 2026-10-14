
/* Library Function - Single Match
    _GetProcAddressInternal@8
   
   Library: Visual Studio 2005 Release */

uint _GetProcAddressInternal_8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1;
  if (((param_1 != 0) && (param_2 != 0)) && (uVar2 = FUN_005b76c6(param_1,0,&param_1), uVar2 != 0))
  {
    uVar3 = _GetOrdinal_20(param_2,*(undefined4 *)(uVar2 + 0x18),iVar1,
                           *(int *)(uVar2 + 0x20) + iVar1,*(int *)(uVar2 + 0x24) + iVar1);
    if ((uVar3 & 0xffff) < *(uint *)(uVar2 + 0x14)) {
      uVar3 = *(int *)(*(int *)(uVar2 + 0x1c) + (uVar3 & 0xffff) * 4 + iVar1) + iVar1;
      if (uVar3 <= uVar2) {
        return uVar3;
      }
      if (param_1 + uVar2 <= uVar3) {
        return uVar3;
      }
    }
  }
  return 0;
}

