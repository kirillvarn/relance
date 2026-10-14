
/* WARNING: Removing unreachable block (ram,0x0057bec2) */
/* WARNING: Removing unreachable block (ram,0x0057bec4) */
/* WARNING: Removing unreachable block (ram,0x0057bee0) */
/* WARNING: Removing unreachable block (ram,0x0057beee) */
/* WARNING: Removing unreachable block (ram,0x0057bf03) */

void __thiscall FUN_0057be30(int param_1,char param_2)

{
  IMEFocus *pIVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c3ec6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(char *)(param_1 + 0x52b) = param_2;
  if (param_2 == '\0') {
    if (*(undefined4 **)(param_1 + 0x52c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x52c))(1);
      *(undefined4 *)(param_1 + 0x52c) = 0;
    }
  }
  else if ((*(int *)(param_1 + 0x52c) == 0) &&
          (pIVar1 = IMEFocus::GetSingleton(), pIVar1 != (IMEFocus *)0x0)) {
    pvVar2 = operator_new(0xa0);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00564280(param_1);
    }
    *(undefined4 *)(param_1 + 0x52c) = uVar3;
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x4c8);
    *(undefined4 *)(param_1 + 0x4a4) = 0;
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    *(undefined4 *)(param_1 + 0x49c) = 0;
    FUN_0057d330();
    if (*(undefined4 **)(param_1 + 0x52c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x52c))(1);
      pvVar2 = operator_new(0xa0);
      local_4 = 1;
      if (pvVar2 == (void *)0x0) {
        *(undefined4 *)(param_1 + 0x52c) = 0;
      }
      else {
        uVar3 = FUN_00564280(param_1);
        *(undefined4 *)(param_1 + 0x52c) = uVar3;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

