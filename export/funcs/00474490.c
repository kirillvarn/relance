
bool __thiscall FUN_00474490(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  
  FUN_0041dde0("Arrow",0);
  *(undefined4 *)(param_1 + 0x70) = 100;
  *(undefined4 *)(param_1 + 0x78) = 6;
  uVar1 = FUN_004a7670();
  *(undefined1 *)(param_1 + 0x32c) = uVar1;
  FUN_0059d8c0(param_1);
  *(undefined4 *)(param_1 + 0xb4) = 0x40000000;
  *(undefined4 *)(param_1 + 0xb8) = 0x40000000;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  cVar2 = FUN_004b5060(param_2,param_3);
  return cVar2 != '\0';
}

