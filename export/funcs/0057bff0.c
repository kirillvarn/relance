
/* WARNING: Removing unreachable block (ram,0x0057c01f) */
/* WARNING: Removing unreachable block (ram,0x0057c022) */
/* WARNING: Removing unreachable block (ram,0x0057c040) */
/* WARNING: Removing unreachable block (ram,0x0057c04e) */
/* WARNING: Removing unreachable block (ram,0x0057c063) */

void __fastcall FUN_0057bff0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c3edb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x4c8);
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  FUN_0057d330();
  if (*(undefined4 **)(param_1 + 0x52c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x52c))(1);
    pvVar1 = operator_new(0xa0);
    uStack_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00564280(param_1);
    }
    *(undefined4 *)(param_1 + 0x52c) = uVar2;
  }
  ExceptionList = local_c;
  return;
}

