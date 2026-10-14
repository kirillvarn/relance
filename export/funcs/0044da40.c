
void __thiscall FUN_0044da40(Csys *param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  char *_Str1;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  RoomCameraInfo *pRVar6;
  uint uVar7;
  SetpointProperties local_60 [36];
  Csys local_3c [4];
  undefined1 auStack_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_005b9d09;
  local_c = ExceptionList;
  _Str1 = *(char **)(param_2 + 0x38);
  uVar7 = 0xffffffff;
  pcVar5 = "camera/";
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_c;
  iVar4 = _strnicmp(_Str1,"camera/",~uVar7 - 1);
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
    pcVar5 = "camera/";
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    SetpointProperties::SetpointProperties(local_60);
    local_4 = (undefined4 *)0x0;
    SetpointProperties::extract_from_name(local_60,*(char **)(param_1 + 0xa0));
    SetpointProperties::set_segment(local_60,_Str1 + (~uVar7 - 1));
    pcVar5 = SetpointProperties::combine_to_name(local_60);
    pRVar6 = RoomData::find_camera_generic
                       (*(RoomData **)(*(int *)(param_1 + 0x30) + 0x40),pcVar5,
                        *(char **)(param_1 + 0xa4));
    if (pRVar6 == (RoomCameraInfo *)0x0) {
      (**(code **)FDUMP_exref)
                (0x100001,
                 "%s(%d) : *** ERROR: Cannot find remapped special camera %s implied by special camera name %s and character hardpoint name %s\n"
                 ,"E:\\FL\\Scratch\\Source\\Client\\Gf\\Script.cpp",0x121,pcVar5,_Str1,
                 *(undefined4 *)(param_1 + 0xa0));
    }
    else {
      Csys::trans_to_frame(param_1,local_3c);
      piVar1 = (int *)(param_3 + 0xc);
      (**(code **)(*(int *)(param_3 + 0xc) + 0xc))(piVar1,local_3c);
      (**(code **)(*piVar1 + 0x10))(piVar1,auStack_38);
      puVar3 = local_4;
      piVar1 = (int *)(param_3 + 0x10);
      (**(code **)(*(int *)(param_3 + 0x10) + 0xc))(piVar1,*local_4);
      (**(code **)(*piVar1 + 0x18))(piVar1,puVar3[1]);
      (**(code **)(*piVar1 + 0x1c))(piVar1,puVar3[2]);
    }
    local_4 = (undefined4 *)0xffffffff;
    SetpointProperties::~SetpointProperties(local_60);
  }
  ExceptionList = local_c;
  return;
}

