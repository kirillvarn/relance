
undefined4 __thiscall FUN_0042bc70(int *param_1,int param_2,char param_3)

{
  byte bVar1;
  undefined2 uVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  
  if (param_3 == '\0') {
    pbVar8 = *(byte **)(param_2 + 8);
    pbVar3 = (byte *)param_1[2];
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_0042bcb9:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0042bcbe;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_0042bcb9;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0042bcbe:
    if (iVar4 == 0) {
      iVar4 = param_1[3];
      param_1[1] = *(int *)(param_2 + 4);
      param_1[2] = *(int *)(param_2 + 8);
      param_1[3] = *(int *)(param_2 + 0xc);
      param_1[4] = *(int *)(param_2 + 0x10);
      param_1[5] = *(int *)(param_2 + 0x14);
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x18);
      *(undefined1 *)((int)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
      uVar6 = (*(byte *)(param_2 + 0x1a) & 0xf) << 0x10 ^ param_1[6] & 0xfff0ffffU;
      param_1[6] = uVar6;
      uVar6 = (*(uint *)(param_2 + 0x18) ^ uVar6) & 0xf00000 ^ uVar6;
      param_1[6] = uVar6;
      uVar6 = (*(byte *)(param_2 + 0x1b) & 1) << 0x18 ^ uVar6 & 0xfeffffff;
      param_1[6] = uVar6;
      uVar6 = (*(uint *)(param_2 + 0x18) ^ uVar6) & 0x2000000 ^ uVar6;
      param_1[6] = uVar6;
      uVar6 = (*(uint *)(param_2 + 0x18) ^ uVar6) & 0x4000000 ^ uVar6;
      param_1[6] = uVar6;
      uVar6 = (*(uint *)(param_2 + 0x18) ^ uVar6) & 0x8000000 ^ uVar6;
      param_1[6] = uVar6;
      uVar6 = (*(uint *)(param_2 + 0x18) ^ uVar6) & 0x10000000 ^ uVar6;
      param_1[6] = uVar6;
      param_1[6] = (*(uint *)(param_2 + 0x18) ^ uVar6) & 0x20000000 ^ uVar6;
      piVar5 = param_1 + 7;
      iVar7 = 2;
      do {
        *piVar5 = *(int *)((param_2 - (int)param_1) + (int)piVar5);
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      param_1[9] = *(int *)(param_2 + 0x24);
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x28);
      uVar2 = *(undefined2 *)(param_2 + 0x2a);
      param_1[3] = iVar4;
      *(undefined2 *)((int)param_1 + 0x2a) = uVar2;
      return 1;
    }
  }
  iVar7 = (**(code **)(*param_1 + 0x14))();
  iVar4 = iVar7;
  if (0 < iVar7) {
    do {
      (**(code **)(*param_1 + 0x10))();
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = *(int *)(param_2 + 4);
  param_1[2] = *(int *)(param_2 + 8);
  param_1[3] = *(int *)(param_2 + 0xc);
  param_1[4] = *(int *)(param_2 + 0x10);
  param_1[5] = *(int *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((int)param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  uVar6 = (*(byte *)(param_2 + 0x1a) & 0xf) << 0x10 ^ param_1[6] & 0xfff0ffffU;
  param_1[6] = uVar6;
  uVar6 = (*(uint *)(param_2 + 0x18) ^ uVar6) & 0xf00000 ^ uVar6;
  param_1[6] = uVar6;
  uVar6 = (*(byte *)(param_2 + 0x1b) & 1) << 0x18 ^ uVar6 & 0xfeffffff;
  param_1[6] = uVar6;
  uVar6 = (*(uint *)(param_2 + 0x18) ^ uVar6) & 0x2000000 ^ uVar6;
  param_1[6] = uVar6;
  uVar6 = (*(uint *)(param_2 + 0x18) ^ uVar6) & 0x4000000 ^ uVar6;
  param_1[6] = uVar6;
  uVar6 = (*(uint *)(param_2 + 0x18) ^ uVar6) & 0x8000000 ^ uVar6;
  param_1[6] = uVar6;
  uVar6 = (*(uint *)(param_2 + 0x18) ^ uVar6) & 0x10000000 ^ uVar6;
  param_1[6] = uVar6;
  param_1[6] = (*(uint *)(param_2 + 0x18) ^ uVar6) & 0x20000000 ^ uVar6;
  piVar5 = param_1 + 7;
  iVar4 = 2;
  do {
    *piVar5 = *(int *)((int)piVar5 + (param_2 - (int)param_1));
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  param_1[9] = *(int *)(param_2 + 0x24);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x28);
  *(undefined2 *)((int)param_1 + 0x2a) = *(undefined2 *)(param_2 + 0x2a);
  if (0 < iVar7) {
    do {
      (**(code **)(*param_1 + 0xc))();
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return 1;
}

