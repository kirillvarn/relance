
int * FUN_00579aa0(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_ECX;
  int iVar5;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  float in_stack_0000002c;
  float in_stack_00000030;
  float in_stack_00000034;
  undefined1 in_stack_00000038;
  
  FUN_005b7e90();
  iVar2 = DAT_00615174;
  in_stack_00000024 = *(undefined4 *)(extraout_ECX + 0x334);
  in_stack_00000020 = *(undefined4 *)(extraout_ECX + 0x3f8);
  iVar1 = *(int *)(extraout_ECX + 0x35c);
  in_stack_00000028 = 0;
  iVar5 = *(int *)(extraout_ECX + 0x380);
  if (*(int *)(extraout_ECX + 0x380) <= iVar1) {
    iVar5 = iVar1;
  }
  in_stack_0000002c = (float)iVar5;
  in_stack_00000034 = (float)(iVar1 / 10);
  DAT_00615174 = DAT_00615174 + 1;
  in_stack_00000030 = (float)iVar1;
  in_stack_00000038 = 0;
  uVar3 = FUN_00402180(&stack0x0000003c,"ScrollV_%d",iVar2);
  piVar4 = (int *)FUN_0059db20(uVar3,"UIScroll",extraout_ECX,&stack0x00000020);
  if (piVar4 != (int *)0x0) {
    param_2 = *(float *)(extraout_ECX + 0x3fc) + *(float *)(extraout_ECX + 0x330);
    param_3 = 0;
    param_4 = 0;
    if (DAT_0067c480 == (int *)0x0) {
      DAT_0067c480 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_0067c480 + 0x2c))(DAT_0067c480,&stack0x00000014,extraout_ECX + 0x3c,&param_2);
    (**(code **)(*piVar4 + 0x7c))(iVar1,param_2,param_3);
    (**(code **)(*piVar4 + 0x20))(extraout_ECX + 0x3c);
  }
  return piVar4;
}

