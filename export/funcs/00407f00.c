
void __thiscall FUN_00407f00(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float10 fVar5;
  
  iVar2 = param_2;
  piVar1 = (int *)(param_1 + 4);
  FUN_00402500(piVar1,*(undefined4 *)(param_2 + 4));
  if (*(float *)(param_2 + 8) != *(float *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
    goto LAB_00407f94;
  }
  bVar3 = Archetype::Root::is_loaded(*(Root **)(param_1 + 0x14));
  if (!bVar3) goto LAB_00407f94;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
  if (iVar4 == 3) {
LAB_00407f66:
    param_2 = 1;
  }
  else {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
    param_2 = 0;
    if (iVar4 == 2) goto LAB_00407f66;
  }
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
  }
  else {
    fVar5 = (float10)FUN_004022f0(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x40),*piVar1,0,param_2
                                 );
    *(float *)(param_1 + 0xc) = (float)fVar5;
  }
LAB_00407f94:
  if (*(float *)(iVar2 + 0x54) != *(float *)(param_1 + 0x54)) {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  }
  if (*(int *)(iVar2 + 0x58) != *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58);
  }
  return;
}

