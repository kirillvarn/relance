
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ff3c0(int param_1,float param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  int *piVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 local_58;
  float local_50;
  float local_4c;
  undefined8 local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  float fStack_10;
  
  iVar3 = *(int *)(param_1 + 0x2a4);
  if (iVar3 != 0) {
    if ((iVar3 == 2) || (iVar3 == 3)) {
      fVar11 = param_2 + *(float *)(param_1 + 0x264);
      *(float *)(param_1 + 0x264) = fVar11;
      fVar11 = fVar11 / *(float *)(param_1 + 0x9c);
      if (_DAT_005c75dc < fVar11) {
        fVar11 = _DAT_005c75dc;
      }
      if (DAT_00613264 != '\0') {
        local_4c = (float)(*(int *)(param_1 + 0x78) + -1);
        *(float *)(param_1 + 0x270) =
             ((*(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x94)) * fVar11 +
             *(float *)(param_1 + 0x94)) * param_2 + *(float *)(param_1 + 0x270);
        uVar2 = ftol();
        *(undefined4 *)(param_1 + 0x26c) = uVar2;
      }
      iVar3 = ((*(int *)(param_1 + 0x78) - DAT_0061325c) - DAT_00613254) + -1;
      local_58 = (double)CONCAT44(local_58._4_4_,iVar3);
      if (iVar3 <= *(int *)(param_1 + 0x26c)) {
        FUN_00500a80(DAT_00613258 + DAT_0061325c + 1 + DAT_00613254);
        iVar3 = DAT_00613258 + DAT_0061325c + 1 + DAT_00613254;
        if (iVar3 < 1) {
          FUN_005012e0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0xa8),
                       *(undefined4 *)(param_1 + 0xac),3,0);
        }
        else {
          FUN_00501470(iVar3);
        }
        iVar3 = DAT_00613258 + DAT_0061325c + 1 + DAT_00613254;
        if (iVar3 < 1) {
          FUN_005012e0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x88),
                       *(undefined4 *)(param_1 + 0x8c),0,0);
        }
        else {
          FUN_00501470(iVar3);
        }
        FUN_00500de0(DAT_00613258 + DAT_0061325c + 1 + DAT_00613254);
        iVar3 = DAT_00613258 + DAT_0061325c + 1 + DAT_00613254;
        if (iVar3 < 1) {
          FUN_005012e0(*(undefined4 *)(param_1 + 0x78),0x3f000000,0x3f800000,0,0);
        }
        else {
          FUN_00501470(iVar3);
        }
        local_4c = (float)(*(int *)(param_1 + 0x78) + -1);
        *(undefined4 *)(param_1 + 0x26c) = 3;
        *(float *)(param_1 + 0x270) =
             _DAT_005d4f28 / (float)(int)local_4c +
             (*(float *)(param_1 + 0x270) - (float)(int)(float)local_58 / (float)(int)local_4c);
      }
      if (DAT_00613264 != '\0') {
        local_4c = _DAT_00613268 + *(float *)(param_1 + 0x270);
        local_58._0_4_ = *(float *)(param_1 + 0x270);
        fVar7 = (float10)FUN_00501810(*(float *)(param_1 + 0x270));
        fVar11 = (float)fVar7;
        fVar7 = (float10)FUN_00501810((float)local_58);
        fVar10 = (float)fVar7;
        fVar7 = (float10)FUN_00501810((float)local_58);
        uVar2 = FUN_00422b80((float)fVar7,fVar10,fVar11);
        FUN_004e7090(&local_24,uVar2);
        *(undefined4 *)(param_1 + 0x274) = local_24;
        *(undefined4 *)(param_1 + 0x278) = local_20;
        *(undefined4 *)(param_1 + 0x27c) = local_1c;
        fVar7 = (float10)FUN_00501810(local_4c);
        fVar1 = local_4c;
        fVar11 = (float)fVar7;
        fVar7 = (float10)FUN_00501810(local_4c);
        fVar10 = (float)fVar7;
        fVar7 = (float10)FUN_00501810(fVar1);
        uVar2 = FUN_00422b80((float)fVar7,fVar10,fVar11);
        FUN_004e7090(local_18,uVar2);
        FUN_00423b60(&local_58,local_18,param_1 + 0x274);
        fVar7 = (float10)FUN_00410190();
        fVar7 = (float10)_DAT_005c75dc / fVar7;
        local_58 = (double)CONCAT44((float)((float10)local_58._4_4_ * fVar7),
                                    (float)((float10)(float)local_58 * fVar7));
        local_50 = (float)((float10)local_50 * fVar7);
        FUN_00411350(&local_48);
        FUN_00422b80(local_48._4_4_ * _DAT_005c7474 - local_40,
                     local_40 * _DAT_005c7474 - (float)local_48 * _DAT_005c7474,
                     (float)local_48 - local_48._4_4_ * _DAT_005c7474);
        FUN_00411350(&local_3c);
        FUN_00422b80(local_34 * local_48._4_4_ - local_38 * local_40,
                     local_40 * local_3c - local_34 * (float)local_48,
                     local_38 * (float)local_48 - local_48._4_4_ * local_3c);
        fVar7 = (float10)FUN_00410190();
        fVar7 = (float10)_DAT_005c75dc / fVar7;
        fVar8 = (float10)local_3c;
        local_3c = (float)(fVar8 * fVar7);
        local_38 = (float)((float10)local_38 * fVar7);
        *(float *)(param_1 + 0x28c) = local_38;
        local_34 = (float)((float10)local_34 * fVar7);
        *(float *)(param_1 + 0x298) = local_34;
        *(float *)(param_1 + 0x280) = (float)(fVar8 * fVar7);
        fVar7 = (float10)FUN_00410190();
        fVar7 = (float10)_DAT_005c75dc / fVar7;
        fVar8 = (float10)local_30;
        local_30 = (float)(fVar8 * fVar7);
        local_2c = (float)((float10)local_2c * fVar7);
        local_28 = (float)((float10)local_28 * fVar7);
        *(float *)(param_1 + 0x284) = (float)(fVar8 * fVar7);
        *(float *)(param_1 + 0x290) = local_2c;
        *(float *)(param_1 + 0x29c) = local_28;
        fVar7 = (float10)FUN_00410190();
        fVar7 = (float10)_DAT_005c75dc / fVar7;
        fVar8 = (float10)(float)local_48;
        fVar9 = (float10)local_48._4_4_;
        local_48 = (double)CONCAT44((float)(fVar9 * fVar7),(float)(fVar8 * fVar7));
        *(float *)(param_1 + 0x294) = (float)(fVar9 * fVar7);
        local_40 = (float)((float10)local_40 * fVar7);
        *(float *)(param_1 + 0x2a0) = local_40;
        *(float *)(param_1 + 0x288) = (float)(fVar8 * fVar7);
        iVar3 = *(int *)(param_1 + 0x260);
        if (iVar3 != 0) {
          if (((iVar3 == -0xc) || (piVar6 = *(int **)(iVar3 + 0x10), piVar6 == (int *)0x0)) ||
             ((piVar6[0x13] & 0x503U) != 0x503)) {
            piVar6 = (int *)0x0;
          }
          (**(code **)(*piVar6 + 0x7c))(param_1 + 0x274,(float *)(param_1 + 0x280),0);
        }
      }
    }
    if ((*(int *)(param_1 + 0x2a8) != 0) && ((*(byte *)(*(int *)(param_1 + 0x2a8) + 0xb4) & 8) != 0)
       ) {
      local_30 = 0.8;
      local_2c = 0.8;
      local_28 = 1.0;
      local_4c = (float)rand();
      local_58 = (double)CONCAT44(local_58._4_4_,(float)(int)local_4c * _DAT_005caeec);
      local_4c = (float)rand();
      fVar11 = (float)_DAT_005c89b8 - (float)(int)local_4c * (float)local_58 * _DAT_005caeec;
      local_30 = local_30 * fVar11;
      local_2c = local_2c * fVar11;
      local_28 = local_28 * fVar11;
      FUN_00411d60(&local_24,&local_30,0x437f0000);
      iVar3 = ftol();
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      uVar12 = 0xff;
      uVar2 = ftol(iVar3,0xff);
      uVar2 = FUN_004104c0(uVar2);
      uVar4 = ftol(uVar2);
      uVar4 = FUN_004104c0(uVar4);
      FUN_004a1ad0(uVar4,uVar2,iVar3,uVar12);
      FUN_004114f0(&local_4c);
      fVar11 = _DAT_00613260;
      pfVar5 = (float *)(param_1 + 0x2ac);
      *pfVar5 = _DAT_00613260 * *pfVar5;
      *(float *)(param_1 + 0x2b0) = fVar11 * *(float *)(param_1 + 0x2b0);
      *(float *)(param_1 + 0x2b4) = fVar11 * *(float *)(param_1 + 0x2b4);
      local_4c = (float)rand();
      local_48 = (double)((float)(int)local_4c * _DAT_005caeec);
      local_4c = (float)rand();
      local_58 = (double)((float)(int)local_4c * _DAT_005caeec);
      local_4c = (float)rand();
      fVar7 = (float10)_DAT_005c89b8;
      fStack_10 = (float)(((float10)local_48 + (float10)local_48) - (float10)_DAT_005c89b8);
      *pfVar5 = (((float)(int)local_4c * _DAT_005caeec + (float)(int)local_4c * _DAT_005caeec) -
                (float)_DAT_005c89b8) + *pfVar5;
      *(float *)(param_1 + 0x2b0) =
           (float)((((float10)local_58 + (float10)local_58) - fVar7) +
                  (float10)*(float *)(param_1 + 0x2b0));
      *(float *)(param_1 + 0x2b4) = fStack_10 + *(float *)(param_1 + 0x2b4);
      fVar11 = _DAT_005c75dc /
               SQRT(*(float *)(param_1 + 0x2b4) * *(float *)(param_1 + 0x2b4) +
                    *(float *)(param_1 + 0x2b0) * *(float *)(param_1 + 0x2b0) + *pfVar5 * *pfVar5);
      *pfVar5 = fVar11 * *pfVar5;
      *(float *)(param_1 + 0x2b0) = fVar11 * *(float *)(param_1 + 0x2b0);
      *(float *)(param_1 + 0x2b4) = fVar11 * *(float *)(param_1 + 0x2b4);
      FUN_00411470(pfVar5);
    }
    if (0 < *(int *)(param_1 + 8)) {
      iVar3 = 0;
      pfVar5 = (float *)(param_1 + 0x2c);
      do {
        iVar3 = iVar3 + 1;
        *pfVar5 = param_2 * pfVar5[2] + *pfVar5;
        pfVar5[1] = param_2 * pfVar5[3] + pfVar5[1];
        pfVar5 = pfVar5 + 0xd;
      } while (iVar3 < *(int *)(param_1 + 8));
    }
  }
  return;
}

