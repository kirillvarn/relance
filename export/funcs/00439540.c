
void __thiscall FUN_00439540(int param_1,float param_2)

{
  if (((*(uint *)(param_1 + 0x44) & 0x3fffffff) != 0) &&
     (param_2 = param_2 + *(float *)(param_1 + 0x4c), *(float *)(param_1 + 0x4c) = param_2,
     *(float *)(param_1 + 0x50) <= param_2)) {
    FUN_0043b6b0(*(uint *)(param_1 + 0x44));
    if (*(char *)(param_1 + 0x48) != '\0') {
      FUN_0043bab0(*(undefined4 *)(param_1 + 0x44));
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}

