
char __thiscall FUN_0052dd00(int param_1,undefined4 param_2)

{
  char cVar1;
  Munition *pMVar2;
  
  cVar1 = FUN_0052d410(param_2);
  if (cVar1 != '\0') {
    if (*(CEGun **)(param_1 + 4) == (CEGun *)0x0) {
      pMVar2 = (Munition *)0x0;
    }
    else {
      pMVar2 = CEGun::MunitionArch(*(CEGun **)(param_1 + 4));
    }
    if (*(int *)(pMVar2 + 0x90) == 0) {
      FUN_0052dde0(param_2);
    }
  }
  return cVar1;
}

