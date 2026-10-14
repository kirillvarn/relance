
void FUN_00564700(void)

{
  char cVar1;
  uint local_4;
  
  cVar1 = FUN_005b0880();
  if ((cVar1 == '\0') && (cVar1 = FUN_0042d730(), cVar1 == '\0')) {
    return;
  }
  if (DAT_0067a51c == (int *)0x0) {
    local_4 = CreateID(PTR_s_ui_rollover_00614a5c);
    DAT_0067a51c = (int *)FUN_0042ae40(&local_4);
    (**(code **)(*DAT_0067a51c + 0xc))();
  }
  FUN_00428680(DAT_0067a51c,0,0,0);
  return;
}

