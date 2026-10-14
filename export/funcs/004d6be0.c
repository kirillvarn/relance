
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d6be0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  
  cVar2 = FUN_0041dd90();
  if ((cVar2 != '\0') && (iVar3 = FUN_0054baf0(), iVar3 != 0)) {
    FUN_005a0c30(0);
  }
  fVar4 = (float10)FUN_0042d680();
  if (*(float *)(param_1 + 0x380) <= _DAT_005c7474) {
    *(undefined4 *)(param_1 + 0x380) = 0;
  }
  else {
    *(float *)(param_1 + 0x380) = (float)((float10)*(float *)(param_1 + 0x380) - fVar4);
  }
  if (*(float *)(param_1 + 0x354) <= _DAT_005c7474) {
    *(undefined4 *)(param_1 + 0x354) = 0;
  }
  else {
    *(float *)(param_1 + 0x354) = (float)((float10)*(float *)(param_1 + 0x354) - fVar4);
  }
  if (*(float *)(param_1 + 0x3ac) <= _DAT_005c7474) {
    *(undefined4 *)(param_1 + 0x3ac) = 0;
  }
  else {
    *(float *)(param_1 + 0x3ac) = (float)((float10)*(float *)(param_1 + 0x3ac) - fVar4);
  }
  if (*(float *)(param_1 + 0x3d8) <= _DAT_005c7474) {
    *(undefined4 *)(param_1 + 0x3d8) = 0;
  }
  else {
    *(float *)(param_1 + 0x3d8) = (float)((float10)*(float *)(param_1 + 0x3d8) - fVar4);
  }
  for (piVar1 = *(int **)(param_1 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if ((*(byte *)(piVar1 + 0x1b) & 1) == 0) {
      (**(code **)(*piVar1 + 0x30))();
    }
  }
  return;
}

