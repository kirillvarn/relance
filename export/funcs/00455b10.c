
void FUN_00455b10(int param_1)

{
  *(undefined1 *)(param_1 + 0x10d) = 1;
  if (*(char *)(param_1 + 0x10c) != '\0') {
    if (*(undefined4 **)(param_1 + 0x110) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x110))(1);
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
    if (*(char *)(param_1 + 6) != '\0') {
      FUN_0041a0f0(0x3f800000,0x40400000);
      FUN_0041dda0(0);
    }
    FUN_0044f9d0();
    *(undefined1 *)(param_1 + 0x10c) = 0;
  }
  return;
}

