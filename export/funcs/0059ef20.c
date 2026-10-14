
void __fastcall FUN_0059ef20(undefined4 *param_1)

{
  char cVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c4eb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005d2efc;
  local_4 = 0;
  if (param_1[4] != -1) {
    (**(code **)(**(int **)Anim_exref + 0x10))(*(int **)Anim_exref,param_1[4]);
    param_1[4] = 0xffffffff;
  }
  cVar1 = FUN_00420d60();
  if (cVar1 != '\0') {
    FUN_00420f70();
  }
  local_4 = 0xffffffff;
  FUN_00420d10();
  ExceptionList = pvStack_c;
  return;
}

