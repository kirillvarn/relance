
void Unwind_005be52c(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0x14) + 0x364;
  }
  FUN_0043d980();
  return;
}

