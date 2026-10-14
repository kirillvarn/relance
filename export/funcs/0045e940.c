
void __fastcall FUN_0045e940(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(uint *)(param_1 + 0x568);
  local_18 = (uint)(ushort)DAT_00673344;
  if (((uVar1 == DAT_0066da40) && (DAT_0066da84 != 0)) && (*(int *)(DAT_0066da84 + 0x350) != 0)) {
    local_1c = DAT_0066da38;
  }
  else {
    if ((uVar1 == DAT_0066da38) ||
       ((uVar1 == DAT_0066da40 && ((DAT_0066da84 == 0 || (*(int *)(DAT_0066da84 + 0x350) == 0))))))
    {
      local_1c = DAT_0066da40;
      local_14 = *(uint *)(*(int *)(param_1 + 0x530) + 4);
      puVar5 = (uint *)FUN_0053e430(&local_10);
      uVar1 = local_18;
      uVar4 = local_1c;
      if (local_14 != *puVar5) {
        do {
          local_18 = local_14;
          FUN_0043c010();
          uVar2 = *(uint *)(local_18 + 0xc);
          local_4 = *(undefined4 *)(local_18 + 0x10);
          local_8._2_1_ = (char)(uVar2 >> 0x10);
          bVar6 = local_8._2_1_ != '\0';
          uVar4 = local_1c;
          local_8 = uVar2;
          if ((bVar6) || (uVar4 = uVar2, uVar2 != uVar1)) break;
          FUN_0043c010();
          puVar5 = (uint *)FUN_0053e430(&local_10);
          uVar4 = local_1c;
        } while (local_14 != *puVar5);
      }
    }
    else {
      local_1c = DAT_0066da40;
      FUN_0046cd50(&local_14,(uint *)(param_1 + 0x568));
      uVar1 = local_18;
      uVar4 = local_1c;
      if (local_14 != *(uint *)(*(int *)(param_1 + 0x530) + 4)) {
        while( true ) {
          FUN_0043c010();
          uVar2 = *(uint *)(*(int *)(param_1 + 0x530) + 4);
          uVar4 = local_1c;
          if (local_14 == uVar2) break;
          uVar3 = *(uint *)(local_14 + 0xc);
          local_c = *(undefined4 *)(local_14 + 0x10);
          local_10._2_1_ = (char)(uVar3 >> 0x10);
          bVar6 = local_10._2_1_ != '\0';
          local_10 = uVar3;
          if (((bVar6) || (uVar4 = uVar3, uVar3 != uVar1)) || (uVar4 = local_1c, local_14 == uVar2))
          break;
        }
      }
    }
    local_1c = uVar4;
    if (local_1c != DAT_0066da38) goto LAB_0045eacf;
  }
  if ((DAT_0066da84 == 0) || (*(int *)(DAT_0066da84 + 0x350) == 0)) {
    local_1c = DAT_0066da40;
  }
LAB_0045eacf:
  FUN_0045eaf0(&local_1c);
  return;
}

