
void __thiscall FUN_004110c0(int param_1,undefined4 param_2,byte param_3)

{
  *(byte *)(param_1 + 0xb4) = (*(byte *)(param_1 + 0xb4) ^ param_3) & 1 ^ *(byte *)(param_1 + 0xb4);
  switch(param_2) {
  case 1:
  case 2:
  case 3:
    *(undefined4 *)(param_1 + 0xc) = param_2;
    break;
  case 0xfffffffe:
    break;
  default:
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
    return;
  }
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  return;
}

