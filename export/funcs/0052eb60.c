
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0052eb60(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  CSimple *this;
  float fVar5;
  
  if (param_2 == 10) {
    piVar1 = *(int **)(param_1 + 8);
    piVar4 = (int *)FUN_0054baf0();
    if (piVar1 == piVar4) {
      cVar3 = (**(code **)(*piVar1 + 0x158))();
      if (cVar3 == '\0') {
        iVar2 = *(int *)(param_1 + 8);
        if ((((iVar2 == 0) || (iVar2 == -0xc)) ||
            (this = *(CSimple **)(iVar2 + 0x10), this == (CSimple *)0x0)) ||
           ((*(uint *)(this + 0x4c) & 0x103) != 0x103)) {
          this = (CSimple *)0x0;
        }
        fVar5 = CSimple::get_hit_pts(this);
        if (_DAT_005c7474 < fVar5) {
          FUN_00489e80(DAT_0067545c,0);
        }
      }
    }
  }
  FUN_00531b20(param_2,param_3);
  return;
}

