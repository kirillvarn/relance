
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004edeb0(int param_1,int *param_2,int *param_3,undefined2 *param_4)

{
  CSolar *this;
  bool bVar1;
  short sVar2;
  int iVar3;
  ID_String *pIVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  *param_3 = 0;
  *param_4 = *(undefined2 *)SUBOBJ_ID_NONE_exref;
  iVar3 = FUN_0054baf0();
  if (iVar3 == 0) {
    return;
  }
  if (iVar3 == -0xc) {
    return;
  }
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar3 == 0) {
    return;
  }
  if ((*(uint *)(iVar3 + 0x4c) & 0x503) != 0x503) {
    return;
  }
  piVar5 = (int *)*param_2;
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (((byte)piVar5[0x13] & 3) != 3) {
    return;
  }
  local_20 = DAT_00612434;
  bVar1 = false;
  if (*(CEScanner **)(param_1 + 0x368) != (CEScanner *)0x0) {
    local_20 = CEScanner::GetRadarRange(*(CEScanner **)(param_1 + 0x368));
  }
  if (local_20 < DAT_00612434) {
    fVar6 = (float10)(**(code **)(*piVar5 + 100))(&local_c);
    FUN_00422b80(local_c - *(float *)(iVar3 + 0x2c),fStack_8 - *(float *)(iVar3 + 0x30),
                 fStack_4 - *(float *)(iVar3 + 0x34));
    if (local_20 <
        ABS(SQRT(fStack_18 * fStack_18 + fStack_10 * fStack_10 + fStack_14 * fStack_14) -
            (float)fVar6)) {
      bVar1 = true;
      goto LAB_004ee03c;
    }
  }
  if ((piVar5[0x38] & 0x20004000U) == 0) {
    if ((piVar5[0x38] & 7U) == 0) {
      fVar6 = (float10)(**(code **)(*piVar5 + 100))(&local_c);
      fVar7 = (float10)local_c - (float10)*(float *)(iVar3 + 0x2c);
      fVar8 = (float10)fStack_8 - (float10)*(float *)(iVar3 + 0x30);
      fVar9 = (float10)fStack_4 - (float10)*(float *)(iVar3 + 0x34);
      if (SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9) / fVar6 < (float10)_DAT_005d95ac) {
        *param_3 = piVar5[0x2c];
      }
    }
    else {
      *param_3 = piVar5[0x2c];
    }
  }
LAB_004ee03c:
  this = (CSolar *)*param_2;
  if (((this != (CSolar *)0x0) && ((*(uint *)(this + 0x4c) & 0x103) == 0x103)) && (!bVar1)) {
    if ((*(uint *)(this + 0x4c) & 0x303) == 0x303) {
      pIVar4 = CSolar::GetParentNickname(this);
      bVar1 = ID_String::IsEmpty(pIVar4);
      if (!bVar1) {
        pIVar4 = CSolar::GetParentNickname(this);
        piVar5 = (int *)FUN_005416c0(*(undefined4 *)pIVar4,2);
        if (piVar5 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar5 + 0x20))();
          *param_3 = iVar3;
          *param_4 = *(undefined2 *)SUBOBJ_ID_NONE_exref;
        }
      }
    }
    sVar2 = (**(code **)(*(int *)this + 0xf4))(param_2[1]);
    *(short *)param_3 = sVar2;
    if (sVar2 == *(short *)SUBOBJ_ID_ROOT_exref) {
      *(undefined2 *)param_3 = *(undefined2 *)SUBOBJ_ID_NONE_exref;
    }
  }
  return;
}

