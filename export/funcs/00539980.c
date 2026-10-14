
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00539980(int *param_1,undefined2 *param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  char cVar4;
  float *pfVar5;
  int *piVar6;
  undefined4 uVar7;
  Root *pRVar8;
  int iVar9;
  uint uVar10;
  float *unaff_ESI;
  float10 fVar11;
  short sVar12;
  undefined2 *puVar13;
  float fStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_4;
  
  puStack_10 = (undefined1 *)0x53998d;
  uStack_4 = param_1;
  (**(code **)(*param_1 + 0x180))();
  fVar3 = param_3;
  puStack_10 = &stack0x0000000c;
  fStack_14 = param_3;
  pfVar5 = (float *)(**(code **)(*param_1 + 0x17c))(&uStack_4);
  fVar1 = *pfVar5;
  if ((SUB42(fVar1,0) < 3) || (sVar12 = (short)((uint)fVar1 >> 0x10), 1 < sVar12)) {
    *unaff_ESI = fVar1;
    return;
  }
  if (sVar12 < 1) {
    FUN_004fd040();
  }
  (**(code **)(*param_1 + 0x184))(fVar3);
  piVar6 = (int *)FUN_0054baf0();
  if (param_1 == piVar6) {
    FUN_004022d0(&fStack_14);
    if (fStack_14 < (float)_DAT_005debf8 == (fStack_14 == (float)_DAT_005debf8)) {
      uVar10 = 0;
    }
    else {
      uVar7 = (**(code **)(*param_1 + 0x1c))(1,0);
      FUN_00402580(uVar7);
      uVar10 = 0x80;
    }
  }
  else {
    uVar10 = 8;
  }
  if (((short)uStack_4 == 4) && (uStack_4._2_2_ < 1)) {
    uVar10 = uVar10 | 0x100;
  }
  fStack_14 = 0.0;
  if (fVar1 != 0.0) {
    uVar10 = uVar10 | 0x120;
    fStack_14 = fVar1;
  }
  uVar7 = (**(code **)(*param_1 + 0x1c))();
  fVar11 = (float10)FUN_005b3510(0);
  if (((fVar11 <= (float10)_DAT_005c7474) || (0 < uStack_4._2_2_)) || (param_2 != (undefined2 *)0x0)
     ) goto LAB_00539aef;
  if ((CObject *)param_1[4] == (CObject *)0x0) {
LAB_00539aac:
    iVar9 = 0;
  }
  else {
    pRVar8 = CObject::get_archetype((CObject *)param_1[4]);
    if (pRVar8 == (Root *)0x0) goto LAB_00539aac;
    pRVar8 = CObject::get_archetype((CObject *)param_1[4]);
    iVar9 = *(int *)(pRVar8 + 4);
  }
  if (**(char **)(iVar9 + 0x10) == '\0') goto LAB_00539aef;
  if ((CObject *)param_1[4] == (CObject *)0x0) {
LAB_00539acd:
    iVar9 = 0;
  }
  else {
    pRVar8 = CObject::get_archetype((CObject *)param_1[4]);
    if (pRVar8 == (Root *)0x0) goto LAB_00539acd;
    pRVar8 = CObject::get_archetype((CObject *)param_1[4]);
    iVar9 = *(int *)(pRVar8 + 4);
  }
  uVar2 = *(undefined4 *)(iVar9 + 0x10);
  cVar4 = FUN_00533930(4,&param_2);
  if (cVar4 != '\0') {
    FUN_00533880(uVar7,uVar2);
  }
LAB_00539aef:
  puVar13 = param_2;
  iVar9 = (**(code **)(**(int **)Renderer_exref + 0x1c))
                    (*(int **)Renderer_exref,unaff_ESI,uVar7,0x3f800000,uVar10,fStack_14);
  if (2 < iVar9) {
    (**(code **)(**(int **)MaterialBatcher_exref + 0x28))(*(int **)MaterialBatcher_exref,1);
  }
  *puVar13 = (short)iVar9;
  puVar13[1] = 0xffff;
  return;
}

