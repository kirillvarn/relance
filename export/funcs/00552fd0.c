
void __fastcall FUN_00552fd0(int param_1)

{
  char cVar1;
  undefined1 local_10 [4];
  undefined1 local_c [12];
  
  cVar1 = FUN_00420d60();
  if (cVar1 == '\0') {
    cVar1 = FUN_00420dd0(*(undefined4 *)(param_1 + 0x10),0);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)Engine_exref + 0x88))
                (*(int **)Engine_exref,*(undefined4 *)(param_1 + 4),0,local_10,local_c);
      FUN_00420fd0(local_c);
      FUN_00421070();
    }
    cVar1 = FUN_00420d60();
    if (cVar1 == '\0') {
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: couldnt create starsphere %s",
                 "E:\\FL\\Scratch\\Source\\Client\\space\\StarSphere.h",0x35,
                 *(undefined4 *)(param_1 + 0x10));
    }
  }
  FUN_00420d60();
  return;
}

