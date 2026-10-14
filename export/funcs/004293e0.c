
void __fastcall FUN_004293e0(int *param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x14))(param_1);
  if (cVar2 != '\0') {
    if ((*(byte *)(param_1 + 3) & 4) != 0) {
      (**(code **)(*(int *)param_1[6] + 0x10))();
      if ((*(byte *)(param_1 + 3) & 4) != 0) {
        (**(code **)(**(int **)Sound_exref + 0x94))(*(int **)Sound_exref,param_1);
      }
    }
    piVar1 = (int *)param_1[0xb];
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_005b7e1d(piVar1);
    DAT_00667c74 = DAT_00667c74 + -1;
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}

