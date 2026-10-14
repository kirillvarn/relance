
int * FUN_00402580(undefined4 **param_1,undefined4 **param_2,int param_3)

{
  undefined4 **ppuVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 **ppuVar4;
  undefined4 **unaff_EBP;
  undefined4 **ppuVar5;
  undefined4 **ppuStack_3c;
  undefined4 **ppuStack_38;
  int *piStack_34;
  undefined4 **ppuStack_30;
  undefined4 ***pppuStack_2c;
  undefined4 local_14;
  undefined4 **ppuStack_10;
  undefined4 uStack_c;
  undefined4 *apuStack_8 [2];
  
  ppuVar4 = param_2;
  ppuVar1 = param_1;
  piVar2 = (int *)0x0;
  if (param_1 != (undefined4 **)0xffffffff) {
    if (param_3 != 0) {
      piStack_34 = *(int **)Renderer_exref;
      pppuStack_2c = (undefined4 ***)&local_14;
      ppuStack_30 = param_1;
      ppuStack_38 = (undefined4 **)0x4025bb;
      iVar3 = (**(code **)(*piStack_34 + 0x24))();
      if (-1 < iVar3) {
        pppuStack_2c = &ppuStack_10;
        ppuStack_30 = apuStack_8;
        ppuStack_10 = ppuVar1;
        uStack_c = 0;
        piStack_34 = (int *)0x4025dc;
        FUN_00402790();
        apuStack_8[0][4] = local_14;
      }
    }
    param_1 = (undefined4 **)0x0;
    piStack_34 = *(int **)Renderer_exref;
    pppuStack_2c = &param_1;
    ppuStack_30 = ppuVar1;
    ppuStack_38 = (undefined4 **)0x402603;
    (**(code **)(*piStack_34 + 0x20))();
    ppuVar5 = (undefined4 **)0x0;
    if (0 < (int)apuStack_8[0]) {
      ppuVar5 = (undefined4 **)((int)apuStack_8[0] + -1);
    }
    ppuStack_38 = ppuVar4;
    if ((int)ppuVar5 < (int)ppuVar4) {
      ppuStack_38 = ppuVar5;
    }
    piVar2 = *(int **)Renderer_exref;
    ppuStack_3c = ppuVar1;
    (**(code **)(*piVar2 + 0x28))();
    if (0 < (int)ppuVar5) {
      ppuStack_30 = ppuVar5;
    }
    ppuVar5 = (undefined4 **)
              (**(code **)(**(int **)Engine_exref + 0xd8))
                        (*(int **)Engine_exref,ppuVar1,0,0xffffffff);
    while (ppuVar5 != (undefined4 **)0xffffffff) {
      if ((unaff_EBX != 0) &&
         (iVar3 = (**(code **)(**(int **)Renderer_exref + 0x24))
                            (*(int **)Renderer_exref,ppuVar5,&ppuStack_3c), -1 < iVar3)) {
        piStack_34 = (int *)0x0;
        ppuStack_38 = ppuVar5;
        FUN_00402790(&ppuStack_30,&ppuStack_38);
        ppuStack_30[4] = ppuStack_3c;
      }
      (**(code **)(**(int **)Renderer_exref + 0x20))
                (*(int **)Renderer_exref,ppuVar5,&stack0xffffffdc);
      iVar3 = 0;
      if (0 < (int)ppuStack_30) {
        iVar3 = (int)ppuStack_30 + -1;
      }
      if (iVar3 + 1 < (int)pppuStack_2c) {
        ppuVar4 = (undefined4 **)(iVar3 + 1);
      }
      (**(code **)(**(int **)Renderer_exref + 0x28))(*(int **)Renderer_exref,ppuVar5,ppuVar4);
      ppuVar5 = (undefined4 **)
                (**(code **)(**(int **)Engine_exref + 0xd8))
                          (*(int **)Engine_exref,ppuVar1,0,ppuVar5);
      ppuVar4 = unaff_EBP;
    }
  }
  return piVar2;
}

