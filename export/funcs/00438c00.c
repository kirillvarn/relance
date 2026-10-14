
undefined4 FUN_00438c00(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint local_c;
  int local_8;
  int local_4;
  
  uVar2 = 0;
  if ((DAT_00668740 & 0x3fffffff) != 0) {
    local_c = DAT_00668740;
    local_8 = FUN_0052c7a0(&local_c);
    if ((local_8 == DAT_00668718) || (local_c < *(uint *)(local_8 + 0xc))) {
      local_4 = DAT_00668718;
      piVar1 = &local_4;
    }
    else {
      piVar1 = &local_8;
    }
    if (*piVar1 != DAT_00668718) {
      return *(undefined4 *)(*(int *)(*piVar1 + 0x10) + 8);
    }
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find location id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x110,local_c);
    uVar2 = uRam00000008;
  }
  return uVar2;
}

