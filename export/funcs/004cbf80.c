
void __thiscall FUN_004cbf80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}

