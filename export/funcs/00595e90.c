
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_00595e90(int param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  uVar3 = FUN_004b5060(param_2,0);
  if (param_3 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x334) = *param_3;
    *(undefined4 *)(param_1 + 0x338) = param_3[1];
    *(undefined4 *)(param_1 + 0x3c0) = param_3[2];
    *(undefined4 *)(param_1 + 0x3c4) = param_3[3];
    uVar2 = param_3[4];
    *(undefined4 *)(param_1 + 0x3cc) = uVar2;
    *(undefined4 *)(param_1 + 0x3d0) = param_3[5];
    *(undefined1 *)(param_1 + 0x42c) = *(undefined1 *)(param_3 + 6);
    *(undefined4 *)(param_1 + 0x428) = uVar2;
  }
  if (*(float *)(param_1 + 0x338) <= *(float *)(param_1 + 0x334)) {
    fVar1 = *(float *)(param_1 + 0x338);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x334);
  }
  *(float *)(param_1 + 0x3b0) = fVar1 * (float)_DAT_005cf100;
  FUN_00595840();
  return uVar3;
}

