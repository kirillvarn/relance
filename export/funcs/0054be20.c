
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054be20(void)

{
  if (DAT_006797c0 != (int *)0x0) {
    (**(code **)(*DAT_006797c0 + 4))();
    FUN_004f7a90();
    DAT_006797c0 = (int *)0x0;
  }
  if (DAT_006797bc != (int *)0x0) {
    (**(code **)(*DAT_006797bc + 4))();
    FUN_004f7a90();
    DAT_006797bc = (int *)0x0;
  }
  CacheString::clear((CacheString *)&DAT_00679790);
  DAT_006797b0 = 0;
  _DAT_006797b4 = 0;
  if (DAT_006797b8 != (int *)0x0) {
    (**(code **)(*DAT_006797b8 + 4))();
    FUN_004f7a90();
    DAT_006797b8 = (int *)0x0;
  }
  CacheString::clear((CacheString *)&DAT_00679794);
  _DAT_006797a8 = 0;
  return;
}

