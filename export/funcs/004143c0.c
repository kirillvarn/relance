
void __thiscall FUN_004143c0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_8 [4];
  int iStack_4;
  
  iVar4 = param_2;
  uVar6 = 0;
  if (param_2 != 0) {
    uVar1 = *param_1;
    fVar2 = (float)param_1[1];
    iVar5 = ftol();
    if (iVar5 != *(int *)(param_2 + 0x2c)) {
      *(int *)(param_2 + 0x2c) = iVar5;
      *(undefined4 *)(param_2 + 0x28) = 0;
    }
    if (*(int *)(param_2 + 0x28) != DAT_006105b0) {
      FUN_004155c0();
    }
    if (*(int *)(param_2 + 0x10) == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10) >> 3;
    }
    if (0 < param_2) {
      do {
        iVar5 = *(int *)(iVar4 + 0x10);
        if (((iVar5 != 0) && (uVar6 < (uint)(*(int *)(iVar4 + 0x14) - iVar5 >> 3))) &&
           (piVar3 = *(int **)(iVar5 + uVar6 * 8), piVar3 != (int *)0x0)) {
          (**(code **)(*piVar3 + 0x18))(local_8);
          *param_1 = uVar1;
          param_1[1] = (float)(iStack_4 * uVar6) + fVar2;
          FUN_004142f0(piVar3,param_3,param_4);
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < param_2);
    }
  }
  return;
}

