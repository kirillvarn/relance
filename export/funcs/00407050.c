
void __thiscall FUN_00407050(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  
  piVar1 = (int *)(param_1 + 4);
  FUN_00402500(piVar1,*(undefined4 *)(param_2 + 4));
  if (*(float *)(param_2 + 8) != *(float *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
    return;
  }
  bVar2 = Archetype::Root::is_loaded(*(Root **)(param_1 + 0x14));
  if (!bVar2) {
    return;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
  if (iVar3 != 3) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
    param_2 = 0;
    if (iVar3 != 2) goto LAB_004070bf;
  }
  param_2 = 1;
LAB_004070bf:
  if (*piVar1 != 0) {
    fVar4 = (float10)FUN_004022f0(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x40),*piVar1,0,param_2
                                 );
    *(float *)(param_1 + 0xc) = (float)fVar4;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
  return;
}

