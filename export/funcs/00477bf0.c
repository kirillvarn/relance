
void FUN_00477bf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_18 [4];
  int *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bc048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043a510(DAT_0066873c);
  local_18[0] = (undefined1)param_1;
  local_14 = operator_new(0xc);
  *local_14 = (int)local_14;
  local_14[1] = (int)local_14;
  local_10 = 0;
  local_4 = 0;
  FUN_00437f70(local_18,3);
  iVar5 = 0;
  piVar1 = (int *)*local_14;
  do {
    if (piVar1 == local_14) {
      if (local_10 != 0) {
        puVar4 = (undefined4 *)((int *)*local_14)[2];
LAB_00477c7a:
        FUN_00477ab0(2,param_2,param_3,*puVar4);
      }
      piVar3 = local_14;
      piVar1 = (int *)*local_14;
      while (piVar1 != piVar3) {
        piVar2 = (int *)*piVar1;
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        FUN_005b7e1d(piVar1);
        local_10 = local_10 + -1;
        piVar1 = piVar2;
      }
      FUN_005b7e1d(local_14);
      ExceptionList = local_c;
      return;
    }
    if (iVar5 == param_1) {
      puVar4 = (undefined4 *)piVar1[2];
      goto LAB_00477c7a;
    }
    piVar1 = (int *)*piVar1;
    iVar5 = iVar5 + 1;
  } while( true );
}

