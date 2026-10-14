
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004569d0(float param_1,float param_2,float param_3)

{
  float fVar1;
  float local_4;
  
  if (param_3 < (float)_DAT_005c8ba8) {
    local_4 = param_1;
    FUN_00428be0(0,&local_4,0);
    param_3 = local_4;
  }
  fVar1 = (float)_DAT_005c8ba8;
  *(float *)((int)param_1 + 0x18) = param_2;
  if (fVar1 < param_3) {
    *(float *)((int)param_1 + 0x1c) = ABS(param_2 - *(float *)((int)param_1 + 0x10)) / param_3;
    return;
  }
  *(undefined4 *)((int)param_1 + 0x1c) = 0x49742400;
  return;
}

