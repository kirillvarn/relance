
ushort FUN_0042a970(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  ushort in_AX;
  ushort uVar3;
  byte bVar4;
  
  uVar3 = in_AX & 0xff00;
  if ((*param_1 != 0) && (*param_2 != 0)) {
    fVar1 = *(float *)(*param_1 + 0x28);
    fVar2 = *(float *)(*param_2 + 0x28);
    bVar4 = fVar2 < fVar1 | (byte)((ushort)((ushort)(NAN(fVar2) || NAN(fVar1)) << 10) >> 8) |
            (byte)((ushort)((ushort)(fVar2 == fVar1) << 0xe) >> 8);
    if (fVar2 < fVar1) {
      return CONCAT11(bVar4,1);
    }
    uVar3 = (ushort)bVar4 << 8;
  }
  return uVar3;
}

