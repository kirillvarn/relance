
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0051d7f0(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_28 [9];
  undefined1 local_2;
  
  cVar1 = FUN_0045a740();
  if (cVar1 == '\0') {
    piVar2 = local_28;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    local_28[0] = 0;
    local_2 = 1;
    switch(param_2) {
    case 0x2a:
      iVar3 = FUN_00576240();
      _DAT_00675278 = (float)(*(char *)(iVar3 + 0x18) != '\0');
      break;
    case 0x2b:
      iVar3 = FUN_00576240();
      _DAT_0067526c = (float)(int)-(uint)(*(char *)(iVar3 + 0x18) != '\0');
      break;
    case 0x2c:
      iVar3 = FUN_00576240();
      _DAT_0067527c = (float)(*(char *)(iVar3 + 0x18) != '\0');
      break;
    case 0x2d:
      iVar3 = FUN_00576240();
      _DAT_00675270 = (float)(int)-(uint)(*(char *)(iVar3 + 0x18) != '\0');
      break;
    case 0x2e:
      iVar3 = FUN_00576240();
      _DAT_00675280 = (float)(*(char *)(iVar3 + 0x18) != '\0');
      break;
    case 0x2f:
      iVar3 = FUN_00576240();
      _DAT_00675274 = (float)(int)-(uint)(*(char *)(iVar3 + 0x18) != '\0');
      break;
    default:
      goto switchD_0051d834_caseD_30;
    case 0x5c:
      local_28[0] = param_2;
      break;
    case 199:
      cVar1 = FUN_0041ddb0();
      if (cVar1 == '\0') {
        iVar3 = FUN_00576240();
        DAT_0067529c = *(char *)(iVar3 + 0x18) != '\0';
        DAT_006752a0 = 1;
      }
      break;
    case 200:
      FUN_004c7c40();
    }
    if (local_28[0] != 0) {
      iVar3 = *(int *)(param_1 + -0x38);
      if (((iVar3 == 0) || (piVar2 = (int *)(iVar3 + -8), piVar2 == (int *)0x0)) ||
         (*(int *)(iVar3 + 0x14) != 1)) {
        piVar2 = (int *)0x0;
      }
      (**(code **)(*piVar2 + 0x1cc))(local_28);
      return 1;
    }
  }
switchD_0051d834_caseD_30:
  return 0;
}

