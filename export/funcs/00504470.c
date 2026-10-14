
void __fastcall FUN_00504470(int *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (param_1[9] != 0) {
    FUN_004ff360(3);
  }
  puVar4 = (undefined4 *)(*(code *)**(undefined4 **)param_1[0x1a])();
  iVar1 = *param_1;
  uStack_10 = 0x3f800000;
  uStack_20 = 0x3f800000;
  uStack_30 = 0x3f800000;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_c = *puVar4;
  uStack_8 = puVar4[1];
  uStack_4 = puVar4[2];
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  bVar2 = ID_String::IsEmpty((ID_String *)(iVar1 + 8));
  if (!bVar2) {
    piVar8 = param_1 + 0x12;
    puVar4 = &uStack_3c;
    puVar7 = &uStack_30;
    uVar5 = FUN_0040f080((ID_String *)(iVar1 + 8),puVar7,puVar4,piVar8);
    cVar3 = FUN_00503f40(uVar5,puVar7,puVar4,piVar8);
    if (cVar3 != '\0') {
      uStack_10 = 0x3f800000;
      uStack_20 = 0x3f800000;
      uStack_30 = 0x3f800000;
      uStack_14 = 0;
      uStack_18 = 0;
      uStack_1c = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      uStack_2c = 0;
      uStack_4 = 0;
      uStack_8 = 0;
      uStack_c = 0;
      uVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x1c))();
      if (param_1[0x14] != 0) {
        FUN_004f7d20(param_1[0x1a],uVar5,&uStack_30);
      }
      if ((int *)param_1[0x13] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x13] + 0x94))(uVar5,&uStack_30);
      }
      if (param_1[0x15] != 0) {
        FUN_005377c0(uVar5,&uStack_30);
        *(undefined1 *)(param_1 + 0x36) = 1;
        return;
      }
      goto LAB_00504623;
    }
  }
  pcVar6 = ID_String::get_string((ID_String *)(*param_1 + 8));
  (**(code **)FDUMP_exref)
            (0x100002,"%s(%d) : *** WARNING: jump in effect (%s) did not create.",
             "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0x277,pcVar6);
LAB_00504623:
  *(undefined1 *)(param_1 + 0x36) = 1;
  return;
}

