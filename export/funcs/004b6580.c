
void FUN_004b6580(void)

{
  if (DAT_00672288 != (int *)0x0) {
    (**(code **)(*DAT_00672288 + 0x28))();
    if (DAT_00672288 != (int *)0x0) {
      (**(code **)*DAT_00672288)(1);
    }
  }
  return;
}

