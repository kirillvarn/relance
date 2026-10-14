
void FUN_004bcbf0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  DAT_006720c9 = 1;
  DAT_0067494c = 1;
  if ((int *)*DAT_00672950 != DAT_00672950) {
    FUN_004c46c0();
    iVar6 = FUN_004c4fb0();
    local_8 = 0;
    if (0 < iVar6) {
      do {
        iVar7 = FUN_004c4ff0(local_8);
        piVar5 = DAT_00672328;
        if (iVar7 != 0) {
          if (*(char *)(iVar7 + 0x18) < '\0') {
            if (DAT_0066d35a == '\0') {
              piVar3 = (int *)*DAT_00672328;
              while (piVar3 != piVar5) {
                piVar1 = (int *)*piVar3;
                *(int *)piVar3[1] = *piVar3;
                *(int *)(*piVar3 + 4) = piVar3[1];
                FUN_004bd620(0);
                FUN_005b7e1d(piVar3);
                DAT_0067232c = DAT_0067232c + -1;
                piVar3 = piVar1;
              }
              DAT_00672404 = 0;
            }
            if ((DAT_00672400 != (int *)0x0) &&
               (FUN_0059dd00(DAT_00672400,0), piVar5 = DAT_00672400, DAT_00672400 != (int *)0x0)) {
              iVar4 = DAT_00672400[3];
              while (iVar4 != 0) {
                iVar2 = *(int *)(iVar4 + 8);
                FUN_0043d2a0(iVar4);
                iVar4 = iVar2;
              }
              (**(code **)(*piVar5 + 0x28))();
              (**(code **)*piVar5)(1);
            }
          }
          if ((*(byte *)(iVar7 + 0x18) & 0x20) != 0) {
            FUN_004ba2a0(iVar7);
          }
          if ((*(byte *)(iVar7 + 0x18) & 0x10) != 0) {
            FUN_004b9f90(iVar7);
          }
        }
        local_8 = local_8 + 1;
        *(uint *)(iVar7 + 0x18) = *(uint *)(iVar7 + 0x18) & 0xf;
      } while (local_8 < iVar6);
    }
  }
  return;
}

