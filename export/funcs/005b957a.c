
void Unwind_005b957a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0xb8) = *(int *)(unaff_EBP + -0x14) + 0x34c;
  }
  FUN_0043d980();
  return;
}

