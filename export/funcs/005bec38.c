
void Unwind_005bec38(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x18) + 0x38;
  }
  FUN_0059fa50();
  return;
}

