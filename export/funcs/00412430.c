
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412430(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  int local_10;
  int local_c;
  
  fVar5 = DAT_006105a8;
  if ((float)_DAT_005c8ba8 < DAT_006105a8) {
    FUN_004225e0();
    FUN_00422610(0,"E:\\FL\\Scratch\\Source\\Client\\cmn\\FadeToBlack.cpp",0xb4);
    if (fVar5 < _DAT_005c8b70) {
      FUN_00421dd0(0xbe2);
      FUN_004220c0(5,6);
    }
    else {
      FUN_00421ed0();
    }
    FUN_00421ed0(0xb44);
    FUN_00421ed0(0xb71);
    FUN_00422190(0);
    if (param_1 == (int *)0x0) {
      param_1 = (int *)0x0;
      local_10 = 0;
      local_c = DAT_00610854;
      iVar7 = DAT_00610850;
    }
    else {
      piVar6 = (int *)(**(code **)(*param_1 + 0x14))(param_1);
      param_1 = (int *)*piVar6;
      local_10 = piVar6[1];
      local_c = piVar6[3];
      iVar7 = piVar6[2];
    }
    fVar1 = (float)(int)param_1 - _DAT_005c75e0;
    fVar2 = (float)iVar7 + _DAT_005c75e0;
    fVar3 = (float)local_10 - _DAT_005c75e0;
    fVar4 = (float)local_c + _DAT_005c75e0;
    FUN_00421bd0(DAT_006164f0,DAT_006164f4,DAT_006164f8,fVar5);
    FUN_00421670(8);
    FUN_00421cc0(fVar1,fVar3,0);
    FUN_00421cc0(fVar2,fVar3,0);
    FUN_00421cc0(fVar2,fVar4,0);
    FUN_00421cc0(fVar1,fVar4,0);
    FUN_00421690();
    FUN_00421dd0(0xb71);
    FUN_00422190();
    return;
  }
  return;
}

