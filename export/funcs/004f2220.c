
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f2220(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  CShip *this;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  char cVar12;
  int *piStack_64;
  int *piStack_54;
  int local_50;
  float local_4c;
  float fStack_48;
  int iStack_44;
  int local_40;
  float fStack_3c;
  float fStack_38;
  int *local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined1 auStack_10 [16];
  
  piStack_64 = (int *)0x4f2231;
  local_40 = param_1;
  piVar5 = (int *)FUN_0054baf0();
  piVar10 = (int *)0x0;
  if (piVar5 != (int *)0x0) {
    piStack_64 = &local_50;
    *(undefined4 *)(param_1 + 0x92c) = 0;
    local_4c = 0.0;
    local_50 = 0;
    local_34 = piVar5;
    (**(code **)(*piVar5 + 0x74))();
    if (piStack_54 != (int *)0x0) {
      local_50 = (**(code **)(*piStack_54 + 0x20))();
    }
    piVar11 = *(int **)(param_1 + 0x3f0);
    bVar4 = false;
    if ((((piVar11 != (int *)0x0) && (((byte)piVar11[0x13] & 3) == 3)) &&
        (pfVar6 = (float *)(**(code **)(*piVar11 + 0x54))(auStack_10),
        pfVar6[2] * pfVar6[2] + pfVar6[1] * pfVar6[1] + *pfVar6 * *pfVar6 < _DAT_005d9670)) &&
       ((piVar11[0x38] & 0x107ffdffU) != 0)) {
      bVar4 = true;
      iVar7 = FUN_005416c0(piVar11[0x2c],0);
      if (iVar7 != 0) {
        uVar8 = FUN_0045a490(piVar5,iVar7);
        *(undefined4 *)(param_1 + 0x92c) = uVar8;
      }
    }
    piVar5 = (int *)FUN_0040f130();
    local_4c = _DAT_005c75e0 * (float)DAT_00610850;
    fStack_3c = 3.4028235e+38;
    piStack_54 = (int *)0x7f7fffff;
    local_40 = 0;
    local_34 = (int *)(((float)DAT_00616840 - local_4c) / (float)DAT_00610850);
    fStack_48 = _DAT_005c75e0 * (float)DAT_00610854;
    fStack_30 = ((float)DAT_00616844 - fStack_48) / (float)DAT_00610854;
    if (bVar4) {
      piStack_54 = (int *)(*(float *)(param_1 + 0x404) * *(float *)(param_1 + 0x404));
    }
    piVar11 = (int *)**(int **)(param_1 + 0x914);
    if (piVar11 != *(int **)(param_1 + 0x914)) {
      do {
        if (piVar11[2] == 0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)(piVar11[2] + -8);
        }
        iVar7 = (**(code **)(*piVar9 + 0x20))();
        fVar1 = _DAT_005d8f1c;
        if (iVar7 == local_50) {
          fVar1 = _DAT_005d8f18;
        }
        fVar3 = (float)local_34 - ((float)piVar11[7] - local_4c) / (float)DAT_00610850;
        fVar2 = fStack_30 - ((float)piVar11[8] - fStack_48) / (float)DAT_00610854;
        fStack_2c = fVar3 * fVar3 + fVar2 * fVar2;
        if (fStack_2c < fVar1) {
          pfVar6 = (float *)(**(code **)(*piVar5 + 0xc))(piVar5);
          FUN_00422b80((float)piVar11[4] - *pfVar6,(float)piVar11[5] - pfVar6[1],
                       (float)piVar11[6] - pfVar6[2]);
          fVar1 = fStack_28 * fStack_28 + fStack_24 * fStack_24 + fStack_20 * fStack_20;
          if (fVar1 < (float)piStack_54) {
            iVar7 = piVar11[2];
            fStack_3c = fStack_2c;
            if (iVar7 == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = iVar7 + -8;
            }
            local_40 = FUN_0045a490(fStack_38,iVar7);
            piVar10 = piVar11 + 2;
            piStack_54 = (int *)fVar1;
          }
        }
        piVar11 = (int *)*piVar11;
        param_1 = iStack_44;
      } while (piVar11 != (int *)*(int *)(iStack_44 + 0x914));
    }
    *(undefined1 *)(param_1 + 0x928) = 0;
    if (piVar10 != (int *)0x0) {
      *(undefined1 *)(param_1 + 0x928) = 1;
      *(int *)(param_1 + 0x92c) = local_40;
      iVar7 = FUN_005792b0(0x35);
      if (((iVar7 < 1) || (iVar7 = FUN_005792b0(0x36), iVar7 != 5)) && (fStack_3c < _DAT_005d8f14))
      {
        *(int *)(param_1 + 0x91c) = piVar10[2];
        *(int *)(param_1 + 0x920) = piVar10[3];
        *(int *)(param_1 + 0x924) = piVar10[4];
        return;
      }
      (**(code **)(*piVar5 + 0x38))(piVar5,&fStack_28,(float)DAT_00616840,(float)DAT_00616844);
      fVar1 = _DAT_005c75dc /
              SQRT(fStack_38 * fStack_38 + fStack_30 * fStack_30 + (float)local_34 * (float)local_34
                  );
      fStack_38 = fStack_38 * fVar1;
      local_34 = (int *)((float)local_34 * fVar1);
      fStack_30 = fStack_30 * fVar1;
      pfVar6 = (float *)(**(code **)(*piVar5 + 0xc))(piVar5);
      fStack_28 = SQRT(((float)piVar10[2] - *pfVar6) * ((float)piVar10[2] - *pfVar6) +
                       ((float)piVar10[3] - pfVar6[1]) * ((float)piVar10[3] - pfVar6[1]) +
                       ((float)piVar10[4] - pfVar6[2]) * ((float)piVar10[4] - pfVar6[2]));
      fStack_30 = fStack_3c * fStack_28;
      fStack_2c = fStack_38 * fStack_28;
      fStack_28 = (float)local_34 * fStack_28;
      pfVar6 = (float *)(**(code **)(*piVar5 + 0xc))(piVar5);
      fVar1 = pfVar6[1];
      fVar2 = pfVar6[2];
      *(float *)(param_1 + 0x91c) = (float)local_34 + *pfVar6;
      *(float *)(param_1 + 0x920) = fStack_30 + fVar1;
      *(float *)(param_1 + 0x924) = fStack_2c + fVar2;
      return;
    }
    cVar12 = (char)((uint)(float)DAT_00616844 >> 0x18);
    (**(code **)(*piVar5 + 0x38))(piVar5,&fStack_28,(float)DAT_00616840);
    piStack_64 = (int *)0x0;
    fVar1 = _DAT_005c75dc /
            SQRT(fStack_38 * fStack_38 + fStack_30 * fStack_30 + (float)local_34 * (float)local_34);
    fStack_38 = fStack_38 * fVar1;
    local_34 = (int *)((float)local_34 * fVar1);
    fStack_30 = fStack_30 * fVar1;
    if (((fStack_48 == -NAN) || (this = *(CShip **)((int)fStack_48 + 0x10), this == (CShip *)0x0))
       || ((*(uint *)(this + 0x4c) & 0x503) != 0x503)) {
      this = (CShip *)0x0;
    }
    bVar4 = CShip::get_farthest_active_gun_range(this,(float *)&piStack_64);
    if (!bVar4) {
      piStack_64 = (int *)0x501502f9;
    }
    if ((cVar12 != '\0') && (*(float *)(param_1 + 0x404) < (float)piStack_64)) {
      fStack_18 = *(float *)(param_1 + 0x404);
      fStack_20 = fStack_38 * fStack_18;
      fStack_1c = (float)local_34 * fStack_18;
      fStack_18 = fStack_30 * fStack_18;
      pfVar6 = (float *)(**(code **)(*piVar5 + 0xc))(piVar5);
      fVar1 = pfVar6[1];
      fVar2 = pfVar6[2];
      *(float *)(param_1 + 0x91c) = fStack_24 + *pfVar6;
      *(float *)(param_1 + 0x920) = fStack_20 + fVar1;
      *(float *)(param_1 + 0x924) = fStack_1c + fVar2;
      return;
    }
    fStack_20 = fStack_38 * (float)piStack_64;
    fStack_1c = (float)local_34 * (float)piStack_64;
    fStack_18 = fStack_30 * (float)piStack_64;
    pfVar6 = (float *)(**(code **)(*piVar5 + 0xc))(piVar5);
    fVar1 = pfVar6[1];
    fVar2 = pfVar6[2];
    *(float *)(param_1 + 0x91c) = fStack_24 + *pfVar6;
    *(float *)(param_1 + 0x920) = fStack_20 + fVar1;
    *(float *)(param_1 + 0x924) = fStack_1c + fVar2;
  }
  return;
}

