
void FUN_005a5b60(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_005a6620(param_2);
  FmtStr::operator=((FmtStr *)((uint)*(byte *)(param_2 + 0x20) * 0x1c + *(int *)(iVar1 + 4)),
                    (FmtStr *)(param_2 + 4));
  *(undefined4 *)((uint)*(byte *)(param_2 + 0x20) * 0x1c + 0x18 + *(int *)(iVar1 + 4)) =
       *(undefined4 *)(param_2 + 0x1c);
  return;
}

