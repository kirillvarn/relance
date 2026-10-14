
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall
FUN_004cf030(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  BaseWatcher *this;
  char cVar1;
  Watchable *pWVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  uint uVar7;
  ISystem *pIVar8;
  float10 fVar9;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005bdc44;
  local_c = ExceptionList;
  this = (BaseWatcher *)(param_1 + 1);
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  local_4 = 1;
  if (param_3 == 0) {
    pWVar2 = (Watchable *)0x0;
  }
  else {
    pWVar2 = (Watchable *)(param_3 + 8);
  }
  if (pWVar2 != *(Watchable **)this) {
    BaseWatcher::set_pointer(this,pWVar2);
  }
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  *(undefined1 *)(param_1 + 6) = 0;
  if ((*(int *)this == 0) || (*(int *)this == 8)) {
    if (*param_1 == 4) {
      iVar3 = param_1[5];
      iVar4 = FUN_004c4690();
      if (iVar3 < iVar4) {
        pfVar6 = (float *)FUN_004c46a0(iVar3);
        local_24 = *pfVar6;
        local_20 = pfVar6[1];
        local_1c = pfVar6[2];
        param_1[3] = (int)SQRT((local_24 - _DAT_00674904) * (local_24 - _DAT_00674904) +
                               (local_20 - _DAT_00674908) * (local_20 - _DAT_00674908) +
                               (local_1c - _DAT_0067490c) * (local_1c - _DAT_0067490c));
        if ((pfVar6[4] != 0.0) && (piVar5 = (int *)FUN_005416c0(pfVar6[4],0), piVar5 != (int *)0x0))
        {
          param_2 = ftol();
          param_1[3] = (int)(float)param_2;
          piVar5 = (int *)(**(code **)(*piVar5 + 0x150))();
          fVar9 = (float10)(**(code **)(*piVar5 + 100))(&local_24);
          param_1[3] = (int)(float)((float10)(float)param_1[3] - fVar9);
        }
      }
      else {
        param_1[3] = 0;
      }
      if ((DAT_006748fc == '\0') && (cVar1 = FUN_004d4120(param_1,DAT_00674900,1), cVar1 != '\0')) {
        DAT_006748fc = '\x01';
      }
    }
    else if (*param_1 == 3) {
      if ((DAT_006748fc == '\0') && (cVar1 = FUN_004d4120(param_1,DAT_00674900,1), cVar1 != '\0')) {
        DAT_006748fc = '\x01';
      }
      iVar3 = param_1[5];
      iVar4 = FUN_004c4fb0();
      if (iVar3 < iVar4) {
        FUN_004c4ff0(iVar3);
        cVar1 = FUN_004c52d0(&local_24,&param_2);
        if (cVar1 == '\0') goto LAB_004cf375;
        uVar7 = FUN_004c4830();
        pIVar8 = Universe::get_system(uVar7);
        iVar3 = (*(code *)**(undefined4 **)pIVar8)();
        if (param_2 != iVar3) goto LAB_004cf375;
        local_24 = local_24 - _DAT_00674904;
        local_20 = local_20 - _DAT_00674908;
        local_1c = local_1c - _DAT_0067490c;
        param_1[3] = (int)SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c);
        piVar5 = (int *)FUN_004c5110();
        if (piVar5 != (int *)0x0) {
          param_3 = ftol();
          param_1[3] = (int)(float)param_3;
          piVar5 = (int *)(**(code **)(*piVar5 + 0x150))();
          fVar9 = (float10)(**(code **)(*piVar5 + 100))(auStack_18);
          param_1[3] = (int)(float)((float10)(float)param_1[3] - fVar9);
        }
      }
      else {
        param_1[3] = 0;
      }
    }
  }
  else {
    if (*(int *)this == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(*(int *)this + -8);
    }
    iVar3 = (**(code **)(*piVar5 + 0x20))();
    param_1[4] = iVar3;
    if (DAT_00674900 == iVar3) {
      DAT_006748fc = '\x01';
    }
    if (*(int *)this == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)this + -8;
    }
    iVar4 = FUN_0054baf0();
    if (iVar3 != iVar4) {
      if (*(int *)this == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)(*(int *)this + -8);
      }
      piVar5 = (int *)(**(code **)(*piVar5 + 0x150))();
      fVar9 = (float10)(**(code **)(*piVar5 + 100))(&local_24);
      fVar9 = SQRT(((float10)local_24 - (float10)_DAT_00674904) *
                   ((float10)local_24 - (float10)_DAT_00674904) +
                   ((float10)local_20 - (float10)_DAT_00674908) *
                   ((float10)local_20 - (float10)_DAT_00674908) +
                   ((float10)local_1c - (float10)_DAT_0067490c) *
                   ((float10)local_1c - (float10)_DAT_0067490c)) - fVar9;
      param_1[3] = (int)(float)fVar9;
      if (fVar9 < (float10)_DAT_005c7474) {
        param_1[3] = 0;
      }
    }
  }
  if (_DAT_005c7474 <= (float)param_1[3]) {
    ExceptionList = local_c;
    return param_1;
  }
LAB_004cf375:
  param_1[3] = 0;
  ExceptionList = local_c;
  return param_1;
}

