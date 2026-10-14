
undefined4 FUN_00454640(int *param_1,undefined1 *param_2)

{
  (**(code **)(*param_1 + 0xc))(param_1,*param_2);
  (**(code **)(*param_1 + 0x14))(param_1,param_2 + 4);
  (**(code **)(*param_1 + 0x1c))
            (param_1,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
             *(undefined4 *)(param_2 + 0x1c));
  (**(code **)(*param_1 + 0x24))(param_1,param_2[1],*(undefined4 *)(param_2 + 0x10));
  return 0;
}

