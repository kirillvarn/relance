
void __thiscall FUN_004ae260(int param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  uchar *unaff_EBX;
  uint uVar4;
  ulong unaff_EDI;
  uint uVar5;
  undefined4 uStack_44;
  uchar *puStack_40;
  ulong uStack_2c;
  void *pvStack_24;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005bcea8;
  pvStack_c = ExceptionList;
  uVar4 = 0;
  puStack_40 = (uchar *)0x0;
  uStack_44 = 0;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x838) = param_2;
  (**(code **)(**(int **)(param_1 + 0x4b8) + 0xa8))(0x38);
  iVar1 = FUN_004ae030(&stack0xffffffc8);
  if (*(int *)(iVar1 + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x2c;
  }
  (**(code **)(**(int **)(param_1 + 0x4b8) + 0xa8))(0x37,0,iVar1 + -1);
  FUN_005b7e1d(puStack_40);
  piVar3 = (int *)(param_1 + 0x484);
  do {
    iVar1 = FUN_004ae030(&uStack_44);
    if (*(int *)(iVar1 + 4) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x2c;
    }
    IDPMsgHandler::OnReceive((IDPMsgHandler *)&uStack_44,puStack_40,unaff_EDI);
    FUN_005b7e1d(puStack_40);
    puStack_40 = (uchar *)0x0;
    unaff_EDI = 0;
    iVar1 = piVar3[-0xd];
    if (uVar4 < uVar5) {
      *(byte *)(iVar1 + 0x388) = *(byte *)(iVar1 + 0x388) | 4;
      *(byte *)(*piVar3 + 0x388) = *(byte *)(*piVar3 + 0x388) | 4;
      *(byte *)(piVar3[-0x42] + 0x6c) = *(byte *)(piVar3[-0x42] + 0x6c) | 3;
      *(byte *)(piVar3[-0x35] + 0x6c) = *(byte *)(piVar3[-0x35] + 0x6c) | 3;
      iVar1 = piVar3[-0x28];
      bVar2 = *(byte *)(iVar1 + 0x6c) | 3;
    }
    else {
      *(byte *)(iVar1 + 0x388) = *(byte *)(iVar1 + 0x388) & 0xfb;
      *(byte *)(*piVar3 + 0x388) = *(byte *)(*piVar3 + 0x388) & 0xfb;
      *(byte *)(piVar3[-0x42] + 0x6c) = *(byte *)(piVar3[-0x42] + 0x6c) & 0xfc;
      *(byte *)(piVar3[-0x35] + 0x6c) = *(byte *)(piVar3[-0x35] + 0x6c) & 0xfc;
      iVar1 = piVar3[-0x28];
      bVar2 = *(byte *)(iVar1 + 0x6c) & 0xfc;
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
    *(byte *)(iVar1 + 0x6c) = bVar2;
  } while ((int)uVar4 < 0xd);
  FUN_004af900(0);
  iVar1 = FUN_004ae030(&stack0xffffffcc);
  if (*(int *)(iVar1 + 4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x2c;
  }
  IDPMsgHandler::OnReceive((IDPMsgHandler *)&stack0xffffffcc,unaff_EBX,uStack_2c);
  FUN_005b7e1d(unaff_EBX);
  bVar2 = *(byte *)(*(int *)(param_1 + 0x4b8) + 0x6c);
  if (uVar4 < 0xe) {
    bVar2 = bVar2 & 0xfc;
  }
  else {
    bVar2 = bVar2 | 3;
  }
  *(byte *)(*(int *)(param_1 + 0x4b8) + 0x6c) = bVar2;
  iVar1 = 0;
  piVar3 = (int *)(param_1 + 0x4d4);
  do {
    if (iVar1 != iStack_14) {
      *(undefined4 *)(*piVar3 + 0x348) = DAT_00679bb0;
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar1 < 3);
  *(undefined4 *)(*(int *)(param_1 + 0x4d4 + iStack_14 * 4) + 0x348) = DAT_00679ba4;
  ExceptionList = pvStack_24;
  return;
}

