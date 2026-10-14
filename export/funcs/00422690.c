
void FUN_00422690(int *param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int aiStack_30 [10];
  int iStack_8;
  
  piVar2 = param_1;
  piVar5 = param_2;
  piVar6 = param_2;
  if (param_1 != (int *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    if (DAT_00664988 == (int *)0x0) {
      DAT_00664988 = (int *)FUN_005b73e0();
    }
    piVar5 = param_1;
    (**(code **)(*DAT_00664988 + 0x1c))(DAT_00664988,&stack0xffffffcc,uVar3,param_1);
    piVar6 = aiStack_30;
  }
  pcVar1 = Pipeline_exref;
  piVar7 = &DAT_006648dc;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  param_1 = (int *)0x1;
  (**(code **)(**(int **)pcVar1 + 0x18))(*(int **)pcVar1,7,&param_1);
  if (iStack_8 == 0) {
    if (piVar2 == (int *)0x0) {
      aiStack_30[5] = 0x3f800000;
      aiStack_30[1] = 0x3f800000;
      aiStack_30[4] = 0;
      aiStack_30[3] = 0;
      aiStack_30[2] = 0;
      aiStack_30[0] = 0;
      aiStack_30[8] = 0;
      aiStack_30[7] = 0;
      aiStack_30[6] = 0;
      (**(code **)(**(int **)Pipeline_exref + 0x74))(*(int **)Pipeline_exref,&stack0xffffffc4);
    }
    else {
      iVar4 = **(int **)Pipeline_exref;
      uVar3 = (**(code **)(*piVar2 + 0x40))(piVar2);
      (**(code **)(iVar4 + 0x74))(*(undefined4 *)Pipeline_exref,uVar3);
    }
    (**(code **)(**(int **)Pipeline_exref + 0x6c))(*(int **)Pipeline_exref,piVar5);
    return;
  }
  (**(code **)(**(int **)Pipeline_exref + 0x7c))(*(int **)Pipeline_exref,&DAT_006648dc);
  return;
}

