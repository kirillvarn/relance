
void __thiscall FUN_00410f60(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  puVar3 = (undefined4 *)(param_1 + 0x74);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (iVar1 != 1) {
    FUN_00411370(&local_c,0,0);
    *(float *)(param_1 + 0x54) = -local_4;
    *(undefined4 *)(param_1 + 0x4c) = local_c;
    *(undefined4 *)(param_1 + 0x50) = local_8;
  }
  if ((DAT_00610588 == 0) && ((*(byte *)(param_1 + 0xb4) & 4) != 0)) {
    (**(code **)(**(int **)Pipeline_exref + 300))(*(int **)Pipeline_exref,param_1 + 0xc);
  }
  return;
}

