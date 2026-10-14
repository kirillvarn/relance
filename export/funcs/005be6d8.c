
void Unwind_005be6d8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x7c) = *(int *)(unaff_EBP + -0x1c) + 0x4e0;
  }
  FUN_0043d980();
  return;
}

