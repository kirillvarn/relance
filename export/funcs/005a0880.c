
void __thiscall FUN_005a0880(int param_1,float *param_2)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = (float *)(param_1 + 0x60);
  *pfVar1 = *param_2;
  *(float *)(param_1 + 100) = param_2[1];
  *(float *)(param_1 + 0x68) = param_2[2];
  if (*(int *)(param_1 + 0x84) != -1) {
    pfVar3 = pfVar1;
    if ((*(byte *)(param_1 + 0x2f4) & 1) != 0) {
      local_18 = *(float *)(param_1 + 0xa8) + *pfVar1;
      local_14 = *(float *)(param_1 + 100) + *(float *)(param_1 + 0xac);
      local_10 = *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0xb0);
      pfVar3 = &local_18;
    }
    local_c = *pfVar3;
    local_8 = pfVar3[1];
    local_4 = pfVar3[2];
    (**(code **)(**(int **)Engine_exref + 0x8c))
              (*(int **)Engine_exref,*(int *)(param_1 + 0x84),&local_c);
    (**(code **)(**(int **)Engine_exref + 0x6c))
              (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x84),0,0);
  }
  for (piVar2 = *(int **)(param_1 + 0xc); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    (**(code **)(*piVar2 + 0x14))(pfVar1);
  }
  return;
}

