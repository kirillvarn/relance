
void __fastcall FUN_004557d0(int param_1)

{
  DAT_00673350 = 0;
  if (*(char *)(param_1 + 0x104) != '\0') {
    if (*(undefined4 **)(param_1 + 0x108) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x108))(1);
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
    if (*(char *)(param_1 + 6) != '\0') {
      FUN_0041a0f0(0x3f800000,0x40400000);
      FUN_0041dda0(0);
    }
    FUN_0044f9d0();
    *(undefined1 *)(param_1 + 0x104) = 0;
  }
  return;
}

