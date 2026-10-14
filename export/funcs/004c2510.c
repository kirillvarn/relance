
void __thiscall FUN_004c2510(int param_1,undefined4 param_2)

{
  int iVar1;
  CShip *this;
  ushort *puVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_005416c0(param_2,1);
  *(undefined4 *)(param_1 + 0x42c) = param_2;
  if (iVar1 != 0) {
    this = (CShip *)FUN_00543320();
    *(CShip **)(param_1 + 0x43c) = this;
    *(double *)(param_1 + 0x3f0) = (double)*(float *)(*(int *)(this + 0x88) + 0x100);
    fVar4 = CShip::get_cargo_hold_remaining(this);
    uVar5 = 0;
    *(double *)(param_1 + 1000) = (double)((float)*(double *)(param_1 + 0x3f0) - fVar4);
    iVar1 = **(int **)(param_1 + 0x39c);
    puVar2 = CShip::get_pilot_name(this);
    (**(code **)(iVar1 + 0xa8))(0x1d,puVar2,uVar5);
    *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(this + 0xb4);
    iVar1 = *(int *)(*(int *)(this + 0x88) + 0x140);
    *(int *)(param_1 + 0x3fc) = iVar1;
    if (iVar1 == -1) {
      *(undefined4 *)(param_1 + 0x3fc) = 50000000;
    }
    iVar1 = *(int *)(this + 0x88);
    iVar3 = CShip::get_repair_kit_capacity_remaining(this);
    *(int *)(param_1 + 0x3f8) = *(int *)(iVar1 + 0x140) - iVar3;
    iVar1 = *(int *)(*(int *)(this + 0x88) + 0x144);
    *(int *)(param_1 + 0x404) = iVar1;
    if (iVar1 == -1) {
      *(undefined4 *)(param_1 + 0x404) = 50000000;
    }
    iVar1 = *(int *)(this + 0x88);
    iVar3 = CShip::get_shield_battery_capacity_remaining(this);
    *(int *)(param_1 + 0x400) = *(int *)(iVar1 + 0x144) - iVar3;
  }
  return;
}

