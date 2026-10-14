
uint FUN_005b0880(void)

{
  uint in_EAX;
  
  if (DAT_0067ecac != (int *)0x0) {
    in_EAX = (**(code **)(*DAT_0067ecac + 0x1c))();
    if (in_EAX == 2) {
      return 1;
    }
  }
  return in_EAX & 0xffffff00;
}

