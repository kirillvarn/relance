
void Unwind_005be74d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    *(undefined4 *)(unaff_EBP + -0x8c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x8c) = *(int *)(unaff_EBP + -0x1c) + 0x364;
  }
  FUN_0043d980();
  return;
}

