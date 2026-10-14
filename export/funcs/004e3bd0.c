
IObjRW * __fastcall FUN_004e3bd0(int param_1)

{
  char cVar1;
  CShip *this;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  IObjRW *pIVar5;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x28) != 8)) {
    this = (CShip *)FUN_00543320();
    CShip::VerifyTarget(this);
    if ((*(int *)(param_1 + 0x398) != 0) && (*(int *)(param_1 + 0x398) != 8)) {
      if (*(int *)(param_1 + 0x398) == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(*(int *)(param_1 + 0x398) + -8);
      }
      uVar2 = (**(code **)(*piVar3 + 0x20))(0);
      piVar3 = (int *)FUN_005416c0(uVar2);
      if ((piVar3 == (int *)0x0) || (cVar1 = (**(code **)(*piVar3 + 0x158))(), cVar1 != '\0')) {
        if (*(int *)(param_1 + 0x28) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x28) + -8;
        }
        (**(code **)(*(int *)(iVar4 + 4) + 0x48))
                  (0,*(undefined2 *)SUBOBJ_ID_NONE_exref,DAT_00673344);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x004e3c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pIVar5 = CShip::get_target(this);
    return pIVar5;
  }
  return (IObjRW *)0x0;
}

