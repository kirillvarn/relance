
void __thiscall FUN_00459210(int param_1,uint param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint local_8;
  uint local_4;
  
  local_8 = FUN_0052c7a0(&param_2);
  uVar5 = *(uint *)(param_1 + 4);
  if ((local_8 == uVar5) || (param_2 < *(uint *)(local_8 + 0xc))) {
    local_4 = uVar5;
    puVar4 = &local_4;
  }
  else {
    puVar4 = &local_8;
  }
  if (*puVar4 != uVar5) {
    for (puVar1 = (undefined4 *)(*puVar4 + 0x10); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[2]) {
      local_8 = local_8 & 0xffffff00;
      cVar3 = FUN_004c4da0(*puVar1,&local_8,0,0);
      if (cVar3 == '\0') {
        uVar6 = *puVar1;
        uVar5 = (uint)*(byte *)(puVar1 + 1);
LAB_00459299:
        FUN_004c4e00(uVar6,uVar5,1);
      }
      else {
        bVar2 = *(byte *)(puVar1 + 1);
        if ((bVar2 & (byte)local_8) != bVar2) {
          local_8 = CONCAT31(local_8._1_3_,(byte)local_8 | bVar2);
          uVar6 = *puVar1;
          uVar5 = local_8;
          goto LAB_00459299;
        }
      }
    }
  }
  return;
}

