
undefined4 __thiscall FUN_005a0bc0(int param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  
  piVar2 = *(int **)(param_1 + 0xc);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    pbVar3 = (byte *)(piVar2 + 6);
    pbVar6 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_005a0bfd:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_005a0c02;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_005a0bfd;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_005a0c02:
    if (iVar4 == 0) {
      uVar5 = (**(code **)(*piVar2 + 8))();
      return uVar5;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

