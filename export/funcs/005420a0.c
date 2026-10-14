
int * FUN_005420a0(uint param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = param_4;
  if ((*param_4 == 0) || (*param_4 == param_2)) {
    param_4 = (int *)*param_3;
    while( true ) {
      piVar2 = (int *)FUN_00542330(&param_4);
      if (piVar2 == (int *)0x0) break;
      iVar3 = (**(code **)(*piVar2 + 0x150))();
      if ((iVar3 == 0) || (((byte)*(undefined4 *)(iVar3 + 0x4c) & 3) != 3)) {
        iVar3 = 0;
      }
      if ((*(uint *)(iVar3 + 0xe0) & param_1) != 0) {
        *param_3 = param_4;
        *piVar1 = param_2;
        return piVar2;
      }
    }
    *param_3 = 0;
    *piVar1 = 0;
  }
  return (int *)0x0;
}

