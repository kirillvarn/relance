
int * __thiscall FUN_004a9100(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  void **ppvVar6;
  uint local_20;
  void *local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bcd71;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = operator_new(0x428);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0059f860();
    *(undefined1 *)(piVar2 + 0x103) = (undefined1)param_3;
    piVar2[0x104] = 0;
    piVar2[0x105] = 0;
    piVar2[0x106] = 0;
    uVar3 = 0xffffffff;
    *piVar2 = (int)&PTR_FUN_005d4794;
    piVar2[0x1f] = (int)&PTR_OnReceive_005d4788;
    piVar2[0x108] = 0;
    pcVar5 = "li_p_grp";
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_20 = ~uVar3 - 1;
    local_4 = CONCAT31(local_4._1_3_,2);
    local_1c[0]._0_1_ = 0;
    if (0xf < local_20) {
      local_20 = 0xf;
    }
    puVar4 = &DAT_005d4848;
    ppvVar6 = local_1c;
    for (uVar3 = local_20 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *ppvVar6 = (void *)*puVar4;
      puVar4 = puVar4 + 1;
      ppvVar6 = ppvVar6 + 1;
    }
    for (uVar3 = local_20 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)ppvVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      ppvVar6 = (void **)((int)ppvVar6 + 1);
    }
    *(undefined1 *)((int)local_1c + local_20) = 0;
    uVar3 = Reputation::get_id((TString<16> *)&local_20);
    FUN_004c4e00(uVar3,0x41,1);
    DAT_006721bc = piVar2;
  }
  piVar2[4] = param_1 + 0xc;
  local_4 = 0xffffffff;
  cVar1 = (**(code **)(*piVar2 + 0x24))(param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)*piVar2)(1);
    ExceptionList = local_1c[1];
    return (int *)0x0;
  }
  ExceptionList = local_1c[2];
  return piVar2;
}

