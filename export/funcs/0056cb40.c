
void __fastcall FUN_0056cb40(int param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  code *pcVar7;
  undefined4 uVar8;
  byte bVar9;
  allocator<unsigned_short> local_3e;
  allocator<unsigned_short> local_3d;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_2c [16];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
  local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c2a8a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x8a4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x8a4) = 0;
  FUN_00595de0(0x41a00000);
  FUN_00595e10(0x3f800000);
  *(byte *)(*(int *)(param_1 + 0xd4) + 0x6c) = *(byte *)(*(int *)(param_1 + 0xd4) + 0x6c) | 3;
  local_38 = 0;
  uVar1 = FUN_00575950();
  local_34 = uVar1;
  FUN_004890c0(*(undefined4 *)(param_1 + 0x35c),*(undefined4 *)(param_1 + 0x360));
  uVar2 = FUN_005756a0();
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
    if ((int)uVar1 < 0) {
      uVar2 = 0;
    }
    pvVar3 = operator_new(uVar2 * 0x24);
    FUN_005758e0(*(undefined4 *)(param_1 + 0x35c),*(undefined4 *)(param_1 + 0x360),pvVar3);
    FUN_00489160(*(undefined4 *)(param_1 + 0x35c),*(undefined4 *)(param_1 + 0x360));
    FUN_005b7e1d(*(undefined4 *)(param_1 + 0x35c));
    *(void **)(param_1 + 0x364) = (void *)((int)pvVar3 + uVar1 * 0x24);
    iVar4 = FUN_005756d0();
    *(void **)(param_1 + 0x35c) = pvVar3;
    *(void **)(param_1 + 0x360) = (void *)((int)pvVar3 + iVar4 * 0x24);
  }
  local_3c = 0;
  if (uVar1 != 0) {
    do {
      iVar4 = FUN_005aaca0(local_3c);
      if ((iVar4 != 0) && (*(char *)(iVar4 + 0x200) == '\0')) {
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  (local_2c,&local_3e);
        local_4 = 0;
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
                  (local_1c,&local_3d);
        local_4 = 1;
        local_30 = iVar4;
        pwVar5 = (wchar_t *)FUN_00488b70(iVar4);
        sVar6 = wcslen(pwVar5);
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::assign(local_2c,(ushort *)pwVar5,sVar6);
        pwVar5 = (wchar_t *)filetime_to_wstring((_FILETIME *)(iVar4 + 0x228));
        sVar6 = wcslen(pwVar5);
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::assign(local_1c,(ushort *)pwVar5,sVar6);
        FUN_00575700(*(undefined4 *)(param_1 + 0x360),&local_30);
        iVar4 = *(int *)(param_1 + 0x360);
        uVar8 = *(undefined4 *)(iVar4 + -0x24);
        pcVar7 = *(code **)(iVar4 + -0x1c);
        if (*(code **)(iVar4 + -0x1c) == (code *)0x0) {
          pcVar7 = _C_exref;
        }
        FUN_005a1f50(pcVar7,uVar8);
        pcVar7 = *(code **)(iVar4 + -0xc);
        if (*(code **)(iVar4 + -0xc) == (code *)0x0) {
          pcVar7 = _C_exref;
        }
        FUN_005a1f50(pcVar7,uVar8);
        local_38 = local_38 + 1;
        local_4 = 2;
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::_Tidy(local_1c,true);
        local_4 = 0xffffffff;
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>_>
        ::_Tidy(local_2c,true);
        uVar1 = local_34;
      }
      local_3c = local_3c + 1;
    } while (local_3c < uVar1);
  }
  FUN_00595d60(0,(float)local_38);
  FUN_00595de0(0x41a00000);
  FUN_00595e10(0x3f800000);
  FUN_00595db0(0);
  bVar9 = *(byte *)(*(int *)(param_1 + 0xd4) + 0x6c);
  if (*(int *)(*(int *)(param_1 + 0xd8) + 0x8a4) + -0x14 < 1) {
    bVar9 = bVar9 & 0xfc;
  }
  else {
    bVar9 = bVar9 | 3;
  }
  *(byte *)(*(int *)(param_1 + 0xd4) + 0x6c) = bVar9;
  iVar4 = *(int *)(param_1 + 0xd8);
  FUN_00595dd0();
  uVar8 = ftol();
  *(undefined4 *)(iVar4 + 0x88c) = uVar8;
  iVar4 = *(int *)(param_1 + 0xdc);
  FUN_00595dd0();
  uVar8 = ftol();
  *(undefined4 *)(iVar4 + 0x88c) = uVar8;
  ExceptionList = local_c;
  return;
}

