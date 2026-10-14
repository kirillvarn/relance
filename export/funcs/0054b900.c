
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054b900(void)

{
  CEqObj *this;
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  FUN_005b7e90();
  piVar2 = (int *)(**(code **)(*(int *)PTR_DAT_00613ed0 + 0xc))(0xfdff);
  if (piVar2 == (int *)0x0) {
LAB_0054b9db:
    _DAT_006792f4 = 0x43480000;
  }
  else {
    in_stack_00000014 = 0;
    in_stack_00000010 = 0x800;
    (**(code **)(*DAT_00679738 + 0xc))(DAT_00679738);
    iVar3 = (**(code **)(*piVar2 + 0x1c))(&stack0xfffffffc,&stack0x0000000c);
    if (iVar3 == 0) {
      if (*(char *)(DAT_00674aa0 + 0x5ba) == '\x01') {
        FUN_005763b0(0x39,0);
      }
      goto LAB_0054b9db;
    }
    if (*(char *)(DAT_00674aa0 + 0x5ba) == '\x01') {
      FUN_005763b0(0x39,0);
    }
    if (*(char *)(DAT_00674aa0 + 0x5b9) == '\x01') {
      FUN_005763b0(0xbf,0);
    }
    _DAT_006792f4 = 0x42c80000;
  }
  _DAT_006792f0 = 0x3f000000;
  if (DAT_00679738 == (int *)&DAT_00678ba4) {
    if (DAT_00679744 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = DAT_00679744 + -8;
    }
    FUN_00549e70("third_person",iVar3);
  }
  piVar2 = (int *)FUN_0040f130();
  puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x10))(piVar2);
  DAT_006791d8 = 1;
  puVar5 = puVar4;
  puVar6 = &DAT_006791a8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = puVar4;
  puVar6 = &DAT_006792b4;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  _DAT_006792d8 = puVar4[9];
  _DAT_006792dc = puVar4[10];
  _DAT_006792e0 = puVar4[0xb];
  _DAT_006792e8 = DAT_006792ec;
  _DAT_006792e4 = 0x3f800000;
  if (DAT_00679744 != 0) {
    if ((((DAT_00679744 != 8) && (DAT_00679744 != -4)) &&
        (this = *(CEqObj **)(DAT_00679744 + 8), this != (CEqObj *)0x0)) &&
       (((*(uint *)(this + 0x4c) & 0x103) == 0x103 &&
        (bVar1 = CEqObj::is_control_excluded(this,3), !bVar1)))) {
      CEqObj::set_control_exclusion(this,3);
    }
    if (DAT_00679744 != 0) {
      iVar3 = DAT_00679744 + -8;
      goto LAB_0054bad3;
    }
  }
  iVar3 = 0;
LAB_0054bad3:
  FUN_00549e70("death",iVar3);
  return;
}

