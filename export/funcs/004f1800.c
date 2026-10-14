
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f1800(int param_1)

{
  CEqObj *this;
  int iVar1;
  IBehaviorManager *this_00;
  undefined4 uVar2;
  float10 fVar3;
  float fVar4;
  
  fVar3 = (float10)FUN_0042d680();
  fVar3 = fVar3 + (float10)*(float *)(param_1 + 0x42c);
  *(float *)(param_1 + 0x42c) = (float)fVar3;
  if (fVar3 < (float10)DAT_005d8ef4) {
    return;
  }
  if ((float10)*(float *)(param_1 + 0x430) <= fVar3) {
    *(undefined4 *)(param_1 + 0x42c) = 0;
    *(float *)(param_1 + 0x430) = DAT_005d8ef4;
    *(bool *)(param_1 + 0x434) = *(char *)(param_1 + 0x434) == '\0';
  }
  iVar1 = FUN_0054baf0();
  if ((((iVar1 != 0) && (iVar1 != -0xc)) &&
      (this = *(CEqObj **)(iVar1 + 0x10), this != (CEqObj *)0x0)) &&
     ((*(uint *)(this + 0x4c) & 0x503) == 0x503)) {
    this_00 = CEqObj::get_behavior_interface(this);
    if (this_00 != (IBehaviorManager *)0x0) {
      fVar4 = IBehaviorManager::get_closest_trailing_ship(this_00);
      if ((fVar4 < _DAT_005d8ef8) && (*(char *)(param_1 + 0x434) == '\0')) {
        uVar2 = 0;
        goto LAB_004f18b2;
      }
    }
  }
  uVar2 = 1;
LAB_004f18b2:
  (**(code **)(**(int **)(param_1 + 0x414) + 0xa8))(1,uVar2,0);
  return;
}

