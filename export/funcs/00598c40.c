
void __fastcall FUN_00598c40(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00422690(0,param_1 + 0x3c);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,7,0);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,0);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x16,1);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x89,0);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x13,5);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x14,6);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x1b,1);
  if (*(char *)(param_1 + 0xd0) != '\0') {
    FUN_00421ba0(param_1 + 0xe4);
    FUN_00421670(8);
    FUN_00421cc0(**(undefined4 **)(param_1 + 0xa8),
                 *(undefined4 *)(*(int *)(param_1 + 0x98) + *(int *)(param_1 + 0xd4) * 4),0);
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x7c),
                 *(undefined4 *)(*(int *)(param_1 + 0x98) + *(int *)(param_1 + 0xd4) * 4),0);
    if (*(int *)(param_1 + 0x98) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
    }
    uVar3 = *(int *)(param_1 + 0xd4) + 1;
    if (uVar3 < uVar2) {
      FUN_00421cc0(*(undefined4 *)(param_1 + 0x7c),
                   *(undefined4 *)(*(int *)(param_1 + 0x98) + uVar3 * 4),0);
      FUN_00421cc0(**(undefined4 **)(param_1 + 0xa8),
                   *(undefined4 *)(*(int *)(param_1 + 0x98) + 4 + *(int *)(param_1 + 0xd4) * 4),0);
    }
    else {
      FUN_00421cc0(*(undefined4 *)(param_1 + 0x7c),-*(float *)(param_1 + 0x80),0);
      FUN_00421cc0(**(undefined4 **)(param_1 + 0xa8),-*(float *)(param_1 + 0x80),0);
    }
    FUN_00421690();
  }
  if (*(char *)(param_1 + 0xd8) != '\0') {
    FUN_00421ba0(param_1 + 0xe8);
    FUN_00421670(8);
    FUN_00421cc0(**(undefined4 **)(param_1 + 0xa8),
                 *(undefined4 *)(*(int *)(param_1 + 0x98) + *(int *)(param_1 + 0xdc) * 4),0);
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x7c),
                 *(undefined4 *)(*(int *)(param_1 + 0x98) + *(int *)(param_1 + 0xdc) * 4),0);
    if (*(int *)(param_1 + 0x98) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
    }
    uVar3 = *(int *)(param_1 + 0xdc) + 1;
    if (uVar3 < uVar2) {
      FUN_00421cc0(*(undefined4 *)(param_1 + 0x7c),
                   *(undefined4 *)(*(int *)(param_1 + 0x98) + uVar3 * 4),0);
      FUN_00421cc0(**(undefined4 **)(param_1 + 0xa8),
                   *(undefined4 *)(*(int *)(param_1 + 0x98) + 4 + *(int *)(param_1 + 0xdc) * 4),0);
    }
    else {
      FUN_00421cc0(*(undefined4 *)(param_1 + 0x7c),-*(float *)(param_1 + 0x80),0);
      FUN_00421cc0(**(undefined4 **)(param_1 + 0xa8),-*(float *)(param_1 + 0x80),0);
    }
    FUN_00421690();
  }
  FUN_0059e5c0();
  FUN_00422690(0,param_1 + 0x3c);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,7,0);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0xe,0);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x16,1);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x89,0);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x13,5);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x14,6);
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x1b,1);
  FUN_00421ba0(param_1 + 0xe0);
  FUN_00421670(7);
  FUN_00421cc0(0,0,0);
  FUN_00421cc0(*(undefined4 *)(param_1 + 0x7c),0,0);
  FUN_00421cc0(*(undefined4 *)(param_1 + 0x7c),-*(float *)(param_1 + 0x80),0);
  FUN_00421cc0(0,-*(float *)(param_1 + 0x80),0);
  FUN_00421690();
  FUN_00421670(2);
  for (uVar2 = 0;
      (iVar1 = *(int *)(param_1 + 0x98), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0x9c) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    FUN_00421cc0(0,*(undefined4 *)(iVar1 + uVar2 * 4),0);
    FUN_00421cc0(*(undefined4 *)(param_1 + 0x7c),
                 *(undefined4 *)(*(int *)(param_1 + 0x98) + uVar2 * 4),0);
  }
  for (uVar2 = 0;
      (iVar1 = *(int *)(param_1 + 0xa8), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0xac) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    FUN_00421cc0(*(undefined4 *)(iVar1 + uVar2 * 4),0,0);
    FUN_00421cc0(*(undefined4 *)(*(int *)(param_1 + 0xa8) + uVar2 * 4),-*(float *)(param_1 + 0x80),0
                );
  }
  FUN_00421690();
  return;
}

