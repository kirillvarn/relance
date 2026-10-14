
void __fastcall FUN_004cba60(int *param_1)

{
  int *piVar1;
  undefined4 unaff_ESI;
  int iVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  undefined4 local_4;
  
  iStack_18 = *param_1;
  if (iStack_18 != 0) {
    puStack_14 = &local_4;
    local_4 = 0xffffffff;
    piStack_1c = *(int **)Deform_exref;
    uStack_20 = 0x4cba98;
    (**(code **)(*piStack_1c + 0x48))();
    (**(code **)(**(int **)Anim_exref + 0x6c))(*(int **)Anim_exref);
    puStack_14 = (undefined4 *)0xffffffff;
    if (*param_1 != 0) {
      (**(code **)(**(int **)Deform_exref + 0x48))(*(int **)Deform_exref,*param_1,&puStack_14);
    }
    iVar2 = 0;
    (**(code **)(**(int **)Engine_exref + 0x6c))(*(int **)Engine_exref,puStack_14,0,unaff_ESI);
    uStack_24 = 0;
    (**(code **)(**(int **)Deform_exref + 0x68))(*(int **)Deform_exref,*param_1,&uStack_24);
    if (iVar2 == 0) {
      piVar1 = param_1 + 0x95;
      param_1 = param_1 + 0x11;
      iVar2 = 4;
      do {
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        *piVar1 = -1;
        piVar1 = piVar1 + 1;
        param_1 = param_1 + 0x21;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

