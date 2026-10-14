
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005361e0(float param_1,int param_2,float *param_3)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fStack_18;
  float fStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c09a5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar3 = IAction::operator_new(0x28);
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0;
    *piVar3 = (int)_vftable__exref;
    piVar3[3] = param_2;
    piVar3[2] = (int)param_1;
    pfVar1 = (float *)(piVar3 + 4);
    *pfVar1 = *param_3;
    piVar3[5] = (int)param_3[1];
    piVar3[6] = (int)param_3[2];
    piVar3[7] = 0;
    piVar3[8] = -0x40800000;
    piVar3[9] = -0x40800000;
    *piVar3 = (int)&PTR_LAB_005de584;
    param_3 = *(float **)((int)param_1 + 0x1c);
    param_1 = *(float *)((int)param_1 + 0x18);
    local_4 = 1;
    param_2 = rand();
    piVar3[7] = (int)(((float)param_3 - param_1) * (float)param_2 * _DAT_005caeec + param_1);
    if (_DAT_005c7474 < *(float *)(piVar3[2] + 8)) {
      piVar4 = (int *)FUN_0054baf0();
      if (piVar4 != (int *)0x0) {
        iVar5 = (**(code **)(*(int *)piVar3[3] + 0x20))();
        iVar6 = (**(code **)(*piVar4 + 0x20))();
        if (iVar6 != iVar5) {
          FUN_005366a0(piVar4);
        }
      }
      iVar5 = 0;
      while( true ) {
        param_1 = 1.4013e-44;
        if (iVar5 == 0) {
          iVar5 = FUN_00540fc0(&param_1);
        }
        else {
          iVar5 = *(int *)(iVar5 + 0x14);
        }
        if (iVar5 == 0) break;
        FUN_005366a0(iVar5);
      }
      iVar5 = 0;
      while( true ) {
        param_2 = 9;
        if (iVar5 == 0) {
          iVar5 = FUN_00540fc0(&param_2);
        }
        else {
          iVar5 = *(int *)(iVar5 + 0x14);
        }
        if (iVar5 == 0) break;
        FUN_005366a0(iVar5);
      }
    }
    if ((_DAT_005c7474 < *(float *)(piVar3[2] + 0xc)) ||
       (_DAT_005c7474 < *(float *)(piVar3[2] + 0x10))) {
      piVar4 = (int *)FUN_0054baf0();
      if (piVar4 != (int *)0x0) {
        piVar2 = (int *)piVar3[3];
        param_3 = (float *)(**(code **)(*piVar4 + 0x20))();
        fVar7 = (float)(**(code **)(*piVar2 + 0x20))();
        if (param_3 != (float *)fVar7) {
          (**(code **)(*piVar4 + 0x2c))(&param_3,&fStack_18);
          fVar7 = (float)param_3 + *(float *)(piVar3[2] + 4);
          if ((((float)piVar3[5] - fStack_14) * ((float)piVar3[5] - fStack_14) +
               ((float)piVar3[6] - (float)pvStack_10) * ((float)piVar3[6] - (float)pvStack_10) +
               (*pfVar1 - fStack_18) * (*pfVar1 - fStack_18) < fVar7 * fVar7) && (DAT_00674a10 != 0)
             ) {
            FUN_004d6f00(pfVar1,*(undefined4 *)(piVar3[2] + 4));
          }
        }
      }
    }
    (**(code **)(*piVar3 + 4))(0);
    ExceptionList = pvStack_10;
    return piVar3;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}

