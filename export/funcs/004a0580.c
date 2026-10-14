
/* WARNING: Removing unreachable block (ram,0x004a05b0) */

void __fastcall FUN_004a0580(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  int local_4;
  
  *(undefined4 *)(param_1 + 0xf0c) = DAT_005d2ed0;
  *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_1 + 0xb5c);
  local_4 = param_1;
  iVar1 = FUN_004c4fb0();
  iVar3 = 0;
  iVar4 = param_1;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)FUN_004c4ff0(iVar3);
      iVar4 = local_4;
      for (puVar2 = (undefined4 *)*puVar2; local_4 = iVar4, puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        if (*(short *)(puVar2 + 2) == 0x5a) {
          local_8 = puVar2[1];
          FUN_00537260(*(undefined4 *)(param_1 + 0xb60),1,&local_8);
        }
        iVar4 = local_4;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  if ((*(int *)(iVar4 + 2000) != 0) && (*(char *)(iVar4 + 0x478) == '\0')) {
    if (*(int *)(param_1 + 0xb5c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xb60) - *(int *)(param_1 + 0xb5c) >> 2;
    }
    (**(code **)(**(int **)(iVar4 + 0xb50) + 0xa8))(1,iVar1 == 0,0);
    if ((iVar1 == 0) && (DAT_006720a0 == 3)) {
      FUN_004a0220(0);
    }
  }
  return;
}

