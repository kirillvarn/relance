
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0052d700(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  CSimple *this;
  undefined4 unaff_ESI;
  float fVar6;
  
  iVar2 = param_2;
  if (param_2 == 10) {
    piVar1 = *(int **)(param_1 + 8);
    piVar5 = (int *)FUN_0054baf0();
    if (piVar1 == piVar5) {
      cVar3 = (**(code **)(*piVar1 + 0x158))();
      if (cVar3 == '\0') {
        iVar4 = *(int *)(param_1 + 8);
        if ((((iVar4 == 0) || (iVar4 == -0xc)) ||
            (this = *(CSimple **)(iVar4 + 0x10), this == (CSimple *)0x0)) ||
           ((*(uint *)(this + 0x4c) & 0x103) != 0x103)) {
          this = (CSimple *)0x0;
        }
        fVar6 = CSimple::get_hit_pts(this);
        if (_DAT_005c7474 < fVar6) {
          FUN_00489e80(DAT_00675440,0);
        }
      }
    }
    AnimDB::Rem(*(int *)(param_1 + 0x10));
    if (*(int *)(param_1 + 0x10) != -1) {
      (**(code **)(**(int **)Anim_exref + 0x38))(*(int **)Anim_exref,*(int *)(param_1 + 0x10));
      (**(code **)(**(int **)Anim_exref + 0x28))
                (*(int **)Anim_exref,*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    FUN_004fcef0(param_1 + 0x30);
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 4))();
      FUN_004f7a90();
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  else if (param_2 == 0x19) {
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    if ((iVar4 == 0) || (((byte)*(undefined4 *)(iVar4 + 0x4c) & 3) != 3)) {
      iVar4 = FUN_0054bb00();
    }
    else {
      iVar4 = *(int *)(iVar4 + 0xb4);
    }
    if (iVar4 == DAT_00673344) {
      param_2 = (uint)*(ushort *)(*(int *)(param_1 + 4) + 8);
      (**(code **)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x34))(&param_2,1,0,DAT_00673344);
      FUN_00531b20(0x19,unaff_ESI);
      return;
    }
  }
  FUN_00531b20(iVar2,param_3);
  return;
}

