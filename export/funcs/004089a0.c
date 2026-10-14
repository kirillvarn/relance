
/* WARNING: Removing unreachable block (ram,0x00408a43) */
/* WARNING: Removing unreachable block (ram,0x004089cd) */
/* WARNING: Removing unreachable block (ram,0x004089d0) */

void __fastcall FUN_004089a0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x1e];
  if (iVar1 != param_1[0x1f]) {
    do {
      FUN_0040e990();
      iVar1 = iVar1 + 4;
    } while (iVar1 != param_1[0x1f]);
  }
  param_1[0x1f] = param_1[0x1e];
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    if (param_1[7] != 0) {
      SafeWaitForSingleObject(*(void **)(param_1[7] + 8),60000);
      if ((int *)param_1[7] != (int *)0x0) {
        (**(code **)(*(int *)param_1[7] + 4))(1);
      }
      param_1[7] = 0;
      (**(code **)(*param_1 + 0x28))();
    }
    iVar1 = param_1[0xd];
    if (iVar1 != param_1[0xe]) {
      do {
        FUN_0041b030(iVar1);
        iVar1 = iVar1 + 4;
      } while (iVar1 != param_1[0xe]);
    }
    param_1[0xe] = param_1[0xd];
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xfc;
  }
  (**(code **)(*param_1 + 0x34))();
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xeb;
  return;
}

