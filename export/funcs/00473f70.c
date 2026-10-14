
uint FUN_00473f70(undefined4 param_1,int param_2,char param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 local_2c;
  double local_28;
  undefined4 local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  piVar1 = (int *)FUN_0059d9c0("NN_Prompt");
  local_14 = param_4;
  local_10 = 0;
  local_c = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_0059db20("NN_Prompt","NN_Prompt",0,&local_14);
  }
  if (piVar1 != (int *)0x0) {
    local_28 = 0.0;
    local_20 = 0;
    (**(code **)(*piVar1 + 0xa8))(0x42,&local_28,0);
    FUN_00473770(param_1,0x5c12);
    pcVar2 = *(code **)(param_2 + 4);
    if (*(code **)(param_2 + 4) == (code *)0x0) {
      pcVar2 = _C_exref;
    }
    if (piVar1[0xd1] != 0) {
      FUN_0057c0e0(pcVar2,0);
    }
    piVar1[0xce] = param_2;
    piVar1[0xcd] = (int)&stack0xffffffc4;
    (**(code **)(*piVar1 + 0x80))();
  }
  local_2c = 0;
  iVar3 = FUN_0059d9c0("NN_Prompt");
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    Sleep(10);
    FUN_005b2360();
    uVar4 = FUN_005b0b60(&local_2c);
    if ((char)uVar4 == '\0') break;
    if (param_3 == '\0') {
      WaitForClientRunPermission();
    }
    else {
      (**(code **)(*DAT_0067ecd0 + 0x2c))();
    }
    fVar5 = (float10)FUN_0042d680();
    local_28 = (double)fVar5;
    FUN_0059e080(local_28);
    if (DAT_0067ecac != (int *)0x0) {
      (**(code **)(*DAT_0067ecac + 0x38))((float)local_28);
    }
    if (param_3 == '\0') {
      GiveServerRunPermission();
    }
    iVar3 = FUN_0059d9c0("NN_Prompt");
  }
  return uVar4 & 0xffffff00;
}

