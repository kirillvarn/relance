
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0052ee40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  CSimple *this;
  int iVar4;
  float fVar5;
  
  switch(param_2) {
  case 10:
    piVar1 = *(int **)(param_1 + 8);
    piVar3 = (int *)FUN_0054baf0();
    if ((piVar1 == piVar3) && (cVar2 = (**(code **)(*piVar1 + 0x158))(), cVar2 == '\0')) {
      iVar4 = *(int *)(param_1 + 8);
      if ((iVar4 == 0) ||
         (((iVar4 == -0xc || (this = *(CSimple **)(iVar4 + 0x10), this == (CSimple *)0x0)) ||
          ((*(uint *)(this + 0x4c) & 0x503) != 0x503)))) {
        this = (CSimple *)0x0;
      }
      fVar5 = CSimple::get_hit_pts(this);
      if (_DAT_005c7474 < fVar5) {
        FUN_00489e80(DAT_00675480,0);
      }
    }
    FUN_004fcef0(param_1 + 0x10);
    FUN_00531b20(param_2,param_3);
    return;
  case 0xb:
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0xc))(0x3f800000);
      FUN_00531b20(param_2,param_2);
      return;
    }
    break;
  case 0xc:
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0xc))(0);
      FUN_00531b20(param_2,param_2);
      return;
    }
    break;
  case 0xf:
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    if ((iVar4 == 0) || (((byte)*(undefined4 *)(iVar4 + 0x4c) & 3) != 3)) {
      iVar4 = FUN_0054bb00();
    }
    else {
      iVar4 = *(int *)(iVar4 + 0xb4);
    }
    if (iVar4 == DAT_00673344) {
      (**(code **)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x54))(0,DAT_00673344);
    }
  }
  FUN_00531b20(param_2,param_3);
  return;
}

