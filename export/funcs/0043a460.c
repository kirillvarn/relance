
undefined4 __fastcall FUN_0043a460(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint local_c;
  int local_8;
  int local_4;
  
  local_c = *(uint *)(param_1 + 0x38);
  uVar2 = 0;
  if ((local_c & 0x3fffffff) != 0) {
    local_8 = FUN_0052c7a0(&local_c);
    if ((local_8 == *(int *)(param_1 + 0x10)) || (local_c < *(uint *)(local_8 + 0xc))) {
      local_4 = *(int *)(param_1 + 0x10);
      piVar1 = &local_4;
    }
    else {
      piVar1 = &local_8;
    }
    if (*piVar1 != *(int *)(param_1 + 0x10)) {
      return *(undefined4 *)(*(int *)(*piVar1 + 0x10) + 8);
    }
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find location id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x110,local_c);
    uVar2 = uRam00000008;
  }
  return uVar2;
}

