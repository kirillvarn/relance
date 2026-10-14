
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00549bc0(int param_1,int *param_2,char param_3)

{
  int *piVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  float local_a0 [12];
  tagRECT tStack_70;
  float local_60 [5];
  float fStack_4c;
  float fStack_40;
  float afStack_30 [5];
  float fStack_1c;
  float fStack_10;
  
  piVar1 = *(int **)(param_1 + 0xba0);
  if ((piVar1 != param_2) || (param_3 != '\0')) {
    if (piVar1 == (int *)0x0) {
      FUN_004215b0();
      local_a0[0xb] = 0.0;
      local_a0[10] = 0.0;
      local_a0[9] = 0.0;
      pfVar2 = local_a0;
    }
    else {
      pfVar2 = (float *)(**(code **)(*piVar1 + 0x10))(piVar1);
    }
    pfVar5 = local_60;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar5 = pfVar5 + 1;
    }
    piVar1 = *(int **)(param_1 + 0xba0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x68))();
      *(undefined4 *)(param_1 + 0xba0) = 0;
      FUN_0040f140(0);
    }
    if (param_2 != (int *)0x0) {
      GetClientRect(DAT_0067eca0,&tStack_70);
      iStack_a8 = tStack_70.right + -1;
      iStack_a4 = tStack_70.bottom + -1;
      uStack_b0 = 0;
      iStack_ac = 0;
      if (DAT_00679744 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = DAT_00679744 + -8;
      }
      (**(code **)(*param_2 + 0x58))(iVar4);
      if ((iStack_ac < 1) || (iStack_a8 < 1)) {
        iStack_ac = DAT_00610850 + -1;
        iStack_a8 = DAT_00610854 + -1;
        (**(code **)(*param_2 + 100))(&uStack_b4);
      }
      else {
        (**(code **)(*param_2 + 100))(&uStack_b4);
      }
      uVar3 = (**(code **)(*param_2 + 0xc))(param_2,&stack0xffffff44);
      FUN_005552e0(uVar3);
      *(undefined1 *)((int)param_2 + 0xe9) = uStack_b4;
      *(undefined1 *)((int)param_2 + 0xea) = uStack_b3;
      *(undefined1 *)((int)param_2 + 0xeb) = uStack_b2;
      *(byte *)(param_2 + 0x3a) = *(byte *)(param_2 + 0x3a) | 3;
      FUN_0051b500();
    }
    *(int **)(param_1 + 0xba0) = param_2;
    FUN_0040f140(param_2);
    if (param_2 == (int *)0x0) {
      local_a0[8] = 1.0;
      local_a0[4] = 1.0;
      local_a0[0] = 1.0;
      local_a0[7] = 0.0;
      local_a0[6] = 0.0;
      local_a0[5] = 0.0;
      local_a0[3] = 0.0;
      local_a0[2] = 0.0;
      local_a0[1] = 0.0;
      local_a0[0xb] = 0.0;
      local_a0[10] = 0.0;
      local_a0[9] = 0.0;
      pfVar2 = local_a0;
    }
    else {
      pfVar2 = (float *)(**(code **)(*param_2 + 0x10))(param_2);
    }
    pfVar5 = afStack_30;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar5 = pfVar5 + 1;
    }
    if (((afStack_30[2] * local_60[2] + fStack_1c * fStack_4c + fStack_10 * fStack_40 <
          _DAT_0061402c) || (piVar1 == (int *)0x0)) && (*(int *)(param_1 + 0xba0) != 0)) {
      *(undefined1 *)(*(int *)(param_1 + 0xba0) + 0xbc) = 1;
    }
  }
  return;
}

