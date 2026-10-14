
bool __fastcall FUN_004f7b50(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_retaddr;
  undefined1 auStack_14 [8];
  undefined1 local_c [12];
  
  (**(code **)(*param_1 + 8))(local_c);
  uVar1 = (**(code **)(*unaff_retaddr + 0x40))(unaff_retaddr);
  if (DAT_00674f50 == (int *)0x0) {
    DAT_00674f50 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00674f50 + 0x28))(DAT_00674f50,&stack0xffffffd4,uVar1,auStack_14);
  iVar2 = (**(code **)(*unaff_retaddr + 0x3c))(unaff_retaddr,&stack0xffffffd0,uVar1);
  return 2 < iVar2;
}

