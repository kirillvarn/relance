
void FUN_00425140(void)

{
  int iVar1;
  
  FUN_004214a0();
  iVar1 = (**(code **)(**(int **)Pipeline_exref + 0x40))(*(int **)Pipeline_exref);
  DAT_00610864 = '\x01' - (iVar1 != 0);
  return;
}

