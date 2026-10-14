
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540c30(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar6 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c0d0b;
  local_c = ExceptionList;
  if ((((param_1 == (int *)0x0) || (param_1 == (int *)0xfffffff4)) ||
      (iVar4 = param_1[4], iVar4 == 0)) || (((byte)*(undefined4 *)(iVar4 + 0x4c) & 3) != 3)) {
    iVar4 = 0;
  }
  ExceptionList = &local_c;
  switch(param_1[7]) {
  case 1:
    ExceptionList = &local_c;
    FUN_00542350(param_1);
    break;
  case 2:
    ExceptionList = &local_c;
    iVar2 = (**(code **)(*param_1 + 0x150))();
    if (_DAT_00613ec4 < *(float *)(iVar2 + 0x38)) {
      (**(code **)(*piVar6 + 0x88))(&param_1);
      if (-1 < (char)param_1) {
        param_1 = piVar6;
        FUN_00537260(DAT_00678ac8,1,&param_1);
      }
    }
    FUN_00542350(piVar6);
    if ((DAT_00678ae0 != (int *)0x0) && ((*(uint *)(iVar4 + 0xe0) & 0xfdff) != 0)) {
      uStack_10 = *(undefined4 *)(iVar4 + 0x38);
      uStack_1c = *(undefined4 *)(iVar4 + 0x2c);
      uStack_18 = *(undefined4 *)(iVar4 + 0x30);
      uStack_14 = *(undefined4 *)(iVar4 + 0x34);
      piStack_20 = piVar6;
      (**(code **)(*DAT_00678ae0 + 0x10))(&piStack_20);
    }
    break;
  case 3:
    ExceptionList = &local_c;
    FUN_00542350(param_1);
    break;
  case 4:
    ExceptionList = &local_c;
    FUN_00542350(param_1);
    break;
  case 5:
    ExceptionList = &local_c;
    FUN_00542350(param_1);
    break;
  case 6:
    ExceptionList = &local_c;
    FUN_00542350(param_1);
    break;
  case 7:
    ExceptionList = &local_c;
    FUN_00542350(param_1);
    break;
  case 8:
    ExceptionList = &local_c;
    FUN_00542350(param_1);
    break;
  case 9:
    ExceptionList = &local_c;
    FUN_00542350(param_1);
    break;
  case 10:
    ExceptionList = &local_c;
    FUN_00542350(param_1);
  }
  if ((char)param_2 != '\0') {
    puVar3 = operator_new(0x2f8);
    local_4 = 0;
    param_2 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      CRemotePhysicsSimulation::CRemotePhysicsSimulation((CRemotePhysicsSimulation *)(puVar3 + 4));
    }
    local_4 = 0xffffffff;
    if (((piVar6 == (int *)0xfffffff4) || (iVar4 = piVar6[4], iVar4 == 0)) ||
       ((*(uint *)(iVar4 + 0x4c) & 0x503) != 0x503)) {
      iVar4 = 0;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = iVar4;
    iVar4 = DAT_00678a34;
    piVar6 = *(int **)(DAT_00678a34 + 4);
    puVar1 = (undefined4 *)(DAT_00678a34 + 4);
    piVar5 = operator_new(0xc);
    *piVar5 = iVar4;
    if (piVar6 == (int *)0x0) {
      piVar6 = piVar5;
    }
    piVar5[1] = (int)piVar6;
    *puVar1 = piVar5;
    *(int **)piVar5[1] = piVar5;
    if (piVar5 + 2 != (int *)0x0) {
      piVar5[2] = (int)puVar3;
    }
    DAT_00678a38 = DAT_00678a38 + 1;
  }
  ExceptionList = local_c;
  return;
}

