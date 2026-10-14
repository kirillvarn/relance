
void FUN_0053c470(undefined4 param_1,IObjInspect *param_2)

{
  IObjInspect *pIVar1;
  int iVar2;
  IObjInspect *pIVar3;
  int iVar4;
  int iVar5;
  vector<IObjInspect*,std::allocator<IObjInspect*>_> local_1c [4];
  int local_18;
  IObjInspect **local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pIVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c0c49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005416c0(*(undefined4 *)param_2,0);
  if (iVar2 != 0) {
    local_1c[0] = param_2._0_1_;
    local_18 = 0;
    local_14 = (IObjInspect **)0x0;
    local_10 = 0;
    local_4 = 0;
    if (*(int *)(pIVar1 + 0xc) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(pIVar1 + 0x10) - *(int *)(pIVar1 + 0xc) >> 2;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        pIVar3 = (IObjInspect *)FUN_005416c0(*(undefined4 *)(*(int *)(pIVar1 + 0xc) + iVar5 * 4),0);
        if (pIVar3 != (IObjInspect *)0x0) {
          param_2 = pIVar3;
          std::vector<IObjInspect*,std::allocator<IObjInspect*>_>::insert
                    (local_1c,local_14,1,&param_2);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
      if ((local_18 != 0) && ((int)local_14 - local_18 >> 2 != 0)) {
        (**(code **)(*(int *)(iVar2 + 4) + 0x3c))(pIVar1 + 4,local_1c,0);
      }
    }
    FUN_005b7e1d(local_18);
  }
  ExceptionList = local_c;
  return;
}

