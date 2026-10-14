
void FUN_00443e90(void)

{
  int iVar1;
  
  if (DAT_00668948 != 0) {
    (**(code **)(**(int **)Deform_exref + 0x18))(*(int **)Deform_exref,DAT_00668948);
  }
  DAT_00668948 = 0;
  iVar1 = 0x114;
  do {
    *(undefined4 *)(&DAT_00668838 + iVar1) = 0;
    *(undefined4 *)((int)&DAT_00668948 + iVar1) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x124);
  return;
}

