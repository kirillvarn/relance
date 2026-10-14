
void FUN_004c4070(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  _Node *p_Var5;
  int *piVar6;
  _Node *p_Var7;
  int iVar8;
  undefined4 *puVar9;
  _Node *p_Var10;
  
  piVar6 = DAT_00672964;
  piVar4 = (int *)*DAT_00672964;
  p_Var5 = (_Node *)DAT_00672964;
  while (DAT_00672964 = (int *)p_Var5, piVar4 != piVar6) {
    piVar1 = (int *)*piVar4;
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    FUN_005b7e1d(piVar4);
    DAT_00672968 = DAT_00672968 + -1;
    piVar4 = piVar1;
    p_Var5 = (_Node *)DAT_00672964;
  }
  if (param_1 != (undefined4 *)&DAT_00672960) {
    p_Var7 = *(_Node **)p_Var5;
    puVar2 = *(undefined4 **)((int)param_1 + 4);
    for (puVar3 = (undefined4 *)*puVar2; (param_1 = puVar2, p_Var7 != p_Var5 && (puVar3 != puVar2));
        puVar3 = (undefined4 *)*puVar3) {
      p_Var10 = p_Var7 + 8;
      p_Var7 = *(_Node **)p_Var7;
      puVar9 = puVar3 + 2;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)p_Var10 = *puVar9;
        puVar9 = puVar9 + 1;
        p_Var10 = p_Var10 + 4;
      }
    }
    while (p_Var7 != p_Var5) {
      p_Var10 = *(_Node **)p_Var7;
      std::list<EquipDesc,std::allocator<EquipDesc>_>::erase
                ((list<EquipDesc,std::allocator<EquipDesc>_> *)&DAT_00672960,&param_1,p_Var7);
      p_Var7 = p_Var10;
    }
    for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
      p_Var7 = std::list<EquipDesc,std::allocator<EquipDesc>_>::_Buynode
                         ((list<EquipDesc,std::allocator<EquipDesc>_> *)&DAT_00672960,p_Var5,
                          *(_Node **)(p_Var5 + 4));
      *(_Node **)(p_Var5 + 4) = p_Var7;
      **(undefined4 **)(p_Var7 + 4) = p_Var7;
      FUN_004b7390(p_Var7 + 8,puVar3 + 2);
      DAT_00672968 = DAT_00672968 + 1;
    }
  }
  DAT_00673384 = DAT_00673384 + 1;
  return;
}

