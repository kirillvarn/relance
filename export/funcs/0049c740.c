
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0049c740(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,undefined4 *param_8,float param_9,uint param_10,
                 float param_11,float param_12,float param_13,float param_14,float param_15,
                 int param_16,float param_17,float param_18,double param_19,int *param_20,
                 int param_21,undefined4 *param_22,float param_23,undefined4 param_24,float param_25
                 ,undefined4 param_26,undefined4 param_27,float param_28,undefined4 param_29,
                 undefined4 param_30,float param_31,float param_32,float param_33,float param_34,
                 float param_35,uint param_36,float param_37,float param_38,float param_39,
                 double param_40,float param_41,float param_42,float param_43,float param_44,
                 float param_45,float param_46,float param_47,int param_48,float param_49,
                 float param_50,float param_51,float param_52,undefined4 *param_53,float param_54,
                 int param_55,float param_56,float param_57,float param_58,undefined4 param_59,
                 float param_60,undefined1 *param_61,undefined4 *param_62,undefined4 *param_63,
                 float param_64)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined4 uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int *piVar10;
  int extraout_ECX;
  float fVar11;
  short sVar12;
  int *piVar13;
  undefined4 unaff_EBP;
  short *psVar14;
  short *psVar15;
  float unaff_ESI;
  float fVar16;
  float fVar17;
  int *piVar18;
  undefined4 *puVar19;
  float10 fVar20;
  float10 fVar21;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined4 in_stack_0000012c;
  float in_stack_0000013c;
  undefined4 in_stack_00000140;
  float in_stack_00000144;
  float in_stack_00000148;
  undefined4 in_stack_0000014c;
  float in_stack_00000150;
  float in_stack_0000015c;
  float in_stack_00000160;
  float in_stack_00000164;
  float in_stack_00000168;
  undefined4 in_stack_0000016c;
  float in_stack_00000170;
  float in_stack_00000174;
  undefined4 in_stack_00000178;
  undefined4 in_stack_0000017c;
  undefined4 in_stack_00000180;
  undefined4 in_stack_00000184;
  undefined4 in_stack_00000188;
  undefined4 in_stack_0000018c;
  undefined4 in_stack_000001a8;
  undefined4 in_stack_000001ac;
  undefined4 in_stack_000001b0;
  undefined4 in_stack_000001b4;
  undefined4 in_stack_000001b8;
  undefined4 in_stack_000001bc;
  undefined4 in_stack_000001c0;
  undefined4 in_stack_000001c4;
  undefined4 in_stack_000001c8;
  float in_stack_000001cc;
  float in_stack_000001d0;
  float in_stack_000001d4;
  undefined4 in_stack_000001e4;
  undefined4 in_stack_000001e8;
  undefined4 in_stack_000001ec;
  int *in_stack_0000116c;
  int *in_stack_00001170;
  undefined1 *puVar22;
  undefined1 *puVar23;
  
  FUN_005b7e90();
  if (*(int *)(extraout_ECX + 0xb5c) == 0) {
    param_16 = 0;
  }
  else {
    param_16 = *(int *)(extraout_ECX + 0xb60) - *(int *)(extraout_ECX + 0xb5c) >> 2;
  }
  iVar5 = (**(code **)(**(int **)(extraout_ECX + 0x7e0) + 0x18))();
  param_21 = iVar5;
  FUN_004c5040();
  if (((((*(float *)(extraout_ECX + 0x46c) == *(float *)(extraout_ECX + 0xef0)) &&
        (*(float *)(extraout_ECX + 0x470) == *(float *)(extraout_ECX + 0xef4))) &&
       (*(float *)(extraout_ECX + 0x474) == *(float *)(extraout_ECX + 0xef8))) &&
      ((*(float *)(extraout_ECX + 0xefc) == *(float *)(extraout_ECX + 0x3f8) &&
       (iVar6 = (**(code **)**(undefined4 **)(extraout_ECX + 0x7e0))(),
       *(int *)(extraout_ECX + 0xf00) == iVar6)))) &&
     ((*(int *)(extraout_ECX + 0xf04) == DAT_006720a4 &&
      (*(int *)(extraout_ECX + 0xf08) == DAT_006720a0)))) {
    fVar20 = (float10)FUN_0042d680();
    fVar20 = fVar20 + (float10)*(float *)(extraout_ECX + 0xf0c);
    *(float *)(extraout_ECX + 0xf0c) = (float)fVar20;
    fVar21 = (float10)DAT_005d2ed0;
    if (fVar20 < fVar21) {
      return CONCAT22(extraout_var,
                      (ushort)(fVar20 < fVar21) << 8 | (ushort)(NAN(fVar20) || NAN(fVar21)) << 10 |
                      (ushort)(fVar20 == fVar21) << 0xe);
    }
    param_4 = 0.0;
    *(float *)(extraout_ECX + 0xf0c) = (float)(fVar20 - (float10)DAT_005d2ed0);
    piVar10 = (int *)**(int **)(iVar5 + 4);
    if (piVar10 != *(int **)(iVar5 + 4)) {
      do {
        piVar13 = piVar10 + 2;
        piVar18 = (int *)&stack0x00000568;
        for (iVar5 = 0x303; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar18 = *piVar13;
          piVar13 = piVar13 + 1;
          piVar18 = piVar18 + 1;
        }
        iVar5 = (**(code **)(*in_stack_00001170 + 100))();
        if (DAT_006720a0 == 1) {
          if ((iVar5 == 0) || (cVar2 = (**(code **)(*in_stack_00001170 + 0x70))(), cVar2 != '\0'))
          goto LAB_0049c8f7;
LAB_0049c8b6:
          if (*(char *)(extraout_ECX + 0x87e) == '\0') {
            (**(code **)(*in_stack_00001170 + 4))();
            FUN_004c4da0();
            bVar3 = (**(code **)(*in_stack_00001170 + 0x80))();
            if ((bVar3 & 1) == 0) goto LAB_0049c8f7;
          }
          param_4 = (float)((int)param_4 + 1);
        }
        else if (DAT_006720a0 == 2) {
          if (iVar5 != 0) {
            bVar3 = (**(code **)(*in_stack_00001170 + 0x70))();
LAB_0049c8b4:
            if (bVar3 != 0) goto LAB_0049c8b6;
          }
        }
        else {
          if (DAT_006720a0 == 5) {
            (**(code **)(*in_stack_00001170 + 4))();
            FUN_004c4da0();
            bVar3 = (**(code **)(*in_stack_00001170 + 0x80))();
            bVar3 = bVar3 & 4;
            goto LAB_0049c8b4;
          }
          if (iVar5 != 0) {
            iVar5 = (**(code **)(*in_stack_00001170 + 4))();
            iVar6 = 0;
            if (0 < param_16) {
              piVar13 = *(int **)(extraout_ECX + 0xb5c);
              do {
                if (*piVar13 == iVar5) goto LAB_0049c8b6;
                iVar6 = iVar6 + 1;
                piVar13 = piVar13 + 1;
              } while (iVar6 < param_16);
            }
          }
        }
LAB_0049c8f7:
        piVar10 = (int *)*piVar10;
      } while (piVar10 != (int *)*(int *)(param_21 + 4));
    }
    if (param_4 == (float)*(uint *)(extraout_ECX + 0xf10)) {
      return (uint)param_4 & 0xffffff00;
    }
    *(float *)(extraout_ECX + 0xf10) = param_4;
  }
  *(float *)(extraout_ECX + 0xef0) = *(float *)(extraout_ECX + 0x46c);
  *(undefined4 *)(extraout_ECX + 0xef4) = *(undefined4 *)(extraout_ECX + 0x470);
  *(undefined4 *)(extraout_ECX + 0xef8) = *(undefined4 *)(extraout_ECX + 0x474);
  *(undefined4 *)(extraout_ECX + 0xefc) = *(undefined4 *)(extraout_ECX + 0x3f8);
  uVar7 = (**(code **)**(undefined4 **)(extraout_ECX + 0x7e0))();
  param_22 = *(undefined4 **)(extraout_ECX + 0xee0);
  *(undefined4 *)(extraout_ECX + 0xf00) = uVar7;
  *(int *)(extraout_ECX + 0xf04) = DAT_006720a4;
  *(int *)(extraout_ECX + 0xf08) = DAT_006720a0;
  *(undefined4 *)(extraout_ECX + 0xee8) = 0;
  *(undefined4 *)(extraout_ECX + 0xeec) = 0;
  pfVar9 = (float *)(extraout_ECX + 0x418);
  param_1 = -(*pfVar9 * _DAT_005c75e0);
  psVar14 = *(short **)(extraout_ECX + 0xee4);
  param_2 = -(*(float *)(extraout_ECX + 0x41c) * _DAT_005c75e0);
  param_3 = -(*(float *)(extraout_ECX + 0x420) * _DAT_005c75e0);
  param_4 = *(float *)(extraout_ECX + 0x3f8) - _DAT_005c75dc;
  param_5 = *(float *)(extraout_ECX + 0x46c);
  fVar16 = *(float *)(extraout_ECX + 0x3f8);
  param_6 = *(float *)(extraout_ECX + 0x470) * fVar16;
  param_7 = *(float *)(extraout_ECX + 0x474) * fVar16;
  param_45 = param_5 * fVar16 + (param_1 - *pfVar9 * _DAT_005c75e0 * param_4);
  param_46 = param_6 + (param_2 - *(float *)(extraout_ECX + 0x41c) * _DAT_005c75e0 * param_4);
  param_47 = param_7 + (param_3 - *(float *)(extraout_ECX + 0x420) * _DAT_005c75e0 * param_4);
  param_13 = *(float *)(extraout_ECX + 0x3f8);
  param_11 = *pfVar9 * param_13;
  param_12 = *(float *)(extraout_ECX + 0x41c) * param_13;
  param_13 = *(float *)(extraout_ECX + 0x420) * param_13;
  param_55 = FUN_004c4670();
  piVar10 = *(int **)(param_21 + 4);
  param_20 = (int *)*piVar10;
  if ((int *)*piVar10 != piVar10) {
    do {
      piVar10 = param_20 + 2;
      piVar13 = (int *)&stack0x00000568;
      for (iVar5 = 0x303; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar13 = *piVar10;
        piVar10 = piVar10 + 1;
        piVar13 = piVar13 + 1;
      }
      param_4 = (float)(**(code **)(*in_stack_00001170 + 100))();
      if (DAT_006720a0 != 1) {
        if (DAT_006720a0 == 2) {
          if (param_4 != 0.0) {
            bVar3 = (**(code **)(*in_stack_00001170 + 0x70))();
LAB_0049cc2b:
            if (bVar3 != 0) goto LAB_0049cc31;
          }
        }
        else {
          if (DAT_006720a0 == 5) {
            (**(code **)(*in_stack_00001170 + 4))();
            FUN_004c4da0();
            bVar3 = (**(code **)(*in_stack_00001170 + 0x80))();
            bVar3 = bVar3 & 4;
            goto LAB_0049cc2b;
          }
          if (param_4 != 0.0) {
            iVar5 = (**(code **)(*in_stack_00001170 + 4))();
            iVar6 = 0;
            if (0 < param_16) {
              piVar10 = *(int **)(extraout_ECX + 0xb5c);
              do {
                if (*piVar10 == iVar5) goto LAB_0049cc31;
                iVar6 = iVar6 + 1;
                piVar10 = piVar10 + 1;
              } while (iVar6 < param_16);
            }
          }
        }
        goto switchD_0049cf16_default;
      }
      if ((param_4 == 0.0) || (cVar2 = (**(code **)(*in_stack_00001170 + 0x70))(), cVar2 != '\0'))
      goto switchD_0049cf16_default;
LAB_0049cc31:
      if (*(char *)(extraout_ECX + 0x87e) == '\0') {
        (**(code **)(*in_stack_00001170 + 4))();
        FUN_004c4da0();
        bVar3 = (**(code **)(*in_stack_00001170 + 0x80))();
        if ((bVar3 & 1) == 0) goto switchD_0049cf16_default;
      }
      param_9 = 0.0;
      param_14 = 0.0;
      param_8 = (undefined4 *)0x0;
      if ((int)param_4 < 1) {
LAB_0049cd13:
        param_14 = 1.0;
      }
      else {
        do {
          cVar2 = (**(code **)(*in_stack_00001170 + 0x68))();
          if ((cVar2 != '\0') &&
             (iVar5 = Reputation::Vibe::GetGroupFeelingsTowards(&param_55,&param_36,&param_44),
             iVar5 == 0)) {
            param_9 = param_44 * param_23 + param_9;
            param_14 = param_23 + param_14;
          }
          param_8 = (undefined4 *)((int)param_8 + 1);
        } while ((int)param_8 < (int)param_4);
        if (param_14 == _DAT_005c7474) goto LAB_0049cd13;
      }
      param_9 = param_9 / param_14;
      if ((DAT_006720a0 == 1) || (DAT_006720a0 == 2)) {
        if (DAT_006720a4 == 0) {
          if ((param_9 <= DAT_005d2e2c) || (DAT_005d2e30 <= param_9)) goto switchD_0049cf16_default;
          goto LAB_0049ce2f;
        }
        if (DAT_006720a4 == 1) {
          if (param_9 <= DAT_005d2e2c) goto LAB_0049ce2f;
        }
        else if ((DAT_006720a4 != 2) || (DAT_005d2e30 <= param_9)) goto LAB_0049ce2f;
      }
      else {
LAB_0049ce2f:
        FUN_0045a650();
        if (DAT_006720a0 == 5) {
          param_10 = DAT_00679ba4;
LAB_0049ce61:
          param_19 = (double)CONCAT44(param_19._4_4_,param_10 >> 0x18);
          uVar4 = ftol();
          param_10 = CONCAT13(uVar4,(undefined3)param_10);
        }
        else if ((DAT_006720a0 != 2) && (DAT_006720a0 != 1)) goto LAB_0049ce61;
        (**(code **)(*in_stack_00001170 + 0x28))();
        param_1 = param_1 * *(float *)(extraout_ECX + 0xf48);
        param_2 = *(float *)(extraout_ECX + 0xf48) * param_2;
        puVar8 = (undefined4 *)(**(code **)(*in_stack_00001170 + 0xc))();
        fVar16 = *(float *)(extraout_ECX + 0xf48);
        puVar19 = &param_23;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar19 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar19 = puVar19 + 1;
        }
        param_32 = param_32 * fVar16;
        param_34 = param_34 * fVar16;
        param_33 = 0.0;
        param_48 = (**(code **)(*in_stack_0000116c + 0x18))();
        switch(param_48) {
        case 1:
          param_18 = 0.0;
          iVar5 = 0x10;
          puVar8 = (undefined4 *)&stack0x00000268;
          do {
            fVar21 = (float10)fsin((float10)param_18);
            in_stack_0000014c = 0;
            in_stack_00000148 = (float)(fVar21 * (float10)param_1);
            fVar21 = (float10)fcos((float10)param_18);
            in_stack_00000150 = (float)(fVar21 * (float10)param_1);
            if (DAT_0067209c == (int *)0x0) {
              DAT_0067209c = (int *)FUN_005b73e0();
            }
            (**(code **)(*DAT_0067209c + 0x28))();
            param_18 = param_18 + _DAT_005d3f00;
            *puVar8 = in_stack_000001e4;
            puVar8[1] = in_stack_000001e8;
            iVar5 = iVar5 + -1;
            puVar8[2] = in_stack_000001ec;
            puVar8 = puVar8 + 3;
          } while (iVar5 != 0);
          fVar16 = 2.38221e-44;
          param_4 = fVar16;
          break;
        case 2:
          param_17 = 0.0;
          param_8 = (undefined4 *)0x10;
          pfVar9 = (float *)&stack0x00000268;
          do {
            fVar21 = (float10)fsin((float10)param_17);
            param_6 = 0.0;
            param_5 = (float)fVar21;
            fVar21 = (float10)fcos((float10)param_17);
            param_7 = (float)fVar21;
            fVar21 = (float10)(**(code **)(*in_stack_00001170 + 0x40))();
            fVar21 = fVar21 * (float10)*(float *)(extraout_ECX + 0xf48);
            param_6 = (float)((float10)param_6 * fVar21);
            param_7 = (float)((float10)param_7 * fVar21);
            param_52 = (float)((float10)param_5 * fVar21 + (float10)param_33);
            *pfVar9 = param_52;
            param_53 = (undefined4 *)(param_6 + param_34);
            param_54 = param_7 + param_35;
            pfVar9[1] = (float)param_53;
            param_8 = (undefined4 *)((int)param_8 + -1);
            param_17 = param_17 + _DAT_005d3f00;
            pfVar9[2] = param_54;
            pfVar9 = pfVar9 + 3;
          } while (param_8 != (undefined4 *)0x0);
          fVar16 = 2.38221e-44;
          param_8 = (undefined4 *)0x0;
          param_4 = fVar16;
          break;
        case 3:
          param_1 = param_1 * _DAT_005c75e0;
          fVar16 = 5.60519e-45;
          param_4 = 5.60519e-45;
          param_2 = param_2 * _DAT_005c75e0;
          param_3 = param_3 * _DAT_005c75e0;
          if (DAT_0067209c == (int *)0x0) {
            DAT_0067209c = (int *)FUN_005b73e0();
          }
          puVar8 = &param_1;
          puVar23 = (undefined1 *)&param_24;
          puVar22 = &stack0x00000208;
          (**(code **)(*DAT_0067209c + 0x28))();
          param_58 = -unaff_ESI;
          param_59 = unaff_EBP;
          if (DAT_0067209c == (int *)0x0) {
            DAT_0067209c = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_0067209c + 0x28))();
          param_61 = puVar23;
          param_60 = -(float)puVar22;
          param_62 = (undefined4 *)-(float)puVar8;
          if (DAT_0067209c == (int *)0x0) {
            DAT_0067209c = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_0067209c + 0x28))();
          param_64 = -(float)&param_58;
          param_62 = &stack0x000001c8;
          param_63 = &param_20;
          if (DAT_0067209c == (int *)0x0) {
            DAT_0067209c = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_0067209c + 0x28))();
          break;
        case 4:
          param_2 = param_2 * _DAT_005c75e0;
          if ((*(char *)(extraout_ECX + 0x478) != '\0') || (*(int *)(extraout_ECX + 2000) == 2)) {
            fVar16 = (*(float *)(extraout_ECX + 0x3f8) - _DAT_005c75dc) * _DAT_005d3e98;
            param_1 = param_1 / (fVar16 + fVar16 + _DAT_005c75dc);
          }
          in_stack_00000160 = param_1;
          in_stack_00000168 = 0.0;
          in_stack_00000164 = param_2;
          if (DAT_0067209c == (int *)0x0) {
            DAT_0067209c = (int *)FUN_005b73e0();
          }
          puVar23 = (undefined1 *)&param_24;
          puVar22 = &stack0x00000214;
          (**(code **)(*DAT_0067209c + 0x28))();
          in_stack_00000168 = -unaff_ESI;
          in_stack_00000170 = 0.0;
          in_stack_0000016c = unaff_EBP;
          if (DAT_0067209c == (int *)0x0) {
            DAT_0067209c = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_0067209c + 0x28))();
          in_stack_00000170 = -(float)puVar22;
          in_stack_00000174 = -(float)puVar23;
          in_stack_00000178 = 0;
          if (DAT_0067209c == (int *)0x0) {
            DAT_0067209c = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_0067209c + 0x28))();
          param_54 = -(float)&param_20;
          param_55 = 0;
          param_53 = &stack0x0000018c;
          if (DAT_0067209c == (int *)0x0) {
            DAT_0067209c = (int *)FUN_005b73e0();
          }
          (**(code **)(*DAT_0067209c + 0x28))();
          param_37 = param_25 * param_2 + param_33;
          param_38 = param_28 * param_2 + param_34;
          in_stack_000001c8 = 0x3f800000;
          in_stack_000001b8 = 0x3f800000;
          param_39 = param_35 + param_31 * param_2;
          in_stack_000001a8 = 0x3f800000;
          in_stack_000001c4 = 0;
          in_stack_000001c0 = 0;
          param_41 = param_33 - param_25 * param_2;
          in_stack_000001bc = 0;
          in_stack_000001b4 = 0;
          in_stack_000001b0 = 0;
          in_stack_000001ac = 0;
          param_42 = param_34 - param_28 * param_2;
          param_43 = param_35 - param_31 * param_2;
          param_15 = 0.0;
          iVar5 = 0x10;
          puVar8 = (undefined4 *)&stack0x00000364;
          in_stack_000001cc = param_41;
          in_stack_000001d0 = param_42;
          in_stack_000001d4 = param_43;
          do {
            fVar21 = (float10)fsin((float10)param_15);
            in_stack_00000140 = 0;
            param_40 = (double)fVar21;
            in_stack_0000013c = (float)(fVar21 * (float10)param_1);
            fVar21 = (float10)fcos((float10)param_15);
            param_19 = (double)fVar21;
            in_stack_00000144 = (float)(fVar21 * (float10)param_1);
            if (DAT_0067209c == (int *)0x0) {
              DAT_0067209c = (int *)FUN_005b73e0();
            }
            (**(code **)(*DAT_0067209c + 0x28))();
            in_stack_0000015c = unaff_ESI * (float)(double)CONCAT44(param_37,param_36);
            puVar8[-0x33] = in_stack_00000144;
            puVar8[-0x32] = in_stack_00000148;
            in_stack_00000164 = unaff_ESI * (float)(double)CONCAT44(param_16,param_15);
            puVar8[-0x31] = in_stack_0000014c;
            in_stack_00000160 = 0.0;
            if (DAT_0067209c == (int *)0x0) {
              DAT_0067209c = (int *)FUN_005b73e0();
            }
            (**(code **)(*DAT_0067209c + 0x28))();
            param_15 = param_15 + _DAT_005d3f00;
            *puVar8 = in_stack_00000184;
            puVar8[1] = in_stack_00000188;
            iVar5 = iVar5 + -1;
            puVar8[2] = in_stack_0000018c;
            puVar8 = puVar8 + 3;
          } while (iVar5 != 0);
          fVar16 = 5.32493e-44;
          param_4 = fVar16;
          break;
        default:
          goto switchD_0049cf16_default;
        }
        if (fVar16 != 0.0) {
          fVar17 = *(float *)(extraout_ECX + 0x4a8);
          param_8 = (undefined4 *)(fVar17 + fVar17);
          fVar1 = *(float *)(extraout_ECX + 0x4ac);
          param_40 = (double)CONCAT44(param_40._4_4_,fVar1 + fVar1);
          param_19 = (double)CONCAT44(param_19._4_4_,fVar17);
          pfVar9 = (float *)&stack0x00000268;
          fVar11 = fVar16;
          do {
            param_56 = param_11;
            param_57 = param_12;
            param_58 = param_13;
            fVar11 = (float)((int)fVar11 + -1);
            param_49 = param_45 + ((fVar17 + *pfVar9) / (float)param_8) * param_11;
            param_50 = param_46 +
                       ((float)_DAT_005c89b8 - (fVar1 + pfVar9[2]) / (fVar1 + fVar1)) * param_12;
            *pfVar9 = param_49;
            pfVar9[1] = param_50;
            param_51 = param_13 + param_47;
            pfVar9[2] = param_51;
            pfVar9 = pfVar9 + 3;
          } while (fVar11 != 0.0);
        }
        piVar10 = (int *)CONCAT31(CONCAT21(CONCAT11(param_10._3_1_,(undefined1)param_10),
                                           param_10._1_1_),param_10._2_1_);
        if (5999 < *(int *)(extraout_ECX + 0xee8) + (int)fVar16) break;
        fVar17 = 0.0;
        if (fVar16 != 0.0) {
          param_8 = (undefined4 *)&stack0x00000268;
          param_19 = (double)CONCAT44(param_19._4_4_,fVar16);
          do {
            *param_22 = *param_8;
            uVar7 = param_8[2];
            param_22[1] = param_8[1];
            param_22[2] = uVar7;
            param_22[3] = piVar10;
            param_8 = param_8 + 3;
            param_22 = param_22 + 4;
            iVar5 = param_19._0_4_ + -1;
            param_19 = (double)CONCAT44(param_19._4_4_,iVar5);
            fVar17 = param_4;
          } while (iVar5 != 0);
        }
        if (fVar17 == 5.60519e-45) {
          *(int *)(extraout_ECX + 0xeec) = *(int *)(extraout_ECX + 0xeec) + 6;
          *psVar14 = *(short *)(extraout_ECX + 0xee8);
          psVar14[1] = *(short *)(extraout_ECX + 0xee8) + 1;
          psVar14[2] = *(short *)(extraout_ECX + 0xee8) + 2;
          psVar14[3] = *(short *)(extraout_ECX + 0xee8);
          psVar14[4] = *(short *)(extraout_ECX + 0xee8) + 2;
          psVar15 = psVar14 + 5;
          sVar12 = *(short *)(extraout_ECX + 0xee8) + 3;
LAB_0049dc75:
          *psVar15 = sVar12;
        }
        else {
          if (param_48 != 4) {
            iVar5 = 0;
            *(int *)(extraout_ECX + 0xeec) = *(int *)(extraout_ECX + 0xeec) + (int)fVar17 * 3 + -3;
            sVar12 = SUB42(fVar17,0);
            psVar15 = psVar14;
            if (0 < (int)fVar17 + -2) {
              do {
                *psVar15 = *(short *)(extraout_ECX + 0xee8) + (short)iVar5;
                psVar14 = psVar15 + 3;
                psVar15[1] = *(short *)(extraout_ECX + 0xee8) + (short)iVar5 + 1;
                psVar15[2] = *(short *)(extraout_ECX + 0xee8) + sVar12 + -1;
                iVar5 = iVar5 + 1;
                psVar15 = psVar14;
              } while (iVar5 < (int)fVar17 + -2);
            }
            psVar15 = psVar14 + 2;
            *psVar14 = *(short *)(extraout_ECX + 0xee8) + sVar12 + -2;
            psVar14[1] = *(short *)(extraout_ECX + 0xee8);
            sVar12 = *(short *)(extraout_ECX + 0xee8) + sVar12 + -1;
            goto LAB_0049dc75;
          }
          *(int *)(extraout_ECX + 0xeec) = *(int *)(extraout_ECX + 0xeec) + 6;
          *psVar14 = *(short *)(extraout_ECX + 0xee8);
          psVar14[1] = *(short *)(extraout_ECX + 0xee8) + 1;
          psVar14[2] = *(short *)(extraout_ECX + 0xee8) + 2;
          psVar14[3] = *(short *)(extraout_ECX + 0xee8);
          psVar14[4] = *(short *)(extraout_ECX + 0xee8) + 2;
          psVar14[5] = *(short *)(extraout_ECX + 0xee8) + 3;
          *(int *)(extraout_ECX + 0xeec) = *(int *)(extraout_ECX + 0xeec) + 0x30;
          iVar5 = 4;
          psVar14 = psVar14 + 6;
          do {
            psVar15 = psVar14;
            *psVar15 = *(short *)(extraout_ECX + 0xee8) + (short)iVar5;
            psVar15[1] = *(short *)(extraout_ECX + 0xee8) + (short)iVar5 + 1;
            psVar15[2] = *(short *)(extraout_ECX + 0xee8) + 0x14;
            iVar5 = iVar5 + 1;
            psVar14 = psVar15 + 3;
          } while (iVar5 < 0x13);
          psVar15[3] = *(short *)(extraout_ECX + 0xee8) + 0x13;
          psVar15[4] = *(short *)(extraout_ECX + 0xee8) + 4;
          psVar15[5] = *(short *)(extraout_ECX + 0xee8) + 0x14;
          *(int *)(extraout_ECX + 0xeec) = *(int *)(extraout_ECX + 0xeec) + 0x30;
          iVar5 = 0x15;
          psVar14 = psVar15 + 6;
          do {
            psVar15 = psVar14;
            *psVar15 = *(short *)(extraout_ECX + 0xee8) + (short)iVar5;
            psVar15[1] = *(short *)(extraout_ECX + 0xee8) + (short)iVar5 + 1;
            psVar15[2] = *(short *)(extraout_ECX + 0xee8) + 0x25;
            iVar5 = iVar5 + 1;
            psVar14 = psVar15 + 3;
          } while (iVar5 < 0x24);
          psVar15[3] = *(short *)(extraout_ECX + 0xee8) + 0x24;
          psVar15[4] = *(short *)(extraout_ECX + 0xee8) + 0x15;
          psVar15 = psVar15 + 5;
          *psVar15 = *(short *)(extraout_ECX + 0xee8) + 0x25;
        }
        psVar14 = psVar15 + 1;
        *(int *)(extraout_ECX + 0xee8) = *(int *)(extraout_ECX + 0xee8) + (int)fVar17;
      }
switchD_0049cf16_default:
      piVar10 = (int *)*param_20;
      param_20 = piVar10;
    } while (piVar10 != *(int **)(param_21 + 4));
  }
  return CONCAT31((int3)((uint)piVar10 >> 8),1);
}

