
undefined4 __thiscall FUN_00439610(int param_1,uint param_2)

{
  int *piVar1;
  int local_8;
  int local_4;
  
  local_8 = FUN_0052c7a0(&param_2);
  if ((local_8 == *(int *)(param_1 + 0x10)) || (param_2 < *(uint *)(local_8 + 0xc))) {
    local_4 = *(int *)(param_1 + 0x10);
    piVar1 = &local_4;
  }
  else {
    piVar1 = &local_8;
  }
  if (*piVar1 != *(int *)(param_1 + 0x10)) {
    return *(undefined4 *)(*piVar1 + 0x10);
  }
  (**(code **)FDUMP_exref)
            (0x100001,"%s(%d) : *** ERROR: Could not find location id %d\n",
             "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x110,param_2);
  return 0;
}

