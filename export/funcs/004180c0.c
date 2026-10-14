
void FUN_004180c0(void)

{
  int *piVar1;
  int *piVar2;
  
  DAT_006105b0 = DAT_006105b0 + 1;
  if (DAT_006105b0 == 0) {
    DAT_006105b0 = 1;
  }
  piVar1 = (int *)*DAT_00616528;
  while (piVar1 != DAT_00616528) {
    piVar2 = (int *)piVar1[4];
    if (piVar2 != (int *)0x0) {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 4))();
        *piVar2 = 0;
      }
      piVar2[1] = 0;
    }
    FUN_0052afa0();
  }
  free(DAT_00616660);
  DAT_00616660 = (void *)0x0;
  SelectObject(DAT_00616664,DAT_00616658);
  DeleteObject(DAT_00616654);
  DeleteDC(DAT_00616664);
  FUN_00412670(*(undefined4 *)Pipeline_exref);
  return;
}

