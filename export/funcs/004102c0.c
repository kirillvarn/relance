
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004102c0(undefined4 param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte unaff_DI;
  undefined4 unaff_retaddr;
  float local_10 [3];
  undefined4 uStack_4;
  
  iVar3 = FUN_005792b0(0x18);
  iVar1 = DAT_006164e0;
  if (iVar3 != 0) {
    (**(code **)(**(int **)Pipeline_exref + 0xf4))(*(int **)Pipeline_exref,0x8b,local_10);
    local_10[0] = (float)unaff_DI * _DAT_005c7f68;
    uVar4 = uStack_4;
    for (iVar1 = DAT_006164e0; uStack_4 = uVar4, iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      (**(code **)(**(int **)Pipeline_exref + 0xa4))(*(int **)Pipeline_exref,iVar1 + 0xc,0);
      *(byte *)(iVar1 + 0xb4) = *(byte *)(iVar1 + 0xb4) & 0xef;
      uVar4 = uStack_4;
    }
    uVar6 = 0;
    DAT_006164e0 = 0;
    DAT_006164e4 = 0;
    DAT_006164e8 = 0;
    if (uVar4 != 0) {
      do {
        FUN_004104e0(unaff_retaddr,param_1,&stack0xffffffe8);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
    uVar4 = ftol();
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    else if (0xff < (int)uVar4) {
      uVar4 = 0xff;
    }
    uVar5 = ftol();
    uVar2 = FUN_004104c0(uVar5);
    uStack_4._0_2_ = CONCAT11(uVar2,(undefined1)uStack_4);
    uVar5 = ftol();
    uVar2 = FUN_004104c0(uVar5);
    uStack_4._0_3_ = CONCAT12(uVar2,(undefined2)uStack_4);
    FUN_004104c0(0xff);
    (**(code **)(**(int **)Pipeline_exref + 0xf0))
              (*(int **)Pipeline_exref,0x8b,
               ((uVar4 & 0xff | 0xffffff00) << 8 | uStack_4 >> 8 & 0xff) << 8 |
               uStack_4 >> 0x10 & 0xff);
    return;
  }
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    (**(code **)(**(int **)Pipeline_exref + 0xa4))(*(int **)Pipeline_exref,iVar1 + 0xc,0);
    *(byte *)(iVar1 + 0xb4) = *(byte *)(iVar1 + 0xb4) & 0xef;
  }
  DAT_006164e0 = 0;
  DAT_006164e4 = 0;
  DAT_006164e8 = 0;
  (**(code **)(**(int **)Pipeline_exref + 0xf0))(*(int **)Pipeline_exref,0x89,0);
  return;
}

