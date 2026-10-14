
void FUN_004c4910(uint *param_1)

{
  int iVar1;
  byte bVar2;
  IBase *pIVar3;
  ISystem *pIVar4;
  int iStack_18;
  undefined1 uStack_14;
  int iStack_10;
  int iStack_c;
  byte bStack_8;
  
  DAT_00673358 = *param_1;
  if ((*param_1 & 0x3fffffff) != 0) {
    pIVar3 = Universe::get_base(DAT_00673358);
    DAT_00673354 = (**(code **)(*(int *)pIVar3 + 0x10))();
    pIVar4 = Universe::get_system(DAT_00673354);
    if (pIVar4 != (ISystem *)0x0) {
      bVar2 = (**(code **)(*(int *)pIVar4 + 0x48))();
      iVar1 = DAT_00673354;
      if ((bVar2 & 0x81) == 0) {
        bVar2 = bVar2 | 1;
        param_1 = (uint *)DAT_00673354;
        FUN_00432240(&iStack_18,&param_1);
        if ((iStack_18 == DAT_00673324) || ((*(byte *)(iStack_18 + 0x10) & bVar2) != bVar2)) {
          iStack_18 = iVar1;
          uStack_14 = 0;
          FUN_0046d6d0(&iStack_10,&iStack_18);
          *(byte *)(iStack_10 + 0x10) = bVar2;
          iStack_10 = 1;
          iStack_c = iVar1;
          bStack_8 = bVar2;
          (**(code **)(*DAT_0067ecd0 + 0x11c))(DAT_00673344,&iStack_10,9);
        }
      }
    }
  }
  return;
}

