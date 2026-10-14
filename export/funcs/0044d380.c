
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044d380(int param_1,float param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      param_2 = param_2 + *(float *)(param_1 + 0x14);
      *(float *)(param_1 + 0x14) = param_2;
      if (_DAT_0061650c <= param_2) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        FUN_0041dda0(1);
        FUN_00412070(0x3f800000);
        return;
      }
    }
    else if (iVar1 == 2) {
      if (*(int *)(param_1 + 0x10) == 0) {
        FUN_0043ba90(*(undefined4 *)(param_1 + 4),0,0);
        *(undefined4 *)(param_1 + 0xc) = 0;
        return;
      }
      if (*(int *)(param_1 + 0x10) == 1) {
        FUN_00446be0();
        FUN_00447cd0();
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

