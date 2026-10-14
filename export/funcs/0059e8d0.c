
/* WARNING: Removing unreachable block (ram,0x0059e949) */
/* WARNING: Removing unreachable block (ram,0x0059e950) */

void __fastcall FUN_0059e8d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
  }
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + iVar4);
      puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
      if (iVar1 != -1) {
        (**(code **)(**(int **)Engine_exref + 0x3c))(*(int **)Engine_exref,iVar1);
        *puVar3 = 0xffffffff;
      }
      FUN_0041b030(puVar3 + 1);
      FUN_0041b030(puVar3 + 2);
      iVar4 = iVar4 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  return;
}

