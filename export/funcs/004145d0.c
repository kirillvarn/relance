
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004145d0(int param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  
  fVar1 = ABS(param_3);
  if (ABS(param_3) < (float)_DAT_005c75f8) {
    fVar1 = _DAT_005c75dc;
  }
  floor((double)((_DAT_0067dc70 / _DAT_0067dc9c) * (_DAT_0067dc9c / fVar1) * param_2 +
                (float)_DAT_005c75e8));
  iVar2 = ftol();
  if (iVar2 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = iVar2;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

