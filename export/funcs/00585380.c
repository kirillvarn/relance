
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00585380(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined1 *puStack_ac;
  undefined4 **ppuStack_a8;
  int *piStack_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_88;
  undefined4 **ppuStack_84;
  int *piStack_80;
  undefined1 *puStack_7c;
  undefined4 **ppuStack_78;
  int *piStack_74;
  undefined1 auStack_70 [12];
  float afStack_64 [4];
  undefined1 auStack_54 [28];
  undefined4 auStack_38 [2];
  char cStack_30;
  
  if (param_2 != (undefined1 *)0xffffffff) {
    *(undefined1 **)(param_1 + 0x4b8) = param_2;
    piStack_a4 = *(int **)Engine_exref;
    puStack_a0 = param_2;
    ppuStack_a8 = (undefined4 **)0x5853b3;
    puVar3 = (undefined4 *)(**(code **)(*piStack_a4 + 0xa0))();
    ppuStack_a8 = &ppuStack_84;
    puStack_ac = &stack0xffffff6c;
    puVar6 = auStack_38;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x4b8);
    uVar8 = 0;
    (**(code **)(**(int **)Engine_exref + 0x88))(*(int **)Engine_exref,uVar1,0);
    (**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref,uVar1);
    FUN_004e7090(&puStack_ac,&puStack_a0);
    puStack_a0 = puStack_ac;
    FUN_004e6880(auStack_70,&puStack_a0);
    uVar4 = FUN_00422b80(uVar8,uVar8,uVar8);
    FUN_00423b60(&puStack_ac,auStack_70,uVar4);
    puStack_7c = puStack_ac;
    ppuStack_78 = ppuStack_a8;
    piStack_74 = piStack_a4;
    FUN_004e6880(auStack_70,&puStack_a0);
    uVar4 = FUN_00422b80(uVar8,uVar8,uVar8);
    FUN_00423b30(&puStack_ac,auStack_70,uVar4);
    puStack_88 = puStack_ac;
    ppuStack_84 = ppuStack_a8;
    piStack_80 = piStack_a4;
    FUN_004e69c0(uVar1,auStack_54,1);
    FUN_00423b30(auStack_70,&puStack_88,&puStack_7c);
    FUN_00411d60(&puStack_ac,auStack_70,0x3f000000);
    *(int *)(param_1 + 0x4a8) = (int)puStack_ac;
    *(undefined4 ***)(param_1 + 0x4ac) = ppuStack_a8;
    *(int **)(param_1 + 0x4b0) = piStack_a4;
    FUN_00423b60(&puStack_a0,&puStack_88,(int *)(param_1 + 0x4a8));
    fVar7 = (float10)FUN_00410190();
    *(float *)(param_1 + 0x4a4) = (float)fVar7;
    afStack_64[0] = (float)puStack_88 - (float)puStack_7c;
    if ((float)puStack_88 - (float)puStack_7c <= (float)piStack_80 - (float)piStack_74) {
      afStack_64[0] = (float)piStack_80 - (float)piStack_74;
    }
    afStack_64[0] = afStack_64[0] * (float)_DAT_005c75e8;
    *(float *)(param_1 + 0x4a4) = afStack_64[0];
    (**(code **)(**(int **)Engine_exref + 0x88))
              (*(int **)Engine_exref,*(undefined4 *)(param_1 + 0x4b8),0,afStack_64,&stack0xffffff6c)
    ;
    *(float *)(param_1 + 0x4a4) =
         SQRT((float)ppuStack_a8 * (float)ppuStack_a8 +
              (float)puStack_a0 * (float)puStack_a0 + (float)piStack_a4 * (float)piStack_a4) +
         *(float *)(param_1 + 0x4a4);
    if (cStack_30 != '\0') {
      *(undefined4 *)(param_1 + 0x4a4) = 0x41600000;
    }
    FUN_00585630(1);
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    *(undefined4 *)(param_1 + 0x49c) = 0;
    *(undefined4 *)(param_1 + 0x498) = 0;
    *(undefined4 *)(param_1 + 0x494) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x4b8) = 0xffffffff;
  cVar2 = FUN_00420d60();
  if (cVar2 != '\0') {
    FUN_0059eee0();
  }
  return;
}

