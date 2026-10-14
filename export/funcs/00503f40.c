
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00503f40(int *param_1,int param_2,int *param_3,undefined4 *param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_18;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bf988;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005792b0(0x25);
  if ((iVar2 != 0) && (piVar5 = (int *)0x0, param_2 != 0)) {
    local_18 = (int *)0x0;
    local_14 = (undefined4 *)0x0;
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
      piVar5 = (int *)(**(code **)(*param_1 + 8))();
    }
    if (local_14 != (undefined4 *)0x0) {
      piVar6 = param_3;
      piVar7 = local_14 + 4;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
    }
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x8c))(param_3 + 9);
    }
    if (piVar5 != (int *)0x0) {
      if (piVar5[0x3b] == -1) {
        FUN_00410fe0(param_3);
      }
      else {
        piVar6 = piVar5 + 0x3c;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar6 = *param_3;
          param_3 = param_3 + 1;
          piVar6 = piVar6 + 1;
        }
      }
    }
    if (local_14 != (undefined4 *)0x0) {
      local_14[0x13] = *param_4;
      local_14[0x14] = param_4[1];
      local_14[0x15] = param_4[2];
    }
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 0x90))(param_4);
    }
    if (piVar5 != (int *)0x0) {
      FUN_005377a0(param_4);
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
    if (piVar5 != (int *)0x0) {
      FUN_004110c0(1,1);
      FUN_004115b0(param_2 + 0x4c);
      FUN_00411300(*(undefined4 *)(param_2 + 0x48));
      cVar1 = (**(code **)(*piVar5 + 4))();
      if (cVar1 == '\0') {
        pcVar3 = ID_String::get_string((ID_String *)(param_2 + 4));
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: couldnt open light",
                   "E:\\FL\\Scratch\\Source\\Client\\Space\\createeffect.h",0xce,pcVar3);
        FUN_00537ad0();
        piVar5 = (int *)0x0;
      }
      else if (*(int *)(param_2 + 0x1c) != 0) {
        uVar4 = FUN_00538e80(param_2 + 0x20);
        FUN_00537960(uVar4,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),0);
      }
    }
    cVar1 = FUN_00503330();
    if (cVar1 != '\0') {
      if (param_5 != (int *)0x0) {
        FUN_00502d90();
        *param_5 = param_2;
        param_5[2] = (int)local_14;
        if (local_14 != (undefined4 *)0x0) {
          FUN_004f7a80();
        }
        param_5[1] = (int)local_18;
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 4))(local_18);
        }
        param_5[3] = (int)piVar5;
        if (piVar5 != (int *)0x0) {
          FUN_00537ac0();
        }
      }
      local_4 = 0xffffffff;
      FUN_00502d90();
      ExceptionList = local_c;
      return 1;
    }
    local_4 = 0xffffffff;
    FUN_00502d90();
  }
  ExceptionList = local_c;
  return 0;
}

