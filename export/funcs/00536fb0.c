
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00536fb0(int param_1)

{
  float fVar1;
  ID_String *this;
  int iVar2;
  uint uVar3;
  Root *pRVar4;
  int iVar5;
  CObject *pCVar6;
  char *pcVar7;
  float *pfVar8;
  Vector *pVVar9;
  int *piVar10;
  int iVar11;
  CObject *pCVar12;
  double dVar13;
  int iVar14;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_28 [4];
  undefined1 local_24 [8];
  undefined1 auStack_1c [12];
  undefined1 auStack_10 [16];
  
  iVar11 = *(int *)(param_1 + 0xc);
  if ((((iVar11 == 0) || (iVar11 == -0xc)) ||
      (piVar10 = *(int **)(iVar11 + 0x10), piVar10 == (int *)0x0)) ||
     (((byte)piVar10[0x13] & 1) != 1)) {
    piVar10 = (int *)0x0;
  }
  (**(code **)(*piVar10 + 100))(local_24);
  this = *(ID_String **)(param_1 + 8);
  if ((*(int *)(this + 0x44) == 0) ||
     (iVar11 = *(int *)(this + 0x48) - *(int *)(this + 0x44) >> 2, iVar11 < 1)) {
    dVar13 = (double)*(float *)(this + 0x38);
    pcVar7 = ID_String::get_string(this);
    (**(code **)FDUMP_exref)
              (0x100001,
               "%s(%d) : *** ERROR: [Explosion] %s has innards_debris_num = %d, but has no \'innards_debris_object =\' entries"
               ,"E:\\FL\\Scratch\\Source\\Client\\space\\explosion.cpp",0x21e,pcVar7,dVar13);
  }
  else {
    iVar14 = 0;
    if (_DAT_005c7474 < *(float *)(this + 0x38)) {
      do {
        iVar2 = rand();
        iVar2 = iVar2 * iVar11;
        iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x44);
        random_inside_sphere((float)&fStack_34);
        FUN_00422b80(fStack_34 + *(float *)(param_1 + 0x10),fStack_30 + *(float *)(param_1 + 0x14),
                     fStack_2c + *(float *)(param_1 + 0x18));
        uVar3 = Archetype::GetSimpleID
                          ((ID_String *)
                           (iVar5 + ((int)(iVar2 + (iVar2 >> 0x1f & 0x7fffU)) >> 0xf) * 4));
        pRVar4 = Archetype::GetSimple(uVar3);
        iVar5 = FUN_00536b50(*(int *)(param_1 + 8) + 0x50);
        if (iVar5 != 0) {
          iVar5 = FUN_005306e0(pRVar4,iVar5,auStack_28);
          if (((iVar5 == 0) || (iVar5 == -0xc)) ||
             ((pCVar12 = *(CObject **)(iVar5 + 0x10), pCVar12 == (CObject *)0x0 ||
              (((byte)*(undefined4 *)(pCVar12 + 0x4c) & 1) != 1)))) {
            pCVar12 = (CObject *)0x0;
          }
          iVar5 = *(int *)(param_1 + 0xc);
          if ((((iVar5 == 0) || (iVar5 == -0xc)) ||
              (pCVar6 = *(CObject **)(iVar5 + 0x10), pCVar6 == (CObject *)0x0)) ||
             (((byte)*(undefined4 *)(pCVar6 + 0x4c) & 1) != 1)) {
            pCVar6 = (CObject *)0x0;
          }
          pcVar7 = PhySys::GetCollisionGroup(pCVar6);
          PhySys::SetCollisionGroup(pCVar12,pcVar7);
          FUN_00425480(*(undefined4 *)(pCVar12 + 4));
          fStack_40 = fStack_34;
          fStack_3c = fStack_30;
          fStack_38 = fStack_2c;
          fVar1 = *(float *)(*(int *)(param_1 + 8) + 0x30);
          iVar5 = rand();
          fVar1 = ((float)iVar5 * _DAT_005caeec * (fVar1 + fVar1)) /
                  SQRT(fStack_40 * fStack_40 + fStack_38 * fStack_38 + fStack_3c * fStack_3c);
          fStack_40 = fStack_40 * fVar1;
          fStack_3c = fStack_3c * fVar1;
          fStack_38 = fStack_38 * fVar1;
          pfVar8 = (float *)(**(code **)(**(int **)(param_1 + 0xc) + 4))(auStack_1c);
          fStack_40 = fStack_40 + *pfVar8;
          fStack_3c = fStack_3c + pfVar8[1];
          fStack_38 = fStack_38 + pfVar8[2];
          PhySys::AddToVelocity(pCVar12,(Vector *)&fStack_40);
          pVVar9 = (Vector *)random_inside_sphere((float)auStack_10);
          PhySys::AddToAngularVelocityOS(pCVar12,pVVar9);
        }
        iVar14 = iVar14 + 1;
      } while ((float)iVar14 < *(float *)(*(int *)(param_1 + 8) + 0x38));
      return;
    }
  }
  return;
}

