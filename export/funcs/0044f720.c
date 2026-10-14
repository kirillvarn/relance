
void __thiscall
FUN_0044f720(int param_1,undefined4 param_2,char *param_3,undefined4 param_4,undefined1 param_5,
            undefined1 param_6,undefined1 param_7,undefined4 param_8,undefined1 param_9,
            char *param_10,undefined1 param_11,undefined1 param_12)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  *(undefined1 *)(param_1 + 0x55) = param_6;
  *(undefined1 *)(param_1 + 0x56) = param_7;
  *(undefined1 *)(param_1 + 0x54) = param_5;
  *(undefined1 *)(param_1 + 0x5c) = param_11;
  *(undefined1 *)(param_1 + 0x5d) = param_9;
  *(undefined4 *)(param_1 + 0x58) = param_8;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x60) = param_12;
  malloc_strcpy((char **)(param_1 + 0xa0),param_10);
  malloc_strfree((char **)(param_1 + 0xa4));
  malloc_strcpy((char **)(param_1 + 0xa4),param_3);
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x44))(piVar1);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    FUN_0044ed90();
    FUN_0044f310();
    FUN_0044f410();
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x50))(*(undefined1 *)(param_1 + 0x54));
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x58))(*(int **)(param_1 + 0x3c),0);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x68))(*(int **)(param_1 + 0x3c),0);
  }
  return;
}

