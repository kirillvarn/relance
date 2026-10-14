
uint FUN_004740f0(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  double local_28;
  undefined4 local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  piVar1 = (int *)FUN_0059d9c0();
  local_14 = param_4;
  local_10 = param_5;
  local_c = 1;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_0059db20("NN_Prompt","NN_Prompt",0);
  }
  if (piVar1 != (int *)0x0) {
    local_28 = 0.0;
    local_20 = 0;
    (**(code **)(*piVar1 + 0xa8))(0x42,&local_28);
    FUN_00473770(param_1,param_2);
    piVar1[0xcd] = (int)&stack0xffffffc4;
    (**(code **)(*piVar1 + 0x80))();
  }
  iVar2 = FUN_0059d9c0();
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    Sleep(10);
    FUN_005b2360();
    uVar3 = FUN_005b0b60();
    if ((char)uVar3 == '\0') break;
    if (param_3 == '\0') {
      WaitForClientRunPermission();
    }
    else {
      (**(code **)(*DAT_0067ecd0 + 0x2c))();
    }
    fVar4 = (float10)FUN_0042d680();
    local_28 = (double)fVar4;
    FUN_0059e080(local_28._0_4_);
    if (DAT_0067ecac != (int *)0x0) {
      (**(code **)(*DAT_0067ecac + 0x38))();
    }
    if (param_3 == '\0') {
      GiveServerRunPermission();
    }
    iVar2 = FUN_0059d9c0();
  }
  return uVar3 & 0xffffff00;
}

