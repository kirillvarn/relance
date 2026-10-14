
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b5ca0(int *param_1,int *param_2)

{
  byte bVar1;
  wchar_t *_Str;
  char cVar2;
  int iVar3;
  size_t _Count;
  int local_84;
  void **local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  wchar_t *local_68;
  undefined4 local_64;
  void *local_60;
  undefined4 uStack_5c;
  undefined4 local_2c;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bd1a6;
  local_c = ExceptionList;
  if (param_2[1] != 0) {
    ExceptionList = &local_c;
    cVar2 = FUN_0041dd90();
    if (cVar2 == '\0') {
      *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfd;
    }
    else {
      iVar3 = FUN_005b36b0("enable_rollover");
      if ((((float)_DAT_005c8b68 <= *(float *)(iVar3 + 0x14)) &&
          ((float)param_1[0x59] <= _DAT_005c7474)) &&
         (((param_1[0x3b] == *param_2 && ((char)param_1[0x5e] != '\0')) ||
          ((_DAT_005c7474 < (float)param_1[0x5f] || (_DAT_005c94f8 <= (float)param_1[0x60])))))) {
        local_80 = (void **)param_2[1];
        FUN_00432240(&local_84,&local_80);
        if (local_84 != param_1[0x55]) {
          local_68 = (wchar_t *)0x0;
          local_64 = 0;
          local_4 = 0;
          FUN_004144b0();
          local_6c = 0;
          local_70 = 0xffffffff;
          local_2c = 0;
          FUN_00413df0(0,0xffffffff);
          local_10 = 0;
          local_70 = *param_2;
          local_6c = *(int *)(local_84 + 0x10);
          _Str = (wchar_t *)param_2[2];
          local_4 = 1;
          if (_Str == (wchar_t *)0x0) {
            if ((local_68 != (wchar_t *)0x0) && (*local_68 != L'\0')) {
              *local_68 = L'\0';
            }
          }
          else {
            _Count = wcslen(_Str);
            FUN_004142a0(_Count + 1);
            wcsncpy(local_68,_Str,_Count);
            local_68[_Count] = L'\0';
          }
          bVar1 = *(byte *)(param_1 + 0x1b);
          *(byte *)(param_1 + 0x1b) = bVar1 | 1;
          if (param_1[0x3b] == local_70) {
            *(byte *)(param_1 + 0x1b) = bVar1 | 3;
            local_80 = &local_60;
            local_4._0_1_ = 4;
            local_4._1_3_ = 0;
            FUN_004144f0();
            local_4._0_1_ = 3;
            FUN_00445d70();
            local_4 = CONCAT31(local_4._1_3_,2);
            FUN_00444e20();
            if (local_68 != (wchar_t *)0x0) {
              free(local_68);
            }
          }
          else {
            cVar2 = FUN_005b0880();
            local_74 = 0xbf800000;
            local_78 = 0x3ec51eb8;
            if (cVar2 == '\0') {
              local_7c = param_1[0x61];
            }
            else {
              local_7c = param_1[0x62];
            }
            param_1[0x5b] = local_7c;
            param_1[0x5c] = 0x3ec51eb8;
            param_1[0x5d] = -0x40800000;
            param_1[0x3b] = local_70;
            *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | 2;
            param_1[0x3c] = local_6c;
            if (local_6c == 0) {
              (**(code **)(*param_1 + 0x70))(local_68);
            }
            else {
              FUN_004347e0(DAT_0067eca8,local_6c,&DAT_0066fc60,DAT_006119f8);
              (**(code **)(*param_1 + 0x70))(&DAT_0066fc60);
            }
            (**(code **)(*param_1 + 0x14))(param_1 + 0x5b);
            FUN_00459930(local_6c);
            local_80 = &local_60;
            local_4._0_1_ = 7;
            local_4._1_3_ = 0;
            FUN_004144f0();
            local_4 = CONCAT31(local_4._1_3_,6);
            FUN_00445d70();
            if (local_60 != (void *)0x0) {
              free(local_60);
              local_60 = (void *)0x0;
              uStack_5c = 0;
            }
            if (local_68 != (wchar_t *)0x0) {
              free(local_68);
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

