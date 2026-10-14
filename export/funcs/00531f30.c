
void __fastcall FUN_00531f30(INotify *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *unaff_EBX;
  int *unaff_EDI;
  undefined4 uStack_14;
  INotify *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c0720;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined ***)param_1 = &PTR_LAB_005de15c;
  local_4 = 0;
  local_10 = param_1;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
  uStack_14 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar2 = (**(code **)**(undefined4 **)Engine_exref)
                    (*(undefined4 **)Engine_exref,"1.11_IFLAppearance",&uStack_14);
  if (iVar2 < 0) {
    local_10 = (INotify *)((uint)local_10 & 0xffffff00);
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
  }
  else {
    (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,uVar1);
    local_10 = (INotify *)((uint)local_10 & 0xffffff00);
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
  }
  local_10 = (INotify *)0xffffffff;
  *(undefined ***)param_1 = &PTR_FUN_005de13c;
  if (*(CEquip **)(param_1 + 4) != (CEquip *)0x0) {
    CEquip::NotifyDisconnecting(*(CEquip **)(param_1 + 4),param_1);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00536170(*(int *)(param_1 + 0xc));
  }
  ExceptionList = unaff_EBX;
  return;
}

