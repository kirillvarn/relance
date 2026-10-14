
void FUN_00434670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  uint uVar1;
  undefined4 local_4;
  
  local_4 = 0;
  FUN_00433f40(param_1,param_2,param_3,&local_4,0,param_5,0,param_6);
  uVar1 = param_6 | 0x8100;
  if ((char)param_3 == '\0') {
    uVar1 = param_6 | 0xa100;
  }
  FUN_00434310(param_1,param_2,1,uVar1,param_4,1,param_5);
  return;
}

