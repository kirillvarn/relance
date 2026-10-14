
void __thiscall FUN_00457f10(undefined4 *param_1,long param_2)

{
  HardpointSummary *this;
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ba11b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x20);
  local_4 = 0;
  if (this == (HardpointSummary *)0x0) {
    this = (HardpointSummary *)0x0;
  }
  else {
    HardpointSummary::HardpointSummary(this);
    *(undefined ***)this = &PTR_FUN_005cbd68;
  }
  local_4 = 0xffffffff;
  *param_1 = this;
  HardpointSummary::analyze_instance(this,param_2);
  iVar1 = HardpointSummary::get_count((HardpointSummary *)*param_1);
  param_1[1] = iVar1;
  pvVar2 = operator_new(iVar1 * 4);
  param_1[2] = pvVar2;
  pvVar2 = operator_new(param_1[1] << 2);
  param_1[3] = pvVar2;
  iVar1 = 0;
  if (0 < (int)param_1[1]) {
    do {
      *(undefined4 *)(param_1[2] + iVar1 * 4) = 0xffffffff;
      *(undefined4 *)(param_1[3] + iVar1 * 4) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[1]);
  }
  ExceptionList = local_c;
  return;
}

