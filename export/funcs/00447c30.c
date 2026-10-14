
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00447c30(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  Csys local_30 [48];
  
  FUN_00412070(0x3f800000);
  FUN_00412050(0,(float)_DAT_005c89b8 / _DAT_0061650c);
  puVar1 = (undefined4 *)FUN_00456540(*(undefined4 *)(param_1 + 8),0);
  Csys::set_identity(local_30);
  FUN_00454eb0(param_2,0,local_30,0);
  *puVar1 = 0;
  *(undefined1 *)((int)puVar1 + 6) = 1;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined1 *)((int)puVar1 + 9) = 1;
  puVar1[4] = 1;
  puVar1[6] = &LAB_00448270;
  puVar1[7] = param_1;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 5) = 1;
  FUN_00454f80();
  *(undefined4 *)(param_1 + 0xac) = 2;
  return;
}

