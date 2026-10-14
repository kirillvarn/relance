
void __fastcall FUN_0047e920(char *param_1)

{
  int iVar1;
  char cVar2;
  EquipDesc *this;
  char *pcVar3;
  char *local_4;
  
  if (*(int *)(param_1 + 0x360) != 0) {
    local_4 = param_1;
    this = (EquipDesc *)FUN_0047e790();
    if ((this != (EquipDesc *)0x0) &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0x360) + 0x988), iVar1 != 0)) {
      EquipDesc::make_internal(this);
      EquipDesc::set_equipped(this,false);
      pcVar3 = (char *)FUN_00585ef0(this,0);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = *(char **)CARGO_BAY_HP_NAME_exref;
      }
      local_4 = StringAlloc(pcVar3,false);
      cVar2 = FUN_004c6530(this,&local_4,iVar1,1);
      if (cVar2 != '\0') {
        FUN_004c6430(this,iVar1);
      }
      param_1[0x4f4] = '\0';
      param_1[0x4f5] = '\0';
      param_1[0x4f6] = '\0';
      param_1[0x4f7] = '\0';
      *(undefined4 *)(*(int *)(param_1 + 0x360) + 0x4f4) = 0;
    }
  }
  return;
}

