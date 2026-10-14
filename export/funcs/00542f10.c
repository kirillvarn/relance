
undefined4 * __thiscall
FUN_00542f10(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  CObject *this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 auStack_74 [9];
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 auStack_44 [11];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c0dbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  *param_1 = _vftable__exref;
  local_4 = 0;
  local_8c = param_1;
  PhySys::Controller::Controller((Controller *)(param_1 + 2));
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[9] = param_2;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *param_1 = &PTR_LAB_005dfcc8;
  *(undefined ***)(param_1 + 2) = &PTR_LAB_005dfca8;
  param_1[7] = 0;
  param_1[8] = param_3;
  param_1[6] = param_4;
  if ((((param_2 != 0) && (param_2 != -0xc)) &&
      (this = *(CObject **)(param_2 + 0x10), this != (CObject *)0x0)) &&
     ((*(uint *)(this + 0x4c) & 0x103) == 0x103)) {
    CObject::enable_collisions_r(this,false);
    (*(code *)**(undefined4 **)(param_1[9] + 4))(0x3f800000);
    local_8c = (undefined4 *)0x0;
    uStack_88 = 0;
    uStack_84 = 0;
    (**(code **)(*(int *)(param_1[9] + 4) + 4))(&local_8c);
    puVar1 = (undefined4 *)(**(code **)(*(int *)param_1[9] + 0x10))();
    puVar3 = puVar1;
    puVar4 = auStack_74;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = auStack_44;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    if (*(int *)(param_1[9] + 0x188) != 0) {
      puVar1 = (undefined4 *)(*(int *)(param_1[9] + 0x188) + 0xa8);
      puVar3 = auStack_44;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    if (DAT_00678b68 == (int *)0x0) {
      DAT_00678b68 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00678b68 + 0x50))(DAT_00678b68,param_1 + 10,auStack_74);
    if (DAT_00678b68 == (int *)0x0) {
      DAT_00678b68 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00678b68 + 0x50))(DAT_00678b68,param_1 + 0x11,auStack_50);
    if (DAT_00678b68 == (int *)0x0) {
      DAT_00678b68 = (int *)FUN_005b73e0();
    }
    (**(code **)(*DAT_00678b68 + 0x50))(DAT_00678b68,&stack0xffffff64,&local_8c);
    param_1[0xe] = uStack_48;
    param_1[0xf] = auStack_44[0];
    param_1[0x10] = auStack_44[1];
    param_1[0x15] = uStack_18;
    param_1[0x16] = uStack_14;
    param_1[0x17] = uStack_10;
    PhySys::Controller::Register((Controller *)(param_1 + 2),this);
  }
  ExceptionList = local_c;
  return param_1;
}

