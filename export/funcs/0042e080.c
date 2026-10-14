
/* WARNING: Removing unreachable block (ram,0x0042e0f0) */

undefined4 __fastcall FUN_0042e080(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x20) < 1) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2;
    }
    if (iVar2 != iVar1) {
      for (uVar3 = 0;
          (iVar2 = *(int *)(param_1 + 0x2c), iVar2 != 0 &&
          (uVar3 < (uint)(*(int *)(param_1 + 0x30) - iVar2 >> 2))); uVar3 = uVar3 + 1) {
        FUN_0041b030(iVar2 + uVar3 * 4);
      }
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x2c);
      FUN_0042e1d0();
    }
    if (**(char **)(param_1 + 8) == '\0') {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\VisEffectArch.cpp",0x13a,
                 "[VisEffect]: Missing ale file name!");
    }
    else {
      iVar2 = FUN_00401160(param_1 + 8);
      *(int *)(param_1 + 0x24) = iVar2;
      if (iVar2 != -1) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        return 1;
      }
    }
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return 0;
}

