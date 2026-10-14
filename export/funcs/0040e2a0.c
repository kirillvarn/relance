
void __fastcall FUN_0040e2a0(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x54);
  if (0 < iVar2) {
    iVar3 = iVar2;
    pcVar1 = ID_String::get_string((ID_String *)(param_1 + 4));
    (**(code **)FDUMP_exref)
              (0x100002,
               "%s(%d) : *** WARNING: Destroying effect archetype (%s) with %d dangling references. See SSTEVENS"
               ,"E:\\FL\\Scratch\\Source\\Client\\cmn\\EffectArch.cpp",0x25,pcVar1,iVar3);
    if (0 < iVar2) {
      do {
        if (*(int *)(param_1 + 8) != 0) {
          FUN_0042e160();
        }
        if (*(int **)(param_1 + 0x18) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

