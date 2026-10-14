
void __thiscall
FUN_00571220(byte *param_1,byte param_2,char param_3,byte param_4,char param_5,uint param_6)

{
  byte bVar1;
  
  bVar1 = (*param_1 ^ param_2) & 1 ^ *param_1;
  *param_1 = (param_4 & 1) << 2 ^ ((param_3 << 1 ^ bVar1) & 2 ^ bVar1) & 3 ^ param_5 << 3;
  *(uint *)(param_1 + 1) = (*(uint *)(param_1 + 1) ^ param_6) & 0xffffff ^ *(uint *)(param_1 + 1);
  return;
}

