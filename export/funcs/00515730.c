
void __fastcall FUN_00515730(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_005bfdc1;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (piVar8 = (int *)**(int **)(param_1 + 0xc), ExceptionList = &pvStack_c, ppvVar4 = &pvStack_c,
     piVar8 != *(int **)(param_1 + 0xc))) {
    do {
      ExceptionList = ppvVar4;
      iVar6 = FUN_005416c0(*(undefined4 *)((int)piVar8 + 8),1);
      if (iVar6 != 0) {
        iVar7 = FUN_0054baf0();
        if (iVar6 == iVar7) {
          FUN_00515640();
          *(byte *)(iVar6 + 0x184) = *(byte *)(iVar6 + 0x184) & 0xbf;
        }
        cVar5 = FUN_00503330();
        if (cVar5 != '\0') {
          FUN_004fcef0(iVar6 + 0x164);
        }
        *(undefined4 *)(iVar6 + 0x184) = 0;
        *(undefined4 *)(iVar6 + 0x160) = 0;
      }
      FUN_00516f70(local_10,piVar8);
      piVar8 = (int *)**(int **)(param_1 + 0xc);
      ppvVar4 = ExceptionList;
    } while (piVar8 != *(int **)(param_1 + 0xc));
  }
  FUN_00515640();
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_004f7a90();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  piVar8 = *(int **)(param_1 + 0x34);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00537ad0();
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_4 = local_4 & 0xffffff00;
  if (*(int *)(param_1 + 0x14) != 0) {
    BaseWatcher::set_pointer((BaseWatcher *)(param_1 + 0x14),(Watchable *)0x0);
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  local_4 = 0xffffffff;
  puVar3 = (undefined4 *)*puVar1;
  while (puVar3 != puVar1) {
    puVar2 = (undefined4 *)*puVar3;
    FUN_00516f70(local_10,puVar3);
    puVar3 = puVar2;
  }
  FUN_005b7e1d(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = pvStack_c;
  return;
}

