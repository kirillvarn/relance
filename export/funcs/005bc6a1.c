
void Unwind_005bc6a1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x128) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x128) = *(int *)(unaff_EBP + -0x14) + 0x330;
  }
  FUN_0043d980();
  return;
}

