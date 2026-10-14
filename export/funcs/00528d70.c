
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00528d70(int param_1,float *param_2)

{
  int iVar1;
  ExhaustNozzleInfo *pEVar2;
  float fVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ExhaustNozzleInfo *this;
  int local_164;
  undefined1 auStack_14c [8];
  Transform local_144 [36];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 auStack_fc [12];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [48];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [48];
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar1 + 0x38) != 0) &&
     ((*(int *)(iVar1 + 0x3c) - *(int *)(iVar1 + 0x38)) / 0x3c != 0)) {
    local_164 = 0;
    FUN_004215b0();
    this = *(ExhaustNozzleInfo **)(iVar1 + 0x38);
    pEVar2 = *(ExhaustNozzleInfo **)(iVar1 + 0x3c);
    local_118 = 0;
    local_11c = 0;
    local_120 = 0;
    for (; this != pEVar2; this = this + 0x3c) {
      bVar4 = ExhaustNozzleInfo::GetHardpointOffset_NS(this,local_144);
      if (bVar4) {
        uVar5 = (**(code **)(**(int **)Engine_exref + 0xa0))
                          (*(int **)Engine_exref,*(undefined4 *)(this + 8));
        if (DAT_006753f8 == (int *)0x0) {
          DAT_006753f8 = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_006753f8 + 0x1c))(DAT_006753f8,auStack_c8,uVar5,auStack_14c);
        FUN_00406880(auStack_d8);
        puVar6 = (undefined4 *)(**(code **)(**(int **)(param_1 + 8) + 0x10))();
        FUN_00447be0(&stack0xfffffe8c,puVar6,puVar6 + 9);
        FUN_00411350(&stack0xfffffe98);
        FUN_00447b60(*puVar6,puVar6[3],puVar6[6],puVar6[1],puVar6[4],puVar6[7],puVar6[2],puVar6[5],
                     puVar6[8]);
        FUN_00447bb0(auStack_fc,&stack0xfffffe98);
        if (DAT_006753f8 == (int *)0x0) {
          DAT_006753f8 = (int *)FUN_005b73e0();
        }
        (**(code **)(*DAT_006753f8 + 0x1c))(DAT_006753f8,auStack_48,auStack_a8,auStack_78);
        FUN_00406880(auStack_30);
        local_164 = local_164 + 1;
        *param_2 = fStack_f0 + *param_2;
        param_2[1] = fStack_ec + param_2[1];
        param_2[2] = fStack_e8 + param_2[2];
      }
    }
    fVar3 = _DAT_005c75dc / (float)local_164;
    *param_2 = fVar3 * *param_2;
    param_2[1] = fVar3 * param_2[1];
    param_2[2] = fVar3 * param_2[2];
    return local_164;
  }
  return 0;
}

