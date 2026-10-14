
void Unwind_005be726(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x1c) + 0x38;
  }
  FUN_0059fa50();
  return;
}

