
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048a380(FmtStr *param_1,FmtStr *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  FmtStr::operator=((FmtStr *)&DAT_00671f80,param_1);
  _DAT_00671f7c = param_3;
  if (DAT_0066d3f0 != 0) {
    FUN_0045cef0();
  }
  piVar3 = DAT_00671ff4;
  if (DAT_00671ff4 != (int *)0x0) {
    DAT_0067dcc8 = 0;
    iVar2 = DAT_00671ff4[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar1;
    }
    (**(code **)(*piVar3 + 0x28))();
    (**(code **)*piVar3)(1);
  }
  FmtStr::operator=((FmtStr *)&DAT_00671f98,param_2);
  DAT_00671ff8 = 6;
  FUN_0059db20("NeuroNetMissionMessage","NeuroNetMissionMessage",0,0);
  return;
}

