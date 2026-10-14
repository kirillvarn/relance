
void __thiscall FUN_004f7ef0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int aiStack_48 [2];
  int *piStack_40;
  int iStack_3c;
  int *piStack_14;
  
  if (((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_1 + 0x44) != 8)) &&
     (iStack_3c = *(int *)(param_1 + 0x40), iStack_3c != -1)) {
    piStack_40 = *(int **)Engine_exref;
    aiStack_48[1] = 0x4f7f1e;
    aiStack_48[0] = (**(code **)(*piStack_40 + 0xa0))();
    if (DAT_00674f50 == (int *)0x0) {
      aiStack_48[1] = 0x4f7f2e;
      DAT_00674f50 = (int *)FUN_005b73e0();
    }
    aiStack_48[1] = param_1 + 0x10;
    (**(code **)(*DAT_00674f50 + 0x1c))(DAT_00674f50,&stack0xffffffc8);
    piVar2 = aiStack_48;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piStack_14 = *piVar2;
      piVar2 = piVar2 + 1;
      piStack_14 = piStack_14 + 1;
    }
    return;
  }
  puVar3 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

