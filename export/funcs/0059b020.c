
void FUN_0059b020(void)

{
  int *piVar1;
  char cVar2;
  CostumeDescriptions *this;
  costume *pcVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int iVar5;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000064;
  char *in_stack_0000206c;
  
  FUN_005b7e90();
  piVar1 = (int *)(extraout_ECX + 0x8c);
  if (*(int *)(extraout_ECX + 0x8c) != 0) {
    FUN_004c9a30();
    iVar5 = 4;
    do {
      FUN_00420f70();
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (*piVar1 != 0) {
      (**(code **)(**(int **)Deform_exref + 0x18))(*(int **)Deform_exref,*piVar1);
      *piVar1 = 0;
    }
  }
  this = GetCostumeDescriptions();
  if (((this != (CostumeDescriptions *)0x0) &&
      (pcVar3 = CostumeDescriptions::find_costume(this,in_stack_0000206c), pcVar3 != (costume *)0x0)
      ) && (*(int *)pcVar3 != 0)) {
    in_stack_00000034 = 0;
    in_stack_00000038 = 0;
    in_stack_0000003c = 0;
    in_stack_00000040 = 0;
    in_stack_00000064 = 0;
    CostumeDescriptions::get_costume(this,*(int *)pcVar3,(Costume *)&stack0x00000034);
    cVar2 = FUN_0059b220(&stack0x00000034);
    if (cVar2 == '\0') {
      uVar4 = FUN_00402180(&stack0x00000068,"Failed to create costume \"%s\".\n",in_stack_0000206c);
      (**(code **)FDUMP_exref)
                (0x100003,"%s(%d) : NOTICE:General:%s",
                 "E:\\FL\\Scratch\\Source\\Client\\Interface\\UIWin.cpp",0x210,uVar4);
      return;
    }
    if (*piVar1 != 0) {
      in_stack_00000030 = 0;
      in_stack_0000002c = 0;
      in_stack_00000028 = 0;
      FUN_004c8b40(0x40490fdb);
      FUN_004c8b80(0);
      FUN_004c8bc0(0);
      if (*piVar1 != 0) {
        (**(code **)(**(int **)Deform_exref + 0x60))
                  (*(int **)Deform_exref,*piVar1,*(undefined4 *)(extraout_ECX + 0x3f0));
      }
      in_stack_00000030 = *(undefined4 *)(extraout_ECX + 0x3ec);
      in_stack_00000028 = 0;
      in_stack_0000002c = 0;
      (**(code **)(**(int **)Deform_exref + 0x4c))(*(int **)Deform_exref,*piVar1,&stack0x00000028);
      (**(code **)(**(int **)Deform_exref + 0x50))(*(int **)Deform_exref,*piVar1,&stack0xfffffff8);
    }
  }
  return;
}

