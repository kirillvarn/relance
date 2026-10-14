
void __fastcall FUN_00435a5c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000048;
  undefined4 in_stack_00000054;
  undefined4 auStack_30 [12];
  
  uStack00000010 = 0;
  uStack00000014 = 0;
  uStack0000001c = 0;
  uStack00000020 = 0;
  uStack00000018 = 0;
  uStack00000024 = 0;
  uStack00000048 = 0x3f800000;
  uStack00000038 = 0x3f800000;
  uStack00000028 = 0x3f800000;
  uStack00000044 = 0;
  uStack00000040 = 0;
  uStack0000003c = 0;
  uStack00000034 = 0;
  uStack00000030 = 0;
  uStack0000002c = 0;
  puVar2 = &stack0x0000001c;
  puVar3 = auStack_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00435b80(param_2,0,0xffffffff,in_stack_00000054,1);
  return;
}

