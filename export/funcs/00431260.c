
int __fastcall FUN_00431260(int param_1)

{
  if (*(short *)(param_1 + 0x12) != 0) {
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + -1;
  }
  if ((*(short *)(param_1 + 0x12) < 1) && (*(int *)(param_1 + 8) != -1)) {
    (**(code **)(**(int **)Sound_exref + 0x88))(*(int **)Sound_exref,*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  return (int)*(short *)(param_1 + 0x12);
}

