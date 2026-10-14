
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005842a0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,int param_6,char param_7,char param_8,undefined4 *param_9,
            undefined4 *param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float *pfVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x4e4) = *param_2;
  *(undefined4 *)(param_1 + 0x4e8) = uVar2;
  *(undefined4 *)(param_1 + 0x4ec) = uVar1;
  *(undefined4 *)(param_1 + 0x488) = *param_3;
  *(undefined4 *)(param_1 + 0x48c) = param_3[1];
  *(undefined4 *)(param_1 + 0x490) = param_3[2];
  uVar1 = param_4[2];
  uVar2 = param_4[1];
  iVar8 = 3;
  *(undefined4 *)(param_1 + 0x37c) = *param_4;
  *(undefined4 *)(param_1 + 0x380) = uVar2;
  *(undefined4 *)(param_1 + 900) = uVar1;
  fVar3 = *(float *)(param_1 + 900);
  *(undefined4 *)(param_1 + 0x35c) = 0;
  fVar9 = (float10)*(float *)(param_1 + 0x37c) * (float10)_DAT_005c77f4;
  *(undefined4 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  fVar10 = (float10)fcos(fVar9);
  *(undefined4 *)(param_1 + 0x374) = 0;
  fVar9 = (float10)fsin((float10)(float)fVar9);
  *(float *)(param_1 + 0x358) = (float)fVar10;
  *(float *)(param_1 + 0x360) = (float)fVar9;
  *(float *)(param_1 + 0x370) = (float)-fVar9;
  *(float *)(param_1 + 0x378) = (float)fVar10;
  fVar9 = (float10)*(float *)(param_1 + 0x380) * (float10)_DAT_005c77f4;
  fVar10 = (float10)fcos(fVar9);
  fVar9 = (float10)fsin(fVar9);
  pfVar6 = (float *)(param_1 + 0x370);
  do {
    fVar4 = pfVar6[-3];
    iVar8 = iVar8 + -1;
    pfVar6[-3] = (float)((float10)(float)fVar10 * (float10)fVar4 - fVar9 * (float10)*pfVar6);
    *pfVar6 = (float)((float10)fVar4 * fVar9 + (float10)(float)fVar10 * (float10)*pfVar6);
    pfVar6 = pfVar6 + 1;
  } while (iVar8 != 0);
  FUN_004c8bc0(fVar3 * _DAT_005c77f4);
  *(undefined4 *)(param_1 + 0x470) = *param_5;
  *(undefined4 *)(param_1 + 0x474) = param_5[1];
  *(undefined4 *)(param_1 + 0x478) = param_5[2];
  if (param_6 != 0) {
    *(undefined4 *)(param_1 + 0x318) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x308) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2f8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x314) = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x324) = 0;
    *(undefined4 *)(param_1 + 800) = 0;
    *(undefined4 *)(param_1 + 0x31c) = 0;
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      piVar7 = (int *)(**(code **)(**(int **)(param_1 + 4) + 8))();
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x90))(param_6,(undefined4 *)(param_1 + 0x2f8));
        *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x31c);
        *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 800);
        *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x324);
      }
    }
  }
  bVar5 = (param_7 << 2 ^ *(byte *)(param_1 + 0x518)) & 4 ^ *(byte *)(param_1 + 0x518);
  *(byte *)(param_1 + 0x518) = (param_8 << 3 ^ bVar5) & 8 ^ bVar5;
  *(undefined4 *)(param_1 + 0x4c0) = *param_9;
  *(undefined4 *)(param_1 + 0x4bc) = *param_10;
  return;
}

