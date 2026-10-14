
void __thiscall FUN_004e65d0(float *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar5;
  int *piStack_b0;
  float *pfStack_ac;
  float fStack_a8;
  float *pfStack_a4;
  int *piStack_a0;
  undefined4 *puStack_9c;
  float fStack_98;
  undefined4 **ppuStack_94;
  int *piStack_90;
  float fStack_8c;
  int *piStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 *puStack_7c;
  undefined1 *puStack_78;
  undefined4 local_64;
  undefined1 local_60 [8];
  undefined4 uStack_58;
  float fStack_54;
  undefined4 uStack_50;
  float fStack_24;
  
  puStack_78 = local_60;
  puStack_7c = &local_64;
  fStack_80 = 0.0;
  local_64 = 0;
  piStack_88 = *(int **)Engine_exref;
  fStack_84 = param_2;
  fStack_8c = 7.199762e-39;
  (**(code **)(*piStack_88 + 0x88))();
  piStack_90 = *(int **)Engine_exref;
  fStack_8c = param_2;
  ppuStack_94 = (undefined4 **)0x4e6613;
  fStack_98 = (float)(**(code **)(*piStack_90 + 0xa0))();
  if (DAT_00674b1c == (int *)0x0) {
    ppuStack_94 = (undefined4 **)0x4e6623;
    DAT_00674b1c = (int *)FUN_005b73e0();
  }
  ppuStack_94 = &puStack_7c;
  puStack_9c = &local_64;
  pfStack_a4 = (float *)0x4e6639;
  piStack_a0 = DAT_00674b1c;
  (**(code **)(*DAT_00674b1c + 0x28))();
  fStack_8c = unaff_EDI;
  piStack_88 = (int *)unaff_ESI;
  if (DAT_00674b1c == (int *)0x0) {
    pfStack_a4 = (float *)0x4e665f;
    DAT_00674b1c = (int *)FUN_005b73e0();
  }
  pfStack_a4 = &fStack_8c;
  fStack_a8 = fStack_24;
  pfStack_ac = &fStack_80;
  piStack_b0 = DAT_00674b1c;
  (**(code **)(*DAT_00674b1c + 0x3c))();
  fStack_84 = (float)piStack_90 - (float)piStack_a0;
  fStack_80 = fStack_8c - (float)piStack_a0;
  param_1[3] = fStack_84;
  puStack_7c = (undefined4 *)((float)piStack_88 - (float)piStack_a0);
  param_1[4] = fStack_80;
  param_1[5] = (float)puStack_7c;
  if (DAT_00674b1c == (int *)0x0) {
    DAT_00674b1c = (int *)FUN_005b73e0();
  }
  (**(code **)(*DAT_00674b1c + 0x3c))(DAT_00674b1c,&piStack_90,fStack_24,&puStack_9c);
  ppuStack_94 = (undefined4 **)((float)piStack_a0 + (float)piStack_b0);
  piStack_90 = (int *)((float)puStack_9c + (float)piStack_b0);
  *param_1 = (float)ppuStack_94;
  fStack_8c = fStack_98 + (float)piStack_b0;
  param_1[1] = (float)piStack_90;
  param_1[2] = fStack_8c;
  for (iVar3 = (**(code **)(**(int **)Engine_exref + 0xd8))
                         (*(int **)Engine_exref,param_2,1,0xffffffff); iVar3 != -1;
      iVar3 = (**(code **)(**(int **)Engine_exref + 0xd8))(*(int **)Engine_exref,uStack_58,1,iVar3))
  {
    if (((char)uStack_50 != '\0') || (cVar2 = FUN_004e6960(iVar3), cVar2 == '\0')) {
      fVar5 = (float10)FUN_004e68d0(iVar3,&fStack_98);
      fStack_54 = (float)fVar5;
      FUN_004e6880(&fStack_8c,&fStack_98);
      fVar1 = fStack_54;
      uVar4 = FUN_00422b80(fStack_54,fStack_54,fStack_54);
      FUN_00423b60(&piStack_b0,&fStack_8c,uVar4);
      if ((float)piStack_b0 < param_1[3]) {
        param_1[3] = (float)piStack_b0;
      }
      if ((float)pfStack_ac < param_1[4]) {
        param_1[4] = (float)pfStack_ac;
      }
      if (fStack_a8 < param_1[5]) {
        param_1[5] = fStack_a8;
      }
      FUN_004e6880(&fStack_80,&fStack_98);
      uVar4 = FUN_00422b80(fVar1,fVar1,fVar1);
      FUN_00423b30(&pfStack_a4,&fStack_80,uVar4);
      if (*param_1 < (float)pfStack_a4) {
        *param_1 = (float)pfStack_a4;
      }
      if (param_1[1] < (float)piStack_a0) {
        param_1[1] = (float)piStack_a0;
      }
      if (param_1[2] < (float)puStack_9c) {
        param_1[2] = (float)puStack_9c;
      }
      FUN_004e69c0(iVar3,fStack_24,uStack_50);
    }
  }
  return;
}

