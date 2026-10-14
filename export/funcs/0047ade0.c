
undefined4 __thiscall FUN_0047ade0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_2 == 0xef02) {
    iVar2 = param_1[0xd8];
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x6c) & 2) != 0)) {
      *(byte *)(iVar2 + 0x6c) = *(byte *)(iVar2 + 0x6c) & 0xfc;
      if (*(int *)(param_1[0xd8] + 0x978) != 0) {
        *(undefined4 *)(param_1[0xd8] + 0x978) = 0;
      }
    }
    uVar5 = 1;
    uVar4 = FUN_004c4060(1);
    FUN_004c62b0(uVar4,uVar5);
    *(undefined1 *)((int)param_1 + 0x4e3) = 0;
    if ((code *)param_1[0x140] != (code *)0x0) {
      (*(code *)param_1[0x140])(*(undefined1 *)((int)param_1 + 0x4e5),param_1[0x141]);
      param_1[0x140] = 0;
    }
    FUN_0059dd00(param_1,0);
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 8);
      FUN_0043d2a0(iVar2);
      iVar2 = iVar3;
    }
    (**(code **)(*param_1 + 0x28))();
    (**(code **)*param_1)(1);
    return 1;
  }
  if (param_2 == 0xef01) {
    FUN_005a0840(0xef01,param_3,param_4);
    if (param_1[0xd8] != 0) {
      pbVar1 = (byte *)(param_1[0xd8] + 0x6c);
      *pbVar1 = *pbVar1 | 3;
    }
    (**(code **)(*param_1 + 0x2c))();
    if (((int *)param_1[0xd8] != (int *)0x0) &&
       ((**(code **)(*(int *)param_1[0xd8] + 0x2c))(), *(int *)(param_1[0xd8] + 0x978) == 2)) {
      FUN_00482040();
      (**(code **)(*param_1 + 0x2c))();
      (**(code **)(*(int *)param_1[0xd8] + 0x2c))();
    }
    return 1;
  }
  uVar4 = FUN_005a0840(param_2,param_3,param_4);
  return uVar4;
}

