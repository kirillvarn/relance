
bool FUN_0041c8d0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_8;
  
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (DAT_00616720 == (int *)0x0) {
    DAT_00616720 = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00616720 + 0x28))(DAT_00616720,&stack0xffffffe4,uVar1,param_1);
  iVar2 = (**(code **)(*param_1 + 0x3c))(param_1,&stack0xffffffe0,uStack_8);
  return 2 < iVar2;
}

