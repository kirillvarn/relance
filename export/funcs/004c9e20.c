
undefined4 __thiscall FUN_004c9e20(int param_1,long param_2)

{
  char *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long local_18;
  int local_14;
  char *local_10;
  ulong local_c;
  char *local_8;
  ulong local_4;
  
  local_14 = param_1 + 4;
  uVar3 = FUN_0041c540(local_14,*(undefined4 *)Data_exref,0,0,param_1 + 0x10c,0,0);
  pcVar1 = (char *)(param_1 + 0xcc);
  local_18 = -1;
  bVar2 = FindHardpoint(param_2,pcVar1,&local_18);
  if (bVar2) {
    local_10 = (char *)(param_1 + 0x88);
    local_c = DACOM_CRC::GetCRC32(local_10);
    local_8 = pcVar1;
    local_4 = DACOM_CRC::GetCRC32(pcVar1);
    iVar4 = (**(code **)(**(int **)Hardpoint_exref + 0x18))
                      (*(int **)Hardpoint_exref,local_18,&local_8,uVar3,&local_10);
    if (iVar4 == 0) {
      return uVar3;
    }
  }
  (**(code **)FDUMP_exref)
            (0x100002,
             "%s(%d) : *** WARNING: Accessory - connection failed! (%s)  acc_hp=\'%s\'  obj_hp=\'%s\'\n"
             ,"cmn\\EngineCharacter.h",0x4e,local_14,param_1 + 0x88,pcVar1);
  return uVar3;
}

