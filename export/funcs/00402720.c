
void FUN_00402720(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_2;
  piVar1 = *(int **)(param_2 + 4);
  piVar2 = (int *)*piVar1;
  while (piVar1 != piVar2) {
    uVar3 = piVar2[3];
    iVar6 = piVar2[4];
    param_2 = 0;
    (**(code **)(**(int **)Renderer_exref + 0x20))(*(int **)Renderer_exref,uVar3,&param_2);
    iVar5 = 0;
    if (0 < (int)piVar2) {
      iVar5 = (int)piVar2 + -1;
    }
    if (iVar5 < iVar6) {
      iVar6 = iVar5;
    }
    (**(code **)(**(int **)Renderer_exref + 0x28))(*(int **)Renderer_exref,uVar3,iVar6);
    FUN_0052afa0();
    piVar1 = *(int **)(iVar4 + 4);
  }
  return;
}

