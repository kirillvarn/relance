
void __thiscall
FUN_00454f30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,FmtStr *param_5,
            FmtStr *param_6)

{
  *(undefined4 *)(param_1 + 200) = param_2;
  *(undefined4 *)(param_1 + 0xcc) = param_3;
  *(undefined4 *)(param_1 + 0xd0) = param_4;
  FmtStr::operator=((FmtStr *)(param_1 + 0xd4),param_5);
  FmtStr::operator=((FmtStr *)(param_1 + 0xec),param_6);
  return;
}

