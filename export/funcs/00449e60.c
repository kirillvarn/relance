
void __thiscall FUN_00449e60(int param_1,CharacterProperties *param_2)

{
  CharacterProperties *this;
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_2 + 8) != *(int *)(param_1 + 0x38)) ||
     (cVar1 = FUN_00435b40(param_2 + 0x24), cVar1 == '\0')) {
    return;
  }
  piVar3 = (int *)(param_1 + 0x518);
  iVar5 = 0;
  piVar4 = piVar3;
  do {
    if ((*piVar4 != 0) && (*(int *)(*piVar4 + 0x154) == *(int *)param_2)) {
      if (iVar5 != -1) {
        this = (CharacterProperties *)(*(int *)(param_1 + 0x518 + iVar5 * 4) + 0x154);
        CharacterProperties::destroy(this);
        CharacterProperties::operator=(this,param_2);
        FUN_00445a60();
        FUN_00445580(*(undefined4 *)(param_2 + 0x58),0);
        return;
      }
      break;
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar5 < 0x40);
  iVar5 = 0;
  do {
    iVar6 = iVar5;
    if (*piVar3 == 0) break;
    iVar5 = iVar5 + 1;
    piVar3 = piVar3 + 1;
    iVar6 = -1;
  } while (iVar5 < 0x40);
  uVar2 = FUN_00435960(param_2,param_1);
  *(undefined4 *)(param_1 + 0x518 + iVar6 * 4) = uVar2;
  return;
}

