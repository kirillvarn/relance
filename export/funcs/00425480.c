
void FUN_00425480(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  int *unaff_EBP;
  int unaff_ESI;
  int iVar4;
  int iStack_20;
  int *piStack_1c;
  int *piStack_18;
  undefined4 *puStack_14;
  undefined4 local_4;
  
  puStack_14 = &local_4;
  local_4 = 0;
  piStack_1c = *(int **)Renderer_exref;
  piStack_18 = param_1;
  iStack_20 = 0x4254a1;
  (**(code **)(*piStack_1c + 0x20))();
  iVar4 = 0;
  if (0 < unaff_ESI) {
    do {
      iStack_20 = (unaff_ESI - iVar4) + -1;
      (**(code **)(**(int **)Renderer_exref + 0x28))();
      puStack_14 = (undefined4 *)0x0;
      iVar2 = (**(code **)(**(int **)Engine_exref + 0x78))(*(int **)Engine_exref,param_1);
      if (-1 < iVar2) {
        (**(code **)(*unaff_EBX + 0xc))();
        (**(code **)(*unaff_EBP + 8))();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < unaff_ESI);
  }
  piVar1 = *(int **)Engine_exref;
  iStack_20 = -1;
  for (iVar4 = (**(code **)(*piVar1 + 0xd8))(); iVar4 != -1;
      iVar4 = (**(code **)(**(int **)Engine_exref + 0xd8))(*(int **)Engine_exref,param_1,1,iVar4)) {
    iStack_20 = 0;
    (**(code **)(**(int **)Renderer_exref + 0x20))(*(int **)Renderer_exref,iVar4,&iStack_20);
    iVar2 = 0;
    if (0 < (int)piVar1) {
      do {
        (**(code **)(**(int **)Renderer_exref + 0x28))
                  (*(int **)Renderer_exref,iVar4,(int)piVar1 + (-1 - iVar2));
        iVar3 = (**(code **)(**(int **)Engine_exref + 0x78))
                          (*(int **)Engine_exref,iVar4,"1.11_IMatHookUp",&stack0xffffffd0);
        if (-1 < iVar3) {
          (**(code **)(iRam00000001 + 0xc))(1);
          (**(code **)(*param_1 + 8))(param_1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)piVar1);
    }
  }
  return;
}

