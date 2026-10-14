
uint FUN_004285f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)*DAT_00667c70;
  iVar3 = 0;
  if (piVar1 != DAT_00667c70) {
    do {
      if (*(int *)(piVar1[2] + 0x18) == param_1) {
        iVar3 = iVar3 + 1;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != DAT_00667c70);
    if (iVar3 != 0) {
      return (uint)piVar1 & 0xffffff00;
    }
  }
  uVar2 = FUN_00428680(param_1,param_2,param_3,0);
  return uVar2;
}

