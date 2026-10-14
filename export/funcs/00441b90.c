
void __thiscall FUN_00441b90(int param_1,undefined4 param_2,undefined1 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  Csys local_30 [48];
  
  if (*(char *)(param_1 + 0x3cc) == '\0') {
    *(undefined1 *)(param_1 + 0x3cc) = 1;
    uVar1 = FUN_0043a460();
    puVar2 = (undefined4 *)FUN_00456540(uVar1,0);
    Csys::set_identity(local_30);
    FUN_00454eb0(param_2,0,local_30,0);
    *puVar2 = 0;
    *(bool *)((int)puVar2 + 6) = param_4 != '\0';
    *(undefined1 *)((int)puVar2 + 7) = param_3;
    *(undefined1 *)(puVar2 + 2) = 1;
    *(undefined1 *)((int)puVar2 + 9) = 0;
    puVar2[4] = 1;
    puVar2[6] = FUN_00441c40;
    puVar2[7] = param_1;
    puVar2[8] = 0;
    FUN_00454f80();
    FUN_0041dda0(0);
  }
  return;
}

