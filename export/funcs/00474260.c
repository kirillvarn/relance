
/* WARNING: Removing unreachable block (ram,0x004743dd) */
/* WARNING: Removing unreachable block (ram,0x004743c5) */
/* WARNING: Removing unreachable block (ram,0x004743d8) */
/* WARNING: Removing unreachable block (ram,0x004743e6) */
/* WARNING: Removing unreachable block (ram,0x004743ca) */

undefined4
FUN_00474260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char param_6)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_2c;
  double local_28;
  undefined4 local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  piVar2 = (int *)FUN_0059d9c0("NN_Prompt");
  local_14 = 0;
  local_10 = 0;
  local_c = 2;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_0059db20("NN_Prompt","NN_Prompt",0,&local_14);
  }
  if (piVar2 != (int *)0x0) {
    local_28 = 0.0;
    local_20 = 0;
    (**(code **)(*piVar2 + 0xa8))(0x42,&local_28,0);
    FUN_004738e0(param_1,param_2);
    piVar2[0xcd] = (int)&stack0xffffffc4;
    FUN_00473970(0,param_3);
    FUN_00473970(1,param_4);
    (**(code **)(*piVar2 + 0x80))();
  }
  local_2c = 0;
  iVar3 = FUN_0059d9c0("NN_Prompt");
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    Sleep(10);
    FUN_005b2360();
    cVar1 = FUN_005b0b60(&local_2c);
    if (cVar1 == '\0') break;
    if (param_6 == '\0') {
      WaitForClientRunPermission();
    }
    else {
      (**(code **)(*DAT_0067ecd0 + 0x2c))();
    }
    fVar4 = (float10)FUN_0042d680();
    local_28 = (double)fVar4;
    FUN_0059e080(local_28);
    if (DAT_0067ecac != (int *)0x0) {
      (**(code **)(*DAT_0067ecac + 0x38))((float)local_28);
    }
    if (param_6 == '\0') {
      GiveServerRunPermission();
    }
    iVar3 = FUN_0059d9c0("NN_Prompt");
  }
  return 0;
}

