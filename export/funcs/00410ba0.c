
/* WARNING: Removing unreachable block (ram,0x00410bcb) */
/* WARNING: Removing unreachable block (ram,0x00410be2) */
/* WARNING: Removing unreachable block (ram,0x00410bda) */
/* WARNING: Removing unreachable block (ram,0x00410be5) */

undefined4 * __thiscall FUN_00410ba0(undefined4 *param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 0x2d);
  *param_1 = &PTR_FUN_005c89d4;
  if ((bVar1 & 4) != 0) {
    if ((bVar1 & 0x10) != 0) {
      *(byte *)(param_1 + 0x2d) = bVar1 & 0xef;
      if (param_1[2] == 0) {
        DAT_006164e0 = param_1[1];
      }
      else {
        *(undefined4 *)(param_1[2] + 4) = param_1[1];
      }
      if (param_1[1] == 0) {
        DAT_006164e4 = param_1[2];
      }
      else {
        *(undefined4 *)(param_1[1] + 8) = param_1[2];
      }
      DAT_006164e8 = DAT_006164e8 + -1;
      (**(code **)(**(int **)Pipeline_exref + 0xa4))(*(int **)Pipeline_exref,param_1 + 3,0);
    }
    iVar2 = **(int **)Pipeline_exref;
    if (DAT_00610588 == 0) {
      (**(code **)(iVar2 + 0x128))();
    }
    else {
      (**(code **)(iVar2 + 0x9c))(*(int **)Pipeline_exref,param_1 + 3);
    }
    *(byte *)(param_1 + 0x2d) = *(byte *)(param_1 + 0x2d) & 0xfb;
  }
  if ((param_2 & 1) != 0) {
    FUN_005b7e1d(param_1);
  }
  return param_1;
}

