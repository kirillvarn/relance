
char __thiscall FUN_004c2c70(int param_1,int param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  
  cVar3 = '\0';
  if (*(int *)(param_1 + 0x390) == 3) {
    bVar2 = *param_3;
    if (((bVar2 & 1) != 0) || ((bVar2 & 2) != 0)) {
      if (param_2 == 8) {
        if ((bVar2 & 1) != 0) {
          *(int *)(param_1 + 0x364) = *(int *)(param_1 + 0x364) / 10;
        }
        cVar3 = '\x01';
      }
      else if (((0x2f < param_2) && (param_2 < 0x3a)) && (cVar3 = '\x01', (bVar2 & 1) != 0)) {
        if (*(char *)(param_1 + 0x360) == '\0') {
          *(undefined4 *)(param_1 + 0x364) = 0;
        }
        iVar1 = param_2 + -0x30 + *(int *)(param_1 + 0x364) * 10;
        if ((*(int *)(*(int *)(param_1 + 0x34c) + 0x658) <= iVar1) &&
           (iVar1 <= *(int *)(*(int *)(param_1 + 0x34c) + 0x65c))) {
          *(int *)(param_1 + 0x364) = iVar1;
        }
      }
      *(undefined1 *)(param_1 + 0x360) = 1;
      if (cVar3 != '\0') {
        (**(code **)(**(int **)(param_1 + 0x34c) + 0xa8))(0x38,*(undefined4 *)(param_1 + 0x364),0);
        FUN_004c1a10(*(undefined4 *)(param_1 + 0x364));
      }
    }
  }
  return cVar3;
}

