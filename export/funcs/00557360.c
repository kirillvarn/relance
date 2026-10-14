
undefined1 __thiscall FUN_00557360(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  int *unaff_EBX;
  int *piVar3;
  undefined4 **ppuVar4;
  int *piVar5;
  undefined4 *puStack_24;
  undefined4 local_14;
  int *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005c14f8;
  local_c = ExceptionList;
  if (*(int *)Alchemy_exref == 0) {
    return 0;
  }
  uVar2 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = param_2;
  puStack_24 = (undefined4 *)0x5573a8;
  FUN_0042e080();
  param_2 = 0;
  local_14 = 8;
  local_10 = (int *)0x5d9d0c;
  piVar5 = *(int **)Dacom_exref;
  puStack_24 = &param_2;
  local_4 = 0;
  iVar1 = (**(code **)(*piVar5 + 0xc))(piVar5,&local_14);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)FxEffectLibrary_exref + 0x18))
                      (*(int **)FxEffectLibrary_exref,puStack_8,
                       *(undefined4 *)(*(int *)(param_1 + 4) + 4),param_1);
    if (iVar1 == 0) {
      ppuVar4 = &puStack_24;
      (**(code **)(**(int **)Alchemy_exref + 100))(*(int **)Alchemy_exref);
      piVar3 = local_10;
      (**(code **)(**(int **)Alchemy_exref + 0x50))(*(int **)Alchemy_exref,piVar5);
      (**(code **)(*piVar3 + 8))(piVar3);
      uVar2 = 1;
      goto LAB_0055746f;
    }
  }
  ppuVar4 = (undefined4 **)**(int **)(param_1 + 4);
  (**(code **)FDUMP_exref)
            (0x100001,"%s(%d) : *** ERROR: ParticleEffect could not create Alchemy effect (%s)\n",
             "E:\\FL\\Scratch\\Source\\Client\\supt\\LightsCamera.cpp",0x215);
  FUN_0042e160();
  *(undefined4 *)(param_1 + 4) = 0;
LAB_0055746f:
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  ExceptionList = ppuVar4;
  return uVar2;
}

