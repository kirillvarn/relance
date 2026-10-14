
void FUN_005554d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  float10 fVar4;
  undefined1 auStack_10 [16];
  
  FUN_00421ed0();
  iVar1 = FUN_005792b0(0x18);
  if (iVar1 == 0) {
    FUN_004101e0();
    param_5._1_1_ = 0xff;
    param_5._2_1_ = 0xff;
    FUN_00410240();
    return;
  }
  iVar1 = FUN_005792b0();
  DAT_0067986c = 0xff;
  if ((int)((uint)DAT_006798f8 + iVar1) < 0x100) {
    DAT_0067986c = (undefined1)((uint)DAT_006798f8 + iVar1);
  }
  DAT_0067986d = 0xff;
  if ((int)((uint)DAT_006798f9 + iVar1) < 0x100) {
    DAT_0067986d = (undefined1)((uint)DAT_006798f9 + iVar1);
  }
  DAT_0067986e = 0xff;
  if ((int)(iVar1 + (uint)DAT_006798fa) < 0x100) {
    DAT_0067986e = (undefined1)(iVar1 + (uint)DAT_006798fa);
  }
  puVar3 = &DAT_0067986c;
  if (param_4 != (int *)0x0) {
    iVar1 = (**(code **)(*param_4 + 0x48))();
    if (iVar1 != 0) {
      DAT_00679868 = ftol();
      DAT_00679869 = ftol();
      DAT_0067986a = ftol();
      puVar3 = &DAT_00679868;
    }
    fVar4 = (float10)(**(code **)(*param_4 + 0x3c))(param_1);
    fVar4 = (float10)(**(code **)(*param_4 + 0x38))((float)fVar4);
    uVar2 = (**(code **)(*param_4 + 0x30))(&stack0xffffffe0,(float)fVar4);
    FUN_00422440(uVar2);
  }
  FUN_00410240(puVar3);
  uVar2 = FUN_00537f40(auStack_10,4,param_1,param_2,param_6);
  FUN_004102c0(auStack_10,uVar2,param_3,param_1);
  return;
}

