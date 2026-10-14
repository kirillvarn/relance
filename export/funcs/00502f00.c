
void __thiscall FUN_00502f00(int *param_1,float param_2)

{
  ID_String *this;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if ((char)param_1[6] == '\0') {
    param_1[2] = (int)(param_2 + (float)param_1[2]);
  }
  param_2 = 0.0;
  if (0 < *(int *)(*param_1 + 0x40)) {
    local_3c = 0;
    piVar6 = param_1 + 0xb;
    do {
      if (((char)*piVar6 == '\0') && ((float)piVar6[1] < (float)param_1[2])) {
        local_c = piVar6[2];
        local_8 = piVar6[3];
        local_4 = piVar6[4];
        *(char *)piVar6 = '\x01';
        local_10 = 0x3f800000;
        local_20 = 0x3f800000;
        local_30 = 0x3f800000;
        local_14 = 0;
        local_18 = 0;
        local_1c = 0;
        local_24 = 0;
        local_28 = 0;
        local_2c = 0;
        uVar3 = (**(code **)(*(int *)param_1[1] + 0x1c))();
        iVar7 = param_1[1];
        this = (ID_String *)(local_3c + 4 + *param_1);
        bVar1 = ID_String::IsEmpty(this);
        if (!bVar1) {
          piVar9 = piVar6 + 5;
          puVar8 = &local_30;
          uVar4 = FUN_0040f080(this,iVar7,uVar3,puVar8,piVar9);
          cVar2 = FUN_00503070(uVar4,iVar7,uVar3,puVar8,piVar9);
          if (cVar2 != '\0') goto LAB_00503034;
        }
        pcVar5 = ID_String::get_string((ID_String *)(local_3c + 4 + *param_1));
        (**(code **)FDUMP_exref)
                  (0x100002,
                   "%s(%d) : *** WARNING: jump gate effect number (%d) named (%s) did not create.",
                   "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",300,param_2,pcVar5);
      }
LAB_00503034:
      param_2 = (float)((int)param_2 + 1);
      local_3c = local_3c + 0xc;
      piVar6 = piVar6 + 9;
    } while ((int)param_2 < *(int *)(*param_1 + 0x40));
  }
  return;
}

