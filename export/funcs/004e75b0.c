
void __fastcall FUN_004e75b0(int param_1)

{
  char cVar1;
  int iVar2;
  size_t _Count;
  wchar_t *_Memory;
  void *unaff_retaddr;
  undefined2 local_25e;
  wchar_t *local_25c;
  undefined1 *local_258;
  undefined1 *local_24c;
  uint local_248 [2];
  wchar_t *local_240;
  undefined4 local_23c;
  undefined1 local_238 [52];
  undefined4 local_204;
  uint local_1f0;
  int local_1ec;
  wchar_t *local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0 [52];
  undefined4 local_1ac;
  undefined1 local_190;
  undefined2 local_18c [64];
  wchar_t local_10c [6];
  wchar_t local_100 [122];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005be9ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_0045a740();
  if (cVar1 == '\0') {
    iVar2 = FUN_004e79f0(DAT_00616840,DAT_00616844,&local_25e,&local_25c);
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 0x3b4) = *(undefined2 *)SUBOBJ_ID_NONE_exref;
    }
    else {
      *(undefined2 *)(param_1 + 0x3b4) = local_25e;
      if ((int)local_25c < 2) {
        local_1e8 = (wchar_t *)0x0;
        local_1e4 = 0;
        local_4 = 6;
        FUN_004144b0();
        local_4 = CONCAT31(local_4._1_3_,7);
        local_1ec = 0;
        local_1f0 = 0xffffffff;
        local_1ac = 0;
        FUN_00413df0(0,0xffffffff);
        local_190 = 0;
        local_1f0 = (uint)*(ushort *)(param_1 + 0x3b4);
        local_4 = 8;
        local_1ec = iVar2;
        FUN_004be370(&local_1f0);
        local_258 = local_1e0;
        local_4._0_1_ = 0xb;
        local_4._1_3_ = 0;
        FUN_004144f0();
        local_4._0_1_ = 10;
        FUN_00445d70();
        local_4 = CONCAT31(local_4._1_3_,9);
        FUN_00444e20();
        _Memory = local_1e8;
      }
      else {
        iVar2 = FUN_004347e0(DAT_0067eca8,iVar2,local_18c,0x40);
        if (iVar2 == 0) {
          local_18c[0] = 0;
        }
        swprintf(local_10c,0x5d8ec8,local_25c);
        local_240 = (wchar_t *)0x0;
        local_23c = 0;
        FUN_004144b0();
        local_248[1] = 0;
        local_248[0] = 0xffffffff;
        local_204 = 0;
        FUN_00414280();
        local_1e8 = (wchar_t *)((uint)local_1e8 & 0xffffff00);
        local_248[0] = (uint)*(ushort *)(param_1 + 0x3b4);
        _Count = wcslen(local_100);
        FUN_004142a0(_Count + 1);
        wcsncpy(local_240,local_100,_Count);
        local_240[_Count] = L'\0';
        FUN_004be370(local_248);
        local_24c = local_238;
        FUN_004144f0();
        FUN_00445d70();
        FUN_00444e20();
        _Memory = local_240;
      }
      if (_Memory != (wchar_t *)0x0) {
        free(_Memory);
      }
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x3b4) = *(undefined2 *)SUBOBJ_ID_NONE_exref;
  }
  ExceptionList = unaff_retaddr;
  return;
}

