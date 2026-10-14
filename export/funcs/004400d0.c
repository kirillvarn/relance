
void __thiscall FUN_004400d0(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_0055e280();
  if ((cVar1 == '\0') && (cVar1 = FUN_0055e280(), cVar1 == '\0')) {
    FUN_0045a460();
    FUN_005645c0(0x1b);
    switch(*(undefined4 *)(param_2 + 0x30)) {
    case 2:
      *(undefined1 *)(param_2 + 0x20) = 1;
      (**(code **)(**(int **)(param_2 + 0x18) + 0xa8))(7,param_2 + 0x24,0);
      FUN_0055e120(DAT_005cb4d0);
      FUN_0055dee0(*(undefined4 *)(param_2 + 0x18),param_2 + 0x24,&DAT_006687ec);
      return;
    case 3:
      *(undefined1 *)(param_2 + 0x20) = 1;
      (**(code **)(**(int **)(param_2 + 0x18) + 0xa8))(7,param_2 + 0x24,0);
      FUN_0055e120(DAT_005cb4d0);
      FUN_0055dee0(*(undefined4 *)(param_2 + 0x18),param_2 + 0x24,&DAT_006687e0);
      return;
    case 7:
      *(undefined1 *)(param_2 + 0x20) = 1;
      (**(code **)(**(int **)(param_2 + 0x18) + 0xa8))(7,param_2 + 0x24,0);
      FUN_0055e120(DAT_005cb4d0);
      FUN_0055dee0(*(undefined4 *)(param_2 + 0x18),param_2 + 0x24,&DAT_006687f8);
      return;
    case 0xc:
      *(undefined1 *)(param_2 + 0x20) = 1;
      (**(code **)(**(int **)(param_2 + 0x18) + 0xa8))(7,param_2 + 0x24,0);
      *(undefined1 *)(param_1 + 0x3d5) = 1;
      FUN_0055e120(DAT_005cb4d0);
      FUN_0055dee0(*(undefined4 *)(param_2 + 0x18),param_2 + 0x24,&DAT_00668804);
      return;
    }
  }
  else {
    *(int *)(param_1 + 0x3f4) = param_2;
  }
  return;
}

