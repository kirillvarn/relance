
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e6cb0(int param_1)

{
  int iVar1;
  char cVar2;
  CArchGroup *this;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  uint local_24;
  undefined4 local_20;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  CArchGrpTraverser local_8 [8];
  
  iVar1 = *(int *)(param_1 + 0x398);
  if ((((iVar1 != 0) && (iVar1 != 8)) && (iVar1 != -4)) &&
     ((iVar1 = *(int *)(iVar1 + 8), iVar1 != 0 && ((*(uint *)(iVar1 + 0x4c) & 0x103) == 0x103)))) {
    local_8[0] = (CArchGrpTraverser)0x1;
    this = CArchGroupManager::Traverse((CArchGroupManager *)(iVar1 + 0x144),local_8);
    while (this != (CArchGroup *)0x0) {
      fVar10 = CArchGroup::GetRelativeHealth(this);
      if (_DAT_005c7474 < _DAT_005c75dc - fVar10) {
        FUN_0045a1a0(local_10,_DAT_005c75dc - fVar10);
      }
      iVar3 = ftol();
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      iVar4 = ftol();
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      iVar5 = ftol();
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0xff < iVar5) {
        iVar5 = 0xff;
      }
      iVar6 = ftol();
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      local_20 = CONCAT13((char)iVar6,CONCAT12((char)iVar5,CONCAT11((char)iVar4,(char)iVar3)));
      local_24 = local_20;
      if ((*(short *)(param_1 + 0x3b4) == *(short *)(*(int *)(this + 4) + 4)) &&
         (cVar2 = FUN_0045a740(), cVar2 == '\0')) {
        puVar7 = (uint *)FUN_00561f20(local_c,local_20);
        local_24 = *puVar7;
      }
      uVar9 = (((local_24 >> 0x18) << 8 | local_24 & 0xff) << 8 | local_24 >> 8 & 0xff) << 8 |
              local_24 >> 0x10 & 0xff;
      uVar11 = 0;
      lVar8 = CArchGroup::GetRootIndex(this);
      FUN_00405a00(lVar8,uVar11,uVar9);
      this = CArchGroupManager::Traverse((CArchGroupManager *)(iVar1 + 0x144),local_8);
    }
  }
  return;
}

