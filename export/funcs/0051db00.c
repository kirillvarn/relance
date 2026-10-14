
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051db00(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((_DAT_005c7474 < DAT_00675294) &&
     (DAT_00675294 = DAT_00675294 - _DAT_0061373c, DAT_00675294 < _DAT_005db098)) {
    DAT_00675294 = 0.0;
  }
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((iVar1 != 0) && (iVar1 != 8)) {
    if ((*(byte *)(iVar1 + 0x184) & 1) != 0) {
      DAT_00675294 = 0.02;
      *(byte *)(iVar1 + 0x184) = *(byte *)(iVar1 + 0x184) & 0xfe;
    }
    if ((*(byte *)(iVar1 + 0x184) & 2) != 0) {
      if (DAT_00675294 <= _DAT_005d3e44) {
        DAT_00675294 = 0.005;
      }
      *(byte *)(iVar1 + 0x184) = *(byte *)(iVar1 + 0x184) & 0xfd;
    }
    if (((*(int *)(iVar1 + 0x150) != 0) && (*(int *)(iVar1 + 0x180) != 0)) &&
       (fVar2 = (float10)FUN_00503e20(), (float10)DAT_00675294 <= fVar2)) {
      DAT_00675294 = (float)fVar2;
      return;
    }
  }
  return;
}

