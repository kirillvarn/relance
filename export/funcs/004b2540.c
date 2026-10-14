
void __thiscall FUN_004b2540(int param_1,char param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined1 *puStack_18c;
  undefined1 *puStack_188;
  undefined1 local_180 [128];
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  if (*(char *)(param_1 + 0x849) == '\0') {
    *(char *)(param_1 + 0x84a) = param_2;
    if (param_2 != '\0') {
      puStack_18c = *(undefined1 **)(param_1 + 0x330);
      if ((*(undefined1 **)(param_1 + 0x8b8) != puStack_18c) ||
         (*(char *)(param_1 + 0x8bc) != *(char *)(param_1 + 0x334))) {
        puStack_188 = (undefined1 *)(uint)*(byte *)(param_1 + 0x334);
        cVar2 = FUN_004b1c00();
        if (cVar2 == '\0') {
          puStack_188 = (undefined1 *)0x536;
          puStack_18c = (undefined1 *)0x4b25ed;
          FUN_004b0920();
        }
        else {
          puStack_188 = (undefined1 *)0x40;
          puStack_18c = local_100;
          *(undefined1 *)(param_1 + 0x84d) = 1;
          FUN_004347e0(DAT_0067eca8,0x779);
          puStack_188 = local_100;
          puStack_18c = (undefined1 *)0x4b25d5;
          FUN_0058a530();
          pbVar1 = (byte *)(*(int *)(param_1 + 0x7f0) + 0x6c);
          *pbVar1 = *pbVar1 & 0xfc;
        }
      }
      puStack_188 = (undefined1 *)0x40;
      puStack_18c = local_80;
      FUN_004347e0(DAT_0067eca8,0x778);
      puStack_188 = local_80;
      puStack_18c = (undefined1 *)0x4b261e;
      FUN_0058a530();
      puStack_188 = (undefined1 *)0x4b2625;
      FUN_004abfb0();
      puStack_188 = (undefined1 *)0x40;
      puStack_18c = local_180;
      FUN_004347e0(DAT_0067eca8,0x4dc);
      puStack_188 = (undefined1 *)0x0;
      puStack_18c = local_180;
      (**(code **)(**(int **)(param_1 + 0x4fc) + 0xa8))(0x1d);
      FUN_004347e0(DAT_0067eca8,0x4dd,&puStack_18c,0x40);
      (**(code **)(**(int **)(param_1 + 0x500) + 0xa8))(0x1d,&puStack_18c,0);
      return;
    }
    *(byte *)(*(int *)(param_1 + 0x4e8) + 0x6c) = *(byte *)(*(int *)(param_1 + 0x4e8) + 0x6c) & 0xfc
    ;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4ec) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4f0) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4fc) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x500) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4f4) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4f8) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    pbVar1 = (byte *)(*(int *)(param_1 + 0x4e4) + 0x6c);
    *pbVar1 = *pbVar1 & 0xfc;
    puStack_188 = (undefined1 *)0x0;
    puStack_18c = (undefined1 *)0x4b26eb;
    FUN_004abdf0();
  }
  return;
}

