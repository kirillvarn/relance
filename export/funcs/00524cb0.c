
void __thiscall FUN_00524cb0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_retaddr;
  undefined4 local_1c;
  int *local_18;
  undefined1 local_14 [4];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c014b;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)(param_2 + 4);
  ExceptionList = &local_c;
  FUN_00432240(&param_2,puVar1);
  if (*(char *)(iVar2 + 0xc) == '\0') {
    if (param_2 == *(int *)(param_1 + 0x40)) {
      (**(code **)FDUMP_exref)
                (0x100002,"%s(%d) : *** WARNING: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x739,
                 "asteroid cube told to delete asteroid that does not exist");
    }
    else {
      (**(code **)(**(int **)(param_2 + 0x10) + 0x15c))(1);
      FUN_0046c8c0(&stack0xffffffdc,unaff_retaddr);
    }
  }
  else if (param_2 == *(int *)(param_1 + 0x40)) {
    piVar3 = operator_new(0xac);
    local_4 = 0;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      FUN_005392d0(8);
      *piVar3 = (int)&PTR_LAB_005dca14;
      piVar3[1] = (int)&PTR_LAB_005dc994;
      piVar3[3] = (int)&PTR_FUN_005dc98c;
    }
    local_1c = *puVar1;
    local_4 = 0xffffffff;
    local_18 = piVar3;
    FUN_0046d6d0(local_14,&local_1c);
    (**(code **)(*piVar3 + 0x16c))(iVar2 + 8);
    (**(code **)(*piVar3 + 0x170))();
    *(undefined1 *)(piVar3 + 0x2a) = *(undefined1 *)(iVar2 + 0xe);
    FUN_00540c30(piVar3,0);
  }
  else {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\CliAsteroid.cpp",0x72d,
               "asteroid cube told to create asteroid that already exists");
  }
  ExceptionList = pvStack_10;
  return;
}

