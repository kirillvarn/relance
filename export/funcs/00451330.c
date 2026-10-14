
void __thiscall FUN_00451330(int param_1,long param_2)

{
  *(long *)(param_1 + 0x70) = param_2;
  HardpointSummary::destroy((HardpointSummary *)(param_1 + 0x170));
  HardpointSummary::analyze_instance((HardpointSummary *)(param_1 + 0x170),param_2);
  return;
}

