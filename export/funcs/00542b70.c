
undefined4 * __thiscall FUN_00542b70(undefined4 *param_1,int param_2,CEqObj *param_3)

{
  Controller *this;
  Matrix *pMVar1;
  bool bVar2;
  float *pfVar3;
  CObject *this_00;
  undefined1 local_24 [4];
  float local_20;
  float local_1c;
  Vector local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_005c0d75;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  *param_1 = _vftable__exref;
  this = (Controller *)(param_1 + 2);
  local_4 = 0;
  PhySys::Controller::Controller(this);
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_LAB_005dfc98;
  *(undefined ***)this = &PTR_LAB_005dfc78;
  param_1[8] = 0;
  param_1[6] = param_2;
  if (param_2 != 0) {
    if (((param_2 == -0xc) || (this_00 = *(CObject **)(param_2 + 0x10), this_00 == (CObject *)0x0))
       || ((*(uint *)(this_00 + 0x4c) & 0x503) != 0x503)) {
      this_00 = (CObject *)0x0;
    }
    PhySys::Controller::Register(this,this_00);
    CObject::enable_collisions_r(this_00,false);
    bVar2 = CEqObj::is_control_excluded((CEqObj *)this_00,7);
    if (bVar2) {
      CEqObj::set_control_exclusion((CEqObj *)this_00,0);
    }
    CEqObj::set_control_exclusion((CEqObj *)this_00,7);
    pMVar1 = (Matrix *)(param_1 + 0xb);
    param_1[7] = *(undefined4 *)(param_3 + 0x164);
    CEqObj::launch_pos(param_3,local_18,pMVar1,0);
    *(float *)pMVar1 = -*(float *)pMVar1;
    param_1[0x11] = -(float)param_1[0x11];
    param_1[0xe] = -(float)param_1[0xe];
    local_20 = (float)param_1[0x10];
    local_1c = -(float)param_1[0x13];
    param_1[0xd] = -(float)param_1[0xd];
    param_1[0x13] = local_1c;
    param_1[0x10] = -local_20;
    pfVar3 = (float *)(**(code **)(*(int *)param_1[6] + 4))(local_24);
    param_1[9] = SQRT(pfVar3[2] * pfVar3[2] + pfVar3[1] * pfVar3[1] + *pfVar3 * *pfVar3);
    *(bool *)(param_1 + 10) = *(char *)(*(int *)(param_3 + 0x88) + 0x81) == '\0';
    CShip::set_throttle((CShip *)this_00,0.0);
  }
  ExceptionList = local_c;
  return param_1;
}

