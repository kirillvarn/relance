
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0049f1a0(int param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_0049f0e0();
  fVar1 = *(float *)(param_1 + 0x418) * _DAT_005c75e0;
  fVar2 = *(float *)(param_1 + 0x41c) * _DAT_005c75e0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(float *)(param_1 + 0x488) = fVar1 - *(float *)(param_1 + 0x924) * *(float *)(param_1 + 0x418);
  *(float *)(param_1 + 0x48c) =
       fVar2 - (_DAT_005c75dc - *(float *)(param_1 + 0x928)) * *(float *)(param_1 + 0x41c);
  *(float *)(param_1 + 0x488) = *(float *)(param_1 + 0x488) - *(float *)(param_1 + 0x46c);
  *(float *)(param_1 + 0x48c) = *(float *)(param_1 + 0x48c) - *(float *)(param_1 + 0x470);
  fVar1 = *(float *)(param_1 + 0x4a8) / *(float *)(param_1 + 0x3f8);
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(float *)(param_1 + 0x490) = *(float *)(param_1 + 0x490) - *(float *)(param_1 + 0x474);
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_1 + 0x46c);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x470);
  *(undefined1 *)(param_1 + 0x478) = 1;
  *(undefined4 *)(param_1 + 0x4a4) = 2;
  *(undefined4 *)(param_1 + 0x484) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + 0x474);
  *(float *)(param_1 + 0x490) = *(float *)(param_1 + 0x4a8) * (float)_DAT_005d3f28 - fVar1;
  *(float *)(param_1 + 0x4a0) = fVar1;
  FUN_005645c0(6);
  return;
}

