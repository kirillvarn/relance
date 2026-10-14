
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ffab0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  _DAT_00674fbc = _DAT_00674fbc + 1;
  if (*(int *)(param_1 + 0x2a4) != 0) {
    piVar1 = *(int **)(param_1 + 0x2a8);
    if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 0x2d) & 8) == 0)) {
      (**(code **)(*piVar1 + 4))();
    }
    FUN_00422950(param_2);
    FUN_00421ed0(0xb44);
    FUN_00422190(*(undefined1 *)(param_1 + 0x74));
    FUN_00421dd0(0xbe2);
    (**(code **)(**(int **)Pipeline_exref + 0xf8))(*(int **)Pipeline_exref,0,0xd,1);
    (**(code **)(**(int **)Pipeline_exref + 0xf8))(*(int **)Pipeline_exref,0,0xe,1);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      iVar2 = param_1 + 0xc;
      do {
        *(float *)(param_1 + 0xa0) = -*(float *)(param_1 + 0xa0);
        FUN_004ffe50(0x3dcccccd,0xbc23d70a,iVar2,iVar3);
        iVar3 = iVar3 + 1;
        *(float *)(param_1 + 0xa0) = -*(float *)(param_1 + 0xa0);
        iVar2 = iVar2 + 0x34;
      } while (iVar3 < *(int *)(param_1 + 8));
    }
    FUN_00421dd0(0xb44);
    FUN_00422190(1);
    FUN_00421ed0(0xbe2);
  }
  return;
}

