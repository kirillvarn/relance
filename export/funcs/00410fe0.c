
void __thiscall FUN_00410fe0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  *(undefined4 *)(param_1 + 0x98) = param_2[9];
  *(undefined4 *)(param_1 + 0x9c) = param_2[10];
  *(undefined4 *)(param_1 + 0xa0) = param_2[0xb];
  if (*(int *)(param_1 + 0xb0) != 3) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x9c);
    *(float *)(param_1 + 0x48) = -*(float *)(param_1 + 0xa0);
  }
  if ((DAT_00610588 == 0) && ((*(byte *)(param_1 + 0xb4) & 4) != 0)) {
    (**(code **)(**(int **)Pipeline_exref + 300))(*(int **)Pipeline_exref,param_1 + 0xc);
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  puVar3 = (undefined4 *)(param_1 + 0x74);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (iVar1 != 1) {
    FUN_00411370(&uStack_c,0,0);
    *(float *)(param_1 + 0x54) = -fStack_4;
    *(undefined4 *)(param_1 + 0x4c) = uStack_c;
    *(undefined4 *)(param_1 + 0x50) = uStack_8;
  }
  if ((DAT_00610588 == 0) && ((*(byte *)(param_1 + 0xb4) & 4) != 0)) {
    (**(code **)(**(int **)Pipeline_exref + 300))(*(int **)Pipeline_exref,param_1 + 0xc);
  }
  return;
}

