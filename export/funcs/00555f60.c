
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00555f60(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float unaff_ESI;
  float unaff_EDI;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ICamera *pIStack_4;
  
  uVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
  puVar3 = (undefined4 *)(**(code **)(**(int **)Engine_exref + 0x90))(*(int **)Engine_exref,uVar2);
  uStack_14 = *puVar3;
  uStack_10 = puVar3[1];
  uStack_c = puVar3[2];
  lVar4 = get_projected_bounding_sphere
                    (pIStack_4,(Vector *)&uStack_14,1.0,(float *)&stack0xffffffe0,&fStack_1c,
                     (float *)&stack0xffffffdc,&fStack_18);
  if (lVar4 != 0) {
    fVar1 = (float)_DAT_005e1220;
    *(undefined1 *)(param_1 + 0x24) = 0;
    floor((double)((unaff_ESI - unaff_EDI * fVar1) + (float)_DAT_005c75e8));
    uVar2 = ftol();
    floor((double)((fStack_1c - unaff_EDI) + (float)_DAT_005c75e8));
    uVar5 = ftol();
    floor((double)(unaff_EDI * _DAT_005c9800 + (float)_DAT_005c75e8));
    uVar6 = ftol();
    floor((double)(unaff_EDI + unaff_EDI + (float)_DAT_005c75e8));
    uVar7 = ftol();
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 0x18) = uVar6;
    *(undefined4 *)(param_1 + 0x1c) = uVar7;
    return;
  }
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

