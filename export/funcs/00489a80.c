
void __fastcall FUN_00489a80(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0041a3e0();
  if ((cVar1 == '\0') && (DAT_00671f70 != (int *)0x0)) {
    iVar2 = FUN_0054baf0();
    if (iVar2 != 0) {
      cVar1 = FUN_00553660(DAT_00671f5c,*param_1);
      if (cVar1 == '\0') {
        FUN_00553590(DAT_00671f5c,*param_1);
      }
    }
    iVar2 = (**(code **)(*DAT_00671f70 + 0x14))(*param_1);
    if (iVar2 != 0) {
      FUN_004285f0(iVar2,&stack0xffffffe4,param_1 + 2);
      iVar2 = param_1[2];
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 4) = 5;
      }
    }
  }
  return;
}

