
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044ae80(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  cVar1 = FUN_00454700();
  if ((cVar1 == '\0') || (*(char *)((int)param_2 + 0x12) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x1c,uVar3);
  cVar1 = (**(code **)(*param_2 + 8))();
  if (cVar1 == '\0') {
    fVar6 = 0.0;
    fVar5 = 0.0;
    fVar4 = 0.0;
  }
  else {
    piVar2 = (int *)FUN_00559590();
    if (piVar2 == (int *)0x0) {
      fVar6 = *(float *)(param_1 + 0x4f4);
      fVar5 = *(float *)(param_1 + 0x4f0);
      fVar4 = *(float *)(param_1 + 0x4ec);
    }
    else {
      fVar6 = (float)piVar2[2] * (float)_DAT_005c89c8;
      fVar5 = (float)piVar2[1] * (float)_DAT_005c89c8;
      fVar4 = (float)*piVar2 * (float)_DAT_005c89c8;
    }
  }
  FUN_00556f20(fVar4,fVar5,fVar6);
  if (*(char *)((int)param_2 + 0x11) != '\0') {
    uVar3 = (**(code **)(*param_2 + 0x18))();
    FUN_005572b0(param_1 + 0x2e8,*(undefined4 *)(param_1 + 0x4e8),uVar3,
                 *(undefined1 *)((int)param_2 + 0x15),*(undefined4 *)(param_1 + 0x500));
    return;
  }
  thunk_FUN_004101e0();
  return;
}

