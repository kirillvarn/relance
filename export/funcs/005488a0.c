
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005488a0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &DAT_005c0ff8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = ftol();
  local_10 = ftol();
  local_14 = 2;
  for (iVar2 = FUN_00540fc0(&local_14); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
    if (((iVar2 == -0xc) || (iVar3 = *(int *)(iVar2 + 0x10), iVar3 == 0)) ||
       ((*(uint *)(iVar3 + 0x4c) & 0x303) != 0x303)) {
      iVar3 = 0;
    }
    if ((*(byte *)(iVar3 + 0xe0) & 7) != 0) {
      param_1 = (int *)0x0;
      local_4 = (int *)0x0;
      if (((iVar2 == 0) || (iVar2 == -0xc)) ||
         ((iVar3 = *(int *)(iVar2 + 0x10), iVar3 == 0 ||
          (((byte)*(undefined4 *)(iVar3 + 0x4c) & 3) != 3)))) {
        iVar3 = 0;
      }
      iVar3 = (**(code **)(**(int **)Engine_exref + 0x78))
                        (*(int **)Engine_exref,*(undefined4 *)(iVar3 + 4),"1.11_ISphereMesh",
                         &param_1);
      if (iVar3 < 0) {
        local_4 = (int *)0xffffffff;
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
        }
      }
      else {
        (**(code **)(*param_1 + 0x1c))(param_1,uVar1);
        (**(code **)(*local_4 + 0xc))(local_4,(float)unaff_EBX);
        local_4 = (int *)0xffffffff;
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

