
void __fastcall FUN_004393b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 local_5d;
  int local_5c;
  BaseDataList *local_58;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined4 local_4c;
  int *local_48;
  undefined4 local_44;
  int *local_40;
  int local_34 [5];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9310;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_5c = param_1;
  local_58 = BaseDataList_get();
  piVar2 = (int *)**(int **)(local_58 + 4);
  if (piVar2 != *(int **)(local_58 + 4)) {
    do {
      iVar1 = piVar2[2];
      FUN_0043bca0(&local_5d);
      local_20 = 0;
      local_1c = 0;
      piVar3 = (int *)**(int **)(iVar1 + 0x28);
      local_4 = 0;
      local_34[4] = iVar1;
      if (piVar3 != *(int **)(iVar1 + 0x28)) {
        do {
          local_34[0] = piVar3[2];
          local_34[1] = 0;
          local_34[2] = 0;
          local_34[3] = 0;
          FUN_0043bd30(local_54,local_14,local_34);
          piVar3 = (int *)*piVar3;
        } while (piVar3 != (int *)*(int *)(iVar1 + 0x28));
      }
      FUN_0043bd90(&local_4c,*(undefined4 *)(local_5c + 4),local_34 + 4);
      local_4 = 1;
      FUN_00535980();
      local_4 = 0xffffffff;
      FUN_004a2d30();
      piVar2 = (int *)*piVar2;
      param_1 = local_5c;
    } while (piVar2 != (int *)*(int *)(local_58 + 4));
  }
  piVar2 = (int *)**(int **)(param_1 + 4);
  if (piVar2 != *(int **)(param_1 + 4)) {
    local_58 = (BaseDataList *)(param_1 + 0x20);
    do {
      local_4c = *(undefined4 *)piVar2[2];
      local_48 = piVar2 + 2;
      FUN_0046d6d0(local_54,&local_4c);
      FUN_0046d660(local_54,local_50);
      piVar3 = *(int **)piVar2[6];
      if (piVar3 != (int *)piVar2[6]) {
        do {
          local_44 = *(undefined4 *)(piVar3[2] + 4);
          local_40 = piVar3 + 2;
          FUN_0046d6d0(local_34,&local_44);
          piVar3 = (int *)*piVar3;
        } while (piVar3 != (int *)piVar2[6]);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(local_5c + 4));
  }
  ExceptionList = local_c;
  return;
}

