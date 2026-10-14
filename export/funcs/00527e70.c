
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00527e70(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  char cVar4;
  int *piVar5;
  CSimple *this;
  int iVar6;
  short *psVar7;
  float fVar8;
  
  switch(param_2) {
  case 10:
    iVar1 = *(int *)(param_1 + 0x18);
    for (iVar6 = *(int *)(param_1 + 0x14); iVar6 != iVar1; iVar6 = iVar6 + 0xc) {
      if ((*(int **)(iVar6 + 4) != (int *)0x0) &&
         ((**(code **)(**(int **)(iVar6 + 4) + 4))(), *(int *)(iVar6 + 4) != 0)) {
        FUN_004f7a90();
        *(undefined4 *)(iVar6 + 4) = 0;
      }
      if (*(int **)(iVar6 + 8) != (int *)0x0) {
        (**(code **)(**(int **)(iVar6 + 8) + 4))();
        FUN_005298c0();
      }
    }
    FUN_00529920();
    FUN_005295d0();
    piVar2 = *(int **)(param_1 + 8);
    piVar5 = (int *)FUN_0054baf0();
    if ((piVar2 == piVar5) && (cVar4 = (**(code **)(*piVar2 + 0x158))(), cVar4 == '\0')) {
      iVar1 = *(int *)(param_1 + 8);
      if ((iVar1 == 0) ||
         (((iVar1 == -0xc || (this = *(CSimple **)(iVar1 + 0x10), this == (CSimple *)0x0)) ||
          ((*(uint *)(this + 0x4c) & 0x503) != 0x503)))) {
        this = (CSimple *)0x0;
      }
      fVar8 = CSimple::get_hit_pts(this);
      if (_DAT_005c7474 < fVar8) {
        FUN_00489e80(DAT_006753e8,0);
      }
    }
    break;
  case 0xb:
    FUN_005288a0(0);
    break;
  case 0xc:
    FUN_005288a0(1);
    break;
  case 0xd:
    psVar3 = *(short **)(param_1 + 0x18);
    for (psVar7 = *(short **)(param_1 + 0x14); psVar7 != psVar3; psVar7 = psVar7 + 6) {
      if (*psVar7 == (short)param_3) {
        if ((*(int **)(psVar7 + 2) != (int *)0x0) &&
           ((**(code **)(**(int **)(psVar7 + 2) + 4))(), *(int *)(psVar7 + 2) != 0)) {
          FUN_004f7a90();
          psVar7[2] = 0;
          psVar7[3] = 0;
        }
        if ((*(int **)(psVar7 + 4) != (int *)0x0) &&
           ((**(code **)(**(int **)(psVar7 + 4) + 4))(), *(int *)(psVar7 + 4) != 0)) {
          FUN_004f7a90();
          psVar7[4] = 0;
          psVar7[5] = 0;
        }
      }
    }
    FUN_005296d0();
    break;
  case 0xe:
    FUN_00528560(*param_3);
  }
  FUN_00531b20(param_2,param_3);
  return;
}

