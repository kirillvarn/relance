
void FUN_004ebde0(int param_1,undefined1 *param_2)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  fVar1 = *(float *)(param_1 + 0x20);
  local_30 = *(float *)(param_1 + 4);
  local_20 = *(float *)(param_1 + 8);
  local_28 = *(undefined4 *)(param_1 + 0xc);
  local_2c = local_20 + fVar1;
  local_24 = local_30 + fVar1;
  local_14 = -fVar1 + local_20;
  local_c = -fVar1 + local_30;
  uVar2 = (uint)CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]);
  uVar3 = CONCAT31(CONCAT21(CONCAT11(param_2[3],*param_2),param_2[1]),param_2[2]);
  local_1c = local_28;
  local_18 = local_30;
  local_10 = local_28;
  local_8 = local_20;
  local_4 = local_28;
  FUN_005a2940(&local_30,&local_24,uVar3,uVar2,0x40000000);
  FUN_005a2940(&local_24,&local_18,uVar3,uVar2,0x40000000);
  FUN_005a2940(&local_18,&local_c,uVar3,uVar2,0x40000000);
  FUN_005a2940(&local_c,&local_30,uVar3,uVar2,0x40000000);
  return;
}

