
undefined4 __thiscall FUN_00434d10(int param_1,IFileSystem *param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *local_c;
  IFileSystem *local_8;
  int local_4;
  
  local_8 = param_2;
  FUN_00432240(&local_4,&local_8);
  if ((local_4 == *(int *)(param_1 + 0x10)) || (local_4 == -0x10)) {
    return 0xffffffff;
  }
  if (*(int *)(local_4 + 0x24) == 0) {
    param_2 = (IFileSystem *)0x0;
    pcVar1 = *(code **)(*(int *)(local_4 + 0x28) + 4);
    pcVar2 = _C_exref;
    if (pcVar1 != (code *)0x0) {
      pcVar2 = pcVar1;
    }
    DAEngine_create_filesystem((char *)pcVar2,&param_2,(char *)0x0);
    if (param_2 != (IFileSystem *)0x0) {
      local_c = *(code **)(local_4 + 0x14);
      if (local_c == (code *)0x0) {
        local_c = _C_exref;
      }
      (**(code **)(**(int **)Anim_exref + 0x78))
                (*(int **)Anim_exref,*(undefined4 *)(param_1 + 0x2c),param_2,&local_c,1);
      DAEngine_release_filesystem((IFileSystem **)&stack0xfffffff0);
      *(int *)(local_4 + 0x24) = *(int *)(local_4 + 0x24) + 1;
      return *(undefined4 *)(param_1 + 0x2c);
    }
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: Failed to open %s\n",
               "E:\\FL\\Scratch\\Source\\Client\\gf\\CharacterInfo.cpp",0x92,pcVar2);
  }
  *(int *)(local_4 + 0x24) = *(int *)(local_4 + 0x24) + 1;
  return *(undefined4 *)(param_1 + 0x2c);
}

