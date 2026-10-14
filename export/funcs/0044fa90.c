
void FUN_0044fa90(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (int *)0x0) && (iVar1 = (**(code **)(*param_1 + 0x38))(param_1), 0 < iVar1)) {
    iVar3 = 0;
    do {
      piVar2 = (int *)(**(code **)(*param_1 + 0x3c))(param_1,iVar3);
      if (*piVar2 == 10) {
        if ((char)param_1 == '\0') {
          iVar4 = piVar2[0xf];
          FUN_004356c0(iVar4);
          FUN_00434eb0(iVar4);
        }
        else {
          iVar4 = piVar2[0xf];
          FUN_004356c0(iVar4);
          FUN_00435320(iVar4);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}

