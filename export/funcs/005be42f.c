
void Unwind_005be42f(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x14) + 0x364;
  }
  FUN_0043d980();
  return;
}

