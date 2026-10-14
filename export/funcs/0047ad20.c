
void __fastcall FUN_0047ad20(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = param_1[0xd8];
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x6c) & 2) != 0)) {
    *(byte *)(iVar1 + 0x6c) = *(byte *)(iVar1 + 0x6c) & 0xfc;
    if (*(int *)(param_1[0xd8] + 0x978) != 0) {
      *(undefined4 *)(param_1[0xd8] + 0x978) = 0;
    }
  }
  uVar4 = 1;
  uVar3 = FUN_004c4060(1);
  FUN_004c62b0(uVar3,uVar4);
  *(undefined1 *)((int)param_1 + 0x4e3) = 0;
  if ((code *)param_1[0x140] != (code *)0x0) {
    (*(code *)param_1[0x140])(*(undefined1 *)((int)param_1 + 0x4e5),param_1[0x141]);
    param_1[0x140] = 0;
  }
  FUN_0059dd00(param_1,0);
  iVar1 = param_1[3];
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    FUN_0043d2a0(iVar1);
    iVar1 = iVar2;
  }
  (**(code **)(*param_1 + 0x28))();
  (**(code **)*param_1)(1);
  return;
}

