
void __thiscall FUN_005377c0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int *apiStack_78 [2];
  undefined4 auStack_48 [18];
  
  *(undefined4 *)(param_1 + 0xec) = param_2;
  puVar4 = (undefined4 *)(param_1 + 0xf0);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  apiStack_78[0] = *(int **)Engine_exref;
  apiStack_78[1] = (int *)param_2;
  uVar1 = (**(code **)(*apiStack_78[0] + 0xa0))();
  if (DAT_006789c0 == (int *)0x0) {
    DAT_006789c0 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_006789c0 + 0x1c))
            (DAT_006789c0,&stack0xffffff98,uVar1,(undefined4 *)(param_1 + 0xf0));
  ppiVar3 = apiStack_78;
  puVar4 = auStack_48;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *ppiVar3;
    ppiVar3 = ppiVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00410fe0(auStack_48);
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return;
}

