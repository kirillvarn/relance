
void __thiscall FUN_00410ef0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x98) = *param_2;
  *(undefined4 *)(param_1 + 0x9c) = param_2[1];
  *(undefined4 *)(param_1 + 0xa0) = param_2[2];
  if (*(int *)(param_1 + 0xb0) != 3) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x9c);
    *(float *)(param_1 + 0x48) = -*(float *)(param_1 + 0xa0);
  }
  if ((DAT_00610588 == 0) && ((*(byte *)(param_1 + 0xb4) & 4) != 0)) {
    (**(code **)(**(int **)Pipeline_exref + 300))(*(int **)Pipeline_exref,param_1 + 0xc);
  }
  return;
}

