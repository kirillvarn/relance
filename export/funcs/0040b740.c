
void __thiscall FUN_0040b740(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  float10 fVar6;
  
  iVar3 = param_2;
  piVar1 = (int *)(param_1 + 4);
  FUN_00402500(piVar1,*(undefined4 *)(param_2 + 4));
  if (*(float *)(param_2 + 8) != *(float *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  }
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
    goto LAB_0040b7d4;
  }
  bVar4 = Archetype::Root::is_loaded(*(Root **)(param_1 + 0x14));
  if (!bVar4) goto LAB_0040b7d4;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
  if (iVar5 == 3) {
LAB_0040b7a6:
    param_2 = 1;
  }
  else {
    iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
    param_2 = 0;
    if (iVar5 == 2) goto LAB_0040b7a6;
  }
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
  }
  else {
    fVar6 = (float10)FUN_004022f0(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x40),*piVar1,0,param_2
                                 );
    *(float *)(param_1 + 0xc) = (float)fVar6;
  }
LAB_0040b7d4:
  iVar5 = *(int *)(iVar3 + 0x54);
  if (iVar5 != *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = iVar5;
  }
  cVar2 = *(char *)(iVar3 + 0x58);
  if (cVar2 != *(char *)(param_1 + 0x58)) {
    *(char *)(param_1 + 0x58) = cVar2;
  }
  return;
}

