
void FUN_0045a270(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_68;
  undefined4 local_64;
  void *local_60;
  undefined4 local_5c;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_2c;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005ba243;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_0041dd90();
  if ((cVar1 != '\0') && (DAT_0067dcc8 == '\0')) {
    cVar1 = FUN_004c4810();
    if (cVar1 == '\0') {
      FUN_004c80f0(param_1,param_2,param_3);
    }
    else if (((DAT_0066d3f0 != 0) && (cVar1 = FUN_00442720(), cVar1 == '\0')) &&
            (cVar1 = FUN_0045da00(), cVar1 == '\0')) {
      local_68 = (void *)0x0;
      local_64 = 0;
      local_4 = 0;
      FUN_004144b0();
      local_4 = CONCAT31(local_4._1_3_,1);
      local_6c = 0;
      local_70 = 0xffffffff;
      local_2c = 0;
      FUN_00414280();
      local_10 = 0;
      local_4 = 2;
      local_70 = 0x45e;
      local_6c = 0x45e;
      iVar2 = FUN_0043a460();
      puVar3 = (uint *)FUN_0043b630();
      if (((iVar2 != 0) && (puVar3 != (uint *)0x0)) &&
         (uVar4 = MakeLocationID(*puVar3,"Cityscape"), *(uint *)(iVar2 + 0x38) == uVar4)) {
        local_70 = 0x3a0;
        local_6c = 0x3a0;
      }
      FUN_004b62d0(&local_70,0x41000000);
      FUN_00489e80(DAT_0066d344,0);
      local_4._0_1_ = 5;
      local_4._1_3_ = 0;
      FUN_004144f0();
      local_4 = CONCAT31(local_4._1_3_,4);
      for (iVar2 = local_50; iVar2 != local_4c; iVar2 = iVar2 + 8) {
        FUN_00418f70(0);
      }
      FUN_005b7e1d(local_50);
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      if (local_60 != (void *)0x0) {
        free(local_60);
        local_60 = (void *)0x0;
        local_5c = 0;
      }
      if (local_68 != (void *)0x0) {
        free(local_68);
        ExceptionList = local_c;
        return;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

