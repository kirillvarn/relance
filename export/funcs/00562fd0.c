
void __fastcall FUN_00562fd0(int param_1)

{
  int iVar1;
  wchar_t awStack_5c [4];
  undefined4 **ppuStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 **ppuStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 **ppuStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 local_24 [36];
  
  if (*(int *)(param_1 + 0x374) != 0) {
    uStack_2c = 0;
    puStack_30 = local_24;
    uStack_34 = 0x2f;
    uStack_38 = 0x562ffb;
    (**(code **)(**(int **)(param_1 + 0x338) + 0xa8))();
    *(bool *)(*(int *)(param_1 + 0x374) + 4) = puStack_30 == (undefined1 *)0x0;
    uStack_38 = 0;
    ppuStack_3c = &puStack_30;
    uStack_40 = 0x2f;
    uStack_44 = 0x563024;
    (**(code **)(**(int **)(param_1 + 0x344) + 0xa8))();
    *(bool *)(*(int *)(param_1 + 0x374) + 5) = ppuStack_3c == (undefined1 **)0x0;
    uStack_44 = 0;
    ppuStack_48 = &ppuStack_3c;
    uStack_4c = 0x2f;
    uStack_50 = 0x56304d;
    (**(code **)(**(int **)(param_1 + 0x350) + 0xa8))();
    *(bool *)(*(int *)(param_1 + 0x374) + 6) = (undefined1 ***)ppuStack_48 == (undefined1 ***)0x0;
    uStack_50 = 0;
    ppuStack_54 = &ppuStack_48;
    awStack_5c[2] = L'/';
    awStack_5c[3] = L'\0';
    awStack_5c[0] = L'ぶ';
    awStack_5c[1] = L'V';
    (**(code **)(**(int **)(param_1 + 0x35c) + 0xa8))();
    *(bool *)(*(int *)(param_1 + 0x374) + 8) = (undefined4 ***)ppuStack_54 == (undefined4 ***)0x0;
    awStack_5c[0] = L'\0';
    awStack_5c[1] = L'\0';
    (**(code **)(**(int **)(param_1 + 0x368) + 0xa8))(0x2f);
    *(bool *)(*(int *)(param_1 + 0x374) + 9) = &stack0x00000000 == (undefined1 *)0x54;
    FUN_0057c2c0(awStack_5c,0x10);
    iVar1 = _wtoi(awStack_5c);
    *(int *)(*(int *)(param_1 + 0x374) + 0x10) = iVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x374) + 0xc) = 0;
  }
  return;
}

