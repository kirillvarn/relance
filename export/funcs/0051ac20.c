
undefined4 __thiscall FUN_0051ac20(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_0045a740();
  if (cVar1 != '\0') {
    return 0;
  }
  cVar1 = FUN_0051d7f0(param_2);
  if (cVar1 != '\0') {
    return 1;
  }
  switch(param_2 + -0x32) {
  case 0:
    iVar2 = FUN_00576240();
    uVar3 = 0;
    if (*(char *)(iVar2 + 0x18) != '\0') {
      *(float *)(param_1 + 0x24) = -*(float *)(param_1 + 0x2c);
      return 1;
    }
    break;
  case 1:
    iVar2 = FUN_00576240();
    uVar3 = 0;
    if (*(char *)(iVar2 + 0x18) != '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0x2c);
    }
    break;
  case 2:
    iVar2 = FUN_00576240();
    uVar3 = 0;
    if (*(char *)(iVar2 + 0x18) != '\0') {
      *(float *)(param_1 + 0x28) = -*(float *)(param_1 + 0x2c);
      return 1;
    }
    goto LAB_0051acd2;
  case 3:
    iVar2 = FUN_00576240();
    uVar3 = 0;
    if (*(char *)(iVar2 + 0x18) != '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0x2c);
    }
LAB_0051acd2:
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    return 1;
  case 4:
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    return 1;
  default:
    return 0;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  return 1;
}

