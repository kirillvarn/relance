
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00443920(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int aiStack_28 [10];
  
  *(char *)(param_1 + 0xd) = (char)param_2[0xd];
  (**(code **)(*param_1 + 0xc))((float)param_2[0xe] - _DAT_005cb908);
  iVar1 = *(int *)(*param_2 + 4);
  iVar2 = FUN_0041c540(*(undefined4 *)(*param_2 + 0xc),*(undefined4 *)Data_exref,0,0,iVar1 + 0x20,
                       param_1 + 8,&stack0xffffffc8);
  param_1[0xc] = iVar2;
  if (iVar2 != -1) {
    iStack_34 = param_2[1];
    iStack_30 = param_2[2];
    iStack_2c = param_2[3];
    piVar4 = param_2 + 4;
    piVar5 = aiStack_28;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    FUN_00448c40(iVar2,&iStack_34);
    *(bool *)((int)param_1 + 0x13) = **(char **)(iVar1 + 0x10) != '\0';
    FUN_00457f10(param_1[0xc]);
    FUN_004581b0(param_2[0xf]);
  }
  *(undefined1 *)((int)param_1 + 0x15) = 3;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  param_1[6] = 0;
  FUN_005595a0(iVar1,0xffffffff);
  return;
}

