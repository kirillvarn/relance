
void __fastcall FUN_00452e40(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int **ppiVar4;
  undefined4 *puVar5;
  int *apiStack_40 [2];
  undefined4 *puStack_c;
  
  apiStack_40[1] = (int *)0x452e4d;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x18))();
  apiStack_40[0] = *(int **)Engine_exref;
  apiStack_40[1] = (int *)uVar1;
  (**(code **)(*apiStack_40[0] + 0x90))();
  puVar2 = (undefined4 *)(**(code **)(**(int **)Engine_exref + 0x98))(*(int **)Engine_exref,uVar1);
  puVar5 = (undefined4 *)&stack0xffffffcc;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  ppiVar4 = apiStack_40;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puStack_c = *ppiVar4;
    ppiVar4 = ppiVar4 + 1;
    puStack_c = puStack_c + 1;
  }
  return;
}

