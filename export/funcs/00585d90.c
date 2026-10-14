
void __thiscall FUN_00585d90(int param_1,uint param_2,byte param_3)

{
  GoodInfo *pGVar1;
  undefined4 uVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  if (param_2 != 0) {
    pGVar1 = GoodList::find_by_id(param_2);
    if (pGVar1 != (GoodInfo *)0x0) {
      uVar2 = FUN_005835f0(*(undefined4 *)(pGVar1 + 0x50),&local_8,&local_4);
      goto LAB_00585dd6;
    }
  }
  uVar2 = 0;
LAB_00585dd6:
  *(undefined4 *)(param_1 + 0x500) = local_8;
  *(undefined4 *)(param_1 + 0x4fc) = uVar2;
  *(undefined4 *)(param_1 + 0x504) = local_4;
  *(undefined4 *)(param_1 + 0x508) = 0xffffffff;
  *(byte *)(param_1 + 0x518) = (param_3 & 1) << 5 ^ *(byte *)(param_1 + 0x518) & 0xcf;
  return;
}

