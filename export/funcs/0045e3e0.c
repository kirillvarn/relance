
void __fastcall FUN_0045e3e0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005ba36c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_005cef80;
  local_4 = 0;
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    (**(code **)(**(int **)TextureLib_exref + 0x38))(*(int **)TextureLib_exref,param_1[7]);
    FUN_0041c830(param_1[6]);
    *(undefined1 *)((int)param_1 + 0x15) = 0;
  }
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005b7e1d((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = pvStack_c;
  return;
}

