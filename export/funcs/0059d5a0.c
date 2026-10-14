
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059d5a0(int param_1,int param_2)

{
  int iVar1;
  char **ppcVar2;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  char *local_3c;
  char *local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_18;
  undefined4 local_10;
  void *pvStack_c;
  int *piStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  piStack_8 = (int *)&LAB_005c4e58;
  pvStack_c = ExceptionList;
  local_48 = param_1 + -1;
  local_44 = param_2 + -1;
  local_50 = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_0040fd60(&local_50);
  FUN_0040fb60(DAT_005c891c,DAT_005c8920);
  FUN_0040f8c0(0x41d9ba5e);
  FUN_0041e5c0();
  FUN_005a2970();
  local_3c = "FileSystem";
  ppcVar2 = local_38;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppcVar2 = (char *)0x0;
    ppcVar2 = ppcVar2 + 1;
  }
  local_38[2] = (char *)0x80000000;
  local_38[3] = (char *)0x1;
  local_24 = 3;
  local_20 = 0x8000080;
  local_38[1] = "interface\\interface.generic.vms";
  local_40 = 0x34;
  local_10 = 0xffffffff;
  param_1 = 0;
  local_4 = 0;
  iVar1 = (**(code **)(**(int **)Data_exref + 0xc))(*(int **)Data_exref,&local_40,&param_1);
  if (-1 < iVar1) {
    _DAT_0067dbc8 = FUN_0041ade0(piStack_8,local_40,1,0xffffffff);
  }
  local_10 = 0xffffffff;
  if (piStack_8 != (int *)0x0) {
    (**(code **)(*piStack_8 + 8))(piStack_8);
  }
  ExceptionList = pvStack_18;
  return;
}

