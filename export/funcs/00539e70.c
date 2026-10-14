
void __thiscall FUN_00539e70(int *param_1,undefined4 param_2,undefined2 param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float10 fVar11;
  ushort unaff_retaddr;
  float fVar12;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  float fStack_c;
  
  iVar8 = (**(code **)(*param_4 + 0x20))();
  if (iVar8 != 0) {
    bVar7 = SinglePlayer();
    if (!bVar7) {
      iVar8 = param_4[4];
      if ((iVar8 == 0) || (((byte)*(undefined4 *)(iVar8 + 0x4c) & 3) != 3)) {
        iVar8 = FUN_0054bb00();
      }
      else {
        iVar8 = *(int *)(iVar8 + 0xb4);
      }
      if (iVar8 != DAT_00673344) {
        return;
      }
    }
    pfVar9 = (float *)(**(code **)(*param_4 + 4))(auStack_2c);
    pfVar10 = (float *)(**(code **)(*param_1 + 4))(auStack_24);
    fVar1 = *pfVar10;
    fVar2 = *pfVar9;
    fVar3 = pfVar10[1];
    fVar4 = pfVar9[1];
    fVar5 = pfVar10[2];
    fVar6 = pfVar9[2];
    fVar11 = (float10)(**(code **)(*param_1 + 0x30))();
    fVar12 = (float)fVar11;
    fVar11 = (float10)(**(code **)(*param_4 + 0x30))();
    fStack_c = Collision::CalcCollisionDamage
                         (SQRT((fVar3 - fVar4) * (fVar3 - fVar4) +
                               (fVar5 - fVar6) * (fVar5 - fVar6) + (fVar1 - fVar2) * (fVar1 - fVar2)
                              ),(float)fVar11,fVar12);
    uStack_1c = (**(code **)(*param_1 + 0x20))();
    uStack_18 = (uint)unaff_retaddr;
    uStack_14 = (**(code **)(*param_4 + 0x20))();
    uStack_10 = param_3;
    (**(code **)(*DAT_0067ecd0 + 0xdc))(&uStack_1c,DAT_00673344);
  }
  return;
}

