
code * FUN_00488b70(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 0x224) != 0) {
    iVar1 = FUN_004347e0(DAT_0067eca8,*(int *)(param_1 + 0x224),&DAT_00671ce8,0x100);
    if (iVar1 == 0) {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: Failed to find string resource %d\n",
                 "E:\\FL\\Scratch\\Source\\Client\\nn\\NN_LoadSave.cpp",0x64d,
                 *(undefined4 *)(param_1 + 0x224));
    }
    return (code *)&DAT_00671ce8;
  }
  pcVar2 = *(code **)(param_1 + 0x218);
  if (*(code **)(param_1 + 0x218) == (code *)0x0) {
    pcVar2 = _C_exref;
  }
  return pcVar2;
}

