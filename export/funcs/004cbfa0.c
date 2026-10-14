
void __thiscall FUN_004cbfa0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *param_2 = *(undefined4 *)(param_1 + 8);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}

