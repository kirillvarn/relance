
void __fastcall FUN_00547680(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c0f78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[-3] = &PTR_LAB_005e0304;
  param_1[-2] = &PTR_LAB_005e0284;
  *param_1 = &PTR_FUN_005e0278;
  param_1[0x28] = &PTR_FUN_005e0270;
  iVar1 = param_1[0x7e];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00502e40();
    FUN_005b7e1d(iVar1);
  }
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    if ((piVar2[0x13] & 0x103U) != 0x103) {
      piVar2 = (int *)0x0;
    }
    (**(code **)(*piVar2 + 0x94))(PTR_DAT_00613ed0);
    piVar2 = (int *)param_1[1];
    if ((piVar2 == (int *)0x0) || ((piVar2[0x13] & 0x103U) != 0x103)) {
      piVar2 = (int *)0x0;
    }
    (**(code **)(*piVar2 + 0xbc))(-(uint)(param_1 != (undefined4 *)0xc) & (uint)(param_1 + 0x28));
  }
  local_4 = 0xffffffff;
  FUN_00532d40();
  ExceptionList = pvStack_c;
  return;
}

