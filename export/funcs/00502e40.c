
void __fastcall FUN_00502e40(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bf861;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if ((param_1[1] != 0) && (iVar2 = 0, ExceptionList = &pvStack_c, 0 < *(int *)(*param_1 + 0x40))) {
    piVar1 = param_1 + 0x10;
    ExceptionList = &pvStack_c;
    do {
      FUN_004fcef0(piVar1);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 9;
    } while (iVar2 < *(int *)(*param_1 + 0x40));
  }
  local_4 = local_4 & 0xffffff00;
  FUN_005b7ec6(param_1 + 0xb,0x24,5,FUN_00502e00);
  local_4 = 0xffffffff;
  if (param_1[9] != 0) {
    FUN_004f7a90();
    param_1[9] = 0;
  }
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[8] = 0;
  }
  if (param_1[10] != 0) {
    FUN_00537ad0();
    param_1[10] = 0;
  }
  param_1[7] = 0;
  ExceptionList = pvStack_c;
  return;
}

