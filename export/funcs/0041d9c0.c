
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_0041d9c0(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  iVar6 = *(int *)(param_1 + 0x24);
  if (iVar6 == 0) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: missing shape (%s)\n",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\mouse.cpp",0x401,param_1 + 4);
    return *(int *)(param_1 + 0x24) != 0;
  }
  iVar1 = *(int *)(iVar6 + 0x18);
  iVar6 = *(int *)(iVar6 + 0x1c);
  fVar7 = (float10)fsin((float10)*(float *)(param_1 + 0x58));
  fVar7 = fVar7 * (float10)*(float *)(param_1 + 0x54) *
          (float10)((float)DAT_00610850 * _DAT_005c8d30);
  fVar8 = (float10)fcos((float10)*(float *)(param_1 + 0x58));
  fVar2 = (float)(fVar8 * (float10)*(float *)(param_1 + 0x54) *
                 (float10)((float)DAT_00610850 * _DAT_005c8d30));
  fVar3 = (float)(fVar7 * (float10)*(float *)(param_1 + 0x48) +
                 ((float10)param_3 - (float10)fVar2 * (float10)*(float *)(param_1 + 0x44)));
  fVar4 = (float)(((float10)param_4 - fVar7 * (float10)*(float *)(param_1 + 0x44)) -
                 (float10)fVar2 * (float10)*(float *)(param_1 + 0x48));
  *param_2 = fVar3;
  param_2[1] = fVar4;
  fVar8 = (float10)fVar2 * (float10)iVar1 + (float10)fVar3;
  param_2[2] = (float)fVar8;
  fVar9 = fVar7 * (float10)iVar1;
  param_2[3] = (float)(fVar9 + (float10)fVar4);
  fVar5 = (float)(fVar7 * (float10)iVar6);
  param_2[4] = (float)(fVar8 - (float10)fVar5);
  fVar7 = (float10)fVar2 * (float10)iVar6;
  param_2[5] = (float)((float10)(float)fVar9 + fVar7 + (float10)fVar4);
  param_2[6] = fVar3 - fVar5;
  param_2[7] = (float)(fVar7 + (float10)fVar4);
  return *(int *)(param_1 + 0x24) != 0;
}

