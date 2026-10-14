
void __fastcall FUN_004b93f0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 extraout_ST0;
  undefined4 **ppuStack_26c;
  uint uStack_268;
  undefined4 uStack_264;
  undefined4 *puStack_260;
  uint uStack_25c;
  undefined4 uStack_258;
  undefined4 *puStack_254;
  uint uStack_250;
  undefined4 *puStack_24c;
  undefined4 *puStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  
  uStack_220 = 0x4b9401;
  iVar2 = FUN_004c55d0();
  *(int *)(param_1 + 0x420) = iVar2;
  uStack_220 = DAT_0066873c;
  uStack_224 = 0x4b941b;
  FUN_0043a510();
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x3cc)) {
    puVar7 = (undefined4 *)(param_1 + 0x3fc);
    do {
      uVar3 = puVar7[-0xf];
      puVar7[6] = iVar6;
      *puVar7 = 0;
      uStack_224 = 0x4b944b;
      uStack_220 = uVar3;
      fVar8 = (float10)FUN_00438160();
      uStack_224 = 0x4b9459;
      uStack_220 = uVar3;
      FUN_004381c0();
      uStack_220 = 0x4b9462;
      uVar3 = ftol();
      puVar7[3] = uVar3;
      if (((iVar2 < 0) || (0x3e6 < iVar2)) || ((float)fVar8 <= (float)iVar2)) {
        if ((float10)*(float *)(param_1 + 0x3f8) < extraout_ST0) {
          *puVar7 = 2;
        }
      }
      else {
        uStack_220 = 0x4b948b;
        bVar1 = SinglePlayer();
        if (bVar1) {
          *puVar7 = 1;
        }
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x3cc));
  }
  do {
    iVar2 = 0;
    bVar1 = true;
    if (*(int *)(param_1 + 0x3cc) == 1 || *(int *)(param_1 + 0x3cc) + -1 < 0) break;
    piVar4 = (int *)(param_1 + 0x400);
    do {
      iVar6 = piVar4[-1];
      if (*piVar4 < iVar6) {
        piVar4[-1] = *piVar4;
        *piVar4 = iVar6;
        iVar6 = piVar4[2];
        piVar4[2] = piVar4[3];
        piVar4[3] = iVar6;
        iVar6 = piVar4[-5];
        piVar4[-5] = piVar4[-4];
        piVar4[-4] = iVar6;
        iVar6 = piVar4[-0x16];
        piVar4[-0x16] = piVar4[-0x15];
        piVar4[-0x15] = iVar6;
        iVar6 = piVar4[-0x13];
        piVar4[-0x13] = piVar4[-0x12];
        piVar4[-0x12] = iVar6;
        iVar6 = piVar4[-0x10];
        piVar4[-0x10] = piVar4[-0xf];
        piVar4[-0xf] = iVar6;
        iVar6 = piVar4[9];
        piVar4[9] = piVar4[10];
        piVar4[10] = iVar6;
        iVar6 = piVar4[0xc];
        piVar4[0xc] = piVar4[0xd];
        piVar4[0xd] = iVar6;
        iVar6 = piVar4[5];
        bVar1 = false;
        piVar4[5] = piVar4[6];
        piVar4[6] = iVar6;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x3cc) + -1);
  } while (!bVar1);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x3cc)) {
    puVar7 = (undefined4 *)(param_1 + 0x34c);
    do {
      uStack_224 = puVar7[0x36];
      uStack_220 = 0;
      uStack_228 = 4;
      uStack_22c = 0x4b9595;
      (**(code **)(*(int *)*puVar7 + 0xa8))();
      uStack_230 = puVar7[0x39];
      uStack_22c = 0;
      uStack_234 = 0x1e;
      uStack_238 = 0x4b95ab;
      (**(code **)(*(int *)puVar7[3] + 0xa8))();
      uStack_23c = *(undefined4 *)(&DAT_00611f78 + puVar7[0x28] * 4);
      uStack_238 = 0;
      uStack_240 = 0x1e;
      uStack_244 = 0x4b95cb;
      (**(code **)(*(int *)puVar7[0x3c] + 0xa8))();
      puStack_248 = (undefined4 *)puVar7[0x17];
      uStack_244 = 0xffffffff;
      puStack_24c = &uStack_224;
      uStack_250 = 0x4b95db;
      FUN_004779a0();
      uStack_244 = 0;
      puStack_248 = &uStack_224;
      puStack_24c = (undefined4 *)0x1d;
      uStack_250 = 0x4b95f2;
      (**(code **)(*(int *)puVar7[6] + 0xa8))();
      uVar5 = (uint)(puVar7[0x2c] != 0);
      puStack_254 = &uStack_238;
      uStack_238 = 0xff808080;
      uStack_258 = 0x33;
      uStack_25c = 0x4b962a;
      uStack_250 = uVar5;
      (**(code **)(*(int *)puVar7[-6] + 0xa8))();
      puStack_260 = &uStack_244;
      uStack_264 = 0x33;
      uStack_268 = 0x4b963d;
      uStack_25c = uVar5;
      (**(code **)(*(int *)puVar7[-3] + 0xa8))();
      ppuStack_26c = &puStack_254;
      puStack_254 = (undefined4 *)0xffc0c0c0;
      uStack_268 = uVar5;
      (**(code **)(*(int *)puVar7[3] + 0xa8))(0x33);
      (**(code **)(*(int *)puVar7[0x3c] + 0xa8))(0x33,&puStack_260,uVar5);
      (**(code **)(*(int *)puVar7[6] + 0xa8))(0x33,&ppuStack_26c,uVar5);
      iVar2 = iVar2 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x3cc));
  }
  return;
}

