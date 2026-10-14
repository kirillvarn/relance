
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428430(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (DAT_00667cb0 != (int *)0x0) {
    (**(code **)(*DAT_00667cb0 + 0x60))();
    (**(code **)(*DAT_00667cb0 + 8))(DAT_00667cb0);
    DAT_00667cb0 = (int *)0x0;
  }
  if (DAT_00667cb4 != (int *)0x0) {
    (**(code **)(*DAT_00667cb4 + 0x60))();
    (**(code **)(*DAT_00667cb4 + 8))(DAT_00667cb4);
    DAT_00667cb4 = (int *)0x0;
  }
  piVar3 = (int *)*DAT_00667c70;
  piVar2 = DAT_00667c70;
  if (piVar3 != DAT_00667c70) {
    do {
      piVar1 = piVar3 + 2;
      piVar3 = (int *)*piVar3;
      if (param_1 != ((int *)*piVar1)[6]) {
        (**(code **)(*(int *)*piVar1 + 0x60))();
        piVar2 = DAT_00667c70;
      }
    } while (piVar3 != piVar2);
  }
  piVar3 = *(int **)Sound_exref;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xb8))(piVar3,0);
  }
  DAT_00667ca0 = 0;
  _DAT_00667ca4 = 0;
  DAT_00667ca8 = 0;
  _DAT_00610904 = 0xbf800000;
  return;
}

