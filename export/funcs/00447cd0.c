
void __fastcall FUN_00447cd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  Csys local_30 [48];
  
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00456540(*(undefined4 *)(param_1 + 8),0);
    Csys::Csys(local_30);
    Csys::set_identity(local_30);
    FUN_00454eb0(iVar1,0,local_30,0);
    *puVar2 = 0;
    *(undefined1 *)((int)puVar2 + 6) = 1;
    *(undefined1 *)((int)puVar2 + 7) = 1;
    *(undefined1 *)(puVar2 + 2) = 1;
    *(undefined1 *)((int)puVar2 + 9) = 0;
    puVar2[4] = 1;
    *(undefined1 *)((int)puVar2 + 0x16) = 1;
    puVar2[6] = &LAB_00448270;
    puVar2[7] = param_1;
    puVar2[8] = 0;
    FUN_00454f80();
    *(undefined4 *)(param_1 + 0xac) = 1;
    FUN_00558c00();
    return;
  }
  FUN_00558a30();
  return;
}

