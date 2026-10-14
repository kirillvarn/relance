
void __fastcall FUN_004ca530(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bd9a6;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*param_1 != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(**(int **)Deform_exref + 0x24))(*(int **)Deform_exref,*param_1);
    piVar2 = param_1 + 0x95;
    piVar1 = param_1 + 0x11;
    iVar3 = 4;
    do {
      if (*piVar2 != -1) {
        *piVar1 = 0;
        *(undefined1 *)(piVar1 + 1) = 0;
        *piVar2 = -1;
      }
      piVar2 = piVar2 + 1;
      piVar1 = piVar1 + 0x21;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 4;
  do {
    FUN_00420f70();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*param_1 != 0) {
    (**(code **)(**(int **)Deform_exref + 0x18))(*(int **)Deform_exref,*param_1);
    *param_1 = 0;
  }
  local_4 = 0xffffffff;
  FUN_005b7ec6(param_1 + 1,0x10,4,FUN_00420d10);
  ExceptionList = pvStack_c;
  return;
}

