
void FUN_00473cb0(undefined4 param_1,char param_2,undefined4 param_3)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 local_1c;
  double local_18;
  undefined4 local_10;
  
  iVar3 = FUN_0059d9c0("NN_Error");
  if ((iVar3 == 0) &&
     (piVar4 = (int *)FUN_0059db20("NN_Error","NN_Error",param_3,0), piVar4 != (int *)0x0)) {
    local_18 = 0.0;
    local_10 = 0;
    (**(code **)(*piVar4 + 0xa8))(0x42,&local_18,0);
    if (piVar4[0xd0] != 0) {
      pbVar1 = (byte *)(piVar4[0xd0] + 0x6c);
      *pbVar1 = *pbVar1 & 0xfc;
    }
    if ((int *)piVar4[0xcd] != (int *)0x0) {
      (**(code **)(*(int *)piVar4[0xcd] + 0xa8))(0x1e,param_1,0);
    }
    (**(code **)(*piVar4 + 0x80))();
  }
  local_1c = 0;
  iVar3 = FUN_0059d9c0("NN_Error");
  while( true ) {
    if (iVar3 == 0) {
      return;
    }
    Sleep(10);
    cVar2 = FUN_005b0b60(&local_1c);
    if (cVar2 == '\0') break;
    if (param_2 == '\0') {
      WaitForClientRunPermission();
    }
    else if (DAT_0067ecd0 != (int *)0x0) {
      (**(code **)(*DAT_0067ecd0 + 0x2c))();
    }
    fVar5 = (float10)FUN_0042d680();
    local_18 = (double)fVar5;
    FUN_0059e080(local_18);
    cVar2 = FUN_00424f30();
    if (cVar2 != '\0') {
      FUN_0059e300();
      FUN_00425080();
      FUN_00425140();
    }
    if (param_2 == '\0') {
      GiveServerRunPermission();
    }
    iVar3 = FUN_0059d9c0("NN_Error");
  }
  return;
}

