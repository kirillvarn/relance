
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_004bb270(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0xbf041893;
  local_8 = 0x3e83126f;
  local_4 = 0;
  iVar2 = FUN_005a0e30("MissionObjectiveText","MissionObjective",&local_c,0,0x3f82f1aa,0x3cf5c28f,
                       0x40000000,0,1,0,1);
  param_1[0xcf] = iVar2;
  iVar2 = *(int *)(iVar2 + 0x334);
  if (*(char *)(iVar2 + 0x30) != '\x01') {
    *(undefined1 *)(iVar2 + 0x30) = 1;
    *(undefined4 *)(iVar2 + 0x28) = 0;
  }
  if ((*DAT_00672328 == -8) || (*(int *)(*DAT_00672328 + 0xc) != 0x3d3)) {
    FUN_005645c0(0xf);
  }
  if (_DAT_005c75e0 < _DAT_00672408) {
    iVar2 = FUN_0059da10("MissionLogMoveFromNNWindow");
    if (iVar2 == 0) {
      FUN_0059db20("MissionLogMoveFromNNWindow","MissionLogMoveFromNNWindow",0,0);
    }
  }
  local_c = 0;
  local_8 = 0;
  local_4 = 0xbf800000;
  (**(code **)(*param_1 + 0x7c))(0,0,0xbf800000);
  cVar1 = FUN_004b5060(local_8,local_4);
  return cVar1 != '\0';
}

