
void __thiscall FUN_0052e8c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined1 auStack_28 [12];
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c0538;
  local_c = ExceptionList;
  if (((*(int *)(param_1 + 4) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x70), iVar1 != 0))
     && (*(int *)(iVar1 + 4) != 0)) {
    iVar1 = *(int *)(param_3 + 0x10);
    if ((iVar1 == 0) || (iVar4 = iVar1, ((byte)*(undefined4 *)(iVar1 + 0x4c) & 7) != 7)) {
      iVar4 = 0;
    }
    if ((iVar1 == 0) || (((byte)*(undefined4 *)(iVar1 + 0x4c) & 7) != 7)) {
      iVar1 = 0;
    }
    ExceptionList = &local_c;
    uVar2 = FUN_00409f10(*(float *)(*(int *)(iVar4 + 0x88) + 0x80) *
                         *(float *)HULL_DAMAGE_FACTOR_exref +
                         *(float *)(*(int *)(iVar1 + 0x88) + 0x84));
    local_1c = 0;
    local_18 = (int *)0x0;
    local_14 = (int *)0x0;
    local_10 = 0;
    local_4 = 0;
    if (((param_3 == -0xc) || (iVar1 = *(int *)(param_3 + 0x10), iVar1 == 0)) ||
       (((byte)*(undefined4 *)(iVar1 + 0x4c) & 0x27) != 0x27)) {
      iVar1 = 0;
    }
    FUN_00539f90(*(undefined4 *)(iVar1 + 0xe4),uVar2,param_2,param_2 + 0xc,&local_1c);
    if (local_14 != (int *)0x0) {
      iVar1 = *local_14;
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 4) + 0x44))();
      (**(code **)(iVar1 + 0xc))((float)fVar6);
    }
    uVar2 = FUN_00408a70();
    if (((param_3 == -0xc) || (piVar5 = *(int **)(param_3 + 0x10), piVar5 == (int *)0x0)) ||
       (((byte)piVar5[0x13] & 1) != 1)) {
      piVar5 = (int *)0x0;
    }
    uVar7 = 0;
    uVar3 = (**(code **)(*piVar5 + 0x54))(auStack_28,0);
    FUN_0053a230(uVar2,param_2,param_2 + 0xc,uVar3,uVar7);
    local_4 = 0xffffffff;
    if (local_14 != (int *)0x0) {
      FUN_004f7a90();
      local_14 = (int *)0x0;
    }
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))(local_18);
      local_18 = (int *)0x0;
    }
    if (local_10 != 0) {
      FUN_00537ad0();
    }
  }
  ExceptionList = local_c;
  return;
}

