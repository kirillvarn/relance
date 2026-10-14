
void __thiscall FUN_004bbfb0(int param_1,char param_2)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  FUN_00579970(local_4,&local_8);
  if (*(char *)(param_1 + 0x37c) == '\0') {
    *(undefined4 *)(param_1 + 900) = local_8;
  }
  else {
    *(undefined4 *)(param_1 + 0x380) = local_8;
  }
  *(char *)(param_1 + 0x37c) = param_2;
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_1 + 900);
  }
  else {
    *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_1 + 0x380);
  }
  if ((*(int **)(param_1 + 0x36c) != (int *)0x0) && (*(int *)(param_1 + 0x374) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x36c) + 0xa8))(0xc,param_2,0);
    (**(code **)(**(int **)(param_1 + 0x370) + 0xa8))(0xc,param_2,0);
    (**(code **)(**(int **)(param_1 + 0x374) + 0xa8))(0xc,param_2 == '\0',0);
    (**(code **)(**(int **)(param_1 + 0x378) + 0xa8))(0xc,param_2 == '\0',0);
  }
  FUN_004bc2a0();
  return;
}

