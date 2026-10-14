
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004f8a20(int *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_60 [10];
  undefined1 auStack_38 [8];
  int aiStack_30 [7];
  undefined4 uStack_14;
  
  iVar2 = FUN_005792b0(0x26);
  if (iVar2 == 0) {
    return 0;
  }
  cVar1 = FUN_0042d740();
  if (cVar1 != '\0') {
    return 1;
  }
  if ((*(byte *)(param_1 + 0x1f) & 0x10) != 0) {
    if (_DAT_005c7474 < (float)param_1[0x1e]) {
      param_2 = (float)param_1[0x1e] - param_2;
      param_1[0x1e] = (int)param_2;
      if (param_2 < _DAT_005c7474 != (param_2 == _DAT_005c7474)) goto LAB_004f8a92;
    }
    if ((*(byte *)(param_1 + 0x1f) & 4) != 0) {
      cVar1 = (**(code **)(*(int *)param_1[0x1b] + 0x2c))((int *)param_1[0x1b],4);
      if (cVar1 != '\0') goto LAB_004f8a92;
    }
    iVar2 = FUN_004fd560(param_1[0x17]);
    if (iVar2 == 0) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\space\\Effect.cpp",0x4c8,
                 "effect shouldnt have gotten created w/o type info");
      return 0;
    }
    if ((*(char *)(iVar2 + 0x15) == '\0') && ((*(byte *)(param_1 + 0x1f) & 1) == 0)) {
      return 0;
    }
    cVar1 = FUN_004f8360();
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 4))();
      return 0;
    }
    if (param_1[0x1b] != 0) {
      if (((param_1[0x11] == 0) || (param_1[0x11] == 8)) || (param_1[0x10] == -1)) {
        piVar5 = param_1 + 4;
      }
      else {
        uVar3 = (**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref,param_1[0x10]);
        if (DAT_00674f50 == (int *)0x0) {
          DAT_00674f50 = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_00674f50 + 0x1c))(DAT_00674f50,auStack_38,uVar3,param_1 + 4);
        piVar5 = aiStack_30;
      }
      iVar2 = *param_1;
      piVar6 = aiStack_60;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      (**(code **)(iVar2 + 0x24))(param_1[0x20]);
      (**(code **)(*(int *)param_1[0x1b] + 0xc))((int *)param_1[0x1b],0,&stack0xffffff9c);
      (**(code **)(*(int *)param_1[0x1b] + 0x1c))((int *)param_1[0x1b],0);
      (**(code **)(*(int *)param_1[0x1b] + 0x20))((int *)param_1[0x1b],uStack_14);
    }
    return 1;
  }
LAB_004f8a92:
  FUN_004f7af0();
  FUN_004f7db0();
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
  return 0;
}

