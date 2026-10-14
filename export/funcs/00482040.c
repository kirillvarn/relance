
void __fastcall FUN_00482040(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x98c) = 0;
  if (*(int *)(param_1 + 0x974) != 0) {
    (**(code **)(**(int **)(param_1 + 0x9e4) + 0xa8))(0x1e,0x461,0);
    (**(code **)(**(int **)(param_1 + 0x9e0) + 0xa8))(3,0x330,0);
    (**(code **)(**(int **)(param_1 + 0x9a0) + 0xa8))(0x1e,0x48a,0);
    (**(code **)(**(int **)(param_1 + 0x9a8) + 0xa8))(0x1e,0x48a,0);
    uVar1 = FUN_004c6e90(*(undefined4 *)(*(int *)(param_1 + 0x974) + 0x348),1);
    *(undefined4 *)(param_1 + 0x9fc) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x974) + 0x348) = *(undefined4 *)(param_1 + 0x348);
    FUN_004c62b0(param_1 + 0x34c,1);
    FUN_00586b70();
    FUN_0047af30();
    return;
  }
  return;
}

