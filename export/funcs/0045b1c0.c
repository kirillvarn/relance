
void __thiscall FUN_0045b1c0(int param_1,int param_2)

{
  uint uVar1;
  ISystem *pIVar2;
  int iVar3;
  int iVar4;
  undefined1 local_80 [128];
  
  *(undefined1 *)(param_1 + 0x338) = 0;
  iVar4 = 0;
  uVar1 = FUN_004c4830();
  pIVar2 = Universe::get_system(uVar1);
  if (pIVar2 != (ISystem *)0x0) {
    iVar4 = (**(code **)(*(int *)pIVar2 + 0xc))();
  }
  if ((param_2 != 0) && (iVar4 != 0)) {
    FUN_004347e0(DAT_0067eca8,0x55c,local_80,0x80);
    iVar3 = DAT_006119f8 / 2;
    FUN_004347e0(DAT_0067eca8,param_2,&DAT_0066dc60,iVar3);
    FUN_004347e0(DAT_0067eca8,iVar4,&DAT_0066dc60 + iVar3,DAT_006119f8 / 2);
    swprintf(&DAT_0066fc60,(size_t)local_80,&DAT_0066dc60);
    (*(code *)PTR_FUN_00616420)(&DAT_0066fc60);
    (**(code **)(**(int **)(param_1 + 0x32c) + 0xa8))(0x1d,&DAT_0066fc60,0);
    *(undefined4 *)(param_1 + 0x334) = 0x40000000;
  }
  return;
}

