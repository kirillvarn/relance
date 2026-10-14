
void __fastcall FUN_00503ea0(int param_1)

{
  ID_String *this;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  FUN_004ff360(1);
  this = (ID_String *)(param_1 + 0x18);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  bVar1 = ID_String::IsEmpty(this);
  if (!bVar1) {
    iVar7 = param_1 + 0x38;
    puVar6 = &local_c;
    iVar5 = param_1 + 0xa8;
    uVar3 = FUN_0040f080(this,iVar5,puVar6,iVar7);
    cVar2 = FUN_00503f40(uVar3,iVar5,puVar6,iVar7);
    if (cVar2 != '\0') goto LAB_00503f32;
  }
  pcVar4 = ID_String::get_string(this);
  (**(code **)FDUMP_exref)
            (0x100002,"%s(%d) : *** WARNING: jump out effect (%s) did not create.",
             "E:\\FL\\Scratch\\Source\\Client\\Space\\JumpEffect.cpp",0x246,pcVar4);
LAB_00503f32:
  *(undefined1 *)(param_1 + 0x6d) = 0;
  return;
}

