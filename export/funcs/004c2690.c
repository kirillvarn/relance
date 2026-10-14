
void __thiscall FUN_004c2690(int param_1,char param_2)

{
  undefined3 uVar1;
  
  if (param_2 == '\x01') {
    (**(code **)(**(int **)(param_1 + 0x410) + 0xa8))(0x1e,0x759);
    uVar1 = 0xff00;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x410) + 0xa8))(0x1e,0x75a,0);
    uVar1 = 0xff;
  }
  *(uint *)(*(int *)(param_1 + 0x410) + 0x348) = CONCAT13(0xc0,uVar1);
  return;
}

