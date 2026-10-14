
undefined4 __fastcall FUN_0059f0d0(int param_1)

{
  undefined4 uVar1;
  undefined4 unaff_ESI;
  
  if (*(int *)(param_1 + 4) != -1) {
    uVar1 = (**(code **)(**(int **)Engine_exref + 100))(*(int **)Engine_exref,*(int *)(param_1 + 4))
    ;
    (**(code **)(**(int **)Renderer_exref + 0x10))
              (*(int **)Renderer_exref,uVar1,0x3f800000,unaff_ESI);
    (**(code **)(**(int **)Engine_exref + 0x3c))(*(int **)Engine_exref,uVar1);
    return 1;
  }
  return 0;
}

