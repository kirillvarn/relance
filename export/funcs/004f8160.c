
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f8160(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *extraout_ECX;
  int iVar4;
  int *in_stack_00002004;
  undefined4 uVar5;
  char *pcVar6;
  
  FUN_005b7e90();
  *(byte *)(extraout_ECX + 2) = *(byte *)(extraout_ECX + 2) | 2;
  *(byte *)(extraout_ECX + 0x1f) = *(byte *)(extraout_ECX + 0x1f) & 0xef;
  if (in_stack_00002004 == (int *)0x0) {
    pcVar6 = "ParticleEffect::start_effect: archetype invalid (null archetype passed specified)";
    uVar5 = 0x37c;
  }
  else {
    iVar1 = FUN_005792b0(0x26);
    if (iVar1 == 0) {
      uVar2 = (**(code **)(*extraout_ECX + 4))();
      return uVar2 & 0xffffff00;
    }
    if (*(int *)Alchemy_exref == 0) {
      uVar2 = (**(code **)(*extraout_ECX + 4))();
      return uVar2 & 0xffffff00;
    }
    if (extraout_ECX[0x17] < 1) {
      extraout_ECX[0x17] = *in_stack_00002004;
    }
    iVar1 = FUN_004fd560(extraout_ECX[0x17]);
    if (iVar1 != 0) {
      extraout_ECX[3] = *(int *)(iVar1 + 4);
    }
    iVar1 = FUN_004fd560(extraout_ECX[0x17]);
    if (iVar1 == 0) {
      uVar5 = FUN_00402180(&stack0x00000000,"no type info specified for %s",
                           *(undefined4 *)extraout_ECX[1]);
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\space\\Effect.cpp",0x395,uVar5);
      uVar2 = (**(code **)(*extraout_ECX + 4))();
      return uVar2 & 0xffffff00;
    }
    if (((_DAT_006129c8 <= *(float *)(iVar1 + 4)) || (*(float *)(iVar1 + 8) < _DAT_006129c8)) ||
       (in_stack_00002004[4] == 0)) {
      extraout_ECX[1] = in_stack_00002004[2];
      iVar4 = *(int *)(iVar1 + 4);
    }
    else {
      extraout_ECX[1] = in_stack_00002004[4];
      iVar4 = *(int *)(iVar1 + 8);
    }
    extraout_ECX[3] = iVar4;
    if (extraout_ECX[1] != 0) {
      *(byte *)(extraout_ECX + 2) = *(byte *)(extraout_ECX + 2) & 0xfd;
      *(byte *)(extraout_ECX + 0x1f) = *(byte *)(extraout_ECX + 0x1f) | 0x10;
      extraout_ECX[0x1e] = *(int *)(iVar1 + 0x18);
      extraout_ECX[0x1d] = *(int *)(iVar1 + 0x10);
      piVar3 = (int *)(**(code **)(*extraout_ECX + 0x10))();
      if ((((char)piVar3 != '\0') && (piVar3 = (int *)extraout_ECX[0x1a], piVar3 == (int *)0x0)) &&
         ((*(byte *)(extraout_ECX + 2) & 2) == 0)) {
        iVar1 = extraout_ECX[0x17];
        piVar3 = extraout_ECX + 0x18;
        extraout_ECX[0x1a] = (int)extraout_ECX;
        if (piVar3 != (int *)0x0) {
          extraout_ECX[0x19] = (&DAT_00674ce4)[iVar1 * 3];
          *piVar3 = 0;
          if ((undefined4 *)(&DAT_00674ce4)[iVar1 * 3] == (undefined4 *)0x0) {
            (&DAT_00674ce8)[iVar1 * 3] = piVar3;
          }
          else {
            *(undefined4 *)(&DAT_00674ce4)[iVar1 * 3] = piVar3;
          }
          (&DAT_00674ce4)[iVar1 * 3] = piVar3;
          (&DAT_00674ce0)[iVar1 * 3] = (&DAT_00674ce0)[iVar1 * 3] + 1;
        }
        extraout_ECX[0x16] = extraout_ECX[0x16] + 1;
      }
      return CONCAT31((int3)((uint)piVar3 >> 8),*(byte *)(extraout_ECX + 0x1f) >> 4) & 0xffffff01;
    }
    pcVar6 = "ParticleEffect::start_effect: archetype invalid (no visarch specified)";
    uVar5 = 0x3b0;
  }
  (**(code **)FDUMP_exref)
            (0x100002,"%s(%d) : *** WARNING: %s",
             "E:\\FL\\Scratch\\Source\\Client\\space\\Effect.cpp",uVar5,pcVar6);
  uVar2 = (**(code **)(*extraout_ECX + 4))();
  return uVar2 & 0xffffff00;
}

