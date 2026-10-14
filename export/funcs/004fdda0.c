
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004fdda0(int param_1,int *param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float local_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [8];
  float fStack_28;
  float fStack_1c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  FUN_004f7ef0(local_30);
  FUN_00402e30(param_1 + 0x84,1,1);
  iVar4 = *(int *)(param_1 + 0x6c);
  local_68 = 1.0;
  if (*(float *)(iVar4 + 0x90) < *(float *)(iVar4 + 0x8c)) {
    pfVar2 = (float *)(**(code **)(*param_2 + 0xc))(param_2);
    FUN_00422b80(fStack_c - *pfVar2,fStack_8 - pfVar2[1],fStack_4 - pfVar2[2]);
    fVar1 = fStack_60 * fStack_60 + fStack_5c * fStack_5c + fStack_58 * fStack_58;
    fVar3 = (float)(0x5f3759df - ((int)fVar1 >> 1));
    iVar4 = *(int *)(param_1 + 0x6c);
    fVar3 = (_DAT_005ca220 - fVar3 * fVar3 * fVar1 * _DAT_005c75e0) * fVar3;
    fStack_60 = fStack_60 * fVar3;
    fStack_5c = fStack_5c * fVar3;
    fStack_58 = fStack_58 * fVar3;
    fVar1 = fStack_28 * fStack_60 + fStack_5c * fStack_1c + fStack_58 * fStack_10;
    if (*(float *)(iVar4 + 0x90) <= fVar1) {
      if (fVar1 < *(float *)(iVar4 + 0x8c)) {
        local_68 = (fVar1 - *(float *)(iVar4 + 0x90)) /
                   (*(float *)(iVar4 + 0x8c) - *(float *)(iVar4 + 0x90));
      }
    }
    else {
      local_68 = 0.0;
    }
  }
  fVar1 = *(float *)(param_1 + 0x7c);
  FUN_00422b80(fVar1 * *(float *)(iVar4 + 0x60),fVar1 * *(float *)(iVar4 + 100),
               fVar1 * *(float *)(iVar4 + 0x68));
  iVar4 = *(int *)(param_1 + 0x6c);
  FUN_00422b80(*(float *)(iVar4 + 0x54) - *(float *)(iVar4 + 0x6c),
               *(float *)(iVar4 + 0x58) - *(float *)(iVar4 + 0x70),
               *(float *)(iVar4 + 0x5c) - *(float *)(iVar4 + 0x74));
  fVar1 = *(float *)(param_1 + 0x7c);
  iVar4 = *(int *)(param_1 + 0x6c);
  fStack_48 = fStack_60 * fVar1;
  fStack_44 = fStack_5c * fVar1;
  fStack_34 = fVar1 * fStack_58 + *(float *)(iVar4 + 0x74);
  fStack_38 = fStack_44 + *(float *)(iVar4 + 0x70);
  fStack_3c = fStack_48 + *(float *)(iVar4 + 0x6c);
  local_54 = local_54 * local_68;
  fStack_50 = fStack_50 * local_68;
  fStack_4c = fStack_4c * local_68;
  FUN_004038f0(param_2,&fStack_c,&fStack_3c,&local_54,*(undefined4 *)(iVar4 + 0x78),
               *(undefined4 *)(iVar4 + 0x7c));
  return 1;
}

