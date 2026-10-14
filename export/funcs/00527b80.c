
undefined4 * __thiscall FUN_00527b80(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CShip *pCVar4;
  float fVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_005c0223;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00531a30(param_2,param_3);
  *(undefined1 *)(param_1 + 4) = (undefined1)param_3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar2 = param_1[2];
  local_4 = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR_FUN_005dd134;
  if ((((iVar2 == 0) || (iVar2 == -0xc)) ||
      (pCVar4 = *(CShip **)(iVar2 + 0x10), pCVar4 == (CShip *)0x0)) ||
     ((*(uint *)(pCVar4 + 0x4c) & 0x503) != 0x503)) {
    pCVar4 = (CShip *)0x0;
  }
  fVar5 = CShip::get_speed(pCVar4,1.0,1);
  param_1[0xc] = fVar5;
  iVar2 = FUN_005792b0(0x2d);
  if (iVar2 == 2) {
    iVar2 = param_1[2];
    if (((iVar2 == 0) || (iVar2 == -0xc)) ||
       ((pCVar4 = *(CShip **)(iVar2 + 0x10), pCVar4 == (CShip *)0x0 ||
        ((*(uint *)(pCVar4 + 0x4c) & 0x503) != 0x503)))) {
      pCVar4 = (CShip *)0x0;
    }
    fVar5 = CShip::get_speed(pCVar4,1.0,2);
    param_1[0xc] = fVar5;
  }
  if (param_1[1] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1[1] + 0xc) + 4);
  }
  bVar1 = ID_String::IsEmpty((ID_String *)(iVar2 + 0xa8));
  if (!bVar1) {
    if (param_1[1] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1[1] + 0xc) + 4);
    }
    uVar3 = FUN_0040f080(iVar2 + 0xa8);
    param_1[0x17] = uVar3;
    FUN_0040e960(0);
  }
  FUN_00528980();
  FUN_00528f90();
  ExceptionList = local_c;
  return param_1;
}

