
void __thiscall FUN_00585d20(int param_1,int param_2,byte param_3)

{
  undefined4 uVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  uVar1 = FUN_005835f0(*(undefined4 *)(param_2 + 4),&local_8,&local_4);
  *(undefined4 *)(param_1 + 0x4fc) = uVar1;
  *(undefined4 *)(param_1 + 0x500) = local_8;
  *(undefined4 *)(param_1 + 0x504) = local_4;
  *(undefined4 *)(param_1 + 0x508) = 0xffffffff;
  *(byte *)(param_1 + 0x518) = (param_3 & 1) << 5 ^ *(byte *)(param_1 + 0x518) & 0xcf;
  return;
}

