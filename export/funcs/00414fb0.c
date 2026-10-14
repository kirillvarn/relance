
void __thiscall FUN_00414fb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  if (*(int *)(param_1 + 0x14) != param_2) {
    *(int *)(param_1 + 0x14) = param_2;
    if (*(int *)(param_1 + 0x30) != 0) {
      param_2 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x15c);
      local_4 = param_1;
      FUN_00432240(&local_4,&param_2);
      iVar1 = *(int *)(param_1 + 0x30);
      iVar2 = *(int *)(iVar1 + 0x160) + -1;
      *(int *)(iVar1 + 0x160) = iVar2;
      if (iVar2 < 1) {
        FUN_00415050();
        FUN_005b7e1d(iVar1);
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      if ((local_4 != DAT_00616528) && (iVar2 < 1)) {
        FUN_0046c8c0(&param_2,local_4);
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

