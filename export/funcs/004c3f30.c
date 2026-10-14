
void FUN_004c3f30(undefined *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  piVar5 = DAT_00672970;
  if (param_1 != &DAT_0067296c) {
    piVar1 = (int *)*DAT_00672970;
    puVar2 = *(undefined4 **)(param_1 + 4);
    for (puVar3 = (undefined4 *)*puVar2; (piVar1 != piVar5 && (puVar3 != puVar2));
        puVar3 = (undefined4 *)*puVar3) {
      piVar1[2] = puVar3[2];
      piVar1[3] = puVar3[3];
      piVar1 = (int *)*piVar1;
    }
    while (piVar1 != piVar5) {
      piVar4 = (int *)*piVar1;
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      FUN_005b7e1d(piVar1);
      DAT_00672974 = DAT_00672974 + -1;
      piVar1 = piVar4;
    }
    for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
      puVar8 = (undefined4 *)piVar5[1];
      puVar6 = operator_new(0x10);
      *puVar6 = piVar5;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = puVar6;
      }
      puVar6[1] = puVar8;
      piVar5[1] = (int)puVar6;
      *(undefined4 **)puVar6[1] = puVar6;
      if (puVar6 + 2 != (undefined4 *)0x0) {
        puVar6[2] = puVar3[2];
        puVar6[3] = puVar3[3];
      }
      DAT_00672974 = DAT_00672974 + 1;
    }
  }
  DAT_00673388 = DAT_00673388 + 1;
  iVar7 = FUN_00446be0();
  if (iVar7 != 0) {
    thunk_FUN_00447210();
    return;
  }
  return;
}

