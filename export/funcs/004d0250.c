
void __thiscall FUN_004d0250(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  BaseWatcher *this;
  undefined4 uVar6;
  int local_40 [7];
  int local_24 [6];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  iVar5 = param_3;
  iVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &DAT_005bdd48;
  local_c = ExceptionList;
  uVar1 = *(uint *)(param_2 + 0xe0);
  if (param_3 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x2bd) == '\0') {
    if ((uVar1 & 0x420000) == 0) {
      if ((((*(uint *)(param_2 + 0x4c) & 0x103) == 0x103) && (*(int *)(param_2 + 0x88) != 0)) &&
         (*(char *)(*(int *)(param_2 + 0x88) + 0x80) != '\0')) {
        ExceptionList = &local_c;
        uVar4 = FUN_004cf030(10,param_3,0,0,0);
        local_4 = 3;
      }
      else {
        if ((uVar1 & 0x100000) != 0) {
          ExceptionList = &local_c;
          uVar4 = FUN_004cf030(9,param_3,0,0,0);
          local_4 = 4;
          goto LAB_004d02ed;
        }
        if ((uVar1 & 0x200000) == 0) {
          ExceptionList = &local_c;
          uVar4 = FUN_004cf030(0,param_3,0,0,0);
          iVar2 = *(int *)(param_1 + 0x414);
          local_4 = 6;
          iVar5 = FUN_004d48f0(iVar2,*(undefined4 *)(iVar2 + 4));
          *(int *)(iVar2 + 4) = iVar5;
          **(int **)(iVar5 + 4) = iVar5;
          FUN_004d49b0(iVar5 + 8,uVar4);
          *(int *)(param_1 + 0x418) = *(int *)(param_1 + 0x418) + 1;
          if (local_24[0] == 0) {
            ExceptionList = local_c;
            return;
          }
          this = (BaseWatcher *)local_24;
          goto LAB_004d0453;
        }
        ExceptionList = &local_c;
        uVar4 = FUN_004cf030(5,param_3,0,0,0);
        local_4 = 5;
      }
      goto LAB_004d03c8;
    }
    ExceptionList = &local_c;
    uVar4 = FUN_004cf030(8,param_3,0,0,0);
    local_4 = 2;
LAB_004d02ed:
    uVar6 = *(undefined4 *)(param_1 + 0x414);
  }
  else {
    ExceptionList = &local_c;
    if ((*(int *)(param_2 + 0x1b4) != 0) &&
       (ExceptionList = &local_c, iVar3 = FUN_0054baf0(), iVar3 != 0)) {
      if ((iVar3 == -0xc) ||
         ((iVar3 = *(int *)(iVar3 + 0x10), iVar3 == 0 ||
          ((*(uint *)(iVar3 + 0x4c) & 0x503) != 0x503)))) {
        iVar3 = 0;
      }
      if (*(int *)(iVar3 + 0x1b4) == *(int *)(iVar2 + 0x1b4)) {
        uVar4 = FUN_004cf030(0xf,iVar5,0,0,0);
        local_4 = 0;
        goto LAB_004d02ed;
      }
    }
    uVar4 = FUN_004cf030(0xe,iVar5,0,0,0);
    local_4 = 1;
LAB_004d03c8:
    uVar6 = *(undefined4 *)(param_1 + 0x414);
  }
  FUN_004d4740(&param_2,uVar6,uVar4);
  if (local_40[0] == 0) {
    ExceptionList = local_c;
    return;
  }
  this = (BaseWatcher *)local_40;
LAB_004d0453:
  local_4 = 0xffffffff;
  BaseWatcher::set_pointer(this,(Watchable *)0x0);
  ExceptionList = local_c;
  return;
}

