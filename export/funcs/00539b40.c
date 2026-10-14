
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00539b40(int *param_1)

{
  undefined4 uVar1;
  uint unaff_ESI;
  float10 fVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uStack_18;
  float fStack_14;
  undefined1 local_c [8];
  undefined4 uStack_4;
  
  fVar2 = (float10)(**(code **)(*param_1 + 0x178))(local_c);
  fStack_14 = (float)fVar2;
  puVar3 = &uStack_18;
  (**(code **)(*param_1 + 0x88))(puVar3);
  uVar4 = (uint)(byte)(1 - ((unaff_ESI & 0x807) != 0));
  fVar2 = (float10)FUN_004f70c0(puVar3,uVar4);
  if (fVar2 < (float10)_DAT_005c8b68) {
    uVar4 = 0;
  }
  uVar1 = (**(code **)*param_1)(uStack_18,uStack_4,param_1[0xe],param_1[0xf],uVar4);
  FUN_005554d0(uVar1);
  return;
}

