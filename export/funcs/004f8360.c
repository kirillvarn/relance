
undefined1 __fastcall FUN_004f8360(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uStack_28;
  int iStack_24;
  int *piStack_20;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  undefined4 local_8;
  char *local_4;
  
  if ((*(byte *)(param_1 + 0x7c) & 4) != 0) {
    return 1;
  }
  if ((*(byte *)(param_1 + 0x7c) & 0x10) == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0x70);
  local_8 = 8;
  local_4 = "FxNode";
  piStack_20 = *(int **)Dacom_exref;
  puStack_1c = &local_8;
  iStack_24 = 0x4f83a8;
  puStack_18 = puVar1;
  iVar2 = (**(code **)(*piStack_20 + 0xc))();
  if (iVar2 != 0) {
    iStack_24 = **(undefined4 **)(param_1 + 4);
    uStack_28 = 0x3dc;
    (**(code **)FDUMP_exref)
              (0x100002,
               "%s(%d) : *** WARNING: ParticleEffect::start_effect: couldnt create ale.tree for %s",
               "E:\\FL\\Scratch\\Source\\Client\\space\\Effect.cpp");
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xef;
    return 0;
  }
  iStack_24 = 0x4f83e6;
  FUN_0042e080();
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 8;
  piVar4 = *(int **)FxEffectLibrary_exref;
  iStack_24 = param_1 + 0x6c;
  uStack_28 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  iVar2 = (**(code **)(*piVar4 + 0x18))(piVar4,*puVar1);
  if (iVar2 != 0) {
    if (iVar2 == -8) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: could not find alchemy effect (%s) in file (%s)",
                 "E:\\FL\\Scratch\\Source\\Client\\space\\Effect.cpp",0x3eb,
                 **(undefined4 **)(param_1 + 4),(*(undefined4 **)(param_1 + 4))[2]);
      return 0;
    }
    (**(code **)FDUMP_exref)
              (0x100001,
               "%s(%d) : *** ERROR: ParticleEffect::start_effect: couldnt create ale.eff (%s) in file (%s) ... Effect is most likely corrupted"
               ,"E:\\FL\\Scratch\\Source\\Client\\space\\Effect.cpp",0x3f0,
               **(undefined4 **)(param_1 + 4),(*(undefined4 **)(param_1 + 4))[2]);
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xef;
    return 0;
  }
  uStack_28 = 0;
  (**(code **)(**(int **)Alchemy_exref + 100))(*(int **)Alchemy_exref,&uStack_28);
  piVar3 = (int *)*puVar1;
  (**(code **)(**(int **)Alchemy_exref + 0x50))(*(int **)Alchemy_exref,piVar4);
  (**(code **)(*piVar3 + 8))(piVar3);
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 4;
  return 1;
}

