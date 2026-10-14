
undefined4 __thiscall FUN_004c6a50(int *param_1,EquipDesc *param_2,undefined4 param_3,int param_4)

{
  EquipDesc *this;
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  this = param_2;
  if (*param_1 == 0) {
    return 0;
  }
  if (param_2 == (EquipDesc *)0x0) {
    uVar2 = 0;
  }
  else {
    bVar1 = EquipDesc::is_internal(param_2);
    if ((bVar1) && (param_4 == 0)) {
      param_2 = (EquipDesc *)0x0;
      param_4 = 0;
      uVar2 = FUN_00583690(this,&param_2,&param_4);
      FUN_00585cd0(uVar2,param_2,param_4,param_3);
      goto LAB_004c6b5c;
    }
    bVar1 = EquipDesc::is_internal(this);
    if ((bVar1) && (param_4 == 2)) {
      param_2 = (EquipDesc *)0x0;
      param_4 = 0;
      uVar2 = FUN_00583690(this,&param_2,&param_4);
      FUN_00585cd0(uVar2,param_2,param_4,param_3);
      FUN_00585bd0(0xffffffff,0,0);
      return 1;
    }
    bVar1 = EquipDesc::is_internal(this);
    uVar2 = param_3;
    if (!bVar1) {
      FUN_00585d20(this,param_3);
      uVar4 = 0;
      uVar3 = 1;
      uVar2 = FUN_00585e80(*(undefined4 *)(this + 8));
      FUN_00585bd0(uVar2,uVar3,uVar4);
      return 1;
    }
  }
  FUN_00585d90(0,uVar2);
LAB_004c6b5c:
  FUN_00585bd0(0xffffffff,0,0);
  return 1;
}

