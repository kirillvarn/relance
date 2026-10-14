
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0050c750(float param_1,Vector *param_2,Vector *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined2 extraout_var;
  uint unaff_EBX;
  float unaff_EBP;
  float *pfVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  Vector *pVVar12;
  RayHit *pRVar13;
  float local_24;
  uint local_1c;
  float fStack_18;
  float fStack_10;
  float fStack_4;
  
  DAT_00675198 = DAT_00675198 + 1;
  iVar4 = *(int *)((int)param_1 + 4);
  if ((((iVar4 == 0) || (iVar4 == -0xc)) || (local_24 = *(float *)(iVar4 + 0x10), local_24 == 0.0))
     || ((*(uint *)((int)local_24 + 0x4c) & 0x303) != 0x303)) {
    local_24 = 0.0;
  }
  param_1 = 0.0;
  cVar3 = FUN_0054bc80();
  if ((cVar3 != '\0') &&
     (((iVar4 = FUN_0054baf0(), iVar4 == 0 || (iVar4 == -0xc)) ||
      ((param_1 = *(float *)(iVar4 + 0x10), param_1 == 0.0 ||
       (((byte)*(undefined4 *)((int)param_1 + 0x4c) & 1) != 1)))))) {
    param_1 = 0.0;
  }
  if ((DAT_00675178 & 1) == 0) {
    DAT_00675178 = DAT_00675178 | 1;
    FUN_005b7e6c(&DAT_0050c940);
  }
  iVar4 = 6;
  pRVar13 = (RayHit *)&DAT_006750b8;
  pVVar12 = param_2;
  uVar5 = FUN_00554e90();
  uVar5 = PhySys::FindRayCollisions(uVar5,pVVar12,param_3,pRVar13,iVar4);
  param_3 = (Vector *)0x0;
  if (0 < (int)uVar5) {
    pfVar8 = (float *)&DAT_006750b8;
    uVar9 = uVar5;
    local_1c = uVar5;
    do {
      fVar1 = *pfVar8;
      pfVar6 = *(float **)((int)fVar1 + 0x68);
      if (pfVar6 != *(float **)((int)fVar1 + 0x6c)) {
        do {
          if (*pfVar6 == pfVar8[7]) {
            if (*(char *)(pfVar6 + 2) != '\0') goto LAB_0050c912;
            break;
          }
          pfVar6 = pfVar6 + 3;
        } while (pfVar6 != *(float **)((int)fVar1 + 0x6c));
      }
      if ((fVar1 != local_24) && (fVar1 != param_1)) {
        fVar2 = *(float *)((int)fVar1 + 0x38);
        uVar7 = (**(code **)(*param_4 + 0x40))(param_4);
        if (DAT_00675194 == (int *)0x0) {
          DAT_00675194 = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_00675194 + 0x28))(DAT_00675194,&local_1c,uVar7,(int)fVar1 + 0x2c);
        fStack_18 = local_24;
        if (_DAT_005db538 < local_24) {
          fStack_18 = -0.1;
        }
        local_1c = unaff_EBX;
        fVar10 = (float10)(**(code **)(*param_4 + 0x2c))(param_4);
        fStack_10 = (float)fVar10;
        fVar10 = (float10)(**(code **)(*param_4 + 0x20))(param_4);
        fVar11 = ((float10)_DAT_005c7500 / (float10)fStack_4) * fVar10 * (float10)(float)param_2 *
                 (float10)fVar2;
        fVar10 = (float10)unaff_EBP;
        uVar9 = local_1c;
        if (fVar11 < fVar10 == 0 && (fVar11 == fVar10) == 0) {
          return CONCAT31((int3)(CONCAT22(extraout_var,
                                          (ushort)(fVar11 < fVar10) << 8 |
                                          (ushort)(NAN(fVar11) || NAN(fVar10)) << 10 |
                                          (ushort)(fVar11 == fVar10) << 0xe) >> 8),1);
        }
      }
LAB_0050c912:
      uVar5 = (int)param_3 + 1;
      pfVar8 = pfVar8 + 8;
      param_3 = (Vector *)uVar5;
    } while ((int)uVar5 < (int)uVar9);
  }
  return uVar5 & 0xffffff00;
}

