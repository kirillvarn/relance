
undefined4 __fastcall FUN_0043b630(int param_1)

{
  int *piVar1;
  uint local_c;
  int local_8;
  int local_4;
  
  local_c = *(uint *)(param_1 + 0x34);
  local_8 = FUN_0052c7a0(&local_c);
  if ((local_8 == *(int *)(param_1 + 0x24)) || (local_c < *(uint *)(local_8 + 0xc))) {
    local_4 = *(int *)(param_1 + 0x24);
    piVar1 = &local_4;
  }
  else {
    piVar1 = &local_8;
  }
  if (*piVar1 != *(int *)(param_1 + 0x24)) {
    return **(undefined4 **)(*piVar1 + 0x10);
  }
  (**(code **)FDUMP_exref)
            (0x100001,"%s(%d) : *** ERROR: Could not find base id %d\n",
             "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x100,local_c);
  return uRam00000000;
}

