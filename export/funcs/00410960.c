
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00410960(int param_1,undefined4 param_2,undefined4 *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined1 local_c [4];
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(byte *)(param_1 + 0xb4) & 8) != 0) {
    puVar4 = (undefined4 *)FUN_00411370(local_c,param_2,&param_2);
    pfVar3 = param_5;
    *param_3 = *puVar4;
    param_3[1] = puVar4[1];
    param_3[2] = puVar4[2];
    FUN_00410850(param_2,param_5);
    if (*(int *)(param_1 + 0xb0) == -2) {
      if (*(int **)(param_1 + 0xb8) == (int *)0x0) {
        fVar5 = (float10)_DAT_005c75dc;
      }
      else {
        local_4 = *(undefined4 *)(param_1 + 0x58);
        local_c[0] = 1;
        local_8 = 0;
        fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0xb8) + 0x18))(param_2,local_c);
      }
      fVar1 = pfVar3[1];
      fVar2 = pfVar3[2];
      *param_4 = (float)(fVar5 * (float10)*pfVar3 + (float10)*param_4);
      param_4[1] = (float)(fVar5 * (float10)fVar1) + param_4[1];
      param_4[2] = (float)(fVar5 * (float10)fVar2) + param_4[2];
    }
    return 1;
  }
  return 0;
}

