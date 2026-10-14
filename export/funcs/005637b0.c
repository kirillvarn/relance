
uint FUN_005637b0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  piVar1 = (int *)FUN_0059db20(PTR_s_ServerFilterDialog_006148cc,PTR_s_ServerFilterDialog_006148cc,
                               param_1,param_2);
  if (piVar1 != (int *)0x0) {
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    (**(code **)(*piVar1 + 0xa8))(0x42,&local_14,0);
    (**(code **)(*piVar1 + 0x80))();
    while( true ) {
      iVar2 = FUN_0059d9c0(PTR_s_ServerFilterDialog_006148cc);
      if (iVar2 == 0) break;
      uVar3 = FUN_005b0b60(&stack0xffffffd0);
      if ((char)uVar3 == '\0') {
        return uVar3 & 0xffffff00;
      }
      fVar4 = (float10)FUN_0042d680();
      FUN_0059e080((double)fVar4);
      if (DAT_0067ecac != (int *)0x0) {
        (**(code **)(*DAT_0067ecac + 0x38))((float)fVar4);
      }
    }
  }
  return 1;
}

