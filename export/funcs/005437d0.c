
void __thiscall FUN_005437d0(IObjRW *param_1,undefined4 param_2)

{
  bool bVar1;
  IAction *pIVar2;
  IObjRW *pIVar3;
  uint uVar4;
  CShip *pCVar5;
  int iVar6;
  int *piVar7;
  CEqObj *pCVar8;
  CObject *this;
  IObjRW *local_4;
  
  local_4 = param_1;
  switch(param_2) {
  case 0:
    iVar6 = *(int *)(param_1 + 0x188);
    if (iVar6 != 0) {
      FUN_00503a80();
      FUN_005b7e1d(iVar6);
      *(undefined4 *)(param_1 + 0x188) = 0;
    }
    if ((*(int *)(param_1 + 0x158) == 5) && (pIVar3 = (IObjRW *)FUN_0054baf0(), param_1 == pIVar3))
    {
      if ((param_1 == (IObjRW *)0xfffffff4) ||
         ((pCVar8 = *(CEqObj **)(param_1 + 0x10), pCVar8 == (CEqObj *)0x0 ||
          ((*(uint *)(pCVar8 + 0x4c) & 0x503) != 0x503)))) {
        pCVar8 = (CEqObj *)0x0;
      }
      CEqObj::set_control_exclusion(pCVar8,0);
      DAT_0067dcc8 = 0;
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0x188) != 0) {
      FUN_00503ea0();
    }
    pIVar3 = (IObjRW *)FUN_0054baf0();
    if (param_1 == pIVar3) {
      FUN_0054bc10("player");
    }
    pIVar3 = (IObjRW *)FUN_0054baf0();
    if (param_1 == pIVar3) {
      if (((param_1 == (IObjRW *)0xfffffff4) ||
          (pCVar8 = *(CEqObj **)(param_1 + 0x10), pCVar8 == (CEqObj *)0x0)) ||
         ((*(uint *)(pCVar8 + 0x4c) & 0x503) != 0x503)) {
        pCVar8 = (CEqObj *)0x0;
      }
      bVar1 = CEqObj::is_control_excluded(pCVar8,7);
      if (bVar1) {
        CEqObj::set_control_exclusion(pCVar8,0);
      }
      CEqObj::set_control_exclusion(pCVar8,7);
      DAT_0067dcc8 = 1;
    }
    if (((param_1 == (IObjRW *)0xfffffff4) ||
        (pCVar5 = *(CShip **)(param_1 + 0x10), pCVar5 == (CShip *)0x0)) ||
       ((*(uint *)(pCVar5 + 0x4c) & 0x503) != 0x503)) {
      pCVar5 = (CShip *)0x0;
    }
    CShip::set_target(pCVar5,(IObjRW *)0x0);
    break;
  case 2:
    if (*(int *)(param_1 + 0x188) != 0) {
      FUN_00504210();
    }
    pIVar2 = ActionDB::find((ActionDB *)(param_1 + 0x20),"JumpOut");
    if (pIVar2 != (IAction *)0x0) {
      ActionDB::remove((ActionDB *)(param_1 + 0x20),pIVar2);
    }
    pIVar3 = (IObjRW *)FUN_0054baf0();
    if (param_1 != pIVar3) {
      (**(code **)(*(int *)param_1 + 0x15c))(1);
      bVar1 = SinglePlayer();
      if (bVar1) {
        if (((param_1 == (IObjRW *)0xfffffff4) ||
            (this = *(CObject **)(param_1 + 0x10), this == (CObject *)0x0)) ||
           ((*(uint *)(this + 0x4c) & 0x503) != 0x503)) {
          this = (CObject *)0x0;
        }
        this[0x214] = (CObject)0x1;
        CObject::AddRef(this);
        uVar4 = CObject::Release(this);
        if (uVar4 != 1) {
          CSimple::SetOwnerPlayer((CSimple *)this,0);
          CEqObj::set_control_exclusion((CEqObj *)this,0);
        }
      }
    }
    break;
  case 3:
    if (*(IDPMsgHandler **)(param_1 + 0x188) != (IDPMsgHandler *)0x0) {
      IDPMsgHandler::OnDisconnect(*(IDPMsgHandler **)(param_1 + 0x188));
      local_4 = *(IObjRW **)(*(int *)(param_1 + 0x188) + 0xa4);
      FUN_00548ed0(&local_4,0);
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x188) != 0) {
      iVar6 = (**(code **)(*(int *)param_1 + 0x20))();
      if (iVar6 == DAT_00673378) {
        iVar6 = *(int *)(param_1 + 0x188);
        if (((param_1 == (IObjRW *)0xfffffff4) ||
            (pCVar5 = *(CShip **)(param_1 + 0x10), pCVar5 == (CShip *)0x0)) ||
           ((*(uint *)(pCVar5 + 0x4c) & 0x503) != 0x503)) {
          pCVar5 = (CShip *)0x0;
        }
        CShip::jump_in(pCVar5,param_1,(Vector *)(iVar6 + 0x74),(Matrix *)(iVar6 + 0x80),
                       *(float *)(iVar6 + 0x10));
        FUN_00504470();
      }
      else {
        if (((param_1 == (IObjRW *)0xfffffff4) ||
            (piVar7 = *(int **)(param_1 + 0x10), piVar7 == (int *)0x0)) ||
           ((piVar7[0x13] & 0x503U) != 0x503)) {
          piVar7 = (int *)0x0;
        }
        (**(code **)(*piVar7 + 0x7c))
                  (*(int *)(param_1 + 0x188) + 0x74,*(int *)(param_1 + 0x188) + 0x80,0);
      }
    }
    if (((param_1 == (IObjRW *)0xfffffff4) ||
        (pCVar5 = *(CShip **)(param_1 + 0x10), pCVar5 == (CShip *)0x0)) ||
       ((*(uint *)(pCVar5 + 0x4c) & 0x503) != 0x503)) {
      pCVar5 = (CShip *)0x0;
    }
    CShip::set_target(pCVar5,(IObjRW *)0x0);
    param_1[0x15c] = (IObjRW)0x0;
    break;
  case 5:
    FUN_00504640();
    iVar6 = (**(code **)(*(int *)param_1 + 0x20))();
    if (iVar6 == DAT_00673378) {
      FUN_0045b310();
    }
    break;
  default:
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s",
               "E:\\FL\\Scratch\\Source\\Client\\space\\ship.cpp",0x272,
               "invalid jump state set in ship");
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x188) + 0x70) = 0;
  }
  *(undefined4 *)(param_1 + 0x158) = param_2;
  return;
}

