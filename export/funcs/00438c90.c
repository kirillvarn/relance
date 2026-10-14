
undefined4 FUN_00438c90(void)

{
  int iVar1;
  uint local_8;
  int local_4;
  
  if ((DAT_00668740 & 0x3fffffff) != 0) {
    local_8 = DAT_00668740;
    FUN_00432240(&local_4,&local_8);
    if (local_4 == DAT_00668718) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: Could not find location id %d\n",
                 "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x110,local_8);
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(local_4 + 0x10);
    }
    if (*(int *)(iVar1 + 8) != 0) {
      return *(undefined4 *)(*(int *)(iVar1 + 8) + 0x500);
    }
  }
  return 0;
}

