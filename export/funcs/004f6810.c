
undefined4 FUN_004f6810(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_stack_00000014;
  undefined4 auStack_68 [6];
  undefined4 uStack_50;
  int *piStack_4c;
  long local_38;
  undefined4 *local_34;
  undefined4 local_30;
  char local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bf3fb;
  local_c = ExceptionList;
  piStack_4c = (int *)0x4f6832;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x18);
  local_4 = 0;
  local_34 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00420d40();
    *puVar2 = &PTR_LAB_005d98ec;
    puVar2[1] = &PTR_FUN_005d98e4;
    puVar2[5] = 1;
  }
  local_30 = 0;
  local_2c[0] = '\0';
  local_4 = 0xffffffff;
  puVar4 = &local_30;
  puVar5 = auStack_68;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004f6ac0(&local_30,"fx\\misc\\%s.3db");
  bVar1 = Archetype::Load(local_2c,&local_38,(int *)0x0);
  if (bVar1) {
    piStack_4c = (int *)local_2c;
    *in_stack_00000014 = puVar2;
    uStack_50 = 0x4f68ce;
    FUN_00420f30();
    piStack_4c = (int *)0x4f68da;
    FUN_00420d70();
    piStack_4c = (int *)0x4f68e6;
    FUN_00420fd0();
    piStack_4c = *(int **)Engine_exref;
    uStack_50 = 0x4f68f9;
    (**(code **)(*piStack_4c + 0x3c))();
  }
  ExceptionList = local_c;
  return 0;
}

