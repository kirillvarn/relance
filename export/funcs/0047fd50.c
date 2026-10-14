
void __fastcall FUN_0047fd50(int param_1)

{
  undefined4 uVar1;
  wchar_t *_Format;
  
  (**(code **)(**(int **)(param_1 + 0x9d4) + 0xa8))(1,0,0);
  (**(code **)(**(int **)(param_1 + 0x9a0) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x9a4) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x9a8) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x9ac) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x9b0) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x9b4) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x9b8) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x9bc) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x9c0) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x9c4) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x380) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x9c8) + 0xa8))(1,1,0);
  _Format = (wchar_t *)0x1;
  uVar1 = 1;
  (**(code **)(**(int **)(param_1 + 0x9cc) + 0xa8))(1,1,0);
  (**(code **)(**(int **)(param_1 + 0x9d8) + 0xa8))(1,1,0);
  if (_Format == (wchar_t *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x9d4) + 0xa8))(0x1e,uVar1,0);
    return;
  }
  FUN_004347e0(DAT_0067eca8,uVar1,&DAT_0066dc60,DAT_006119f8);
  swprintf(&DAT_0066fc60,0x66dc60,_Format);
  (**(code **)(**(int **)(param_1 + 0x9d4) + 0xa8))(0x1d,&DAT_0066fc60,0);
  return;
}

