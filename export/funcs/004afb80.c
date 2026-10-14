
void __thiscall FUN_004afb80(int param_1,int param_2,char param_3)

{
  byte *pbVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iStack_b0;
  int local_98 [3];
  undefined1 local_8c [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005bcf2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004ae030();
  param_2 = param_2 * 0x2c;
  local_4 = 0;
  if ((*(int *)(param_2 + 0x24 + local_98[0]) != 0) &&
     (*(char *)(param_2 + 0x28 + local_98[0]) != '\0')) {
    *(undefined1 *)(param_1 + 0x84c) = 1;
    iStack_b0 = param_1;
    FUN_0059d8d0();
    puVar3 = (undefined4 *)(param_2 + local_98[0]);
    puVar4 = (undefined4 *)(param_1 + 0x850);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_004347e0(DAT_0067eca8,0x5e6,local_8c,0x40);
    iStack_b0 = 0;
    (**(code **)(**(int **)(param_1 + 0x4e8) + 0xa8))(0x1d,local_8c);
    FUN_004347e0(DAT_0067eca8,*(undefined4 *)(param_2 + 0x18 + unaff_EBP),local_98,0x40);
    (**(code **)(**(int **)(param_1 + 0x4ec) + 0xa8))(0x1d,local_98,0);
    FUN_004347e0(DAT_0067eca8,0x698,&stack0xffffff5c,0x40);
    (**(code **)(**(int **)(param_1 + 0x4fc) + 0xa8))(0x1d,&stack0xffffff5c,0);
    FUN_004347e0(DAT_0067eca8,0x2148,&iStack_b0,0x40);
    (**(code **)(**(int **)(param_1 + 0x500) + 0xa8))(0x1d,&iStack_b0,0);
    iStack_b0 = 1;
    FUN_004abdf0();
    *(byte *)(*(int *)(param_1 + 0x4e4) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x4e4) + 0x6c) | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4e8) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4ec) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4f8) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x500) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    if (param_3 == '\0') {
      *(undefined1 *)(param_1 + 0x87c) = 0;
      if (*(int *)(param_2 + 0x24 + local_98[0]) == 3) goto LAB_004afd4c;
    }
    else {
      *(undefined1 *)(param_1 + 0x87c) = 1;
      if (*(int *)(param_2 + 0x24 + local_98[0]) != 2) goto LAB_004afd4c;
    }
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4f4) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4fc) + 0x6c);
    *pbVar1 = *pbVar1 | 3;
  }
LAB_004afd4c:
  FUN_005b7e1d();
  ExceptionList = pvStack_c;
  return;
}

