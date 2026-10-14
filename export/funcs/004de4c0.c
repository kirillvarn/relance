
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004de4c0(void)

{
  bool bVar1;
  undefined4 *puVar2;
  IObjInspect *pIVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  GoodInfo *pGVar8;
  int iVar9;
  int iVar10;
  undefined4 local_48;
  IObjInspect *pIStack_44;
  IObjInspect *pIStack_40;
  undefined4 *local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  vector<IObjInspect*,std::allocator<IObjInspect*>_> local_1c [4];
  int local_18;
  IObjInspect **local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005be631;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)FUN_0054baf0();
  if (puVar2 != (undefined4 *)0x0) {
    local_18 = 0;
    local_14 = (IObjInspect **)0x0;
    local_10 = 0;
    local_4 = 0;
    local_48 = 7;
    local_3c = puVar2;
    for (pIVar3 = (IObjInspect *)FUN_00540fc0(&local_48); pIVar3 != (IObjInspect *)0x0;
        pIVar3 = *(IObjInspect **)(pIVar3 + 0x14)) {
      uVar4 = (**(code **)*puVar2)();
      uVar5 = (*(code *)**(undefined4 **)pIVar3)();
      FUN_00423b60(&fStack_38,uVar5,uVar4);
      if (fStack_38 * fStack_38 + fStack_30 * fStack_30 + fStack_34 * fStack_34 < _DAT_005d848c) {
        pIStack_44 = pIVar3;
        std::vector<IObjInspect*,std::allocator<IObjInspect*>_>::insert
                  (local_1c,local_14,&pIStack_44);
      }
    }
    if (local_18 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (int)local_14 - local_18 >> 2;
    }
    iStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    iVar9 = 0;
    uVar7 = (uint)local_4 >> 8;
    local_4 = CONCAT31((int3)uVar7,1);
    pIStack_44 = (IObjInspect *)DAT_00674a8c;
    pIStack_40 = (IObjInspect *)DAT_00674a88;
    if (0 < iVar10) {
      do {
        local_48 = 0;
        iVar6 = (**(code **)(**(int **)(local_18 + iVar9 * 4) + 0x150))();
        if ((iVar6 != 0) && ((*(uint *)(iVar6 + 0x4c) & 0x803) == 0x803)) {
          pIVar3 = *(IObjInspect **)(*(int *)(iVar6 + 0xec) + 8);
          if (*(float *)(*(int *)(iVar6 + 0xec) + 0x5c) == _DAT_005c7474) {
            local_48 = 0x7149f2ca;
          }
          else if ((pIVar3 == pIStack_44) || (pIVar3 == pIStack_40)) {
            local_48 = 0x60ad78ec;
          }
          else {
            uVar7 = Arch2Good((uint)pIVar3);
            pGVar8 = GoodList::find_by_id(uVar7);
            if (pGVar8 != (GoodInfo *)0x0) {
              local_48 = *(undefined4 *)(pGVar8 + 0x58);
            }
          }
        }
        FUN_00537260(uStack_24,1,&local_48);
        iVar9 = iVar9 + 1;
        puVar2 = local_3c;
      } while (iVar9 < iVar10);
    }
    do {
      iVar9 = 0;
      bVar1 = true;
      if (iVar10 + -1 < 1) break;
      do {
        if (*(float *)(iStack_28 + iVar9 * 4) < *(float *)(iStack_28 + 4 + iVar9 * 4)) {
          uVar4 = *(undefined4 *)(iStack_28 + iVar9 * 4);
          *(undefined4 *)(iStack_28 + iVar9 * 4) = *(undefined4 *)(iStack_28 + 4 + iVar9 * 4);
          *(undefined4 *)(iStack_28 + 4 + iVar9 * 4) = uVar4;
          uVar4 = *(undefined4 *)(local_18 + iVar9 * 4);
          *(undefined4 *)(local_18 + iVar9 * 4) = *(undefined4 *)(local_18 + 4 + iVar9 * 4);
          *(undefined4 *)(local_18 + 4 + iVar9 * 4) = uVar4;
          bVar1 = false;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar10 + -1);
    } while (!bVar1);
    if (puVar2[7] == 1) {
      FUN_00544d00(local_1c);
    }
    FUN_005b7e1d(iStack_28);
    iStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    FUN_005b7e1d(local_18);
  }
  ExceptionList = local_c;
  return;
}

