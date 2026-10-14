
/* WARNING: Removing unreachable block (ram,0x004159d0) */

void __thiscall FUN_004159a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  short *_Memory;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uStack_8;
  int iStack_4;
  
  _Memory = (short *)*param_1;
  if ((_Memory != (short *)0x0) && (*_Memory != 0)) {
    free(_Memory);
    *param_1 = 0;
    param_1[1] = 0;
    piVar1 = (int *)param_1[5];
    piVar3 = (int *)param_1[4];
    for (piVar4 = piVar3; piVar4 != piVar1; piVar4 = piVar4 + 2) {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 4))();
      }
    }
    param_1[5] = piVar3;
    param_1[10] = 0;
  }
  piVar3 = (int *)FUN_00414640(0,1);
  (**(code **)(*piVar3 + 0x30))(piVar3,param_3);
  param_1[8] = 0;
  param_1[9] = 0;
  for (uVar5 = 0; (iVar2 = param_1[4], iVar2 != 0 && (uVar5 < (uint)(param_1[5] - iVar2 >> 3)));
      uVar5 = uVar5 + 1) {
    (**(code **)(**(int **)(iVar2 + uVar5 * 8) + 0x18))(&uStack_8);
    if ((uint)param_1[8] < uStack_8) {
      param_1[8] = uStack_8;
    }
    param_1[9] = param_1[9] + iStack_4;
  }
  return;
}

