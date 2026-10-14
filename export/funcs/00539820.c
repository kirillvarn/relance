
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00539820(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  ushort uVar2;
  float fVar3;
  Root *pRVar4;
  int iVar5;
  undefined1 *puStack_3c;
  int *piStack_38;
  undefined4 *puStack_34;
  uint *puStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [8];
  undefined4 local_c [3];
  
  if ((param_4 != (int *)0x0) && ((short)*param_4 != 0)) {
    *param_2 = *param_4;
    return;
  }
  puStack_34 = local_c;
  piStack_38 = (int *)0x539854;
  (**(code **)(*param_1 + 0x178))();
  piStack_38 = param_2;
  puStack_3c = (undefined1 *)0x539862;
  fVar3 = (float)(**(code **)(*param_2 + 0x40))();
  if (DAT_006789d0 == (int *)0x0) {
    puStack_3c = (undefined1 *)0x539872;
    DAT_006789d0 = (int *)FUN_005b73e0();
  }
  piVar1 = DAT_006789d0;
  puStack_3c = auStack_14;
  (**(code **)(*DAT_006789d0 + 0x28))();
  uVar2 = (**(code **)(*param_2 + 0x3c))(param_2,&puStack_3c,local_c[0]);
  uStack_18 = CONCAT22(0xffff,uVar2);
  if (uVar2 < 3) goto LAB_00539966;
  uStack_18 = (uint)uVar2;
  fStack_1c = (float)piVar1 * (float)piVar1 +
              fVar3 * fVar3 + (float)&puStack_20 * (float)&puStack_20;
  if ((CObject *)param_1[4] == (CObject *)0x0) {
LAB_0053990a:
    iVar5 = 0;
  }
  else {
    pRVar4 = CObject::get_archetype((CObject *)param_1[4]);
    if (pRVar4 == (Root *)0x0) goto LAB_0053990a;
    pRVar4 = CObject::get_archetype((CObject *)param_1[4]);
    iVar5 = *(int *)(pRVar4 + 4);
  }
  if (_DAT_005c7474 < *(float *)(iVar5 + 8)) {
    if (fStack_1c < *(float *)(iVar5 + 8) * *(float *)(iVar5 + 8)) goto LAB_00539966;
    uStack_18 = CONCAT22(1,(undefined2)uStack_18);
  }
  if ((_DAT_005c7474 < *(float *)(iVar5 + 0xc)) &&
     (*(float *)(iVar5 + 0xc) * *(float *)(iVar5 + 0xc) < fStack_1c)) {
    uStack_18 = CONCAT22(2,(undefined2)uStack_18);
  }
LAB_00539966:
  *puStack_20 = uStack_18;
  return;
}

