
/* WARNING: Removing unreachable block (ram,0x004dcbb4) */

void __fastcall FUN_004dca20(int param_1)

{
  CShip *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  IBehaviorManager *pIVar4;
  byte bVar5;
  uint unaff_EDI;
  undefined4 uVar6;
  uint auStack_224 [2];
  bool local_20e;
  
  local_20e = false;
  bVar1 = false;
  auStack_224[1] = 0x4dca37;
  iVar3 = FUN_0054baf0();
  if ((((iVar3 != 0) && (iVar3 != -0xc)) && (this = *(CShip **)(iVar3 + 0x10), this != (CShip *)0x0)
      ) && ((*(uint *)(this + 0x4c) & 0x503) == 0x503)) {
    auStack_224[1] = 0x4dca60;
    local_20e = CShip::is_using_tradelane(this);
    auStack_224[1] = 0x4dca71;
    pIVar4 = CEqObj::get_behavior_interface((CEqObj *)this);
    if ((pIVar4 != (IBehaviorManager *)0x0) && (*(int *)(pIVar4 + 0xc0) == 10)) {
      bVar1 = true;
    }
  }
  if (*(char *)(param_1 + 0x5b9) == '\0') {
    auStack_224[1] = 0x4dca8f;
    cVar2 = FUN_004c7270();
    if (((cVar2 == '\0') && (!bVar1)) ||
       ((local_20e != false || (*(char *)(param_1 + 0x5ba) != '\0')))) goto LAB_004dcac4;
    auStack_224[1] = 0x4dcab3;
    cVar2 = FUN_004c7c60();
    if ((cVar2 != '\0') && (!bVar1)) goto LAB_004dcac4;
    bVar5 = 1;
  }
  else {
LAB_004dcac4:
    bVar5 = 0;
  }
  auStack_224[0] = (uint)bVar5;
  auStack_224[1] = 0;
  (**(code **)(**(int **)(param_1 + 0x5bc) + 0xa8))();
  (**(code **)(**(int **)(param_1 + 0x5c0) + 0xa8))(1,unaff_EDI >> 0x18,0);
  if (bVar5 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x5b9) == '\0') {
    if (*(char *)(param_1 + 0x5ba) == '\0') {
      (**(code **)(**(int **)(param_1 + 0x5bc) + 0xa8))(0x1e,0x62c,0);
      goto LAB_004dcb37;
    }
    iVar3 = **(int **)(param_1 + 0x5bc);
    uVar6 = 0x62b;
  }
  else {
    cVar2 = FUN_004c7270();
    if (cVar2 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x5bc) + 0xa8))(0x1e,0x615,0);
      goto LAB_004dcb37;
    }
    iVar3 = **(int **)(param_1 + 0x5bc);
    uVar6 = 0x633;
  }
  (**(code **)(iVar3 + 0xa8))(0x1e,uVar6,0);
LAB_004dcb37:
  FUN_004347e0(DAT_0067eca8,0x62d,&DAT_0066dc60,DAT_006119f8);
  wcscpy((wchar_t *)&stack0xfffffde8,L"???");
  if (*(char *)(param_1 + 0x5b9) == '\0') {
    cVar2 = FUN_004c7270();
    if (cVar2 == '\0') {
      uVar6 = 200;
    }
    else {
      uVar6 = 0xf;
    }
  }
  else {
    uVar6 = 0xbf;
  }
  cVar2 = FUN_00577dd0(uVar6,auStack_224);
  if (cVar2 != '\0') {
    FUN_00577f50(auStack_224,&stack0xfffffde8,0x100);
  }
  swprintf(&DAT_0066fc60,0x66dc60,(wchar_t *)&stack0xfffffde8);
  (**(code **)(**(int **)(param_1 + 0x5c0) + 0xa8))(0x1d,&DAT_0066fc60,0);
  return;
}

