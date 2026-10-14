
void FUN_00435500(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined1 local_4 [4];
  
  puVar3 = DAT_00668664;
  puVar1 = (undefined4 *)*DAT_00668664;
  while (puVar1 != puVar3) {
    puVar1 = (undefined4 *)*puVar1;
    piVar5 = (int *)FUN_0053ab20(local_4,0);
    piVar5 = (int *)*piVar5;
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_00595300(0);
    FUN_005b7e1d(piVar5);
    DAT_00668668 = DAT_00668668 + -1;
  }
  FUN_004362f0(local_4,*DAT_00668670,DAT_00668670);
  piVar4 = DAT_00668684;
  piVar5 = (int *)*DAT_00668684;
  while (piVar5 != piVar4) {
    piVar2 = (int *)*piVar5;
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_005b7e1d(piVar5);
    DAT_00668688 = DAT_00668688 + -1;
    piVar5 = piVar2;
  }
  if (DAT_0066868c != -1) {
    (**(code **)(**(int **)Anim_exref + 0x10))(*(int **)Anim_exref,DAT_0066868c);
    DAT_0066868c = -1;
  }
  return;
}

