
void FUN_0053e2f0(undefined4 param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2;
  piVar1 = (int *)FUN_005416c0(param_2,0);
  if (piVar1 == (int *)0x0) {
    if (DAT_00673378 == iVar2) {
      param_2 = FUN_004c4670();
      Reputation::Vibe::SetAffiliation(&param_2,param_3,true);
    }
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x150))();
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x4c) & 0x103) == 0x103)) {
      param_2 = *(int *)(iVar2 + 0x104);
      Reputation::Vibe::SetAffiliation(&param_2,param_3,true);
      return;
    }
  }
  return;
}

