
void FUN_004221f0(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 **ppuVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 unaff_retaddr;
  float fStack_5c;
  undefined1 *puStack_58;
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [12];
  undefined1 *local_30 [8];
  float local_10;
  undefined1 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pcVar1 = Pipeline_exref;
  local_10 = 1.0;
  local_30[4] = (undefined1 *)0x3f800000;
  local_30[0] = (undefined1 *)0x3f800000;
  local_30[7] = (undefined1 *)0x0;
  local_30[6] = (undefined1 *)0x0;
  local_30[5] = (undefined1 *)0x0;
  local_30[3] = (undefined1 *)0x0;
  local_30[2] = (undefined1 *)0x0;
  local_30[1] = (undefined1 *)0x0;
  local_4 = 0;
  local_8 = 0;
  local_c = (undefined1 *)0x0;
  puStack_58 = &stack0xffffffb4;
  ppuVar3 = local_30;
  puVar4 = &DAT_006648dc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  fStack_5c = 9.80909e-45;
  (**(code **)(**(int **)pcVar1 + 0x18))(*(int **)pcVar1);
  iVar2 = **(int **)Pipeline_exref;
  if (puStack_58 == (undefined1 *)0x0) {
    (**(code **)(iVar2 + 0x6c))(*(int **)Pipeline_exref,auStack_3c);
    (**(code **)(**(int **)Pipeline_exref + 0x74))(*(int **)Pipeline_exref,auStack_44);
  }
  else {
    (**(code **)(iVar2 + 0x7c))();
  }
  if (DAT_00610844 != '\0') {
    fStack_5c = local_10;
    puStack_58 = local_c;
    bVar5 = DAT_0066490c != 2;
    iVar2 = 0;
    do {
      if ((bVar5) || (*(float *)((int)&DAT_00664910 + iVar2) != *(float *)((int)&fStack_5c + iVar2))
         ) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      *(undefined4 *)((int)&DAT_00664910 + iVar2) = *(undefined4 *)((int)&fStack_5c + iVar2);
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x18);
    if (!bVar5) {
      DAT_0066498c = DAT_0066498c + 1;
      return;
    }
    DAT_00664990 = DAT_00664990 + 1;
    DAT_0066490c = 2;
  }
  (**(code **)(**(int **)Pipeline_exref + 0x90))
            (*(int **)Pipeline_exref,local_10,local_c,local_8,local_4,unaff_retaddr,param_1);
  return;
}

