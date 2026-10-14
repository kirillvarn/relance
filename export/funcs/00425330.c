
void FUN_00425330(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piStack_1c;
  undefined1 *puStack_18;
  int *piStack_14;
  int *piStack_10;
  
  piStack_14 = *(int **)Engine_exref;
  piStack_10 = param_1;
  puStack_18 = (undefined1 *)0x425345;
  iVar1 = (**(code **)(*piStack_14 + 0x4c))();
  if (iVar1 == 0) {
    puStack_18 = &stack0xfffffff4;
    piStack_1c = param_1;
    (**(code **)(**(int **)Renderer_exref + 0x2c))(*(int **)Renderer_exref);
    iVar1 = 0;
    if (0 < (int)puStack_18) {
      do {
        (**(code **)(**(int **)Renderer_exref + 0x34))
                  (*(int **)Renderer_exref,param_1,puStack_18 + (-1 - iVar1));
        piStack_1c = (int *)0x0;
        iVar2 = (**(code **)(**(int **)Engine_exref + 0x48))
                          (*(int **)Engine_exref,param_1,"1.11_IMatHookUp",&piStack_1c);
        if (-1 < iVar2) {
          (**(code **)(*piStack_10 + 0xc))(piStack_10);
          (**(code **)(*piStack_14 + 8))(piStack_14);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)puStack_18);
    }
    return;
  }
  puStack_18 = (undefined1 *)0x0;
  piStack_1c = (int *)&LAB_004253f0;
  (**(code **)(**(int **)Engine_exref + 0x54))(*(int **)Engine_exref,param_1);
  return;
}

