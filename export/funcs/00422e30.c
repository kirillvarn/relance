
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00422e30(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  char cVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  undefined1 uVar6;
  undefined4 unaff_EDI;
  float10 fVar7;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  int *piStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_28;
  float fStack_24;
  undefined1 auStack_1c [16];
  undefined1 auStack_c [12];
  
  piStack_48 = *(int **)Engine_exref;
  fStack_3c = -NAN;
  fStack_40 = 1.4013e-45;
  fStack_44 = param_2;
  uVar6 = 0;
  uStack_28 = (uint)(uint3)uStack_28;
  puStack_4c = (undefined1 *)0x422e58;
  puStack_4c = (undefined1 *)(**(code **)(*piStack_48 + 0xd8))();
  while (puStack_4c != (undefined1 *)0xffffffff) {
    puStack_50 = puStack_4c;
    cVar4 = FUN_00422e30();
    if (cVar4 == '\0') {
      uVar6 = (undefined1)((uint)unaff_EDI >> 0x18);
    }
    else {
      uVar6 = 1;
      unaff_EDI = 0x1000000;
    }
    puStack_50 = (undefined1 *)0x1;
    puStack_4c = (undefined1 *)
                 (**(code **)(**(int **)Engine_exref + 0xd8))(*(int **)Engine_exref,param_2);
  }
  puStack_4c = auStack_1c;
  puStack_50 = auStack_c;
  (**(code **)(**(int **)Engine_exref + 0x88))(*(int **)Engine_exref,param_2,1);
  uVar5 = (**(code **)(**(int **)Engine_exref + 0xa0))(*(int **)Engine_exref,param_2);
  fVar7 = (float10)FUN_00422c70(param_1,param_1 + 0xc,&stack0xffffffc8,uStack_28,&puStack_50,
                                &fStack_44,uVar5);
  fVar3 = (float10)_DAT_005c75e8;
  uVar5 = CONCAT22(extraout_var,
                   (ushort)(fVar7 < fVar3) << 8 | (ushort)(NAN(fVar7) || NAN(fVar3)) << 10 |
                   (ushort)(fVar7 == fVar3) << 0xe);
  if (fVar7 < fVar3 == 0 && (fVar7 == fVar3) == 0) {
    fVar1 = (float)-fVar7;
    fVar2 = SQRT(((float)puStack_50 - fStack_44) * ((float)puStack_50 - fStack_44) +
                 ((float)puStack_4c - fStack_40) * ((float)puStack_4c - fStack_40) +
                 ((float)piStack_48 - fStack_3c) * ((float)piStack_48 - fStack_3c));
    uVar5 = CONCAT22(extraout_var,
                     (ushort)(fVar2 < fStack_24) << 8 | (ushort)(NAN(fVar2) || NAN(fStack_24)) << 10
                     | (ushort)(fVar2 == fStack_24) << 0xe);
    if (fVar2 < fStack_24 != (fVar2 == fStack_24)) {
      if (*(int *)(param_1 + 0x54) != 0) {
        fVar2 = *(float *)(param_1 + 0x58);
        uVar5 = CONCAT22(extraout_var,
                         (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                         (ushort)(fVar1 == fVar2) << 0xe);
        if (fVar1 >= fVar2) goto LAB_00422f9d;
      }
      *(float *)(param_1 + 0x58) = fVar1;
      *(undefined1 **)(param_1 + 0x5c) = puStack_50;
      *(undefined1 **)(param_1 + 0x60) = puStack_4c;
      *(int **)(param_1 + 100) = piStack_48;
      *(float *)(param_1 + 0x68) = fStack_44;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      *(float *)(param_1 + 0x6c) = fStack_40;
      *(float *)(param_1 + 0x70) = fStack_3c;
      return CONCAT31((int3)((uint)(param_1 + 0x68) >> 8),1);
    }
  }
LAB_00422f9d:
  return CONCAT31((int3)((uint)uVar5 >> 8),uVar6);
}

