
void __thiscall FUN_00552ea0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c13f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  iVar2 = FUN_005792b0(0x19);
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return;
  }
  iVar2 = param_1[0x10];
  if (iVar2 == param_1[0xf]) goto LAB_00552f26;
  if (iVar2 == 1) {
    FUN_00552fd0();
LAB_00552f10:
    FUN_00420f70();
LAB_00552f18:
    FUN_00420f70();
  }
  else {
    if (iVar2 == 2) {
      FUN_00552fd0();
      FUN_00552fd0();
      goto LAB_00552f18;
    }
    if (iVar2 != 3) {
      FUN_00420f70();
      goto LAB_00552f10;
    }
    FUN_00552fd0();
    FUN_00420f70();
    FUN_00552fd0();
  }
  param_1[0xf] = param_1[0x10];
LAB_00552f26:
  local_10 = (int *)0x0;
  local_4 = 0;
  iVar2 = (**(code **)**(undefined4 **)Engine_exref)
                    (*(undefined4 **)Engine_exref,"1.11_IFLAppearance",&local_10);
  if (iVar2 == 0) {
    cVar1 = FUN_00420d60();
    if (cVar1 != '\0') {
      (**(code **)(*local_10 + 0x28))(local_10,param_2,param_1[6]);
    }
    cVar1 = FUN_00420d60();
    if (cVar1 != '\0') {
      (**(code **)(*local_10 + 0x28))(local_10,param_2,param_1[0xb]);
    }
    cVar1 = FUN_00420d60();
    if (cVar1 != '\0') {
      (**(code **)(*local_10 + 0x28))(local_10,param_2,param_1[1]);
    }
  }
  local_4 = 0xffffffff;
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  ExceptionList = local_c;
  return;
}

