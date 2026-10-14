
void __fastcall FUN_004877f0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  long lVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  code *_Str1;
  int iVar12;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_3d;
  uint local_3c;
  int local_38;
  wchar_t *local_34;
  int local_30;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_2c [16];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_1c [16];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005bc1ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00489200(*(undefined4 *)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x348),
                       *(undefined4 *)(param_1 + 0x344));
  FUN_00489160(uVar2,*(undefined4 *)(param_1 + 0x348));
  *(undefined4 *)(param_1 + 0x348) = uVar2;
  iVar3 = FUN_005aa680();
  if (iVar3 == 1) {
    local_3c = 0;
    if (DAT_0067e970 != (int *)0x0) {
      local_3c = 0;
      piVar4 = DAT_0067e970;
      do {
        piVar4 = (int *)*piVar4;
        local_3c = local_3c + 1;
      } while (piVar4 != (int *)0x0);
    }
    if (*(int *)(param_1 + 0x344) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (*(int *)(param_1 + 0x34c) - *(int *)(param_1 + 0x344)) / 0x24;
    }
    if (uVar10 < local_3c) {
      uVar10 = local_3c;
      if ((int)local_3c < 0) {
        uVar10 = 0;
      }
      pvVar5 = operator_new(uVar10 * 0x24);
      FUN_00489190(*(undefined4 *)(param_1 + 0x344),*(undefined4 *)(param_1 + 0x348),pvVar5);
      FUN_00489160(*(undefined4 *)(param_1 + 0x344),*(undefined4 *)(param_1 + 0x348));
      FUN_005b7e1d(*(undefined4 *)(param_1 + 0x344));
      *(void **)(param_1 + 0x34c) = (void *)((int)pvVar5 + local_3c * 0x24);
      iVar3 = FUN_005756d0();
      *(void **)(param_1 + 0x344) = pvVar5;
      *(void **)(param_1 + 0x348) = (void *)((int)pvVar5 + iVar3 * 0x24);
    }
    local_38 = 0;
    if (0 < (int)local_3c) {
      do {
        iVar3 = FUN_005aaca0(local_38);
        if (*(char *)(iVar3 + 0x200) == '\0') {
          local_2c[0] = local_3d;
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Tidy(local_2c,false);
          local_4 = 0;
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                    (local_1c,(allocator<unsigned_short> *)&local_3d);
          local_4 = 1;
          local_30 = iVar3;
          pwVar6 = (wchar_t *)FUN_00488b70(iVar3);
          sVar7 = wcslen(pwVar6);
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::assign(local_1c,(ushort *)pwVar6,sVar7);
          pwVar6 = (wchar_t *)filetime_to_wstring((_FILETIME *)(local_30 + 0x228));
          sVar7 = wcslen(pwVar6);
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::assign(local_2c,(ushort *)pwVar6,sVar7);
          FUN_00488ee0(*(undefined4 *)(param_1 + 0x348),&local_30);
          local_4 = 2;
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Tidy(local_1c,true);
          local_4 = 0xffffffff;
          std::
          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
          ::_Tidy(local_2c,true);
        }
        local_38 = local_38 + 1;
      } while (local_38 < (int)local_3c);
    }
    if (DAT_0067e984 != 0) {
      *(undefined4 *)(param_1 + 0x338) = 3;
      if (*(int *)(param_1 + 0x1764) != 0) {
        FUN_0057c7d0(0);
      }
      FUN_00473c00(0x5cd,param_1);
    }
  }
  else {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: %s",
               "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_LoadSave.cpp",0x446,
               "Failed to retrieve available save games\n");
  }
  local_3c = 0;
  local_38 = 0;
  for (uVar10 = 0;
      (*(int *)(param_1 + 0x344) != 0 &&
      (uVar10 < (uint)((*(int *)(param_1 + 0x348) - *(int *)(param_1 + 0x344)) / 0x24)));
      uVar10 = uVar10 + 1) {
    pcVar9 = *(code **)(*(int *)(param_1 + 0x344) + local_38 + 0x18);
    _Str1 = _C_exref;
    if (pcVar9 != (code *)0x0) {
      _Str1 = pcVar9;
    }
    pcVar9 = *(code **)(param_1 + 0x354);
    if (*(code **)(param_1 + 0x354) == (code *)0x0) {
      pcVar9 = _C_exref;
    }
    iVar3 = wcsncmp((wchar_t *)_Str1,(wchar_t *)pcVar9,*(size_t *)(param_1 + 0x360));
    if (iVar3 == 0) {
      local_34 = (wchar_t *)0x0;
      lVar8 = wcstol((wchar_t *)(_Str1 + *(int *)(param_1 + 0x360) * 2),&local_34,10);
      if ((((local_34 != (wchar_t *)0x0) && (*local_34 == L'\0')) && (lVar8 < 0x3b9aca01)) &&
         ((int)local_3c < lVar8)) {
        local_3c = lVar8;
      }
    }
    local_38 = local_38 + 0x24;
  }
  *(uint *)(param_1 + 0x364) = local_3c + 1;
  if (*(int *)(param_1 + 0x344) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)(param_1 + 0x348) - *(int *)(param_1 + 0x344)) / 0x24;
    if (0x100 < iVar3) {
      iVar3 = 0x100;
    }
  }
  iVar12 = 0;
  *(int *)(param_1 + 0xe80) = iVar3;
  *(int *)(param_1 + 0x173c) = iVar3;
  local_3c = iVar3;
  if (0 < iVar3) {
    local_38 = 0;
    do {
      pcVar9 = *(code **)(*(int *)(param_1 + 0x344) + 0x18 + local_38);
      iVar11 = *(int *)(param_1 + 0x344) + local_38;
      if (pcVar9 == (code *)0x0) {
        pcVar9 = _C_exref;
      }
      FUN_005a1eb0(iVar12,pcVar9);
      pcVar9 = *(code **)(iVar11 + 8);
      if (pcVar9 == (code *)0x0) {
        pcVar9 = _C_exref;
      }
      FUN_005a1eb0(iVar12,pcVar9);
      iVar12 = iVar12 + 1;
      local_38 = local_38 + 0x24;
    } while (iVar12 < iVar3);
  }
  if ((iVar3 - *(int *)(param_1 + 0x1754)) + 1 < 2) {
    FUN_00595d60(0,0x3f800000);
    iVar3 = *(int *)(param_1 + 0x1758);
    bVar1 = *(byte *)(iVar3 + 0x6c) & 0xfc;
  }
  else {
    FUN_00595d60(0,(float)(int)local_3c);
    iVar3 = *(int *)(param_1 + 0x1758);
    bVar1 = *(byte *)(iVar3 + 0x6c) | 3;
  }
  *(byte *)(iVar3 + 0x6c) = bVar1;
  ExceptionList = local_c;
  return;
}

