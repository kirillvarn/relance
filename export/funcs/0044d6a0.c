
void __thiscall FUN_0044d6a0(Csys *param_1,int param_2,int param_3)

{
  char cVar1;
  char *_Str1;
  int iVar2;
  char *pcVar3;
  SetpointInfo *pSVar4;
  int *piVar5;
  uint uVar6;
  SetpointProperties local_60 [36];
  Csys local_3c [4];
  undefined4 auStack_38 [11];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005b9d09;
  local_c = ExceptionList;
  _Str1 = *(char **)(param_2 + 0x38);
  uVar6 = 0xffffffff;
  pcVar3 = "special/";
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  iVar2 = _strnicmp(_Str1,"special/",~uVar6 - 1);
  if (iVar2 == 0) {
    uVar6 = 0xffffffff;
    pcVar3 = "special/";
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    SetpointProperties::SetpointProperties(local_60);
    local_4 = 0;
    SetpointProperties::extract_from_name(local_60,*(char **)(param_1 + 0xa0));
    SetpointProperties::set_segment(local_60,_Str1 + (~uVar6 - 1));
    pcVar3 = SetpointProperties::combine_to_name(local_60);
    pSVar4 = RoomData::find_setpoint_generic
                       (*(RoomData **)(*(int *)(param_1 + 0x30) + 0x40),pcVar3,
                        *(char **)(param_1 + 0xa4));
    if (pSVar4 == (SetpointInfo *)0x0) {
      (**(code **)FDUMP_exref)
                (0x100001,
                 "%s(%d) : *** ERROR: Generic script %s applied on trigger %s uses special marker %s mapping to %s which not exist in setpoint layer\n"
                 ,"E:\\FL\\Scratch\\Source\\Client\\Gf\\Script.cpp",0x80,
                 *(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xa0),_Str1,pcVar3);
    }
    else {
      Csys::trans_to_frame(param_1,local_3c);
      piVar5 = (int *)(param_3 + 0xc);
      (**(code **)(*(int *)(param_3 + 0xc) + 0xc))(piVar5,local_3c);
      (**(code **)(*piVar5 + 0x10))(piVar5,auStack_38);
      iVar2 = stricmp(_Str1,"special/p");
      if (iVar2 == 0) {
        piVar5 = (int *)FUN_00449cd0();
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xc))(auStack_38[0]);
        }
      }
    }
    local_4 = 0xffffffff;
    SetpointProperties::~SetpointProperties(local_60);
  }
  ExceptionList = local_c;
  return;
}

