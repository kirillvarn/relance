
void FUN_00563af0(void)

{
  IMEFocus *this;
  int iVar1;
  IDPMsgHandler *this_00;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int **ppiStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *piStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_005c1e60;
  local_c = ExceptionList;
  puStack_34 = (undefined1 *)0x563b0f;
  ExceptionList = &local_c;
  this = IMEFocus::GetSingleton();
  if (this != (IMEFocus *)0x0) {
    puStack_34 = (undefined1 *)0x563b21;
    iVar1 = IMEFocus::NumInputBoxes(this);
    if (iVar1 != 0) {
      puStack_34 = (undefined1 *)0x1701;
      uStack_38 = 0x563b33;
      IDPMsgHandler::OnDisconnect(this_00);
      puStack_34 = (undefined1 *)0x563b3b;
      FUN_00422a70();
      puStack_34 = (undefined1 *)0x563b40;
      FUN_004225e0();
      piStack_40 = *(int **)Pipeline_exref;
      puStack_34 = local_2c;
      uStack_38 = 0x10;
      uStack_3c = 0;
      puStack_44 = (undefined4 *)0x563b59;
      (**(code **)(*piStack_40 + 0xfc))();
      piStack_50 = *(int **)Pipeline_exref;
      puStack_44 = &uStack_38;
      uStack_48 = 0x11;
      uStack_4c = 0;
      uStack_54 = 0x563b72;
      (**(code **)(*piStack_50 + 0xfc))();
      piStack_60 = *(int **)Pipeline_exref;
      uStack_54 = 1;
      piStack_58 = (int *)0x10;
      uStack_5c = 0;
      piStack_64 = (int *)0x563b88;
      (**(code **)(*piStack_60 + 0xf8))();
      piStack_70 = *(int **)Pipeline_exref;
      piStack_64 = (int *)0x1;
      uStack_68 = 0x11;
      uStack_6c = 0;
      ppiStack_74 = (int **)0x563b9f;
      (**(code **)(*piStack_70 + 0xf8))();
      piStack_58 = *(int **)Pipeline_exref;
      ppiStack_74 = &piStack_50;
      uStack_54 = 0x17;
      (**(code **)(*piStack_58 + 0xf4))(piStack_58,0x17);
      piVar2 = piStack_64;
      piVar5 = piStack_60;
      (**(code **)(*piStack_64 + 0xf0))(piStack_64,piStack_60,8);
      uStack_5c = 0;
      (**(code **)(**(int **)Pipeline_exref + 0xf4))(*(int **)Pipeline_exref,0xe,&ppiStack_74);
      (**(code **)(*piVar2 + 0xf0))(piVar2,piVar5,0);
      ppiStack_74 = (int **)CONCAT31(ppiStack_74._1_3_,1);
      FUN_00421ed0(0xb44);
      IMEFocus::Draw(this,(void *)0x0);
      FUN_00403ea0(*(undefined4 *)Pipeline_exref,DAT_0067a480);
      FUN_00403ea0(*(undefined4 *)Pipeline_exref,DAT_0067a484);
      piVar2 = *(int **)Pipeline_exref;
      piVar4 = (int *)0x10;
      uVar3 = 0;
      (**(code **)(*piVar2 + 0xf8))(piVar2,0,0x10,piVar5);
      (**(code **)(**(int **)Pipeline_exref + 0xf8))(*(int **)Pipeline_exref,0,0x11);
      FUN_00421dd0(0xb44);
      FUN_00422ab0();
      (**(code **)(*piVar4 + 0xf0))(piVar4,piVar2,uVar3);
      (**(code **)(*piVar4 + 0xf0))(piVar4,piVar2,uVar3);
    }
  }
  ExceptionList = local_c;
  return;
}

