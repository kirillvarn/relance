
void __fastcall FUN_005630f0(int param_1)

{
  uint auStack_5c [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_1 + 0x374) != 0) {
    uStack_2c = (uint)*(byte *)(*(int *)(param_1 + 0x374) + 4);
    uStack_28 = 0;
    uStack_30 = 0x30;
    uStack_34 = 0x56311b;
    (**(code **)(**(int **)(param_1 + 0x338) + 0xa8))();
    uStack_38 = (uint)*(byte *)(*(int *)(param_1 + 0x374) + 5);
    uStack_34 = 0;
    uStack_3c = 0x30;
    uStack_40 = 0x563138;
    (**(code **)(**(int **)(param_1 + 0x344) + 0xa8))();
    uStack_44 = (uint)*(byte *)(*(int *)(param_1 + 0x374) + 6);
    uStack_40 = 0;
    uStack_48 = 0x30;
    uStack_4c = 0x563155;
    (**(code **)(**(int **)(param_1 + 0x350) + 0xa8))();
    auStack_5c[3] = (uint)*(byte *)(*(int *)(param_1 + 0x374) + 8);
    uStack_4c = 0;
    auStack_5c[2] = 0x30;
    auStack_5c[1] = 0x563172;
    (**(code **)(**(int **)(param_1 + 0x35c) + 0xa8))();
    auStack_5c[0] = (uint)*(byte *)(*(int *)(param_1 + 0x374) + 9);
    auStack_5c[1] = 0;
    (**(code **)(**(int **)(param_1 + 0x368) + 0xa8))(0x30);
    _ultow(*(ulong *)(*(int *)(param_1 + 0x374) + 0x10),(wchar_t *)auStack_5c,10);
    FUN_0057c0e0(auStack_5c,0);
  }
  return;
}

