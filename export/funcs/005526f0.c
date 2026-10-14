
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005526f0(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00423b60(&local_18,param_2,param_1);
  FUN_00423b60(&local_24,param_1 + 0xc,param_1);
  fVar1 = local_10 * local_20 - local_1c * local_14;
  fVar2 = local_1c * local_18 - local_10 * local_24;
  fVar3 = local_14 * local_24 - local_20 * local_18;
  FUN_00423b30(&local_c,param_1,param_1 + 0xc);
  FUN_00411d60(&local_24,&local_c,0x3f000000);
  FUN_00423b60(&local_18,&local_24,param_1);
  fVar4 = SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10) /
          SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar1 = fVar1 * fVar4;
  fVar2 = fVar2 * fVar4;
  fVar3 = fVar3 * fVar4;
  FUN_00423b60(&local_c,param_1,&local_24);
  FUN_00422b80(local_c * _DAT_005db09c,local_8 * _DAT_005db09c,local_4 * _DAT_005db09c);
  FUN_00422b80(fVar1 * _DAT_005db09c,fVar2 * _DAT_005db09c,fVar3 * _DAT_005db09c);
  FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x18) + 8),
               *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc));
  FUN_00422b80(local_18 + local_24,local_14 + local_20,local_10 + local_1c);
  FUN_00421cc0(local_c,local_8,local_4);
  FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10),
               *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc));
  FUN_00422b80(fVar1 + local_24,fVar2 + local_20,fVar3 + local_1c);
  FUN_00421cc0(local_c,local_8,local_4);
  FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10),
               *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14));
  FUN_00422b80(local_24 - local_18,local_20 - local_14,local_1c - local_10);
  FUN_00421cc0(local_c,local_8,local_4);
  FUN_00421ca0(*(undefined4 *)(*(int *)(param_1 + 0x18) + 8),
               *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14));
  local_c = local_24 - fVar1;
  local_8 = local_20 - fVar2;
  local_4 = local_1c - fVar3;
  FUN_00421cc0(local_c,local_8,local_4);
  return;
}

