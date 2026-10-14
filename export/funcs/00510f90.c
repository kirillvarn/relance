
void FUN_00510f90(void)

{
  int *piVar1;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  char local_104 [260];
  
  uStack_118 = 0x510fae;
  GetFileSysPath(local_104,"solar\\StarArch.ini",*(IFileSystem **)Data_exref);
  if (*(int **)Pipeline_exref != (int *)0x0) {
    uStack_118 = 0x510fcb;
    (**(code **)(**(int **)Pipeline_exref + 0x18))();
    piVar1 = *(int **)Pipeline_exref;
    uStack_118 = 1;
    uStack_11c = 4;
    (**(code **)(*piVar1 + 0x14))(piVar1);
    FUN_00425b30(&uStack_11c,0);
    (**(code **)(**(int **)Pipeline_exref + 0x14))(*(int **)Pipeline_exref,4,piVar1);
  }
  return;
}

