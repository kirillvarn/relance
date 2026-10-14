
void FUN_004174a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *local_8;
  undefined1 local_4 [4];
  
  free(DAT_00616660);
  DAT_00616660 = (void *)0x0;
  SelectObject(DAT_00616664,DAT_00616658);
  DeleteObject(DAT_00616654);
  DeleteDC(DAT_00616664);
  puVar5 = DAT_0061651c;
  puVar2 = (undefined4 *)*DAT_0061651c;
  piVar6 = DAT_00616644;
  puVar4 = local_8;
  while (local_8 = puVar2, DAT_00616644 = piVar6, local_8 != puVar5) {
    puVar2 = (undefined4 *)*local_8;
    piVar6 = (int *)FUN_0053ab20(local_4,0);
    piVar6 = (int *)*piVar6;
    *(int *)piVar6[1] = *piVar6;
    *(int *)(*piVar6 + 4) = piVar6[1];
    FUN_00418fa0(0);
    FUN_005b7e1d(piVar6);
    DAT_00616520 = DAT_00616520 + -1;
    piVar6 = DAT_00616644;
    puVar4 = local_8;
  }
  local_8 = puVar4;
  if (piVar6 != DAT_00616648) {
    piVar1 = piVar6 + 1;
    do {
      piVar3 = *(int **)Pipeline_exref;
      puVar2 = (undefined4 *)*piVar6;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0xb8))(piVar3,*puVar2);
        DAT_00616650 = DAT_00616650 + puVar2[2] * puVar2[1] * -2;
      }
      if (puVar2 != (undefined4 *)0x0) {
        FUN_005b7e1d(puVar2);
      }
      piVar3 = DAT_00616648;
      if (piVar1 != DAT_00616648) {
        piVar7 = piVar1;
        do {
          *(int *)(((int)piVar6 - (int)piVar1) + (int)piVar7) = *piVar7;
          piVar7 = piVar7 + 1;
        } while (piVar7 != piVar3);
      }
      DAT_00616648 = DAT_00616648 + -1;
    } while (piVar6 != DAT_00616648);
  }
  FUN_0053e430(&local_8);
  if (local_8 != DAT_00616528) {
    do {
      piVar6 = (int *)local_8[4];
      if (piVar6 != (int *)0x0) {
        if ((int *)*piVar6 != (int *)0x0) {
          (**(code **)(*(int *)*piVar6 + 4))();
          *piVar6 = 0;
        }
        piVar6[1] = 0;
      }
      FUN_0052afa0();
    } while (local_8 != DAT_00616528);
  }
  FUN_00402d50();
  return;
}

