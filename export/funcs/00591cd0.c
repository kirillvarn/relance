
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00591cd0(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float fVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  FUN_0059dd00(param_1);
  FUN_0059dbf0(param_1);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfb | 3;
  if (*(int *)(param_1 + 0x84) != 0) {
    piVar1 = (int *)FUN_0059da60();
    fVar5 = 0.0;
    piVar4 = piVar1;
    (**(code **)(*piVar1 + 0x38))(piVar1,&local_48,0,0);
    fVar3 = (float)DAT_00610854;
    (**(code **)(*piVar1 + 0x38))(piVar1,&stack0xffffffb4,(float)DAT_00610850,fVar3);
    fStack_40 = fVar3 - fVar5;
    uStack_44 = 0;
    fStack_24 = _DAT_006155ec + (float)piVar4;
    uStack_38 = 0;
    uStack_34 = 0;
    local_48 = 0;
    uStack_3c = 0;
    uStack_30 = 0x3f800000;
    uStack_2c = 0;
    uStack_28 = 0;
    iVar2 = FUN_00594590(*(undefined4 *)(param_1 + 0x84),&stack0xffffffb0,param_1);
    *(int *)(param_1 + 0x88) = iVar2;
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

