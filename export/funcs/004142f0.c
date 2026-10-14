
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004142f0(int param_1,int *param_2,undefined4 param_3)

{
  undefined1 local_10 [8];
  undefined4 uStack_8;
  
  (**(code **)(*param_2 + 0x18))(local_10);
  if ((*(int *)(param_1 + 0x10) == 1) || (*(int *)(param_1 + 0x10) == 2)) {
    uStack_8 = 0;
  }
  if ((*(int *)(param_1 + 0x14) == 1) || (*(int *)(param_1 + 0x14) == 2)) {
    uStack_8 = 0;
  }
  (**(code **)(*param_2 + 0x24))(&stack0xffffffe4,param_2,param_3);
  return;
}

