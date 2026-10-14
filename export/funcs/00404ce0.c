
int __thiscall FUN_00404ce0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = param_1[1];
  param_2 = param_2 + iVar1;
  param_1[1] = param_2;
  if (param_1[2] < param_2) {
    param_1[2] = param_2 + 0x20;
    puVar2 = operator_new((param_2 + 0x20) * 0x2c);
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)*param_1;
      puVar6 = puVar2;
      for (uVar3 = (uint)(iVar1 * 0x2c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    FUN_005b7e1d(*param_1);
    *param_1 = (int)puVar2;
  }
  return iVar1 * 0x2c + *param_1;
}

