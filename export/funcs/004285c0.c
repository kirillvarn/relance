
void FUN_004285c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*DAT_00667c70;
  piVar2 = DAT_00667c70;
  if (piVar3 != DAT_00667c70) {
    do {
      piVar1 = piVar3 + 2;
      piVar3 = (int *)*piVar3;
      if (((int *)*piVar1)[6] == param_1) {
        (**(code **)(*(int *)*piVar1 + 0x60))();
        piVar2 = DAT_00667c70;
      }
    } while (piVar3 != piVar2);
  }
  return;
}

