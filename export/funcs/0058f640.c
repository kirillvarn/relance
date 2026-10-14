
void __thiscall FUN_0058f640(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x57c) = param_2;
  *(int *)(param_1 + 0x580) = param_3;
  if (*(int *)(param_1 + 0x4a4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2;
  }
  if (param_2 <= (uint)(iVar2 - param_3)) {
    FUN_00595db0(0);
    *(byte *)(*(int *)(param_1 + 0x588) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x588) + 0x6c) & 0xfc
    ;
    FUN_0057a620(1,1);
    return;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 0x588) + 0x6c);
  *pbVar1 = *pbVar1 | 3;
  FUN_00595d60(0,(float)(int)param_2);
  if (*(int *)(param_1 + 0x4a4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4a4) >> 2;
  }
  FUN_00595de0((float)(uint)(iVar2 - *(int *)(param_1 + 0x580)));
  FUN_00595e10(0x3f800000);
  FUN_0057a620(1,1);
  return;
}

