
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004220c0(undefined4 param_1,undefined4 param_2)

{
  _DAT_006648bc = param_1;
  DAT_006648c0 = param_2;
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x13,param_1);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x14,DAT_006648c0);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x1b,DAT_006648b8);
  return;
}

