
void Unwind_005be4b8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x14) + 0x4e0;
  }
  FUN_0043d980();
  return;
}

