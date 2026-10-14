
void __fastcall FUN_0047e9e0(int param_1)

{
  if ((*(int *)(param_1 + 0x4bc) != 0) && (*(char *)(param_1 + 0x35c) != '\0')) {
    FUN_005798b0(0,0);
    FUN_0057b370();
  }
  if ((*(int *)(param_1 + 0x360) != 0) && (*(int *)(*(int *)(param_1 + 0x360) + 0x4bc) != 0)) {
    FUN_005798b0(0,0);
    FUN_0057b370();
  }
  if (*(int *)(param_1 + 0x398) != 0) {
    FUN_005798b0(0,0);
    FUN_0057b370();
    FUN_005798b0(0,0);
    FUN_0057b370();
    FUN_005798b0(0,0);
    FUN_0057b370();
  }
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  if (*(int *)(param_1 + 0x360) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4e8) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4e8) = 0;
  }
  return;
}

