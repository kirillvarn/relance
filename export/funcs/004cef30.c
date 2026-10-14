
void FUN_004cef30(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 local_38 [4];
  undefined1 local_34 [12];
  undefined4 local_28 [4];
  undefined4 uStack_18;
  uint local_14;
  undefined1 local_2;
  
  iVar2 = FUN_004c4fb0();
  if (param_1 < iVar2) {
    FUN_004c4ff0(param_1);
    piVar3 = (int *)FUN_004c5110();
    if (piVar3 != (int *)0x0) {
      puVar4 = local_28;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_2 = 1;
      local_28[0] = 0x1c;
      local_14 = (uint)*(ushort *)SUBOBJ_ID_NONE_exref;
      uStack_18 = (**(code **)(*piVar3 + 0x20))();
      FUN_0054bcb0(local_28);
      return;
    }
    cVar1 = FUN_004c52d0(local_34,local_38);
    if (cVar1 != '\0') {
      FUN_004f42e0(local_34,0,param_1,param_1);
    }
  }
  return;
}

