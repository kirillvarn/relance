
void FUN_00557550(void)

{
  undefined4 uVar1;
  char *pcStack_14;
  undefined *local_8;
  ulong local_4;
  
  pcStack_14 = "fx\\efx.txm";
  uVar1 = FUN_0041c7e0();
  local_8 = &DAT_005db6f8;
  local_4 = DACOM_CRC::GetCRC32("bulb");
  pcStack_14 = (char *)&DAT_006799c0;
  (**(code **)(**(int **)TextureLib_exref + 0x30))(*(int **)TextureLib_exref,&local_8);
  pcStack_14 = "shine";
  DACOM_CRC::GetCRC32("shine");
  (**(code **)(**(int **)TextureLib_exref + 0x30))
            (*(int **)TextureLib_exref,&pcStack_14,&DAT_006799c4);
  (**(code **)(**(int **)TextureLib_exref + 0x1c))(*(int **)TextureLib_exref,uVar1);
  return;
}

