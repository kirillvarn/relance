
void FUN_00422950(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  int *piStack_50;
  float fStack_4c;
  int *piStack_48;
  float fStack_44;
  int *piStack_40;
  int iStack_1c;
  undefined4 auStack_10 [4];
  
  piStack_40 = param_1;
  fStack_44 = 6.075985e-39;
  fVar6 = (float10)(**(code **)(*param_1 + 0x24))();
  fStack_44 = (float)fVar6;
  piStack_48 = param_1;
  fStack_4c = 6.076e-39;
  fVar6 = (float10)(**(code **)(*param_1 + 0x20))();
  fStack_4c = (float)fVar6;
  piStack_50 = param_1;
  fVar6 = (float10)(**(code **)(*param_1 + 0x28))();
  fVar6 = (float10)(**(code **)(*param_1 + 0x1c))(param_1,(float)fVar6);
  FUN_00422820((float)fVar6);
  piStack_50 = param_1;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x40))();
  pcVar1 = Pipeline_exref;
  puVar4 = puVar2;
  puVar5 = &DAT_006648dc;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auStack_10[0] = 1;
  (**(code **)(**(int **)pcVar1 + 0x18))(*(int **)pcVar1,7,auStack_10);
  if (iStack_1c != 0) {
    (**(code **)(**(int **)Pipeline_exref + 0x7c))(*(int **)Pipeline_exref,&DAT_006648dc);
    return;
  }
  piStack_40 = (int *)0x3f800000;
  piStack_50 = (int *)0x3f800000;
  fStack_44 = 0.0;
  piStack_48 = (int *)0x0;
  fStack_4c = 0.0;
  (**(code **)(**(int **)Pipeline_exref + 0x74))(*(int **)Pipeline_exref,&piStack_50);
  (**(code **)(**(int **)Pipeline_exref + 0x6c))(*(int **)Pipeline_exref,puVar2);
  return;
}

