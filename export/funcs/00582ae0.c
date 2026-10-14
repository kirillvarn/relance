
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00582ae0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  FUN_005a17b0();
  if (*(char *)((int)param_1 + 0x66d) == '\0') {
    FUN_0059d960(param_1);
    DAT_0067c4c4 = 0;
    *(undefined1 *)(param_1 + 0x19d) = 0;
    *(undefined1 *)((int)param_1 + 0x675) = 0;
    *(undefined1 *)((int)param_1 + 0x676) = 0;
    *(undefined1 *)((int)param_1 + 0x677) = 0;
    return;
  }
  if ((char)param_1[0x19d] != '\0') {
    FUN_005811b0(DAT_00616840,DAT_00616844);
    return;
  }
  if (*(char *)((int)param_1 + 0x675) != '\0') {
    fVar5 = (float10)FUN_0042d660();
    if (fVar5 - (float10)(float)param_1[0x19c] <= (float10)_DAT_005c9858) {
      return;
    }
    FUN_00580d00();
    fVar5 = (float10)FUN_0042d660();
    param_1[0x19c] = (int)(float)fVar5;
    return;
  }
  if (*(char *)((int)param_1 + 0x676) == '\0') {
    if (*(char *)((int)param_1 + 0x677) == '\0') {
      return;
    }
    fVar5 = (float10)FUN_0042d660();
    if (fVar5 - (float10)(float)param_1[0x19c] <= (float10)_DAT_005c9858) {
      return;
    }
    iVar4 = param_1[0x196];
    if (param_1[0x199] <= iVar4) goto LAB_00582c41;
    iVar1 = param_1[0x199] - param_1[0x19a];
    param_1[0x199] = iVar1;
    if (iVar1 < iVar4) goto LAB_00582c07;
  }
  else {
    fVar5 = (float10)FUN_0042d660();
    if (fVar5 - (float10)(float)param_1[0x19c] <= (float10)_DAT_005c9858) {
      return;
    }
    iVar4 = param_1[0x197];
    if (iVar4 <= param_1[0x199]) goto LAB_00582c41;
    iVar1 = param_1[0x199] + param_1[0x19a];
    param_1[0x199] = iVar1;
    if (iVar4 < iVar1) {
LAB_00582c07:
      param_1[0x199] = iVar4;
    }
  }
  FUN_00580290();
  if (((int *)param_1[1] != (int *)0x0) &&
     (piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 8))(), piVar2 != (int *)0x0)) {
    iVar4 = *piVar2;
    uVar3 = (**(code **)(*param_1 + 8))(param_1[0x199]);
    (**(code **)(iVar4 + 0xa8))(0x3e,uVar3);
  }
LAB_00582c41:
  fVar5 = (float10)FUN_0042d660();
  param_1[0x19c] = (int)(float)fVar5;
  return;
}

