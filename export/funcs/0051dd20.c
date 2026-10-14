
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0051dd20(undefined4 param_1,int *param_2,float param_3,float param_4)

{
  float fVar1;
  float *pfVar2;
  undefined4 unaff_retaddr;
  int *piVar3;
  float fStack_20;
  float local_18 [2];
  undefined4 uStack_10;
  
  fStack_20 = param_4;
  pfVar2 = local_18;
  piVar3 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,pfVar2,param_3);
  fVar1 = _DAT_005dc130 /
          SQRT((float)pfVar2 * (float)pfVar2 + fStack_20 * fStack_20 + param_3 * param_3);
  param_3 = param_3 * fVar1;
  fStack_20 = fStack_20 * fVar1;
  pfVar2 = (float *)(**(code **)(*param_2 + 0xc))(param_2,piVar3,(float)pfVar2 * fVar1,param_3);
  local_18[0] = param_3 + pfVar2[2];
  fStack_20 = (float)piVar3 + *pfVar2;
  FUN_0051ddd0(uStack_10,param_2,&fStack_20,unaff_retaddr,param_1);
  return uStack_10;
}

