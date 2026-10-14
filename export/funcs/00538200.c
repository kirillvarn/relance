
uint FUN_00538200(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar3 = param_2[4];
    if (iVar3 != 0) {
      *param_1 = param_2;
    }
    uVar5 = (uint)(iVar3 != 0);
    iVar4 = *(int *)(param_3 + 8) - param_2[5];
    iVar1 = *(int *)(param_3 + 0xc) - param_2[6];
    iVar3 = *(int *)(param_3 + 0x10);
    if (iVar4 < iVar3) {
      if (iVar1 < iVar3) {
        iVar2 = FUN_00538200(param_1 + uVar5,param_2[1],param_3);
        uVar5 = uVar5 + iVar2;
      }
      if (-iVar1 < iVar3) {
        iVar2 = FUN_00538200(param_1 + uVar5,param_2[3],param_3);
        uVar5 = uVar5 + iVar2;
      }
    }
    if (-iVar4 < iVar3) {
      if (iVar1 < iVar3) {
        iVar4 = FUN_00538200(param_1 + uVar5,*param_2,param_3);
        uVar5 = uVar5 + iVar4;
      }
      if (-iVar1 < iVar3) {
        iVar3 = FUN_00538200(param_1 + uVar5,param_2[2],param_3);
        uVar5 = uVar5 + iVar3;
      }
    }
    return uVar5;
  }
  return 0;
}

