
void __thiscall FUN_0040c290(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 != 0) {
    FUN_00402500((int *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
    if (*(float *)(param_2 + 8) != *(float *)(param_1 + 8)) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    }
    if (*(int *)(param_1 + 4) == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
    }
    else {
      bVar1 = Archetype::Root::is_loaded(*(Root **)(param_1 + 0x14));
      if (bVar1) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
        if (iVar2 != 3) {
          (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
        }
        FUN_00406cd0();
      }
    }
    if (*(float *)(param_2 + 0xac) != *(float *)(param_1 + 0xac)) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %f: \'spin_max\' changed to %f.",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\CliArch.cpp",0x747,
                 (double)*(float *)(param_1 + 0xac),(double)*(float *)(param_2 + 0xac));
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
    }
    if (*(float *)(param_2 + 0xa8) != *(float *)(param_1 + 0xa8)) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %f: \'spin_accel\' changed to %f.",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\CliArch.cpp",0x748,
                 (double)*(float *)(param_1 + 0xa8),(double)*(float *)(param_2 + 0xa8));
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    }
    if (*(float *)(param_2 + 0x94) != *(float *)(param_1 + 0x94)) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %f: \'secs_before_enter\' changed to %f.",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\CliArch.cpp",0x74a,
                 (double)*(float *)(param_1 + 0x94),(double)*(float *)(param_2 + 0x94));
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    }
    if (*(float *)(param_2 + 0x9c) != *(float *)(param_1 + 0x9c)) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %f: \'secs_before_splash\' changed to %f.",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\CliArch.cpp",0x74b,
                 (double)*(float *)(param_1 + 0x9c),(double)*(float *)(param_2 + 0x9c));
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    }
    if (*(float *)(param_2 + 0x98) != *(float *)(param_1 + 0x98)) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %f: \'secs_before_exit\' changed to %f.",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\CliArch.cpp",0x74c,
                 (double)*(float *)(param_1 + 0x98),(double)*(float *)(param_2 + 0x98));
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
    }
  }
  return;
}

