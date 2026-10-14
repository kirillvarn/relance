
char FUN_00428680(int *param_1,undefined4 *param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  if (param_1 == (int *)0x0) {
    return '\0';
  }
  cVar1 = (**(code **)(*param_1 + 0x24))();
  if (cVar1 == '\0') {
    if (param_2 == (undefined4 *)0x0) {
LAB_004286c9:
      pvVar3 = Heap::Malloc((Heap *)&DAT_00667a44);
      if (pvVar3 != (void *)0x0) {
        piVar4 = (int *)FUN_00429040(1);
        goto LAB_00428701;
      }
    }
    else {
      if ((*(byte *)(param_2 + 1) & 4) != 0) goto LAB_004286e5;
      if ((*(byte *)(param_2 + 1) & 2) == 0) goto LAB_004286c9;
      pvVar3 = Heap::Malloc((Heap *)&DAT_00667a34);
      if (pvVar3 != (void *)0x0) {
        piVar4 = (int *)FUN_00428790();
        goto LAB_00428701;
      }
    }
  }
  else {
LAB_004286e5:
    pvVar3 = Heap::Malloc((Heap *)&DAT_00667a24);
    if (pvVar3 != (void *)0x0) {
      piVar4 = (int *)FUN_00428850();
      goto LAB_00428701;
    }
  }
  piVar4 = (int *)0x0;
LAB_00428701:
  if (param_2 != (undefined4 *)0x0) {
    bVar2 = (*(byte *)(param_2 + 1) >> 2 ^ *(byte *)(piVar4 + 3)) & 2 ^ *(byte *)(piVar4 + 3);
    *(byte *)(piVar4 + 3) = bVar2;
    *(byte *)(piVar4 + 3) = (*(byte *)(param_2 + 1) ^ bVar2) & 1 ^ bVar2;
    piVar4[7] = param_2[5];
    (**(code **)(*piVar4 + 0x8c))(param_2 + 2);
  }
  fVar6 = (float10)(**(code **)(*param_1 + 0x2c))();
  piVar4[4] = (int)(float)fVar6;
  uVar5 = 0;
  if (param_2 != (undefined4 *)0x0) {
    uVar5 = *param_2;
  }
  if (param_4 == '\0') {
    cVar1 = (**(code **)(*piVar4 + 0x58))(param_1,uVar5);
  }
  else {
    cVar1 = (**(code **)(*piVar4 + 0x5c))(param_1);
  }
  if ((cVar1 != '\0') && (param_1 != (int *)0x0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
    *param_1 = (int)piVar4;
  }
  (**(code **)(*piVar4 + 8))(piVar4);
  return cVar1;
}

