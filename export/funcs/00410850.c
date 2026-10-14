
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_00410850(int param_1,undefined4 param_2,float *param_3)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  float10 fVar4;
  float10 extraout_ST0;
  undefined1 local_c [4];
  undefined4 local_8;
  undefined4 local_4;
  
  *param_3 = *(float *)(param_1 + 0xa4);
  param_3[1] = *(float *)(param_1 + 0xa8);
  param_3[2] = *(float *)(param_1 + 0xac);
  bVar3 = *(int *)(param_1 + 0xc0) != 0;
  if (bVar3) {
    local_4 = *(undefined4 *)(param_1 + 0xc4);
    local_c[0] = 0;
    local_8 = 0;
    fVar4 = (float10)FUN_0042d660();
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc0) + 0x1c))((float)fVar4,local_c);
    *param_3 = (float)(uVar2 >> 0x10 & 0xff) * (float)_DAT_005c89c8 * *param_3;
    param_3[1] = (float)(uVar2 >> 8 & 0xff) * (float)_DAT_005c89c8 * param_3[1];
    param_3[2] = (float)(uVar2 & 0xff) * (float)_DAT_005c89c8 * param_3[2];
  }
  piVar1 = *(int **)(param_1 + 0xbc);
  if (piVar1 != (int *)0x0) {
    local_4 = *(undefined4 *)(param_1 + 0x58);
    local_c[0] = 1;
    local_8 = 0;
    (**(code **)(*piVar1 + 0x18))(param_2,local_c);
    *param_3 = (float)(extraout_ST0 * (float10)*param_3);
    param_3[1] = (float)(extraout_ST0 * (float10)param_3[1]);
    param_3[2] = (float)(extraout_ST0 * (float10)param_3[2]);
  }
  return piVar1 != (int *)0x0 || bVar3;
}

