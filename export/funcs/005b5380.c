
undefined4 FUN_005b5380(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  undefined1 local_19;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c59f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = operator_new(0x1c);
  pcVar2 = set_slider_exref;
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14[1] = "rtc_performance";
    local_14[2] = 0;
    local_14[3] = 0;
    local_14[4] = 0;
    local_14[5] = 0xbf800000;
    local_14[6] = pcVar2;
    *local_14 = &PTR_OnAddHost_005d6d50;
  }
  if ((DAT_0067ed0c & 1) == 0) {
    DAT_0067ed0c = DAT_0067ed0c | 1;
    DAT_0067ed00 = local_19;
    DAT_0067ed04 = operator_new(0xc);
    *(void **)DAT_0067ed04 = DAT_0067ed04;
    *(void **)((int)DAT_0067ed04 + 4) = DAT_0067ed04;
    DAT_0067ed08 = 0;
    FUN_005b7e6c(&LAB_005b3640);
  }
  pvVar3 = DAT_0067ed04;
  local_18 = 0;
  piVar5 = *(int **)((int)DAT_0067ed04 + 4);
  puVar1 = (undefined4 *)((int)DAT_0067ed04 + 4);
  local_4 = 0;
  piVar4 = operator_new(0xc);
  *piVar4 = (int)pvVar3;
  if (piVar5 == (int *)0x0) {
    piVar5 = piVar4;
  }
  piVar4[1] = (int)piVar5;
  *puVar1 = piVar4;
  *(int **)piVar4[1] = piVar4;
  FUN_005999b0(piVar4 + 2,&local_18);
  DAT_0067ed08 = DAT_0067ed08 + 1;
  FUN_005b7e1d(local_18);
  *(undefined4 **)(*(int *)((int)DAT_0067ed04 + 4) + 8) = local_14;
  local_14[2] = 0x656;
  ExceptionList = local_c;
  return local_10;
}

