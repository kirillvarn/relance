
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00544880(int *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  CShip *this;
  float *pfVar5;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar4 = (**(code **)(*param_1 + 0xc))();
  FUN_00422b80(-*(float *)(iVar4 + 8),-*(float *)(iVar4 + 0x14),-*(float *)(iVar4 + 0x20));
  fVar1 = _DAT_005c75dc /
          SQRT(fStack_24 * fStack_24 + fStack_1c * fStack_1c + fStack_20 * fStack_20);
  if (((param_1 == (int *)0xfffffff4) || (this = (CShip *)param_1[4], this == (CShip *)0x0)) ||
     ((*(uint *)(this + 0x4c) & 0x503) != 0x503)) {
    this = (CShip *)0x0;
  }
  bVar3 = CShip::get_tgt_lead_fire_pos(this,(Vector *)&fStack_18);
  fVar2 = _DAT_005dd55c;
  if (bVar3) {
    pfVar5 = (float *)(**(code **)*param_1)();
    fVar2 = SQRT((fStack_18 - *pfVar5) * (fStack_18 - *pfVar5) +
                 (fStack_14 - pfVar5[1]) * (fStack_14 - pfVar5[1]) +
                 (fStack_10 - pfVar5[2]) * (fStack_10 - pfVar5[2]));
  }
  fStack_1c = fStack_1c * fVar1 * fVar2;
  fStack_20 = fStack_20 * fVar1 * fVar2;
  fStack_24 = fStack_24 * fVar1 * fVar2;
  pfVar5 = (float *)(**(code **)*param_1)();
  fStack_4 = fStack_1c + pfVar5[2];
  fStack_8 = fStack_20 + pfVar5[1];
  fStack_c = fStack_24 + *pfVar5;
  (**(code **)(param_1[1] + 0x34))(0,0,&fStack_c,DAT_00673344);
  return;
}

