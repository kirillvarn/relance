
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005366a0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CObject *pCVar5;
  float fStack_1c;
  float local_18;
  float fStack_14;
  
  if ((((param_2 == 0) || (param_2 == -0xc)) ||
      (pCVar5 = *(CObject **)(param_2 + 0x10), pCVar5 == (CObject *)0x0)) ||
     (((byte)*(undefined4 *)(pCVar5 + 0x4c) & 1) != 1)) {
    pCVar5 = (CObject *)0x0;
  }
  (**(code **)(*(int *)pCVar5 + 0x68))(&local_18);
  fVar2 = fStack_1c - *(float *)(param_1 + 0x10);
  fVar4 = local_18 - *(float *)(param_1 + 0x14);
  fVar3 = fStack_14 - *(float *)(param_1 + 0x18);
  fVar1 = *(float *)(*(int *)(param_1 + 8) + 4);
  if (fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 < fVar1 * fVar1) {
    fVar1 = fStack_1c - *(float *)(param_1 + 0x10);
    local_18 = local_18 - *(float *)(param_1 + 0x14);
    fStack_14 = fStack_14 - *(float *)(param_1 + 0x18);
    if (fVar1 * fVar1 + local_18 * local_18 + fStack_14 * fStack_14 == _DAT_005c7474) {
      random_on_unit_sphere();
    }
    if (*(int *)(pCVar5 + 0x54) != 0) {
      PhySys::AddImpulseAtPoint(pCVar5,(Vector *)&stack0xffffffd8,(Vector *)(param_1 + 0x10));
    }
  }
  return;
}

