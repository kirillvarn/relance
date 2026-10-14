
void __fastcall FUN_00417f10(IDPMsgHandler *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iStack_54;
  undefined1 **ppuStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  int **ppiStack_40;
  int *piStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005b8930;
  pvStack_c = ExceptionList;
  puStack_30 = (undefined1 *)0x1701;
  uStack_34 = 0x417f32;
  ExceptionList = &pvStack_c;
  IDPMsgHandler::OnDisconnect(param_1);
  puStack_30 = (undefined1 *)0x417f3a;
  FUN_00422a70();
  puStack_30 = (undefined1 *)0x417f3f;
  FUN_004225e0();
  piStack_3c = *(int **)Pipeline_exref;
  uStack_34 = 0x10;
  piStack_38 = (int *)0x0;
  ppiStack_40 = (int **)0x417f58;
  puStack_30 = local_2c;
  (**(code **)(*piStack_3c + 0xfc))();
  piStack_4c = *(int **)Pipeline_exref;
  ppiStack_40 = &piStack_38;
  piStack_44 = (int *)0x11;
  uStack_48 = 0;
  ppuStack_50 = (undefined1 **)0x417f71;
  (**(code **)(*piStack_4c + 0xfc))();
  if (DAT_006105b5 != '\0') {
    ppuStack_50 = (undefined1 **)0x1;
    iStack_54 = 0x10;
    (**(code **)(**(int **)Pipeline_exref + 0xf8))(*(int **)Pipeline_exref,0);
    (**(code **)(**(int **)Pipeline_exref + 0xf8))(*(int **)Pipeline_exref,0,0x11,1);
  }
  piStack_38 = *(int **)Pipeline_exref;
  ppuStack_50 = &puStack_30;
  iStack_54 = 0x17;
  uStack_34 = 0x17;
  (**(code **)(*piStack_38 + 0xf4))(piStack_38);
  piVar2 = piStack_44;
  (**(code **)(*piStack_44 + 0xf0))(piStack_44,ppiStack_40,8);
  piVar1 = &iStack_54;
  piStack_3c = (int *)0x0;
  (**(code **)(**(int **)Pipeline_exref + 0xf4))(*(int **)Pipeline_exref,0xe);
  (**(code **)(*piVar1 + 0xf0))(piVar1,piVar2,0);
  iStack_54 = CONCAT31(iStack_54._1_3_,1);
  FUN_00403ea0(*(undefined4 *)Pipeline_exref,DAT_00616670);
  piVar2 = *(int **)Pipeline_exref;
  uVar3 = 0;
  (**(code **)(*piVar2 + 0xf8))(piVar2,0,0x10,piVar1);
  piVar1 = (int *)0x11;
  (**(code **)(**(int **)Pipeline_exref + 0xf8))(*(int **)Pipeline_exref,0,0x11,uVar3);
  FUN_00422ab0();
  (**(code **)(*piVar1 + 0xf0))(piVar1,uVar3,piVar2);
  (**(code **)(*piVar1 + 0xf0))(piVar1,uVar3,piVar2);
  ExceptionList = piVar1;
  return;
}

