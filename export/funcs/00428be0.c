
void FUN_00428be0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  uVar2 = DAT_006108d0;
  if (DAT_00667cac == 3) {
    local_8 = DAT_006108dc;
    uVar1 = DAT_006108d8;
  }
  else {
    local_8 = DAT_006108e8;
    uVar1 = DAT_006108e4;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_8;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
  }
  return;
}

