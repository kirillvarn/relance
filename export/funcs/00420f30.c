
void __thiscall FUN_00420f30(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_0041aa50(param_2,1,0xffffffff);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  if (param_3 != 0) {
    uVar1 = FUN_0041aa50(param_3,1,0xffffffff);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  return;
}

