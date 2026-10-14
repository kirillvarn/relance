
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00508e00(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x2c0) != '\0') {
    fVar1 = ((*(float *)(param_1 + 0x2ac) - *(float *)(param_1 + 0x29c)) * (float)_DAT_005db0a8) /
            *(float *)(param_1 + 0x298);
    if (fVar1 < _DAT_005c7474) {
      fVar1 = _DAT_005c7474;
    }
    FUN_00422440(param_1 + 0x2a0,*(undefined4 *)(param_1 + 0x2ac),
                 (fVar1 + (float)_DAT_005c89b8) * *(float *)(param_1 + 0x298) +
                 *(float *)(param_1 + 0x2ac));
    (**(code **)(**(int **)MaterialBatcher_exref + 0x20))
              (*(int **)MaterialBatcher_exref,1,0xffffffff);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x89,0);
    FUN_00422190(0);
    FUN_00421ed0(0xb71);
    FUN_004101e0();
    uVar2 = 0xffffffff;
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x8b,0xffffffff);
    FUN_00507ed0(uVar2);
    (**(code **)(**(int **)MaterialBatcher_exref + 0x20))(*(int **)MaterialBatcher_exref,1,1);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x89,1);
    FUN_00422190(1);
    FUN_00421dd0(0xb71);
    FUN_00421ed0(0xb60);
  }
  return;
}

