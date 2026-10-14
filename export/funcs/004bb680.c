
void FUN_004bb680(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0045a740();
  if (cVar1 == '\0') {
    cVar1 = FUN_0042d740();
    if (cVar1 == '\0') goto LAB_004bb6a6;
  }
  iVar2 = FUN_0059da10("NeuroNetMissionMessage");
  if (iVar2 == 0) {
    return;
  }
LAB_004bb6a6:
  FUN_005a0760();
  return;
}

