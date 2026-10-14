
void __thiscall FUN_00537860(int param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float local_78;
  float local_74;
  float local_70;
  undefined1 auStack_68 [4];
  float local_64;
  undefined4 auStack_60 [12];
  undefined4 auStack_30 [12];
  
  if ((*(byte *)(param_1 + 0xb4) & 8) != 0) {
    if (*(int *)(param_1 + 0xec) == -1) {
      local_64 = param_2 * *(float *)(param_1 + 0x128);
      local_78 = param_2 * *(float *)(param_1 + 0x120) + *(float *)(param_1 + 0x98);
      local_74 = param_2 * *(float *)(param_1 + 0x124) + *(float *)(param_1 + 0x9c);
      local_70 = local_64 + *(float *)(param_1 + 0xa0);
      FUN_00410ef0(&local_78);
    }
    else {
      uVar1 = (**(code **)(**(int **)Engine_exref + 0xa0))
                        (*(int **)Engine_exref,*(int *)(param_1 + 0xec));
      if (DAT_006789c0 == (int *)0x0) {
        DAT_006789c0 = (int *)FUN_005b73e0();
      }
      (**(code **)(*DAT_006789c0 + 0x1c))(DAT_006789c0,auStack_68,uVar1,param_1 + 0xf0);
      puVar3 = auStack_60;
      puVar4 = auStack_30;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_00410fe0(auStack_30);
    }
    if (*(int *)(param_1 + 0xd4) != 0) {
      FUN_005386d0(param_2,param_1);
    }
  }
  return;
}

