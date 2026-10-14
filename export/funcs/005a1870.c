
int __thiscall
FUN_005a1870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_14 = (float)param_6;
  local_10 = (float)param_7;
  local_18 = param_5;
  local_c = (float)param_8;
  local_1c = param_4;
  local_8 = 0x3f800000;
  local_4 = (undefined1)param_9;
  iVar1 = FUN_0059db20(param_2,"UICycle",param_1,&local_1c);
  if (iVar1 != 0) {
    FUN_005972d0(param_3);
    FUN_00595db0(0);
    FUN_00597550(param_9);
  }
  return iVar1;
}

