
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00514260(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_4 [4];
  
  if (*(int *)(param_1 + 0x14) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(*(int *)(param_1 + 0x14) + -8);
  }
  bVar1 = *(byte *)(param_1 + 0x1c);
  iVar2 = (**(code **)(*piVar4 + 0x130))(local_4);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(*(int *)(param_1 + 0x14) + -8);
    }
    (**(code **)(*piVar4 + 0x40))(&stack0xfffffff0);
    if ((float)(uint)bVar1 != _DAT_005c7474) {
      uVar3 = FUN_005416c0(0x3f800000,2);
      return uVar3;
    }
  }
  return 0;
}

