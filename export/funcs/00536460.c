
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00536460(int param_1,float param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined3 extraout_var;
  undefined4 uVar8;
  ushort uVar11;
  ushort extraout_var_00;
  int iVar9;
  uint3 uVar10;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_3c [12];
  undefined4 auStack_30 [9];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar5 = (**(code **)(**(int **)(param_1 + 0xc) + 0x158))();
  if ((char)uVar5 != '\0') {
    return uVar5 & 0xffffff00;
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) == -0x40800000) {
    *(float *)(param_1 + 0x20) = param_2;
  }
  else {
    *(float *)(param_1 + 0x20) = param_2 + *(float *)(param_1 + 0x20);
  }
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) - param_2;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 8) + 0x24);
  puVar6 = puVar1;
  for (puVar2 = (undefined4 *)*puVar1; uVar11 = (ushort)((uint)puVar6 >> 0x10), puVar2 != puVar1;
      puVar2 = (undefined4 *)*puVar2) {
    fVar3 = (float)puVar2[3];
    if (fVar3 < _DAT_005c7474) {
      puVar6 = (undefined4 *)((uint)uVar11 << 0x10);
      if ((*(float *)(param_1 + 0x1c) < _DAT_005c7474 !=
           (*(float *)(param_1 + 0x1c) == _DAT_005c7474)) &&
         ((*(int *)(param_1 + 0x24) == -0x40800000 ||
          (puVar6 = (undefined4 *)((uint)uVar11 << 0x10),
          _DAT_005c7474 <
          (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x24)) + *(float *)(param_1 + 0x1c)))))
      goto LAB_0053652f;
    }
    else {
      puVar6 = (undefined4 *)((uint)uVar11 << 0x10);
      if ((*(float *)(param_1 + 0x24) < fVar3) &&
         (bVar4 = *(float *)(param_1 + 0x20) < fVar3,
         puVar6 = (undefined4 *)((uint)CONCAT21(uVar11,bVar4) << 8), !bVar4)) {
LAB_0053652f:
        puVar6 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0xc) + 0xc))();
        puVar12 = auStack_30;
        for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar12 = puVar12 + 1;
        }
        uStack_c = *(undefined4 *)(param_1 + 0x10);
        uStack_8 = *(undefined4 *)(param_1 + 0x14);
        uStack_4 = *(undefined4 *)(param_1 + 0x18);
        uVar7 = (**(code **)(**(int **)(param_1 + 0xc) + 4))(auStack_3c);
        bVar4 = ID_String::IsEmpty((ID_String *)(puVar2 + 2));
        puVar6 = (undefined4 *)CONCAT31(extraout_var,bVar4);
        if (!bVar4) {
          uVar13 = 0;
          puVar6 = auStack_30;
          uVar8 = FUN_0040f080((ID_String *)(puVar2 + 2),puVar6,uVar7,0);
          puVar6 = (undefined4 *)FUN_00503f40(uVar8,puVar6,uVar7,uVar13);
        }
      }
    }
  }
  if (_DAT_005c7474 < *(float *)(*(int *)(param_1 + 8) + 0x38)) {
    fVar3 = *(float *)(*(int *)(param_1 + 8) + 0x34);
    uVar11 = (ushort)((uint)fVar3 >> 0x10);
    if (fVar3 < _DAT_005c7474) {
      if ((*(float *)(param_1 + 0x1c) < _DAT_005c7474 ==
           (*(float *)(param_1 + 0x1c) == _DAT_005c7474)) ||
         ((*(int *)(param_1 + 0x24) != -0x40800000 &&
          ((*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x24)) + *(float *)(param_1 + 0x1c) <=
           _DAT_005c7474)))) goto LAB_0053662a;
    }
    else if ((fVar3 <= *(float *)(param_1 + 0x24)) || (*(float *)(param_1 + 0x20) < fVar3))
    goto LAB_0053662a;
    FUN_00536fb0();
    uVar11 = extraout_var_00;
  }
LAB_0053662a:
  iVar9 = (uint)uVar11 << 0x10;
  if ((*(float *)(param_1 + 0x1c) < _DAT_005c7474 != (*(float *)(param_1 + 0x1c) == _DAT_005c7474))
     && ((*(int *)(param_1 + 0x24) == -0x40800000 ||
         (iVar9 = (uint)uVar11 << 0x10,
         _DAT_005c7474 <
         (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x24)) + *(float *)(param_1 + 0x1c)))))
  {
    if (*(int *)(*(int *)(param_1 + 8) + 0x14) != 2) {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x15c))(1);
    }
    iVar9 = *(int *)(param_1 + 8);
    if (*(int *)(iVar9 + 0x14) == 0) {
      iVar9 = FUN_00536800();
    }
  }
  fVar3 = *(float *)(param_1 + 0x1c);
  uVar10 = (uint3)(CONCAT22((short)((uint)iVar9 >> 0x10),
                            (ushort)(fVar3 < _DAT_005c7474) << 8 |
                            (ushort)(NAN(fVar3) || NAN(_DAT_005c7474)) << 10 |
                            (ushort)(fVar3 == _DAT_005c7474) << 0xe) >> 8);
  if (fVar3 < _DAT_005c7474 != (fVar3 == _DAT_005c7474)) {
    return (uint)uVar10 << 8;
  }
  return CONCAT31(uVar10,1);
}

