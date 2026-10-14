
void __thiscall
FUN_004a6630(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  size_t sVar5;
  int iVar6;
  float unaff_EBX;
  float unaff_EBP;
  float unaff_ESI;
  char unaff_retaddr;
  undefined2 *puVar7;
  float fVar8;
  float fVar9;
  undefined2 *puStack_68;
  float local_50;
  int *piStack_4c;
  float fStack_48;
  undefined2 local_44 [2];
  undefined2 *puStack_40;
  float fStack_28;
  float fStack_24;
  float afStack_20 [2];
  void *pvStack_18;
  float fStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bcc8a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 != 1) {
    puStack_68 = (undefined2 *)0x4a6665;
    ExceptionList = &pvStack_c;
    FUN_00459950();
  }
  *(undefined4 *)(param_1 + 0x334) = param_6;
  *(undefined4 *)(param_1 + 0x330) = param_5;
  puStack_68 = &DAT_0066fc60;
  FUN_0041c970();
  puStack_68 = (undefined2 *)0x4a669d;
  FUN_0046ba60();
  local_4 = 0;
  puStack_68 = (undefined2 *)0x4a66b4;
  piVar4 = (int *)StyleNode::StyleNode((StyleNode *)&local_50,0x9ca4);
  local_4._0_1_ = 1;
  (**(code **)(*piVar4 + 0x1c))();
  puStack_68 = puStack_40;
  local_4._0_1_ = 2;
  FUN_0046c800(&param_5);
  local_4._0_1_ = 1;
  FUN_0045eeb0();
  local_4 = (uint)local_4._1_3_ << 8;
  StyleNode::~StyleNode((StyleNode *)&local_50);
  puStack_68 = local_44;
  sVar5 = wcslen(&DAT_0066fc60);
  FUN_0057e2c0(&DAT_0066fc60,sVar5);
  puStack_68 = (undefined2 *)0x0;
  FUN_005798b0();
  FUN_0057b370();
  puStack_68 = (undefined2 *)0x4a6743;
  FUN_0057b3e0();
  fStack_14 = 2.2659e-42;
  uStack_10 = 0x651;
  afStack_20[0] = 1.89175e-42;
  afStack_20[1] = 2.2645e-42;
  pvStack_18 = (void *)0x547;
  puStack_68 = (undefined2 *)afStack_20[param_2];
  fVar9 = 4.2039e-44;
  (**(code **)(**(int **)(param_1 + 0x348) + 0xa8))();
  if (((param_2 == 0) || (param_2 == 3)) || (param_2 == 1)) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x35c) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x360) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x33c) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x340) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x354) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    iVar6 = *(int *)(param_1 + 0x358);
  }
  else {
    if ((param_2 != 2) && (param_2 != 4)) goto LAB_004a6807;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x33c) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x340) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x354) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x358) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x35c) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    iVar6 = *(int *)(param_1 + 0x360);
  }
  *(byte *)(iVar6 + 0x6c) = *(byte *)(iVar6 + 0x6c) | 3;
LAB_004a6807:
  if (unaff_retaddr != '\0') {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x354) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x358) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x344) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    fVar8 = 0.0;
    puVar7 = local_44;
    *(undefined1 *)(param_1 + 0x338) = 1;
    (**(code **)(**(int **)(param_1 + 0x33c) + 0xa8))(7,puVar7,0);
    puStack_68 = (undefined2 *)0x0;
    (**(code **)(**(int **)(param_1 + 0x33c) + 0xa8))(6,&puStack_68,0);
    pvStack_18 = (void *)(fVar9 - unaff_EBX);
    afStack_20[1] = fVar8 - unaff_EBP;
    fStack_14 = (float)puVar7 - unaff_ESI;
    (**(code **)(**(int **)(param_1 + 0x340) + 0xa8))(7,&local_50,0);
    fStack_48 = unaff_EBX + fStack_24;
    piStack_4c = (int *)(unaff_EBP + fStack_28);
    local_50 = afStack_20[0] + unaff_ESI;
    (**(code **)(**(int **)(param_1 + 0x340) + 0xa8))(6,&local_50,0);
  }
  piVar3 = piStack_4c;
  uStack_10 = 0xffffffff;
  piVar4 = (int *)*piStack_4c;
  while (piVar4 != piVar3) {
    piVar2 = (int *)*piVar4;
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    FUN_0045eeb0();
    FUN_005b7e1d(piVar4);
    fStack_48 = (float)((int)fStack_48 + -1);
    piVar4 = piVar2;
  }
  FUN_005b7e1d(piStack_4c);
  ExceptionList = pvStack_18;
  return;
}

