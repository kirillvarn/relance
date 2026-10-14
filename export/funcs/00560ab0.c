
bool __thiscall FUN_00560ab0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 unaff_retaddr;
  int *local_4;
  
  iVar6 = -1;
  local_4 = (int *)0xffffffff;
  if (*param_1 != 0) {
    (**(code **)(**(int **)Deform_exref + 0x48))(*(int **)Deform_exref,*param_1,&local_4);
  }
  piVar1 = (int *)(**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref,local_4);
  piVar7 = param_1 + 0x9a;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar7 = piVar7 + 1;
  }
  if ((local_4 != (int *)0x0) && ((char)*local_4 != '\0')) {
    iVar6 = 0;
    piVar1 = param_1 + 0x95;
    do {
      iVar3 = iVar6;
      if (*piVar1 == -1) break;
      iVar6 = iVar6 + 1;
      piVar1 = piVar1 + 1;
      iVar3 = -1;
    } while (iVar6 < 4);
    uVar4 = 0xffffffff;
    piVar1 = local_4;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      iVar6 = *piVar1;
      piVar1 = (int *)((int)piVar1 + 1);
    } while ((char)iVar6 != '\0');
    uVar4 = ~uVar4 - 1;
    if (0x7f < uVar4) {
      uVar4 = 0x7f;
    }
    piVar1 = local_4;
    piVar7 = param_1 + iVar3 * 0x21 + 0x12;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar7 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar7 = piVar7 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)piVar7 = (char)*piVar1;
      piVar1 = (int *)((int)piVar1 + 1);
      piVar7 = (int *)((int)piVar7 + 1);
    }
    *(undefined1 *)((int)param_1 + uVar4 + 0x48 + iVar3 * 0x84) = 0;
    param_1[iVar3 * 0x21 + 0x11] = uVar4;
    piVar1 = param_1 + iVar3 * 0x21 + 0x12;
    FUN_004356c0(piVar1);
    uVar2 = FUN_00434e90(piVar1);
    piVar1 = local_4;
    iVar6 = (**(code **)(**(int **)Deform_exref + 0x1c))
                      (*(int **)Deform_exref,*param_1,param_1 + iVar3 + 0x95,uVar2,local_4,
                       unaff_retaddr,param_2,param_3,0x3f800000,param_4,0xbf800000,0);
    if (iVar6 != 0) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: failed to play character animation \'%s\'\n",
                 "cmn\\EngineCharacter.h",0x1f7,piVar1);
    }
  }
  return iVar6 == 0;
}

