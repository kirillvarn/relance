
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051c200(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *extraout_ECX;
  undefined4 unaff_EBX;
  uint uVar11;
  int iVar12;
  float10 fVar13;
  undefined4 in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00002010;
  uint in_stack_0000201c;
  undefined4 in_stack_00002024;
  undefined4 in_stack_00002028;
  short sVar14;
  undefined2 uVar15;
  float fStack_18;
  int *piStack_14;
  undefined4 *puVar16;
  
  FUN_005b7e90();
  piStack_14 = (int *)0x51c215;
  piVar6 = (int *)FUN_0054baf0();
  uVar11 = 0;
  if ((piVar6 == (int *)0x0) || ((piVar6[0x56] != 2 && (piVar6[0x56] != 3)))) {
    piStack_14 = (int *)0x51c332;
    FUN_0051ed20();
    piStack_14 = (int *)0x51c352;
    _DAT_00675360 = in_stack_00002024;
    _DAT_00675364 = in_stack_00002028;
    FUN_0051b730();
    if (DAT_0067524c != 2) {
      piStack_14 = (int *)DAT_00610534;
      fVar13 = (float10)(**(code **)(*extraout_ECX + 0x20))();
      FUN_0040fb60((float)fVar13);
      fStack_18 = 7.508806e-39;
      FUN_0051ba20();
      fStack_18 = 7.508816e-39;
      FUN_0051be10();
      fStack_18 = DAT_006164d4;
      fVar13 = (float10)(**(code **)(*extraout_ECX + 0x20))(extraout_ECX);
      fStack_18 = (float)fVar13;
      FUN_0040fb60();
    }
    fStack_18 = 7.508856e-39;
    piStack_14 = extraout_ECX;
    (**(code **)(*extraout_ECX + 0x24))();
    fStack_18 = DAT_006164d4;
    if (DAT_0067524c == 2) {
      fVar13 = (float10)(**(code **)(*DAT_00675244 + 0x44))();
      fStack_18 = (float)fVar13;
      if ((float10)DAT_006164d4 < fVar13) {
        fStack_18 = DAT_006164d4;
      }
    }
    piVar6 = extraout_ECX;
    fVar13 = (float10)(**(code **)(*extraout_ECX + 0x20))(extraout_ECX);
    FUN_0040fb60((float)fVar13,piVar6);
    _DAT_00675368 = unaff_EBX;
    iVar7 = FUN_005792b0(0x1b);
    if ((iVar7 != 0) && (iVar7 = FUN_005792b0(0x20), iVar7 != 0)) {
      piVar6 = (int *)(**(code **)(*(int *)PTR_DAT_00613ed0 + 0xc))(0xfdff);
      if (piVar6 != (int *)0x0) {
        in_stack_00000014 = 0;
        in_stack_00000010 = 0x800;
        (**(code **)(*extraout_ECX + 0xc))(extraout_ECX);
        iVar7 = (**(code **)(*piVar6 + 0x1c))(&stack0xfffffffc,&stack0x0000000c);
        if ((iVar7 != 0) && (in_stack_00000014 != 0)) {
          puVar16 = (undefined4 *)&stack0x00000018;
          if (in_stack_00000014 == 0) {
            uVar9 = 0;
            goto LAB_0051c4a7;
          }
          do {
            uVar9 = *puVar16;
LAB_0051c4a7:
            iVar7 = __RTDynamicCast(uVar9,0,&IObjRW::RTTI_Type_Descriptor,
                                    &GameObject::RTTI_Type_Descriptor,0);
            if ((iVar7 != 0) && (cVar2 = FUN_00540a40(iVar7), cVar2 == '\0')) {
              FUN_0051f2c0(iVar7,extraout_ECX);
            }
            uVar11 = uVar11 + 1;
            puVar16 = puVar16 + 1;
          } while (uVar11 < in_stack_00000014);
        }
      }
      iVar7 = FUN_004c83c0();
      if (0 < iVar7) {
        iVar12 = 0;
        do {
          uVar9 = FUN_004c83e0(iVar12);
          FUN_0051f2c0(uVar9,extraout_ECX);
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar7);
      }
    }
    if ((((in_stack_0000201c & 0x40) != 0) && (iVar7 = FUN_005792b0(0x20), iVar7 != 0)) &&
       (iVar7 = FUN_005792b0(0x1b), iVar7 != 0)) {
      iVar7 = FUN_00540a00();
      while (iVar7 != 0) {
        iVar12 = FUN_005792b0(0x23);
        if (iVar12 == 0) {
          if (((iVar7 == 0) || (iVar7 == -0xc)) ||
             ((iVar12 = *(int *)(iVar7 + 0x10), iVar12 == 0 ||
              ((*(uint *)(iVar12 + 0x4c) & 0x303) != 0x303)))) {
            iVar12 = 0;
          }
          if ((*(byte *)(iVar12 + 0xe0) & 7) == 0) goto LAB_0051c593;
        }
        else {
LAB_0051c593:
          FUN_0051f2c0(iVar7,extraout_ECX);
        }
        iVar7 = FUN_00540a20();
      }
    }
    iVar7 = FUN_005792b0(0x1b);
    if (iVar7 != 0) {
      if (((in_stack_0000201c & 0x20) != 0) && (iVar7 = FUN_005792b0(0x1d), iVar7 != 0)) {
        FUN_0051f7d0(1,extraout_ECX);
      }
      uVar11 = in_stack_0000201c & 0x80;
      if ((uVar11 != 0) && (iVar7 = FUN_005792b0(0x1e), iVar7 != 0)) {
        FUN_0051f7d0(4,extraout_ECX);
      }
      if (uVar11 != 0) {
        iVar7 = FUN_005792b0(0x1e);
        if (iVar7 != 0) {
          FUN_0051f7d0(5,extraout_ECX);
        }
        if ((uVar11 != 0) && (iVar7 = FUN_005792b0(0x1e), iVar7 != 0)) {
          FUN_0051f7d0(6,extraout_ECX);
        }
      }
      if (((in_stack_0000201c & 0x800) != 0) && (iVar7 = FUN_005792b0(0x1f), iVar7 != 0)) {
        FUN_0051f7d0(7,extraout_ECX);
      }
      if (((in_stack_0000201c & 0x400) != 0) && (iVar7 = FUN_005792b0(0x1f), iVar7 != 0)) {
        FUN_0051f7d0(10,extraout_ECX);
      }
    }
    FUN_0051eda0();
    uVar9 = 2;
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x16);
    if (((DAT_0067524c != 2) && (iVar7 = FUN_005792b0(0x19), iVar7 != 0)) &&
       ((in_stack_00002010 & 1) != 0)) {
      FUN_00552e70(extraout_ECX);
    }
    FUN_0051f8d0(extraout_ECX);
    FUN_0051f950(extraout_ECX);
    if ((in_stack_00002010 & 0x100) != 0) {
      FUN_004101e0();
      (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x89,0);
      iVar7 = FUN_005792b0(0x25);
      if (iVar7 != 0) {
        if (DAT_0067524c == 0) {
          FUN_00421ed0(0xb60);
        }
        else {
          fStack_18 = 0.0;
          piStack_14 = (int *)0x0;
          iVar7 = *DAT_00675244;
          uVar10 = (**(code **)(*extraout_ECX + 0xc))(extraout_ECX);
          fVar13 = (float10)(**(code **)(iVar7 + 0x3c))(uVar10);
          fVar13 = (float10)(**(code **)(*DAT_00675244 + 0x38))((float)fVar13);
          FUN_00422440(&fStack_18,(float)fVar13);
        }
        fVar13 = (float10)(**(code **)(*extraout_ECX + 0x20))(extraout_ECX,uVar9);
        FUN_0040fb60((float)fVar13,uVar9);
        fVar13 = (float10)FUN_0042d680(0xffffffff);
        FUN_004f7480(extraout_ECX,(float)fVar13);
        FUN_00421ed0(0xb60);
      }
      (**(code **)(*extraout_ECX + 0x50))();
    }
    (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x8b,0xffffffff);
    puVar8 = (undefined1 *)FUN_00555460();
    uVar15 = *(undefined2 *)(puVar8 + 1);
    uVar3 = *puVar8;
    if ((DAT_00675244 != (int *)0x0) &&
       (fVar13 = (float10)(**(code **)(*DAT_00675244 + 0x24))(), (float10)_DAT_005c75dc <= fVar13))
    {
      (**(code **)(*DAT_00675244 + 0x34))(&fStack_18);
      uVar3 = ftol();
      bVar4 = ftol();
      sVar14 = (ushort)bVar4 << 8;
      uVar5 = ftol();
      uVar15 = (undefined2)(CONCAT12(uVar5,sVar14) >> 8);
    }
    *(byte *)(extraout_ECX + 0x3a) = *(byte *)(extraout_ECX + 0x3a) | 1;
    *(undefined1 *)((int)extraout_ECX + 0xe9) = uVar3;
    *(char *)((int)extraout_ECX + 0xea) = (char)uVar15;
    *(char *)((int)extraout_ECX + 0xeb) = (char)((ushort)uVar15 >> 8);
  }
  else {
    piStack_14 = (int *)DAT_006164d4;
    DAT_00675244 = (int *)0x0;
    fVar13 = (float10)(**(code **)(*extraout_ECX + 0x20))();
    FUN_0040fb60((float)fVar13);
    fVar13 = (float10)(**(code **)(*extraout_ECX + 0x18))();
    if (fVar13 != (float10)(float)extraout_ECX[0x32]) {
      FUN_0040f8c0(extraout_ECX[0x32]);
    }
    FUN_00504890(extraout_ECX);
    (**(code **)(*piVar6 + 0x188))(&stack0xfffffff8,extraout_ECX,0xffff0000,0,0);
    iVar7 = FUN_005792b0(0x25);
    if (iVar7 != 0) {
      fVar13 = (float10)FUN_0042d680(0x25);
      FUN_004f7480(extraout_ECX,(float)fVar13);
      fVar13 = (float10)FUN_0042d680(0x1b);
      FUN_004f7480(extraout_ECX,(float)fVar13);
    }
    puVar8 = (undefined1 *)FUN_00504880();
    if (puVar8 != (undefined1 *)0x0) {
      uVar3 = puVar8[2];
      uVar5 = puVar8[1];
      uVar1 = *puVar8;
      *(byte *)(extraout_ECX + 0x3a) = *(byte *)(extraout_ECX + 0x3a) | 1;
      *(undefined1 *)((int)extraout_ECX + 0xe9) = uVar1;
      *(undefined1 *)((int)extraout_ECX + 0xea) = uVar5;
      *(undefined1 *)((int)extraout_ECX + 0xeb) = uVar3;
      *(undefined1 *)(extraout_ECX + 0x2f) = 0;
      return;
    }
  }
  *(undefined1 *)(extraout_ECX + 0x2f) = 0;
  return;
}

