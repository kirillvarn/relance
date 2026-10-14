
/* WARNING: Removing unreachable block (ram,0x00457e66) */

void __fastcall FUN_00457e30(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  for (uVar2 = 0; (iVar3 = param_1[5], iVar3 != 0 && (uVar2 < (uint)(param_1[6] - iVar3 >> 2)));
      uVar2 = uVar2 + 1) {
    FUN_0041b030(iVar3 + uVar2 * 4);
  }
  param_1[6] = param_1[5];
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      iVar1 = *(int *)(param_1[2] + iVar3 * 4);
      if (iVar1 != -1) {
        (**(code **)(**(int **)Engine_exref + 0x60))(*(int **)Engine_exref,iVar1);
        *(undefined4 *)(param_1[2] + iVar3 * 4) = 0xffffffff;
      }
      *(undefined4 *)(param_1[3] + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  FUN_005582a0();
  FUN_005b7e1d(param_1[2]);
  FUN_005b7e1d(param_1[3]);
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

