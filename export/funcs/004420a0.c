
void FUN_004420a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char local_200 [256];
  char local_100 [256];
  
  iVar3 = 1;
  do {
    sprintf(local_200,"RoomControl%d",iVar3);
    piVar1 = (int *)FUN_0059da10(local_200);
    if (piVar1 != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))();
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    sprintf(local_100,"ButtonControl%d",iVar3);
    piVar1 = (int *)FUN_0059da10(local_100);
    if (piVar1 != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))();
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  return;
}

