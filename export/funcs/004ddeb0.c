
void __fastcall FUN_004ddeb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  undefined4 *puVar7;
  int local_48;
  char acStack_20 [32];
  
  FUN_004dd9e0();
  iVar6 = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x590) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(param_1 + 0x594) - *(int *)(param_1 + 0x590)) / 0x24;
  }
  uVar4 = 0;
  if (10 < iVar2) {
    uVar4 = iVar2 - 10;
  }
  if (uVar4 < *(uint *)(param_1 + 0x5c8)) {
    *(uint *)(param_1 + 0x5c8) = uVar4;
  }
  iVar5 = *(int *)(param_1 + 0x5c8);
  if (iVar5 < iVar2) {
    iVar3 = iVar5 * 0x24;
    puVar7 = (undefined4 *)(param_1 + 0x508);
    do {
      iVar6 = *(int *)(param_1 + 0x590) + iVar3;
      DAT_0066fc60 = 0;
      FUN_004347e0(DAT_0067eca8,*(undefined4 *)(iVar6 + 8));
      (**(code **)(*(int *)*puVar7 + 0xa8))(1);
      (**(code **)(*(int *)puVar7[10] + 0xa8))(1,0,0);
      (**(code **)(*(int *)*puVar7 + 0xa8))(0x1d,&DAT_0066fc60,0);
      iVar5 = iVar5 + 1;
      sprintf(&stack0xffffff9c,"%d",iVar5);
      FUN_0058a580(&stack0xffffff9c);
      if (*(int *)(iVar6 + 4) < 0) {
        (**(code **)(*(int *)puVar7[0x14] + 0xa8))(1,1,0);
      }
      else {
        (**(code **)(*(int *)puVar7[0x14] + 0xa8))(1,0);
        sprintf(acStack_20,"%d");
        FUN_0058a580();
      }
      iVar6 = local_48 + 1;
      puVar7 = puVar7 + 1;
    } while ((iVar6 < 10) && (iVar3 = iVar3 + 0x24, local_48 = iVar6, iVar5 < iVar2));
  }
  (**(code **)(**(int **)(param_1 + 0x5c4) + 0xa8))(0x37);
  if (iVar6 < 10) {
    puVar7 = (undefined4 *)(param_1 + 0x558 + iVar6 * 4);
    iVar6 = 10 - unaff_ESI;
    do {
      (**(code **)(*(int *)puVar7[-10] + 0xa8))(1,1,0);
      (**(code **)(*(int *)*puVar7 + 0xa8))(1,1,0);
      puVar1 = puVar7 + -0x14;
      puVar7 = puVar7 + 1;
      (**(code **)(*(int *)*puVar1 + 0xa8))(1,1,0);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

