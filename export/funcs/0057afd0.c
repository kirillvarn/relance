
undefined4 __thiscall FUN_0057afd0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0xf005) {
    if (param_3 == *(int *)(param_1 + 0x3f0)) {
      uVar2 = *(undefined4 *)(param_1 + 0x360);
      FUN_00595dd0();
      uVar1 = ftol();
      FUN_005798b0(uVar2,uVar1);
      return 1;
    }
    if (param_3 == *(int *)(param_1 + 0x3f4)) {
      switch(*(undefined4 *)(param_1 + 0x408)) {
      case 0:
        iVar3 = *(int *)(param_1 + 0x364);
        break;
      case 1:
        iVar3 = 0;
        break;
      case 2:
        iVar3 = -((*(int *)(param_1 + 0x35c) - *(int *)(param_1 + 0x380)) / 2);
        break;
      case 3:
        iVar3 = *(int *)(param_1 + 0x380) - *(int *)(param_1 + 0x35c);
        break;
      default:
        iVar3 = 0xf005;
      }
      FUN_00595dd0();
      uVar2 = ftol();
      FUN_005798b0(uVar2,iVar3);
      return 1;
    }
  }
  uVar2 = FUN_005a0840(param_2,param_3,param_4);
  return uVar2;
}

