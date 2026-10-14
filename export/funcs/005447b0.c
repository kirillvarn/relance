
void __fastcall FUN_005447b0(IObjRW *param_1)

{
  bool bVar1;
  int iVar2;
  CEqObj *this;
  
  FUN_00533e10();
  param_1[0x18c] = (IObjRW)((byte)param_1[0x18c] & 0xfc);
  FUN_005437d0(0);
  if (((param_1 == (IObjRW *)0xfffffff4) || (iVar2 = *(int *)(param_1 + 0x10), iVar2 == 0)) ||
     ((*(uint *)(iVar2 + 0x4c) & 0x503) != 0x503)) {
    iVar2 = 0;
  }
  FUN_00544380(*(int *)(*(int *)(iVar2 + 0x88) + 4) + 100);
  if (((param_1 == (IObjRW *)0xfffffff4) ||
      (this = *(CEqObj **)(param_1 + 0x10), this == (CEqObj *)0x0)) ||
     ((*(uint *)(this + 0x4c) & 0x503) != 0x503)) {
    this = (CEqObj *)0x0;
  }
  if (*(int *)(this + 0xb4) == DAT_00673344) {
    iVar2 = pub::StateGraph::get_state_graph("Player",0);
    CEqObj::create_behavior_interface(this,param_1,iVar2);
  }
  bVar1 = CShip::is_launching((CShip *)this);
  if (!bVar1) {
    bVar1 = CShip::is_jumping((CShip *)this);
    if (!bVar1) {
      CObject::enable_collisions_r((CObject *)this,true);
    }
  }
  return;
}

