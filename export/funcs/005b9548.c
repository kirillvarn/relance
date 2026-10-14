
void Unwind_005b9548(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0xcc) = *(int *)(unaff_EBP + -0x14) + 0x32c;
  }
  FUN_0043d980();
  return;
}

