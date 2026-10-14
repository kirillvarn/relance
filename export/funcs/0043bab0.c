
void __thiscall FUN_0043bab0(int param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  FUN_00432240(&local_4,&param_2);
  if (local_4 == *(int *)(param_1 + 0x10)) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: Could not find location id %d\n",
               "E:\\FL\\Scratch\\Source\\Client\\Gf\\LocationController.cpp",0x110,param_2);
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(local_4 + 0x10);
  }
  iVar1 = *piVar2;
  local_c = *(undefined4 *)(iVar1 + 0xcc);
  local_8 = *(undefined4 *)(iVar1 + 0xd0);
  if (*(char *)(param_1 + 0x58) == '\0') {
    if (*(char *)(iVar1 + 0xd4) == '\0') {
      ID_String::clear((ID_String *)&local_c);
    }
    if (*(char *)(iVar1 + 0xd5) == '\0') {
      ID_String::clear((ID_String *)&local_8);
    }
  }
  FUN_004288e0(&local_c,*(undefined1 *)(iVar1 + 0xd4),0xbf800000);
  FUN_00428a40(&local_8,*(undefined1 *)(iVar1 + 0xd5),0xbf800000);
  *(undefined1 *)(param_1 + 0x58) = 0;
  fVar3 = (float10)FUN_00456990();
  param_2 = (float)fVar3;
  FUN_004569b0(0xc2c00000);
  FUN_004569d0(0,param_2);
  return;
}

