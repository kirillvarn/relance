
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00503070(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int *param_6
            )

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int local_1c;
  int *local_18;
  undefined4 *local_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bf988;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005792b0(0x25);
  if ((iVar2 != 0) && (param_2 != 0)) {
    local_1c = param_2;
    local_18 = (int *)0x0;
    local_14 = (undefined4 *)0x0;
    local_10 = (int *)0x0;
    local_4 = 0;
    iVar2 = FUN_005792b0(0x26);
    if ((iVar2 != 0) &&
       ((*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0 &&
        (*(char *)**(undefined4 **)(param_2 + 8) != '\0')))) {
      local_14 = (undefined4 *)(**(code **)*param_1)();
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      local_18 = (int *)(**(code **)(*param_1 + 4))();
    }
    if (_DAT_005c7474 < *(float *)(param_2 + 0x48)) {
      local_10 = (int *)(**(code **)(*param_1 + 8))();
    }
    if (local_14 != (undefined4 *)0x0) {
      FUN_004f7d20(param_3,param_4,param_5);
    }
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x94))(param_4,param_5);
    }
    if (local_10 != (int *)0x0) {
      FUN_005377c0(param_4,param_5);
    }
    if ((local_14 != (undefined4 *)0x0) && (cVar1 = (**(code **)*local_14)(param_2), cVar1 == '\0'))
    {
      FUN_004f7a90();
      local_14 = (undefined4 *)0x0;
    }
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x88))(*(byte *)(param_2 + 0x50) & 1);
      if ((*(int *)(param_2 + 0x18) == 0) ||
         (cVar1 = (**(code **)(*local_18 + 0x58))(*(int *)(param_2 + 0x18),0), cVar1 == '\0')) {
        (**(code **)(*local_18 + 8))(local_18);
        local_18 = (int *)0x0;
      }
    }
    if (local_10 != (int *)0x0) {
      FUN_004110c0(1,1);
      FUN_004115b0(param_2 + 0x4c);
      FUN_00411300(*(undefined4 *)(param_2 + 0x48));
      cVar1 = (**(code **)(*local_10 + 4))();
      if (cVar1 == '\0') {
        pcVar3 = ID_String::get_string((ID_String *)(param_2 + 4));
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: couldnt open light",
                   "E:\\FL\\Scratch\\Source\\Client\\Space\\createeffect.h",0xce,pcVar3);
        FUN_00537ad0();
        local_10 = (int *)0x0;
      }
      else if (*(int *)(param_2 + 0x1c) != 0) {
        uVar4 = FUN_00538e80(param_2 + 0x20);
        FUN_00537960(uVar4,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),0);
      }
    }
    cVar1 = FUN_00503330();
    if (cVar1 != '\0') {
      if (param_6 != (int *)0x0) {
        FUN_00502d90();
        *param_6 = local_1c;
        param_6[2] = (int)local_14;
        if (local_14 != (undefined4 *)0x0) {
          FUN_004f7a80();
        }
        param_6[1] = (int)local_18;
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 4))(local_18);
        }
        param_6[3] = (int)local_10;
        if (local_10 != (int *)0x0) {
          FUN_00537ac0();
        }
      }
      if (param_3 != 0) {
        FUN_004fcea0(&local_1c);
      }
      local_4 = 0xffffffff;
      if (local_14 != (undefined4 *)0x0) {
        FUN_004f7a90();
        local_14 = (undefined4 *)0x0;
      }
      if (local_18 != (int *)0x0) {
        (**(code **)(*local_18 + 8))(local_18);
        local_18 = (int *)0x0;
      }
      if (local_10 != (int *)0x0) {
        FUN_00537ad0();
      }
      ExceptionList = local_c;
      return 1;
    }
    local_4 = 0xffffffff;
    FUN_00502d90();
  }
  ExceptionList = local_c;
  return 0;
}

