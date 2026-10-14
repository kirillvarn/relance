
void __thiscall FUN_0045c7a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  switch(param_2) {
  default:
    iVar2 = 0;
    break;
  case 0x65:
    iVar2 = 3;
    break;
  case 0x66:
    iVar2 = 1;
    break;
  case 0x67:
    iVar2 = 2;
    break;
  case 0x68:
    iVar2 = 5;
    break;
  case 0x69:
    iVar2 = 6;
    break;
  case 0x6a:
    iVar2 = 4;
  }
  puVar1 = (undefined4 *)(param_1 + (iVar2 * 3 + 0x111) * 4);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return;
}

