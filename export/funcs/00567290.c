
void __fastcall FUN_00567290(int param_1)

{
  int *piVar1;
  
  FUN_005760f0(0xf);
  if (*(int *)(param_1 + 0x2b8) != 0) {
    FUN_0058d0f0(param_1 + 0x5a0);
    FUN_00567350();
    piVar1 = (int *)FUN_0057a610();
    (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(param_1 + 0x388));
    piVar1 = (int *)FUN_0057a610();
    (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(param_1 + 0x38c));
  }
  FUN_00591de0();
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  return;
}

