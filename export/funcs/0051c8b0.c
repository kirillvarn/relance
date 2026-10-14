
void __fastcall FUN_0051c8b0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = FUN_005792b0(0x25);
  if (((iVar3 != 0) && (iVar3 = FUN_005792b0(0x24), iVar3 != 0)) &&
     (iVar3 = FUN_005792b0(0x28), iVar3 != 0)) {
    iVar3 = FUN_0050c620();
    puVar1 = *(undefined4 **)(iVar3 + 4);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      if (DAT_0067524c == 2) {
        ((int *)puVar2[2])[0xd] = 0x3f800000;
      }
      else {
        (**(code **)(*(int *)puVar2[2] + 0x10))(param_1,0x3f800000);
      }
    }
  }
  iVar3 = FUN_005792b0(0x25);
  if (((iVar3 != 0) && (iVar3 = FUN_005792b0(0x24), iVar3 != 0)) &&
     (iVar3 = FUN_005792b0(0x28), iVar3 != 0)) {
    iVar3 = FUN_0050c620();
    puVar1 = *(undefined4 **)(iVar3 + 4);
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
      (**(code **)(*(int *)puVar2[2] + 0x14))(param_1,0x3f800000);
    }
  }
  return;
}

