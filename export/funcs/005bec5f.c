
void Unwind_005bec5f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x18) + 0x364;
  }
  FUN_00576010();
  return;
}

