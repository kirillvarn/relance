
void FUN_00489e00(void)

{
  int *piVar1;
  char cVar2;
  
  if (DAT_00671f58 != 0) {
    if ((*(int **)(*DAT_00671f54 + 0x10) != (int *)0x0) &&
       (cVar2 = (**(code **)(**(int **)(*DAT_00671f54 + 0x10) + 0x74))(), cVar2 == '\0')) {
      return;
    }
    piVar1 = (int *)*DAT_00671f54;
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_00489f70(0);
    FUN_005b7e1d(piVar1);
    DAT_00671f58 = DAT_00671f58 + -1;
    if (DAT_00671f58 != 0) {
      FUN_00489a80();
      return;
    }
  }
  return;
}

