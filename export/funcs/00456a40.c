
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00456a40(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 in_EAX;
  ushort uVar6;
  uint3 uVar5;
  int iVar4;
  
  uVar6 = (ushort)((uint)in_EAX >> 0x10);
  iVar4 = (uint)uVar6 << 0x10;
  if ((*(float *)(param_1 + 0x10) != *(float *)(param_1 + 0x18)) &&
     (iVar4 = (uint)uVar6 << 0x10, *(float *)(param_1 + 0x1c) != (float)_DAT_005c8ba8)) {
    if (*(float *)(param_1 + 0x18) <= *(float *)(param_1 + 0x10)) {
      iVar4 = (uint)uVar6 << 0x10;
      if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x10)) {
        fVar1 = *(float *)(param_1 + 0x10) - param_2 * *(float *)(param_1 + 0x1c);
        *(float *)(param_1 + 0x10) = fVar1;
        iVar4 = (uint)uVar6 << 0x10;
        if (fVar1 < *(float *)(param_1 + 0x18)) {
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x18);
        }
      }
    }
    else {
      fVar1 = param_2 * *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x10);
      *(float *)(param_1 + 0x10) = fVar1;
      iVar4 = (uint)uVar6 << 0x10;
      if (*(float *)(param_1 + 0x18) < fVar1) {
        iVar4 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x10) = iVar4;
      }
    }
  }
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  uVar5 = (uint3)(CONCAT22((short)((uint)iVar4 >> 0x10),
                           (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                           (ushort)(fVar1 == fVar2) << 0xe) >> 8);
  if (fVar1 == fVar2) {
    iVar4 = (uint)uVar5 << 8;
  }
  else {
    iVar4 = CONCAT31(uVar5,1);
  }
  cVar3 = *(char *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (cVar3 != '\0') {
    iVar4 = CONCAT31((int3)((uint)iVar4 >> 8),1);
  }
  return iVar4;
}

