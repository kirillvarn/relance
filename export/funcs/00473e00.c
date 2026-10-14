
bool FUN_00473e00(char *param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 local_81c;
  undefined8 local_818;
  undefined4 local_810;
  
  iVar3 = FUN_0059d9c0("NN_Error");
  if (iVar3 != 0) {
    return true;
  }
  iVar3 = FUN_0059d9c0("NN_Error");
  if ((iVar3 == 0) &&
     (piVar4 = (int *)FUN_0059db20("NN_Error","NN_Error",0,0), piVar4 != (int *)0x0)) {
    local_818 = 0.0;
    local_810 = 0;
    (**(code **)(*piVar4 + 0xa8))(0x42,&local_818,0);
    if (piVar4[0xd0] != 0) {
      pbVar1 = (byte *)(piVar4[0xd0] + 0x6c);
      *pbVar1 = *pbVar1 | 3;
    }
    mbstowcs((wchar_t *)((int)&local_818 + 4),param_1,0x400);
    if ((int *)piVar4[0xcd] != (int *)0x0) {
      (**(code **)(*(int *)piVar4[0xcd] + 0xa8))(0x1d,(int)&local_818 + 4,0);
    }
    (**(code **)(*piVar4 + 0x80))();
  }
  local_81c = 0;
  Sleep(10);
  cVar2 = FUN_005b0b60(&local_81c);
  while (cVar2 != '\0') {
    fVar5 = (float10)FUN_0042d680();
    local_818 = (double)fVar5;
    FUN_0059e080(local_818);
    piVar4 = (int *)FUN_0059d9c0("NN_Error");
    if (piVar4 == (int *)0x0) break;
    cVar2 = FUN_00424f30();
    if (cVar2 != '\0') {
      FUN_0059e500();
      (**(code **)(*piVar4 + 0x34))();
      FUN_0045a9f0();
      FUN_0041f150();
      FUN_00425080();
      FUN_00425140();
    }
    Sleep(10);
    cVar2 = FUN_005b0b60(&local_81c);
  }
  return DAT_0066dc04 == 0;
}

